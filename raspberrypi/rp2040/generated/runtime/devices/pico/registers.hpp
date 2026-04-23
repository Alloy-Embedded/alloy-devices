#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace raspberrypi {
namespace rp2040 {
namespace generated {
namespace runtime {
namespace devices {
namespace pico {
enum class RegisterId : std::uint16_t {
  none,
  register_adc_cs,
  register_adc_result,
  register_adc_fcs,
  register_adc_fifo,
  register_adc_div,
  register_adc_intr,
  register_adc_inte,
  register_adc_intf,
  register_adc_ints,
  register_dma_ch0_read_addr,
  register_dma_ch0_write_addr,
  register_dma_ch0_trans_count,
  register_dma_ch0_ctrl_trig,
  register_dma_ch0_al1_ctrl,
  register_dma_ch0_al1_read_addr,
  register_dma_ch0_al1_write_addr,
  register_dma_ch0_al1_trans_count_trig,
  register_dma_ch0_al2_ctrl,
  register_dma_ch0_al2_trans_count,
  register_dma_ch0_al2_read_addr,
  register_dma_ch0_al2_write_addr_trig,
  register_dma_ch0_al3_ctrl,
  register_dma_ch0_al3_write_addr,
  register_dma_ch0_al3_trans_count,
  register_dma_ch0_al3_read_addr_trig,
  register_dma_ch1_read_addr,
  register_dma_ch1_write_addr,
  register_dma_ch1_trans_count,
  register_dma_ch1_ctrl_trig,
  register_dma_ch1_al1_ctrl,
  register_dma_ch1_al1_read_addr,
  register_dma_ch1_al1_write_addr,
  register_dma_ch1_al1_trans_count_trig,
  register_dma_ch1_al2_ctrl,
  register_dma_ch1_al2_trans_count,
  register_dma_ch1_al2_read_addr,
  register_dma_ch1_al2_write_addr_trig,
  register_dma_ch1_al3_ctrl,
  register_dma_ch1_al3_write_addr,
  register_dma_ch1_al3_trans_count,
  register_dma_ch1_al3_read_addr_trig,
  register_dma_ch2_read_addr,
  register_dma_ch2_write_addr,
  register_dma_ch2_trans_count,
  register_dma_ch2_ctrl_trig,
  register_dma_ch2_al1_ctrl,
  register_dma_ch2_al1_read_addr,
  register_dma_ch2_al1_write_addr,
  register_dma_ch2_al1_trans_count_trig,
  register_dma_ch2_al2_ctrl,
  register_dma_ch2_al2_trans_count,
  register_dma_ch2_al2_read_addr,
  register_dma_ch2_al2_write_addr_trig,
  register_dma_ch2_al3_ctrl,
  register_dma_ch2_al3_write_addr,
  register_dma_ch2_al3_trans_count,
  register_dma_ch2_al3_read_addr_trig,
  register_dma_ch3_read_addr,
  register_dma_ch3_write_addr,
  register_dma_ch3_trans_count,
  register_dma_ch3_ctrl_trig,
  register_dma_ch3_al1_ctrl,
  register_dma_ch3_al1_read_addr,
  register_dma_ch3_al1_write_addr,
  register_dma_ch3_al1_trans_count_trig,
  register_dma_ch3_al2_ctrl,
  register_dma_ch3_al2_trans_count,
  register_dma_ch3_al2_read_addr,
  register_dma_ch3_al2_write_addr_trig,
  register_dma_ch3_al3_ctrl,
  register_dma_ch3_al3_write_addr,
  register_dma_ch3_al3_trans_count,
  register_dma_ch3_al3_read_addr_trig,
  register_dma_ch4_read_addr,
  register_dma_ch4_write_addr,
  register_dma_ch4_trans_count,
  register_dma_ch4_ctrl_trig,
  register_dma_ch4_al1_ctrl,
  register_dma_ch4_al1_read_addr,
  register_dma_ch4_al1_write_addr,
  register_dma_ch4_al1_trans_count_trig,
  register_dma_ch4_al2_ctrl,
  register_dma_ch4_al2_trans_count,
  register_dma_ch4_al2_read_addr,
  register_dma_ch4_al2_write_addr_trig,
  register_dma_ch4_al3_ctrl,
  register_dma_ch4_al3_write_addr,
  register_dma_ch4_al3_trans_count,
  register_dma_ch4_al3_read_addr_trig,
  register_dma_ch5_read_addr,
  register_dma_ch5_write_addr,
  register_dma_ch5_trans_count,
  register_dma_ch5_ctrl_trig,
  register_dma_ch5_al1_ctrl,
  register_dma_ch5_al1_read_addr,
  register_dma_ch5_al1_write_addr,
  register_dma_ch5_al1_trans_count_trig,
  register_dma_ch5_al2_ctrl,
  register_dma_ch5_al2_trans_count,
  register_dma_ch5_al2_read_addr,
  register_dma_ch5_al2_write_addr_trig,
  register_dma_ch5_al3_ctrl,
  register_dma_ch5_al3_write_addr,
  register_dma_ch5_al3_trans_count,
  register_dma_ch5_al3_read_addr_trig,
  register_dma_ch6_read_addr,
  register_dma_ch6_write_addr,
  register_dma_ch6_trans_count,
  register_dma_ch6_ctrl_trig,
  register_dma_ch6_al1_ctrl,
  register_dma_ch6_al1_read_addr,
  register_dma_ch6_al1_write_addr,
  register_dma_ch6_al1_trans_count_trig,
  register_dma_ch6_al2_ctrl,
  register_dma_ch6_al2_trans_count,
  register_dma_ch6_al2_read_addr,
  register_dma_ch6_al2_write_addr_trig,
  register_dma_ch6_al3_ctrl,
  register_dma_ch6_al3_write_addr,
  register_dma_ch6_al3_trans_count,
  register_dma_ch6_al3_read_addr_trig,
  register_dma_ch7_read_addr,
  register_dma_ch7_write_addr,
  register_dma_ch7_trans_count,
  register_dma_ch7_ctrl_trig,
  register_dma_ch7_al1_ctrl,
  register_dma_ch7_al1_read_addr,
  register_dma_ch7_al1_write_addr,
  register_dma_ch7_al1_trans_count_trig,
  register_dma_ch7_al2_ctrl,
  register_dma_ch7_al2_trans_count,
  register_dma_ch7_al2_read_addr,
  register_dma_ch7_al2_write_addr_trig,
  register_dma_ch7_al3_ctrl,
  register_dma_ch7_al3_write_addr,
  register_dma_ch7_al3_trans_count,
  register_dma_ch7_al3_read_addr_trig,
  register_dma_ch8_read_addr,
  register_dma_ch8_write_addr,
  register_dma_ch8_trans_count,
  register_dma_ch8_ctrl_trig,
  register_dma_ch8_al1_ctrl,
  register_dma_ch8_al1_read_addr,
  register_dma_ch8_al1_write_addr,
  register_dma_ch8_al1_trans_count_trig,
  register_dma_ch8_al2_ctrl,
  register_dma_ch8_al2_trans_count,
  register_dma_ch8_al2_read_addr,
  register_dma_ch8_al2_write_addr_trig,
  register_dma_ch8_al3_ctrl,
  register_dma_ch8_al3_write_addr,
  register_dma_ch8_al3_trans_count,
  register_dma_ch8_al3_read_addr_trig,
  register_dma_ch9_read_addr,
  register_dma_ch9_write_addr,
  register_dma_ch9_trans_count,
  register_dma_ch9_ctrl_trig,
  register_dma_ch9_al1_ctrl,
  register_dma_ch9_al1_read_addr,
  register_dma_ch9_al1_write_addr,
  register_dma_ch9_al1_trans_count_trig,
  register_dma_ch9_al2_ctrl,
  register_dma_ch9_al2_trans_count,
  register_dma_ch9_al2_read_addr,
  register_dma_ch9_al2_write_addr_trig,
  register_dma_ch9_al3_ctrl,
  register_dma_ch9_al3_write_addr,
  register_dma_ch9_al3_trans_count,
  register_dma_ch9_al3_read_addr_trig,
  register_dma_ch10_read_addr,
  register_dma_ch10_write_addr,
  register_dma_ch10_trans_count,
  register_dma_ch10_ctrl_trig,
  register_dma_ch10_al1_ctrl,
  register_dma_ch10_al1_read_addr,
  register_dma_ch10_al1_write_addr,
  register_dma_ch10_al1_trans_count_trig,
  register_dma_ch10_al2_ctrl,
  register_dma_ch10_al2_trans_count,
  register_dma_ch10_al2_read_addr,
  register_dma_ch10_al2_write_addr_trig,
  register_dma_ch10_al3_ctrl,
  register_dma_ch10_al3_write_addr,
  register_dma_ch10_al3_trans_count,
  register_dma_ch10_al3_read_addr_trig,
  register_dma_ch11_read_addr,
  register_dma_ch11_write_addr,
  register_dma_ch11_trans_count,
  register_dma_ch11_ctrl_trig,
  register_dma_ch11_al1_ctrl,
  register_dma_ch11_al1_read_addr,
  register_dma_ch11_al1_write_addr,
  register_dma_ch11_al1_trans_count_trig,
  register_dma_ch11_al2_ctrl,
  register_dma_ch11_al2_trans_count,
  register_dma_ch11_al2_read_addr,
  register_dma_ch11_al2_write_addr_trig,
  register_dma_ch11_al3_ctrl,
  register_dma_ch11_al3_write_addr,
  register_dma_ch11_al3_trans_count,
  register_dma_ch11_al3_read_addr_trig,
  register_dma_intr,
  register_dma_inte0,
  register_dma_intf0,
  register_dma_ints0,
  register_dma_intr1,
  register_dma_inte1,
  register_dma_intf1,
  register_dma_ints1,
  register_dma_timer0,
  register_dma_timer1,
  register_dma_timer2,
  register_dma_timer3,
  register_dma_multi_chan_trigger,
  register_dma_sniff_ctrl,
  register_dma_sniff_data,
  register_dma_fifo_levels,
  register_dma_chan_abort,
  register_dma_n_channels,
  register_dma_ch0_dbg_ctdreq,
  register_dma_ch0_dbg_tcr,
  register_dma_ch1_dbg_ctdreq,
  register_dma_ch1_dbg_tcr,
  register_dma_ch2_dbg_ctdreq,
  register_dma_ch2_dbg_tcr,
  register_dma_ch3_dbg_ctdreq,
  register_dma_ch3_dbg_tcr,
  register_dma_ch4_dbg_ctdreq,
  register_dma_ch4_dbg_tcr,
  register_dma_ch5_dbg_ctdreq,
  register_dma_ch5_dbg_tcr,
  register_dma_ch6_dbg_ctdreq,
  register_dma_ch6_dbg_tcr,
  register_dma_ch7_dbg_ctdreq,
  register_dma_ch7_dbg_tcr,
  register_dma_ch8_dbg_ctdreq,
  register_dma_ch8_dbg_tcr,
  register_dma_ch9_dbg_ctdreq,
  register_dma_ch9_dbg_tcr,
  register_dma_ch10_dbg_ctdreq,
  register_dma_ch10_dbg_tcr,
  register_dma_ch11_dbg_ctdreq,
  register_dma_ch11_dbg_tcr,
  register_pwm_ch0_csr,
  register_pwm_ch0_div,
  register_pwm_ch0_ctr,
  register_pwm_ch0_cc,
  register_pwm_ch0_top,
  register_pwm_ch1_csr,
  register_pwm_ch1_div,
  register_pwm_ch1_ctr,
  register_pwm_ch1_cc,
  register_pwm_ch1_top,
  register_pwm_ch2_csr,
  register_pwm_ch2_div,
  register_pwm_ch2_ctr,
  register_pwm_ch2_cc,
  register_pwm_ch2_top,
  register_pwm_ch3_csr,
  register_pwm_ch3_div,
  register_pwm_ch3_ctr,
  register_pwm_ch3_cc,
  register_pwm_ch3_top,
  register_pwm_ch4_csr,
  register_pwm_ch4_div,
  register_pwm_ch4_ctr,
  register_pwm_ch4_cc,
  register_pwm_ch4_top,
  register_pwm_ch5_csr,
  register_pwm_ch5_div,
  register_pwm_ch5_ctr,
  register_pwm_ch5_cc,
  register_pwm_ch5_top,
  register_pwm_ch6_csr,
  register_pwm_ch6_div,
  register_pwm_ch6_ctr,
  register_pwm_ch6_cc,
  register_pwm_ch6_top,
  register_pwm_ch7_csr,
  register_pwm_ch7_div,
  register_pwm_ch7_ctr,
  register_pwm_ch7_cc,
  register_pwm_ch7_top,
  register_pwm_en,
  register_pwm_intr,
  register_pwm_inte,
  register_pwm_intf,
  register_pwm_ints,
  register_resets_reset,
  register_rtc_clkdiv_m1,
  register_rtc_setup_0,
  register_rtc_setup_1,
  register_rtc_ctrl,
  register_rtc_irq_setup_0,
  register_rtc_irq_setup_1,
  register_rtc_rtc_1,
  register_rtc_rtc_0,
  register_rtc_intr,
  register_rtc_inte,
  register_rtc_intf,
  register_rtc_ints,
  register_spi0_sspcr0,
  register_spi0_sspcr1,
  register_spi0_sspdr,
  register_spi0_sspsr,
  register_spi0_sspcpsr,
  register_spi0_sspimsc,
  register_spi0_sspris,
  register_spi0_sspmis,
  register_spi0_sspicr,
  register_spi0_sspdmacr,
  register_spi0_sspperiphid0,
  register_spi0_sspperiphid1,
  register_spi0_sspperiphid2,
  register_spi0_sspperiphid3,
  register_spi0_ssppcellid0,
  register_spi0_ssppcellid1,
  register_spi0_ssppcellid2,
  register_spi0_ssppcellid3,
  register_spi1_sspcr0,
  register_spi1_sspcr1,
  register_spi1_sspdr,
  register_spi1_sspsr,
  register_spi1_sspcpsr,
  register_spi1_sspimsc,
  register_spi1_sspris,
  register_spi1_sspmis,
  register_spi1_sspicr,
  register_spi1_sspdmacr,
  register_spi1_sspperiphid0,
  register_spi1_sspperiphid1,
  register_spi1_sspperiphid2,
  register_spi1_sspperiphid3,
  register_spi1_ssppcellid0,
  register_spi1_ssppcellid1,
  register_spi1_ssppcellid2,
  register_spi1_ssppcellid3,
  register_timer_timehw,
  register_timer_timelw,
  register_timer_timehr,
  register_timer_timelr,
  register_timer_alarm0,
  register_timer_alarm1,
  register_timer_alarm2,
  register_timer_alarm3,
  register_timer_armed,
  register_timer_timerawh,
  register_timer_timerawl,
  register_timer_dbgpause,
  register_timer_pause,
  register_timer_intr,
  register_timer_inte,
  register_timer_intf,
  register_timer_ints,
  register_uart0_uartdr,
  register_uart0_uartrsr,
  register_uart0_uartfr,
  register_uart0_uartilpr,
  register_uart0_uartibrd,
  register_uart0_uartfbrd,
  register_uart0_uartlcr_h,
  register_uart0_uartcr,
  register_uart0_uartifls,
  register_uart0_uartimsc,
  register_uart0_uartris,
  register_uart0_uartmis,
  register_uart0_uarticr,
  register_uart0_uartdmacr,
  register_uart0_uartperiphid0,
  register_uart0_uartperiphid1,
  register_uart0_uartperiphid2,
  register_uart0_uartperiphid3,
  register_uart0_uartpcellid0,
  register_uart0_uartpcellid1,
  register_uart0_uartpcellid2,
  register_uart0_uartpcellid3,
  register_uart1_uartdr,
  register_uart1_uartrsr,
  register_uart1_uartfr,
  register_uart1_uartilpr,
  register_uart1_uartibrd,
  register_uart1_uartfbrd,
  register_uart1_uartlcr_h,
  register_uart1_uartcr,
  register_uart1_uartifls,
  register_uart1_uartimsc,
  register_uart1_uartris,
  register_uart1_uartmis,
  register_uart1_uarticr,
  register_uart1_uartdmacr,
  register_uart1_uartperiphid0,
  register_uart1_uartperiphid1,
  register_uart1_uartperiphid2,
  register_uart1_uartperiphid3,
  register_uart1_uartpcellid0,
  register_uart1_uartpcellid1,
  register_uart1_uartpcellid2,
  register_uart1_uartpcellid3,
  register_usb_addr_endp,
  register_usb_addr_endp1,
  register_usb_addr_endp2,
  register_usb_addr_endp3,
  register_usb_addr_endp4,
  register_usb_addr_endp5,
  register_usb_addr_endp6,
  register_usb_addr_endp7,
  register_usb_addr_endp8,
  register_usb_addr_endp9,
  register_usb_addr_endp10,
  register_usb_addr_endp11,
  register_usb_addr_endp12,
  register_usb_addr_endp13,
  register_usb_addr_endp14,
  register_usb_addr_endp15,
  register_usb_main_ctrl,
  register_usb_sof_wr,
  register_usb_sof_rd,
  register_usb_sie_ctrl,
  register_usb_sie_status,
  register_usb_int_ep_ctrl,
  register_usb_buff_status,
  register_usb_buff_cpu_should_handle,
  register_usb_ep_abort,
  register_usb_ep_abort_done,
  register_usb_ep_stall_arm,
  register_usb_nak_poll,
  register_usb_ep_status_stall_nak,
  register_usb_usb_muxing,
  register_usb_usb_pwr,
  register_usb_usbphy_direct,
  register_usb_usbphy_direct_override,
  register_usb_usbphy_trim,
  register_usb_intr,
  register_usb_inte,
  register_usb_intf,
  register_usb_ints,
  register_watchdog_ctrl,
  register_watchdog_load,
  register_watchdog_reason,
  register_watchdog_scratch0,
  register_watchdog_scratch1,
  register_watchdog_scratch2,
  register_watchdog_scratch3,
  register_watchdog_scratch4,
  register_watchdog_scratch5,
  register_watchdog_scratch6,
  register_watchdog_scratch7,
  register_watchdog_tick,
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
struct RegisterTraits<RegisterId::register_adc_cs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_result> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_fcs> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_fifo> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_inte> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_intf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_adc_ints> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4004C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 172u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 180u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 184u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 188u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 192u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 196u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 200u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 204u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 208u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 212u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 216u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 220u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 224u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 228u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 232u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 236u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 240u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 244u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 248u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 252u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 256u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 260u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 264u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 268u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 272u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 276u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 280u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 284u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 288u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 292u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 296u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 300u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 304u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 308u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 312u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 316u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 320u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 324u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 328u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 332u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 336u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 340u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 344u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 348u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 352u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 356u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 360u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 364u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 368u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 372u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 376u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 380u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 384u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 388u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 392u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 396u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 400u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 404u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 408u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 412u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 416u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 420u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 424u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 428u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 432u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 436u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 440u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 444u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 448u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 452u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 456u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 460u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 464u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 468u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 472u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 476u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 480u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 484u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 488u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 492u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 496u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 500u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 504u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 508u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 512u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 516u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 520u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 524u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 528u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 532u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 536u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 540u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 544u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 548u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 552u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 556u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 560u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 564u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 568u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 572u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 576u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 580u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 584u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 588u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 592u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 596u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 600u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 604u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 608u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 612u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 616u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 620u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 624u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 628u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 632u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 636u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 640u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 644u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 648u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 652u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 656u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 660u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 664u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 668u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 672u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 676u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 680u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 684u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 688u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 692u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 696u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 700u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 704u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 708u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 712u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_ctrl_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 716u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 720u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 724u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 728u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 732u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 736u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 740u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 744u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 748u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 752u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 756u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 760u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 764u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1024u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_inte0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1028u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_intf0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1032u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ints0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1036u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_intr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1040u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_inte1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1044u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_intf1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1048u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ints1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1052u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_timer0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1056u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_timer1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1060u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_timer2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1064u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_timer3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1068u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_multi_chan_trigger> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1072u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_sniff_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1076u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_sniff_data> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1080u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_fifo_levels> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1088u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_chan_abort> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1092u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_n_channels> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 1096u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2048u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch0_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2052u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch1_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2176u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch2_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2180u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2240u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch3_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2244u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2304u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch4_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2308u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2368u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch5_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2372u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2432u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch6_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2436u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2496u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch7_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2500u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2560u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch8_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2564u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2624u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch9_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2628u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2688u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch10_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2692u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2752u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_dma_ch11_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50000000u;
  static constexpr std::uint32_t kOffsetBytes = 2756u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch0_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch0_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch0_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch0_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch0_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch1_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch1_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch1_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch1_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch1_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch2_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch2_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch2_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch2_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch2_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch3_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch3_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch3_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch3_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch3_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch4_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch4_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch4_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch4_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch4_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch5_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch5_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch5_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch5_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch5_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch6_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch6_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch6_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch6_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch6_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 136u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch7_csr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch7_div> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch7_ctr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch7_cc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ch7_top> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 156u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_en> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 160u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 164u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_inte> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 168u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_intf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 172u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_pwm_ints> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40050000u;
  static constexpr std::uint32_t kOffsetBytes = 176u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_resets_reset> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4000C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_clkdiv_m1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_setup_0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_setup_1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_irq_setup_0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_irq_setup_1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_rtc_0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_inte> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_intf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_rtc_ints> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4005C000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspcr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspcr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspcpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspimsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspris> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspmis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspicr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspdmacr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspperiphid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4064u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspperiphid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4068u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspperiphid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4072u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_sspperiphid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4076u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ssppcellid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4080u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ssppcellid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4084u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ssppcellid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4088u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi0_ssppcellid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x4003C000u;
  static constexpr std::uint32_t kOffsetBytes = 4092u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspcr0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspcr1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspcpsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspimsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspris> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspmis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspicr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspdmacr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspperiphid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4064u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspperiphid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4068u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspperiphid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4072u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_sspperiphid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4076u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_ssppcellid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4080u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_ssppcellid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4084u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_ssppcellid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4088u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_spi1_ssppcellid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40040000u;
  static constexpr std::uint32_t kOffsetBytes = 4092u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timehw> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timelw> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timehr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timelr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_alarm0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_alarm1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_alarm2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_alarm3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_armed> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timerawh> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_timerawl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_dbgpause> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_pause> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_inte> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_intf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_timer_ints> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40054000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartrsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartilpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartibrd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartfbrd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartlcr_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartifls> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartimsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartris> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartmis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uarticr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartdmacr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartperiphid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4064u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartperiphid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4068u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartperiphid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4072u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartperiphid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4076u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartpcellid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4080u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartpcellid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4084u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartpcellid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4088u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart0_uartpcellid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40034000u;
  static constexpr std::uint32_t kOffsetBytes = 4092u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartdr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartrsr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartfr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartilpr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartibrd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartfbrd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartlcr_h> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartcr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartifls> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartimsc> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartris> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartmis> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uarticr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartdmacr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartperiphid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4064u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartperiphid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4068u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartperiphid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4072u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartperiphid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4076u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartpcellid0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4080u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartpcellid1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4084u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartpcellid2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4088u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_uart1_uartpcellid3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40038000u;
  static constexpr std::uint32_t kOffsetBytes = 4092u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp8> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp9> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp10> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp11> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp12> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 48u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp13> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 52u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp14> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 56u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_addr_endp15> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 60u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_main_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 64u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_sof_wr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 68u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_sof_rd> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 72u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_sie_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 76u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_sie_status> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 80u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_int_ep_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 84u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_buff_status> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 88u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_buff_cpu_should_handle> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 92u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_ep_abort> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 96u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_ep_abort_done> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 100u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_ep_stall_arm> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 104u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_nak_poll> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 108u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_ep_status_stall_nak> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 112u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_muxing> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 116u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usb_pwr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 120u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usbphy_direct> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 124u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usbphy_direct_override> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 128u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_usbphy_trim> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 132u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_intr> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 140u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_inte> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 144u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_intf> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 148u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_usb_ints> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x50110000u;
  static constexpr std::uint32_t kOffsetBytes = 152u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 0u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_load> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_reason> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch0> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch1> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch2> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 20u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch3> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch4> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 28u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch5> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch6> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 36u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_scratch7> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 40u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

template<>
struct RegisterTraits<RegisterId::register_watchdog_tick> {
  static constexpr bool kPresent = true;
  static constexpr std::uintptr_t kBaseAddress = 0x40058000u;
  static constexpr std::uint32_t kOffsetBytes = 44u;
  static constexpr AccessKindId kAccessId = AccessKindId::none;
  static constexpr int kSizeBits = -1;
};

inline constexpr std::array<RegisterId, 448> kRegisters = {{
  RegisterId::register_adc_cs,
  RegisterId::register_adc_result,
  RegisterId::register_adc_fcs,
  RegisterId::register_adc_fifo,
  RegisterId::register_adc_div,
  RegisterId::register_adc_intr,
  RegisterId::register_adc_inte,
  RegisterId::register_adc_intf,
  RegisterId::register_adc_ints,
  RegisterId::register_dma_ch0_read_addr,
  RegisterId::register_dma_ch0_write_addr,
  RegisterId::register_dma_ch0_trans_count,
  RegisterId::register_dma_ch0_ctrl_trig,
  RegisterId::register_dma_ch0_al1_ctrl,
  RegisterId::register_dma_ch0_al1_read_addr,
  RegisterId::register_dma_ch0_al1_write_addr,
  RegisterId::register_dma_ch0_al1_trans_count_trig,
  RegisterId::register_dma_ch0_al2_ctrl,
  RegisterId::register_dma_ch0_al2_trans_count,
  RegisterId::register_dma_ch0_al2_read_addr,
  RegisterId::register_dma_ch0_al2_write_addr_trig,
  RegisterId::register_dma_ch0_al3_ctrl,
  RegisterId::register_dma_ch0_al3_write_addr,
  RegisterId::register_dma_ch0_al3_trans_count,
  RegisterId::register_dma_ch0_al3_read_addr_trig,
  RegisterId::register_dma_ch1_read_addr,
  RegisterId::register_dma_ch1_write_addr,
  RegisterId::register_dma_ch1_trans_count,
  RegisterId::register_dma_ch1_ctrl_trig,
  RegisterId::register_dma_ch1_al1_ctrl,
  RegisterId::register_dma_ch1_al1_read_addr,
  RegisterId::register_dma_ch1_al1_write_addr,
  RegisterId::register_dma_ch1_al1_trans_count_trig,
  RegisterId::register_dma_ch1_al2_ctrl,
  RegisterId::register_dma_ch1_al2_trans_count,
  RegisterId::register_dma_ch1_al2_read_addr,
  RegisterId::register_dma_ch1_al2_write_addr_trig,
  RegisterId::register_dma_ch1_al3_ctrl,
  RegisterId::register_dma_ch1_al3_write_addr,
  RegisterId::register_dma_ch1_al3_trans_count,
  RegisterId::register_dma_ch1_al3_read_addr_trig,
  RegisterId::register_dma_ch2_read_addr,
  RegisterId::register_dma_ch2_write_addr,
  RegisterId::register_dma_ch2_trans_count,
  RegisterId::register_dma_ch2_ctrl_trig,
  RegisterId::register_dma_ch2_al1_ctrl,
  RegisterId::register_dma_ch2_al1_read_addr,
  RegisterId::register_dma_ch2_al1_write_addr,
  RegisterId::register_dma_ch2_al1_trans_count_trig,
  RegisterId::register_dma_ch2_al2_ctrl,
  RegisterId::register_dma_ch2_al2_trans_count,
  RegisterId::register_dma_ch2_al2_read_addr,
  RegisterId::register_dma_ch2_al2_write_addr_trig,
  RegisterId::register_dma_ch2_al3_ctrl,
  RegisterId::register_dma_ch2_al3_write_addr,
  RegisterId::register_dma_ch2_al3_trans_count,
  RegisterId::register_dma_ch2_al3_read_addr_trig,
  RegisterId::register_dma_ch3_read_addr,
  RegisterId::register_dma_ch3_write_addr,
  RegisterId::register_dma_ch3_trans_count,
  RegisterId::register_dma_ch3_ctrl_trig,
  RegisterId::register_dma_ch3_al1_ctrl,
  RegisterId::register_dma_ch3_al1_read_addr,
  RegisterId::register_dma_ch3_al1_write_addr,
  RegisterId::register_dma_ch3_al1_trans_count_trig,
  RegisterId::register_dma_ch3_al2_ctrl,
  RegisterId::register_dma_ch3_al2_trans_count,
  RegisterId::register_dma_ch3_al2_read_addr,
  RegisterId::register_dma_ch3_al2_write_addr_trig,
  RegisterId::register_dma_ch3_al3_ctrl,
  RegisterId::register_dma_ch3_al3_write_addr,
  RegisterId::register_dma_ch3_al3_trans_count,
  RegisterId::register_dma_ch3_al3_read_addr_trig,
  RegisterId::register_dma_ch4_read_addr,
  RegisterId::register_dma_ch4_write_addr,
  RegisterId::register_dma_ch4_trans_count,
  RegisterId::register_dma_ch4_ctrl_trig,
  RegisterId::register_dma_ch4_al1_ctrl,
  RegisterId::register_dma_ch4_al1_read_addr,
  RegisterId::register_dma_ch4_al1_write_addr,
  RegisterId::register_dma_ch4_al1_trans_count_trig,
  RegisterId::register_dma_ch4_al2_ctrl,
  RegisterId::register_dma_ch4_al2_trans_count,
  RegisterId::register_dma_ch4_al2_read_addr,
  RegisterId::register_dma_ch4_al2_write_addr_trig,
  RegisterId::register_dma_ch4_al3_ctrl,
  RegisterId::register_dma_ch4_al3_write_addr,
  RegisterId::register_dma_ch4_al3_trans_count,
  RegisterId::register_dma_ch4_al3_read_addr_trig,
  RegisterId::register_dma_ch5_read_addr,
  RegisterId::register_dma_ch5_write_addr,
  RegisterId::register_dma_ch5_trans_count,
  RegisterId::register_dma_ch5_ctrl_trig,
  RegisterId::register_dma_ch5_al1_ctrl,
  RegisterId::register_dma_ch5_al1_read_addr,
  RegisterId::register_dma_ch5_al1_write_addr,
  RegisterId::register_dma_ch5_al1_trans_count_trig,
  RegisterId::register_dma_ch5_al2_ctrl,
  RegisterId::register_dma_ch5_al2_trans_count,
  RegisterId::register_dma_ch5_al2_read_addr,
  RegisterId::register_dma_ch5_al2_write_addr_trig,
  RegisterId::register_dma_ch5_al3_ctrl,
  RegisterId::register_dma_ch5_al3_write_addr,
  RegisterId::register_dma_ch5_al3_trans_count,
  RegisterId::register_dma_ch5_al3_read_addr_trig,
  RegisterId::register_dma_ch6_read_addr,
  RegisterId::register_dma_ch6_write_addr,
  RegisterId::register_dma_ch6_trans_count,
  RegisterId::register_dma_ch6_ctrl_trig,
  RegisterId::register_dma_ch6_al1_ctrl,
  RegisterId::register_dma_ch6_al1_read_addr,
  RegisterId::register_dma_ch6_al1_write_addr,
  RegisterId::register_dma_ch6_al1_trans_count_trig,
  RegisterId::register_dma_ch6_al2_ctrl,
  RegisterId::register_dma_ch6_al2_trans_count,
  RegisterId::register_dma_ch6_al2_read_addr,
  RegisterId::register_dma_ch6_al2_write_addr_trig,
  RegisterId::register_dma_ch6_al3_ctrl,
  RegisterId::register_dma_ch6_al3_write_addr,
  RegisterId::register_dma_ch6_al3_trans_count,
  RegisterId::register_dma_ch6_al3_read_addr_trig,
  RegisterId::register_dma_ch7_read_addr,
  RegisterId::register_dma_ch7_write_addr,
  RegisterId::register_dma_ch7_trans_count,
  RegisterId::register_dma_ch7_ctrl_trig,
  RegisterId::register_dma_ch7_al1_ctrl,
  RegisterId::register_dma_ch7_al1_read_addr,
  RegisterId::register_dma_ch7_al1_write_addr,
  RegisterId::register_dma_ch7_al1_trans_count_trig,
  RegisterId::register_dma_ch7_al2_ctrl,
  RegisterId::register_dma_ch7_al2_trans_count,
  RegisterId::register_dma_ch7_al2_read_addr,
  RegisterId::register_dma_ch7_al2_write_addr_trig,
  RegisterId::register_dma_ch7_al3_ctrl,
  RegisterId::register_dma_ch7_al3_write_addr,
  RegisterId::register_dma_ch7_al3_trans_count,
  RegisterId::register_dma_ch7_al3_read_addr_trig,
  RegisterId::register_dma_ch8_read_addr,
  RegisterId::register_dma_ch8_write_addr,
  RegisterId::register_dma_ch8_trans_count,
  RegisterId::register_dma_ch8_ctrl_trig,
  RegisterId::register_dma_ch8_al1_ctrl,
  RegisterId::register_dma_ch8_al1_read_addr,
  RegisterId::register_dma_ch8_al1_write_addr,
  RegisterId::register_dma_ch8_al1_trans_count_trig,
  RegisterId::register_dma_ch8_al2_ctrl,
  RegisterId::register_dma_ch8_al2_trans_count,
  RegisterId::register_dma_ch8_al2_read_addr,
  RegisterId::register_dma_ch8_al2_write_addr_trig,
  RegisterId::register_dma_ch8_al3_ctrl,
  RegisterId::register_dma_ch8_al3_write_addr,
  RegisterId::register_dma_ch8_al3_trans_count,
  RegisterId::register_dma_ch8_al3_read_addr_trig,
  RegisterId::register_dma_ch9_read_addr,
  RegisterId::register_dma_ch9_write_addr,
  RegisterId::register_dma_ch9_trans_count,
  RegisterId::register_dma_ch9_ctrl_trig,
  RegisterId::register_dma_ch9_al1_ctrl,
  RegisterId::register_dma_ch9_al1_read_addr,
  RegisterId::register_dma_ch9_al1_write_addr,
  RegisterId::register_dma_ch9_al1_trans_count_trig,
  RegisterId::register_dma_ch9_al2_ctrl,
  RegisterId::register_dma_ch9_al2_trans_count,
  RegisterId::register_dma_ch9_al2_read_addr,
  RegisterId::register_dma_ch9_al2_write_addr_trig,
  RegisterId::register_dma_ch9_al3_ctrl,
  RegisterId::register_dma_ch9_al3_write_addr,
  RegisterId::register_dma_ch9_al3_trans_count,
  RegisterId::register_dma_ch9_al3_read_addr_trig,
  RegisterId::register_dma_ch10_read_addr,
  RegisterId::register_dma_ch10_write_addr,
  RegisterId::register_dma_ch10_trans_count,
  RegisterId::register_dma_ch10_ctrl_trig,
  RegisterId::register_dma_ch10_al1_ctrl,
  RegisterId::register_dma_ch10_al1_read_addr,
  RegisterId::register_dma_ch10_al1_write_addr,
  RegisterId::register_dma_ch10_al1_trans_count_trig,
  RegisterId::register_dma_ch10_al2_ctrl,
  RegisterId::register_dma_ch10_al2_trans_count,
  RegisterId::register_dma_ch10_al2_read_addr,
  RegisterId::register_dma_ch10_al2_write_addr_trig,
  RegisterId::register_dma_ch10_al3_ctrl,
  RegisterId::register_dma_ch10_al3_write_addr,
  RegisterId::register_dma_ch10_al3_trans_count,
  RegisterId::register_dma_ch10_al3_read_addr_trig,
  RegisterId::register_dma_ch11_read_addr,
  RegisterId::register_dma_ch11_write_addr,
  RegisterId::register_dma_ch11_trans_count,
  RegisterId::register_dma_ch11_ctrl_trig,
  RegisterId::register_dma_ch11_al1_ctrl,
  RegisterId::register_dma_ch11_al1_read_addr,
  RegisterId::register_dma_ch11_al1_write_addr,
  RegisterId::register_dma_ch11_al1_trans_count_trig,
  RegisterId::register_dma_ch11_al2_ctrl,
  RegisterId::register_dma_ch11_al2_trans_count,
  RegisterId::register_dma_ch11_al2_read_addr,
  RegisterId::register_dma_ch11_al2_write_addr_trig,
  RegisterId::register_dma_ch11_al3_ctrl,
  RegisterId::register_dma_ch11_al3_write_addr,
  RegisterId::register_dma_ch11_al3_trans_count,
  RegisterId::register_dma_ch11_al3_read_addr_trig,
  RegisterId::register_dma_intr,
  RegisterId::register_dma_inte0,
  RegisterId::register_dma_intf0,
  RegisterId::register_dma_ints0,
  RegisterId::register_dma_intr1,
  RegisterId::register_dma_inte1,
  RegisterId::register_dma_intf1,
  RegisterId::register_dma_ints1,
  RegisterId::register_dma_timer0,
  RegisterId::register_dma_timer1,
  RegisterId::register_dma_timer2,
  RegisterId::register_dma_timer3,
  RegisterId::register_dma_multi_chan_trigger,
  RegisterId::register_dma_sniff_ctrl,
  RegisterId::register_dma_sniff_data,
  RegisterId::register_dma_fifo_levels,
  RegisterId::register_dma_chan_abort,
  RegisterId::register_dma_n_channels,
  RegisterId::register_dma_ch0_dbg_ctdreq,
  RegisterId::register_dma_ch0_dbg_tcr,
  RegisterId::register_dma_ch1_dbg_ctdreq,
  RegisterId::register_dma_ch1_dbg_tcr,
  RegisterId::register_dma_ch2_dbg_ctdreq,
  RegisterId::register_dma_ch2_dbg_tcr,
  RegisterId::register_dma_ch3_dbg_ctdreq,
  RegisterId::register_dma_ch3_dbg_tcr,
  RegisterId::register_dma_ch4_dbg_ctdreq,
  RegisterId::register_dma_ch4_dbg_tcr,
  RegisterId::register_dma_ch5_dbg_ctdreq,
  RegisterId::register_dma_ch5_dbg_tcr,
  RegisterId::register_dma_ch6_dbg_ctdreq,
  RegisterId::register_dma_ch6_dbg_tcr,
  RegisterId::register_dma_ch7_dbg_ctdreq,
  RegisterId::register_dma_ch7_dbg_tcr,
  RegisterId::register_dma_ch8_dbg_ctdreq,
  RegisterId::register_dma_ch8_dbg_tcr,
  RegisterId::register_dma_ch9_dbg_ctdreq,
  RegisterId::register_dma_ch9_dbg_tcr,
  RegisterId::register_dma_ch10_dbg_ctdreq,
  RegisterId::register_dma_ch10_dbg_tcr,
  RegisterId::register_dma_ch11_dbg_ctdreq,
  RegisterId::register_dma_ch11_dbg_tcr,
  RegisterId::register_pwm_ch0_csr,
  RegisterId::register_pwm_ch0_div,
  RegisterId::register_pwm_ch0_ctr,
  RegisterId::register_pwm_ch0_cc,
  RegisterId::register_pwm_ch0_top,
  RegisterId::register_pwm_ch1_csr,
  RegisterId::register_pwm_ch1_div,
  RegisterId::register_pwm_ch1_ctr,
  RegisterId::register_pwm_ch1_cc,
  RegisterId::register_pwm_ch1_top,
  RegisterId::register_pwm_ch2_csr,
  RegisterId::register_pwm_ch2_div,
  RegisterId::register_pwm_ch2_ctr,
  RegisterId::register_pwm_ch2_cc,
  RegisterId::register_pwm_ch2_top,
  RegisterId::register_pwm_ch3_csr,
  RegisterId::register_pwm_ch3_div,
  RegisterId::register_pwm_ch3_ctr,
  RegisterId::register_pwm_ch3_cc,
  RegisterId::register_pwm_ch3_top,
  RegisterId::register_pwm_ch4_csr,
  RegisterId::register_pwm_ch4_div,
  RegisterId::register_pwm_ch4_ctr,
  RegisterId::register_pwm_ch4_cc,
  RegisterId::register_pwm_ch4_top,
  RegisterId::register_pwm_ch5_csr,
  RegisterId::register_pwm_ch5_div,
  RegisterId::register_pwm_ch5_ctr,
  RegisterId::register_pwm_ch5_cc,
  RegisterId::register_pwm_ch5_top,
  RegisterId::register_pwm_ch6_csr,
  RegisterId::register_pwm_ch6_div,
  RegisterId::register_pwm_ch6_ctr,
  RegisterId::register_pwm_ch6_cc,
  RegisterId::register_pwm_ch6_top,
  RegisterId::register_pwm_ch7_csr,
  RegisterId::register_pwm_ch7_div,
  RegisterId::register_pwm_ch7_ctr,
  RegisterId::register_pwm_ch7_cc,
  RegisterId::register_pwm_ch7_top,
  RegisterId::register_pwm_en,
  RegisterId::register_pwm_intr,
  RegisterId::register_pwm_inte,
  RegisterId::register_pwm_intf,
  RegisterId::register_pwm_ints,
  RegisterId::register_resets_reset,
  RegisterId::register_rtc_clkdiv_m1,
  RegisterId::register_rtc_setup_0,
  RegisterId::register_rtc_setup_1,
  RegisterId::register_rtc_ctrl,
  RegisterId::register_rtc_irq_setup_0,
  RegisterId::register_rtc_irq_setup_1,
  RegisterId::register_rtc_rtc_1,
  RegisterId::register_rtc_rtc_0,
  RegisterId::register_rtc_intr,
  RegisterId::register_rtc_inte,
  RegisterId::register_rtc_intf,
  RegisterId::register_rtc_ints,
  RegisterId::register_spi0_sspcr0,
  RegisterId::register_spi0_sspcr1,
  RegisterId::register_spi0_sspdr,
  RegisterId::register_spi0_sspsr,
  RegisterId::register_spi0_sspcpsr,
  RegisterId::register_spi0_sspimsc,
  RegisterId::register_spi0_sspris,
  RegisterId::register_spi0_sspmis,
  RegisterId::register_spi0_sspicr,
  RegisterId::register_spi0_sspdmacr,
  RegisterId::register_spi0_sspperiphid0,
  RegisterId::register_spi0_sspperiphid1,
  RegisterId::register_spi0_sspperiphid2,
  RegisterId::register_spi0_sspperiphid3,
  RegisterId::register_spi0_ssppcellid0,
  RegisterId::register_spi0_ssppcellid1,
  RegisterId::register_spi0_ssppcellid2,
  RegisterId::register_spi0_ssppcellid3,
  RegisterId::register_spi1_sspcr0,
  RegisterId::register_spi1_sspcr1,
  RegisterId::register_spi1_sspdr,
  RegisterId::register_spi1_sspsr,
  RegisterId::register_spi1_sspcpsr,
  RegisterId::register_spi1_sspimsc,
  RegisterId::register_spi1_sspris,
  RegisterId::register_spi1_sspmis,
  RegisterId::register_spi1_sspicr,
  RegisterId::register_spi1_sspdmacr,
  RegisterId::register_spi1_sspperiphid0,
  RegisterId::register_spi1_sspperiphid1,
  RegisterId::register_spi1_sspperiphid2,
  RegisterId::register_spi1_sspperiphid3,
  RegisterId::register_spi1_ssppcellid0,
  RegisterId::register_spi1_ssppcellid1,
  RegisterId::register_spi1_ssppcellid2,
  RegisterId::register_spi1_ssppcellid3,
  RegisterId::register_timer_timehw,
  RegisterId::register_timer_timelw,
  RegisterId::register_timer_timehr,
  RegisterId::register_timer_timelr,
  RegisterId::register_timer_alarm0,
  RegisterId::register_timer_alarm1,
  RegisterId::register_timer_alarm2,
  RegisterId::register_timer_alarm3,
  RegisterId::register_timer_armed,
  RegisterId::register_timer_timerawh,
  RegisterId::register_timer_timerawl,
  RegisterId::register_timer_dbgpause,
  RegisterId::register_timer_pause,
  RegisterId::register_timer_intr,
  RegisterId::register_timer_inte,
  RegisterId::register_timer_intf,
  RegisterId::register_timer_ints,
  RegisterId::register_uart0_uartdr,
  RegisterId::register_uart0_uartrsr,
  RegisterId::register_uart0_uartfr,
  RegisterId::register_uart0_uartilpr,
  RegisterId::register_uart0_uartibrd,
  RegisterId::register_uart0_uartfbrd,
  RegisterId::register_uart0_uartlcr_h,
  RegisterId::register_uart0_uartcr,
  RegisterId::register_uart0_uartifls,
  RegisterId::register_uart0_uartimsc,
  RegisterId::register_uart0_uartris,
  RegisterId::register_uart0_uartmis,
  RegisterId::register_uart0_uarticr,
  RegisterId::register_uart0_uartdmacr,
  RegisterId::register_uart0_uartperiphid0,
  RegisterId::register_uart0_uartperiphid1,
  RegisterId::register_uart0_uartperiphid2,
  RegisterId::register_uart0_uartperiphid3,
  RegisterId::register_uart0_uartpcellid0,
  RegisterId::register_uart0_uartpcellid1,
  RegisterId::register_uart0_uartpcellid2,
  RegisterId::register_uart0_uartpcellid3,
  RegisterId::register_uart1_uartdr,
  RegisterId::register_uart1_uartrsr,
  RegisterId::register_uart1_uartfr,
  RegisterId::register_uart1_uartilpr,
  RegisterId::register_uart1_uartibrd,
  RegisterId::register_uart1_uartfbrd,
  RegisterId::register_uart1_uartlcr_h,
  RegisterId::register_uart1_uartcr,
  RegisterId::register_uart1_uartifls,
  RegisterId::register_uart1_uartimsc,
  RegisterId::register_uart1_uartris,
  RegisterId::register_uart1_uartmis,
  RegisterId::register_uart1_uarticr,
  RegisterId::register_uart1_uartdmacr,
  RegisterId::register_uart1_uartperiphid0,
  RegisterId::register_uart1_uartperiphid1,
  RegisterId::register_uart1_uartperiphid2,
  RegisterId::register_uart1_uartperiphid3,
  RegisterId::register_uart1_uartpcellid0,
  RegisterId::register_uart1_uartpcellid1,
  RegisterId::register_uart1_uartpcellid2,
  RegisterId::register_uart1_uartpcellid3,
  RegisterId::register_usb_addr_endp,
  RegisterId::register_usb_addr_endp1,
  RegisterId::register_usb_addr_endp2,
  RegisterId::register_usb_addr_endp3,
  RegisterId::register_usb_addr_endp4,
  RegisterId::register_usb_addr_endp5,
  RegisterId::register_usb_addr_endp6,
  RegisterId::register_usb_addr_endp7,
  RegisterId::register_usb_addr_endp8,
  RegisterId::register_usb_addr_endp9,
  RegisterId::register_usb_addr_endp10,
  RegisterId::register_usb_addr_endp11,
  RegisterId::register_usb_addr_endp12,
  RegisterId::register_usb_addr_endp13,
  RegisterId::register_usb_addr_endp14,
  RegisterId::register_usb_addr_endp15,
  RegisterId::register_usb_main_ctrl,
  RegisterId::register_usb_sof_wr,
  RegisterId::register_usb_sof_rd,
  RegisterId::register_usb_sie_ctrl,
  RegisterId::register_usb_sie_status,
  RegisterId::register_usb_int_ep_ctrl,
  RegisterId::register_usb_buff_status,
  RegisterId::register_usb_buff_cpu_should_handle,
  RegisterId::register_usb_ep_abort,
  RegisterId::register_usb_ep_abort_done,
  RegisterId::register_usb_ep_stall_arm,
  RegisterId::register_usb_nak_poll,
  RegisterId::register_usb_ep_status_stall_nak,
  RegisterId::register_usb_usb_muxing,
  RegisterId::register_usb_usb_pwr,
  RegisterId::register_usb_usbphy_direct,
  RegisterId::register_usb_usbphy_direct_override,
  RegisterId::register_usb_usbphy_trim,
  RegisterId::register_usb_intr,
  RegisterId::register_usb_inte,
  RegisterId::register_usb_intf,
  RegisterId::register_usb_ints,
  RegisterId::register_watchdog_ctrl,
  RegisterId::register_watchdog_load,
  RegisterId::register_watchdog_reason,
  RegisterId::register_watchdog_scratch0,
  RegisterId::register_watchdog_scratch1,
  RegisterId::register_watchdog_scratch2,
  RegisterId::register_watchdog_scratch3,
  RegisterId::register_watchdog_scratch4,
  RegisterId::register_watchdog_scratch5,
  RegisterId::register_watchdog_scratch6,
  RegisterId::register_watchdog_scratch7,
  RegisterId::register_watchdog_tick,
}};
}
}
}
}
}
}
