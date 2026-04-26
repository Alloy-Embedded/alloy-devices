#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "registers.hpp"

namespace raspberrypi {
namespace rp2040 {
namespace generated {
namespace runtime {
namespace devices {
namespace rp2040 {
enum class FieldId : std::uint16_t {
  none,
  field_adc_cs_en,
  field_adc_cs_ts_en,
  field_adc_cs_start_once,
  field_adc_cs_start_many,
  field_adc_cs_ready,
  field_adc_cs_err,
  field_adc_cs_err_sticky,
  field_adc_cs_ainsel,
  field_adc_cs_rrobin,
  field_adc_div_frac,
  field_adc_div_int,
  field_adc_fcs_en,
  field_adc_fcs_shift,
  field_adc_fcs_err,
  field_adc_fcs_dreq_en,
  field_adc_fcs_empty,
  field_adc_fcs_full,
  field_adc_fcs_under,
  field_adc_fcs_over,
  field_adc_fcs_level,
  field_adc_fcs_thresh,
  field_adc_fifo_val,
  field_adc_fifo_err,
  field_adc_inte_fifo,
  field_adc_intf_fifo,
  field_adc_intr_fifo,
  field_adc_ints_fifo,
  field_adc_result_result,
  field_dma_ch0_al1_ctrl_ch0_al1_ctrl,
  field_dma_ch0_al1_read_addr_ch0_al1_read_addr,
  field_dma_ch0_al1_trans_count_trig_ch0_al1_trans_count_trig,
  field_dma_ch0_al1_write_addr_ch0_al1_write_addr,
  field_dma_ch0_al2_ctrl_ch0_al2_ctrl,
  field_dma_ch0_al2_read_addr_ch0_al2_read_addr,
  field_dma_ch0_al2_trans_count_ch0_al2_trans_count,
  field_dma_ch0_al2_write_addr_trig_ch0_al2_write_addr_trig,
  field_dma_ch0_al3_ctrl_ch0_al3_ctrl,
  field_dma_ch0_al3_read_addr_trig_ch0_al3_read_addr_trig,
  field_dma_ch0_al3_trans_count_ch0_al3_trans_count,
  field_dma_ch0_al3_write_addr_ch0_al3_write_addr,
  field_dma_ch0_ctrl_trig_en,
  field_dma_ch0_ctrl_trig_high_priority,
  field_dma_ch0_ctrl_trig_data_size,
  field_dma_ch0_ctrl_trig_incr_read,
  field_dma_ch0_ctrl_trig_incr_write,
  field_dma_ch0_ctrl_trig_ring_size,
  field_dma_ch0_ctrl_trig_ring_sel,
  field_dma_ch0_ctrl_trig_chain_to,
  field_dma_ch0_ctrl_trig_treq_sel,
  field_dma_ch0_ctrl_trig_irq_quiet,
  field_dma_ch0_ctrl_trig_bswap,
  field_dma_ch0_ctrl_trig_sniff_en,
  field_dma_ch0_ctrl_trig_busy,
  field_dma_ch0_ctrl_trig_write_error,
  field_dma_ch0_ctrl_trig_read_error,
  field_dma_ch0_ctrl_trig_ahb_error,
  field_dma_ch0_dbg_ctdreq_ch0_dbg_ctdreq,
  field_dma_ch0_dbg_tcr_ch0_dbg_tcr,
  field_dma_ch0_read_addr_ch0_read_addr,
  field_dma_ch0_trans_count_ch0_trans_count,
  field_dma_ch0_write_addr_ch0_write_addr,
  field_dma_ch10_al1_ctrl_ch10_al1_ctrl,
  field_dma_ch10_al1_read_addr_ch10_al1_read_addr,
  field_dma_ch10_al1_trans_count_trig_ch10_al1_trans_count_trig,
  field_dma_ch10_al1_write_addr_ch10_al1_write_addr,
  field_dma_ch10_al2_ctrl_ch10_al2_ctrl,
  field_dma_ch10_al2_read_addr_ch10_al2_read_addr,
  field_dma_ch10_al2_trans_count_ch10_al2_trans_count,
  field_dma_ch10_al2_write_addr_trig_ch10_al2_write_addr_trig,
  field_dma_ch10_al3_ctrl_ch10_al3_ctrl,
  field_dma_ch10_al3_read_addr_trig_ch10_al3_read_addr_trig,
  field_dma_ch10_al3_trans_count_ch10_al3_trans_count,
  field_dma_ch10_al3_write_addr_ch10_al3_write_addr,
  field_dma_ch10_ctrl_trig_en,
  field_dma_ch10_ctrl_trig_high_priority,
  field_dma_ch10_ctrl_trig_data_size,
  field_dma_ch10_ctrl_trig_incr_read,
  field_dma_ch10_ctrl_trig_incr_write,
  field_dma_ch10_ctrl_trig_ring_size,
  field_dma_ch10_ctrl_trig_ring_sel,
  field_dma_ch10_ctrl_trig_chain_to,
  field_dma_ch10_ctrl_trig_treq_sel,
  field_dma_ch10_ctrl_trig_irq_quiet,
  field_dma_ch10_ctrl_trig_bswap,
  field_dma_ch10_ctrl_trig_sniff_en,
  field_dma_ch10_ctrl_trig_busy,
  field_dma_ch10_ctrl_trig_write_error,
  field_dma_ch10_ctrl_trig_read_error,
  field_dma_ch10_ctrl_trig_ahb_error,
  field_dma_ch10_dbg_ctdreq_ch10_dbg_ctdreq,
  field_dma_ch10_dbg_tcr_ch10_dbg_tcr,
  field_dma_ch10_read_addr_ch10_read_addr,
  field_dma_ch10_trans_count_ch10_trans_count,
  field_dma_ch10_write_addr_ch10_write_addr,
  field_dma_ch11_al1_ctrl_ch11_al1_ctrl,
  field_dma_ch11_al1_read_addr_ch11_al1_read_addr,
  field_dma_ch11_al1_trans_count_trig_ch11_al1_trans_count_trig,
  field_dma_ch11_al1_write_addr_ch11_al1_write_addr,
  field_dma_ch11_al2_ctrl_ch11_al2_ctrl,
  field_dma_ch11_al2_read_addr_ch11_al2_read_addr,
  field_dma_ch11_al2_trans_count_ch11_al2_trans_count,
  field_dma_ch11_al2_write_addr_trig_ch11_al2_write_addr_trig,
  field_dma_ch11_al3_ctrl_ch11_al3_ctrl,
  field_dma_ch11_al3_read_addr_trig_ch11_al3_read_addr_trig,
  field_dma_ch11_al3_trans_count_ch11_al3_trans_count,
  field_dma_ch11_al3_write_addr_ch11_al3_write_addr,
  field_dma_ch11_ctrl_trig_en,
  field_dma_ch11_ctrl_trig_high_priority,
  field_dma_ch11_ctrl_trig_data_size,
  field_dma_ch11_ctrl_trig_incr_read,
  field_dma_ch11_ctrl_trig_incr_write,
  field_dma_ch11_ctrl_trig_ring_size,
  field_dma_ch11_ctrl_trig_ring_sel,
  field_dma_ch11_ctrl_trig_chain_to,
  field_dma_ch11_ctrl_trig_treq_sel,
  field_dma_ch11_ctrl_trig_irq_quiet,
  field_dma_ch11_ctrl_trig_bswap,
  field_dma_ch11_ctrl_trig_sniff_en,
  field_dma_ch11_ctrl_trig_busy,
  field_dma_ch11_ctrl_trig_write_error,
  field_dma_ch11_ctrl_trig_read_error,
  field_dma_ch11_ctrl_trig_ahb_error,
  field_dma_ch11_dbg_ctdreq_ch11_dbg_ctdreq,
  field_dma_ch11_dbg_tcr_ch11_dbg_tcr,
  field_dma_ch11_read_addr_ch11_read_addr,
  field_dma_ch11_trans_count_ch11_trans_count,
  field_dma_ch11_write_addr_ch11_write_addr,
  field_dma_ch1_al1_ctrl_ch1_al1_ctrl,
  field_dma_ch1_al1_read_addr_ch1_al1_read_addr,
  field_dma_ch1_al1_trans_count_trig_ch1_al1_trans_count_trig,
  field_dma_ch1_al1_write_addr_ch1_al1_write_addr,
  field_dma_ch1_al2_ctrl_ch1_al2_ctrl,
  field_dma_ch1_al2_read_addr_ch1_al2_read_addr,
  field_dma_ch1_al2_trans_count_ch1_al2_trans_count,
  field_dma_ch1_al2_write_addr_trig_ch1_al2_write_addr_trig,
  field_dma_ch1_al3_ctrl_ch1_al3_ctrl,
  field_dma_ch1_al3_read_addr_trig_ch1_al3_read_addr_trig,
  field_dma_ch1_al3_trans_count_ch1_al3_trans_count,
  field_dma_ch1_al3_write_addr_ch1_al3_write_addr,
  field_dma_ch1_ctrl_trig_en,
  field_dma_ch1_ctrl_trig_high_priority,
  field_dma_ch1_ctrl_trig_data_size,
  field_dma_ch1_ctrl_trig_incr_read,
  field_dma_ch1_ctrl_trig_incr_write,
  field_dma_ch1_ctrl_trig_ring_size,
  field_dma_ch1_ctrl_trig_ring_sel,
  field_dma_ch1_ctrl_trig_chain_to,
  field_dma_ch1_ctrl_trig_treq_sel,
  field_dma_ch1_ctrl_trig_irq_quiet,
  field_dma_ch1_ctrl_trig_bswap,
  field_dma_ch1_ctrl_trig_sniff_en,
  field_dma_ch1_ctrl_trig_busy,
  field_dma_ch1_ctrl_trig_write_error,
  field_dma_ch1_ctrl_trig_read_error,
  field_dma_ch1_ctrl_trig_ahb_error,
  field_dma_ch1_dbg_ctdreq_ch1_dbg_ctdreq,
  field_dma_ch1_dbg_tcr_ch1_dbg_tcr,
  field_dma_ch1_read_addr_ch1_read_addr,
  field_dma_ch1_trans_count_ch1_trans_count,
  field_dma_ch1_write_addr_ch1_write_addr,
  field_dma_ch2_al1_ctrl_ch2_al1_ctrl,
  field_dma_ch2_al1_read_addr_ch2_al1_read_addr,
  field_dma_ch2_al1_trans_count_trig_ch2_al1_trans_count_trig,
  field_dma_ch2_al1_write_addr_ch2_al1_write_addr,
  field_dma_ch2_al2_ctrl_ch2_al2_ctrl,
  field_dma_ch2_al2_read_addr_ch2_al2_read_addr,
  field_dma_ch2_al2_trans_count_ch2_al2_trans_count,
  field_dma_ch2_al2_write_addr_trig_ch2_al2_write_addr_trig,
  field_dma_ch2_al3_ctrl_ch2_al3_ctrl,
  field_dma_ch2_al3_read_addr_trig_ch2_al3_read_addr_trig,
  field_dma_ch2_al3_trans_count_ch2_al3_trans_count,
  field_dma_ch2_al3_write_addr_ch2_al3_write_addr,
  field_dma_ch2_ctrl_trig_en,
  field_dma_ch2_ctrl_trig_high_priority,
  field_dma_ch2_ctrl_trig_data_size,
  field_dma_ch2_ctrl_trig_incr_read,
  field_dma_ch2_ctrl_trig_incr_write,
  field_dma_ch2_ctrl_trig_ring_size,
  field_dma_ch2_ctrl_trig_ring_sel,
  field_dma_ch2_ctrl_trig_chain_to,
  field_dma_ch2_ctrl_trig_treq_sel,
  field_dma_ch2_ctrl_trig_irq_quiet,
  field_dma_ch2_ctrl_trig_bswap,
  field_dma_ch2_ctrl_trig_sniff_en,
  field_dma_ch2_ctrl_trig_busy,
  field_dma_ch2_ctrl_trig_write_error,
  field_dma_ch2_ctrl_trig_read_error,
  field_dma_ch2_ctrl_trig_ahb_error,
  field_dma_ch2_dbg_ctdreq_ch2_dbg_ctdreq,
  field_dma_ch2_dbg_tcr_ch2_dbg_tcr,
  field_dma_ch2_read_addr_ch2_read_addr,
  field_dma_ch2_trans_count_ch2_trans_count,
  field_dma_ch2_write_addr_ch2_write_addr,
  field_dma_ch3_al1_ctrl_ch3_al1_ctrl,
  field_dma_ch3_al1_read_addr_ch3_al1_read_addr,
  field_dma_ch3_al1_trans_count_trig_ch3_al1_trans_count_trig,
  field_dma_ch3_al1_write_addr_ch3_al1_write_addr,
  field_dma_ch3_al2_ctrl_ch3_al2_ctrl,
  field_dma_ch3_al2_read_addr_ch3_al2_read_addr,
  field_dma_ch3_al2_trans_count_ch3_al2_trans_count,
  field_dma_ch3_al2_write_addr_trig_ch3_al2_write_addr_trig,
  field_dma_ch3_al3_ctrl_ch3_al3_ctrl,
  field_dma_ch3_al3_read_addr_trig_ch3_al3_read_addr_trig,
  field_dma_ch3_al3_trans_count_ch3_al3_trans_count,
  field_dma_ch3_al3_write_addr_ch3_al3_write_addr,
  field_dma_ch3_ctrl_trig_en,
  field_dma_ch3_ctrl_trig_high_priority,
  field_dma_ch3_ctrl_trig_data_size,
  field_dma_ch3_ctrl_trig_incr_read,
  field_dma_ch3_ctrl_trig_incr_write,
  field_dma_ch3_ctrl_trig_ring_size,
  field_dma_ch3_ctrl_trig_ring_sel,
  field_dma_ch3_ctrl_trig_chain_to,
  field_dma_ch3_ctrl_trig_treq_sel,
  field_dma_ch3_ctrl_trig_irq_quiet,
  field_dma_ch3_ctrl_trig_bswap,
  field_dma_ch3_ctrl_trig_sniff_en,
  field_dma_ch3_ctrl_trig_busy,
  field_dma_ch3_ctrl_trig_write_error,
  field_dma_ch3_ctrl_trig_read_error,
  field_dma_ch3_ctrl_trig_ahb_error,
  field_dma_ch3_dbg_ctdreq_ch3_dbg_ctdreq,
  field_dma_ch3_dbg_tcr_ch3_dbg_tcr,
  field_dma_ch3_read_addr_ch3_read_addr,
  field_dma_ch3_trans_count_ch3_trans_count,
  field_dma_ch3_write_addr_ch3_write_addr,
  field_dma_ch4_al1_ctrl_ch4_al1_ctrl,
  field_dma_ch4_al1_read_addr_ch4_al1_read_addr,
  field_dma_ch4_al1_trans_count_trig_ch4_al1_trans_count_trig,
  field_dma_ch4_al1_write_addr_ch4_al1_write_addr,
  field_dma_ch4_al2_ctrl_ch4_al2_ctrl,
  field_dma_ch4_al2_read_addr_ch4_al2_read_addr,
  field_dma_ch4_al2_trans_count_ch4_al2_trans_count,
  field_dma_ch4_al2_write_addr_trig_ch4_al2_write_addr_trig,
  field_dma_ch4_al3_ctrl_ch4_al3_ctrl,
  field_dma_ch4_al3_read_addr_trig_ch4_al3_read_addr_trig,
  field_dma_ch4_al3_trans_count_ch4_al3_trans_count,
  field_dma_ch4_al3_write_addr_ch4_al3_write_addr,
  field_dma_ch4_ctrl_trig_en,
  field_dma_ch4_ctrl_trig_high_priority,
  field_dma_ch4_ctrl_trig_data_size,
  field_dma_ch4_ctrl_trig_incr_read,
  field_dma_ch4_ctrl_trig_incr_write,
  field_dma_ch4_ctrl_trig_ring_size,
  field_dma_ch4_ctrl_trig_ring_sel,
  field_dma_ch4_ctrl_trig_chain_to,
  field_dma_ch4_ctrl_trig_treq_sel,
  field_dma_ch4_ctrl_trig_irq_quiet,
  field_dma_ch4_ctrl_trig_bswap,
  field_dma_ch4_ctrl_trig_sniff_en,
  field_dma_ch4_ctrl_trig_busy,
  field_dma_ch4_ctrl_trig_write_error,
  field_dma_ch4_ctrl_trig_read_error,
  field_dma_ch4_ctrl_trig_ahb_error,
  field_dma_ch4_dbg_ctdreq_ch4_dbg_ctdreq,
  field_dma_ch4_dbg_tcr_ch4_dbg_tcr,
  field_dma_ch4_read_addr_ch4_read_addr,
  field_dma_ch4_trans_count_ch4_trans_count,
  field_dma_ch4_write_addr_ch4_write_addr,
  field_dma_ch5_al1_ctrl_ch5_al1_ctrl,
  field_dma_ch5_al1_read_addr_ch5_al1_read_addr,
  field_dma_ch5_al1_trans_count_trig_ch5_al1_trans_count_trig,
  field_dma_ch5_al1_write_addr_ch5_al1_write_addr,
  field_dma_ch5_al2_ctrl_ch5_al2_ctrl,
  field_dma_ch5_al2_read_addr_ch5_al2_read_addr,
  field_dma_ch5_al2_trans_count_ch5_al2_trans_count,
  field_dma_ch5_al2_write_addr_trig_ch5_al2_write_addr_trig,
  field_dma_ch5_al3_ctrl_ch5_al3_ctrl,
  field_dma_ch5_al3_read_addr_trig_ch5_al3_read_addr_trig,
  field_dma_ch5_al3_trans_count_ch5_al3_trans_count,
  field_dma_ch5_al3_write_addr_ch5_al3_write_addr,
  field_dma_ch5_ctrl_trig_en,
  field_dma_ch5_ctrl_trig_high_priority,
  field_dma_ch5_ctrl_trig_data_size,
  field_dma_ch5_ctrl_trig_incr_read,
  field_dma_ch5_ctrl_trig_incr_write,
  field_dma_ch5_ctrl_trig_ring_size,
  field_dma_ch5_ctrl_trig_ring_sel,
  field_dma_ch5_ctrl_trig_chain_to,
  field_dma_ch5_ctrl_trig_treq_sel,
  field_dma_ch5_ctrl_trig_irq_quiet,
  field_dma_ch5_ctrl_trig_bswap,
  field_dma_ch5_ctrl_trig_sniff_en,
  field_dma_ch5_ctrl_trig_busy,
  field_dma_ch5_ctrl_trig_write_error,
  field_dma_ch5_ctrl_trig_read_error,
  field_dma_ch5_ctrl_trig_ahb_error,
  field_dma_ch5_dbg_ctdreq_ch5_dbg_ctdreq,
  field_dma_ch5_dbg_tcr_ch5_dbg_tcr,
  field_dma_ch5_read_addr_ch5_read_addr,
  field_dma_ch5_trans_count_ch5_trans_count,
  field_dma_ch5_write_addr_ch5_write_addr,
  field_dma_ch6_al1_ctrl_ch6_al1_ctrl,
  field_dma_ch6_al1_read_addr_ch6_al1_read_addr,
  field_dma_ch6_al1_trans_count_trig_ch6_al1_trans_count_trig,
  field_dma_ch6_al1_write_addr_ch6_al1_write_addr,
  field_dma_ch6_al2_ctrl_ch6_al2_ctrl,
  field_dma_ch6_al2_read_addr_ch6_al2_read_addr,
  field_dma_ch6_al2_trans_count_ch6_al2_trans_count,
  field_dma_ch6_al2_write_addr_trig_ch6_al2_write_addr_trig,
  field_dma_ch6_al3_ctrl_ch6_al3_ctrl,
  field_dma_ch6_al3_read_addr_trig_ch6_al3_read_addr_trig,
  field_dma_ch6_al3_trans_count_ch6_al3_trans_count,
  field_dma_ch6_al3_write_addr_ch6_al3_write_addr,
  field_dma_ch6_ctrl_trig_en,
  field_dma_ch6_ctrl_trig_high_priority,
  field_dma_ch6_ctrl_trig_data_size,
  field_dma_ch6_ctrl_trig_incr_read,
  field_dma_ch6_ctrl_trig_incr_write,
  field_dma_ch6_ctrl_trig_ring_size,
  field_dma_ch6_ctrl_trig_ring_sel,
  field_dma_ch6_ctrl_trig_chain_to,
  field_dma_ch6_ctrl_trig_treq_sel,
  field_dma_ch6_ctrl_trig_irq_quiet,
  field_dma_ch6_ctrl_trig_bswap,
  field_dma_ch6_ctrl_trig_sniff_en,
  field_dma_ch6_ctrl_trig_busy,
  field_dma_ch6_ctrl_trig_write_error,
  field_dma_ch6_ctrl_trig_read_error,
  field_dma_ch6_ctrl_trig_ahb_error,
  field_dma_ch6_dbg_ctdreq_ch6_dbg_ctdreq,
  field_dma_ch6_dbg_tcr_ch6_dbg_tcr,
  field_dma_ch6_read_addr_ch6_read_addr,
  field_dma_ch6_trans_count_ch6_trans_count,
  field_dma_ch6_write_addr_ch6_write_addr,
  field_dma_ch7_al1_ctrl_ch7_al1_ctrl,
  field_dma_ch7_al1_read_addr_ch7_al1_read_addr,
  field_dma_ch7_al1_trans_count_trig_ch7_al1_trans_count_trig,
  field_dma_ch7_al1_write_addr_ch7_al1_write_addr,
  field_dma_ch7_al2_ctrl_ch7_al2_ctrl,
  field_dma_ch7_al2_read_addr_ch7_al2_read_addr,
  field_dma_ch7_al2_trans_count_ch7_al2_trans_count,
  field_dma_ch7_al2_write_addr_trig_ch7_al2_write_addr_trig,
  field_dma_ch7_al3_ctrl_ch7_al3_ctrl,
  field_dma_ch7_al3_read_addr_trig_ch7_al3_read_addr_trig,
  field_dma_ch7_al3_trans_count_ch7_al3_trans_count,
  field_dma_ch7_al3_write_addr_ch7_al3_write_addr,
  field_dma_ch7_ctrl_trig_en,
  field_dma_ch7_ctrl_trig_high_priority,
  field_dma_ch7_ctrl_trig_data_size,
  field_dma_ch7_ctrl_trig_incr_read,
  field_dma_ch7_ctrl_trig_incr_write,
  field_dma_ch7_ctrl_trig_ring_size,
  field_dma_ch7_ctrl_trig_ring_sel,
  field_dma_ch7_ctrl_trig_chain_to,
  field_dma_ch7_ctrl_trig_treq_sel,
  field_dma_ch7_ctrl_trig_irq_quiet,
  field_dma_ch7_ctrl_trig_bswap,
  field_dma_ch7_ctrl_trig_sniff_en,
  field_dma_ch7_ctrl_trig_busy,
  field_dma_ch7_ctrl_trig_write_error,
  field_dma_ch7_ctrl_trig_read_error,
  field_dma_ch7_ctrl_trig_ahb_error,
  field_dma_ch7_dbg_ctdreq_ch7_dbg_ctdreq,
  field_dma_ch7_dbg_tcr_ch7_dbg_tcr,
  field_dma_ch7_read_addr_ch7_read_addr,
  field_dma_ch7_trans_count_ch7_trans_count,
  field_dma_ch7_write_addr_ch7_write_addr,
  field_dma_ch8_al1_ctrl_ch8_al1_ctrl,
  field_dma_ch8_al1_read_addr_ch8_al1_read_addr,
  field_dma_ch8_al1_trans_count_trig_ch8_al1_trans_count_trig,
  field_dma_ch8_al1_write_addr_ch8_al1_write_addr,
  field_dma_ch8_al2_ctrl_ch8_al2_ctrl,
  field_dma_ch8_al2_read_addr_ch8_al2_read_addr,
  field_dma_ch8_al2_trans_count_ch8_al2_trans_count,
  field_dma_ch8_al2_write_addr_trig_ch8_al2_write_addr_trig,
  field_dma_ch8_al3_ctrl_ch8_al3_ctrl,
  field_dma_ch8_al3_read_addr_trig_ch8_al3_read_addr_trig,
  field_dma_ch8_al3_trans_count_ch8_al3_trans_count,
  field_dma_ch8_al3_write_addr_ch8_al3_write_addr,
  field_dma_ch8_ctrl_trig_en,
  field_dma_ch8_ctrl_trig_high_priority,
  field_dma_ch8_ctrl_trig_data_size,
  field_dma_ch8_ctrl_trig_incr_read,
  field_dma_ch8_ctrl_trig_incr_write,
  field_dma_ch8_ctrl_trig_ring_size,
  field_dma_ch8_ctrl_trig_ring_sel,
  field_dma_ch8_ctrl_trig_chain_to,
  field_dma_ch8_ctrl_trig_treq_sel,
  field_dma_ch8_ctrl_trig_irq_quiet,
  field_dma_ch8_ctrl_trig_bswap,
  field_dma_ch8_ctrl_trig_sniff_en,
  field_dma_ch8_ctrl_trig_busy,
  field_dma_ch8_ctrl_trig_write_error,
  field_dma_ch8_ctrl_trig_read_error,
  field_dma_ch8_ctrl_trig_ahb_error,
  field_dma_ch8_dbg_ctdreq_ch8_dbg_ctdreq,
  field_dma_ch8_dbg_tcr_ch8_dbg_tcr,
  field_dma_ch8_read_addr_ch8_read_addr,
  field_dma_ch8_trans_count_ch8_trans_count,
  field_dma_ch8_write_addr_ch8_write_addr,
  field_dma_ch9_al1_ctrl_ch9_al1_ctrl,
  field_dma_ch9_al1_read_addr_ch9_al1_read_addr,
  field_dma_ch9_al1_trans_count_trig_ch9_al1_trans_count_trig,
  field_dma_ch9_al1_write_addr_ch9_al1_write_addr,
  field_dma_ch9_al2_ctrl_ch9_al2_ctrl,
  field_dma_ch9_al2_read_addr_ch9_al2_read_addr,
  field_dma_ch9_al2_trans_count_ch9_al2_trans_count,
  field_dma_ch9_al2_write_addr_trig_ch9_al2_write_addr_trig,
  field_dma_ch9_al3_ctrl_ch9_al3_ctrl,
  field_dma_ch9_al3_read_addr_trig_ch9_al3_read_addr_trig,
  field_dma_ch9_al3_trans_count_ch9_al3_trans_count,
  field_dma_ch9_al3_write_addr_ch9_al3_write_addr,
  field_dma_ch9_ctrl_trig_en,
  field_dma_ch9_ctrl_trig_high_priority,
  field_dma_ch9_ctrl_trig_data_size,
  field_dma_ch9_ctrl_trig_incr_read,
  field_dma_ch9_ctrl_trig_incr_write,
  field_dma_ch9_ctrl_trig_ring_size,
  field_dma_ch9_ctrl_trig_ring_sel,
  field_dma_ch9_ctrl_trig_chain_to,
  field_dma_ch9_ctrl_trig_treq_sel,
  field_dma_ch9_ctrl_trig_irq_quiet,
  field_dma_ch9_ctrl_trig_bswap,
  field_dma_ch9_ctrl_trig_sniff_en,
  field_dma_ch9_ctrl_trig_busy,
  field_dma_ch9_ctrl_trig_write_error,
  field_dma_ch9_ctrl_trig_read_error,
  field_dma_ch9_ctrl_trig_ahb_error,
  field_dma_ch9_dbg_ctdreq_ch9_dbg_ctdreq,
  field_dma_ch9_dbg_tcr_ch9_dbg_tcr,
  field_dma_ch9_read_addr_ch9_read_addr,
  field_dma_ch9_trans_count_ch9_trans_count,
  field_dma_ch9_write_addr_ch9_write_addr,
  field_dma_chan_abort_chan_abort,
  field_dma_fifo_levels_tdf_lvl,
  field_dma_fifo_levels_waf_lvl,
  field_dma_fifo_levels_raf_lvl,
  field_dma_inte0_inte0,
  field_dma_inte1_inte1,
  field_dma_intf0_intf0,
  field_dma_intf1_intf1,
  field_dma_intr_intr,
  field_dma_intr1_intr1,
  field_dma_ints0_ints0,
  field_dma_ints1_ints1,
  field_dma_multi_chan_trigger_multi_chan_trigger,
  field_dma_n_channels_n_channels,
  field_dma_sniff_ctrl_en,
  field_dma_sniff_ctrl_dmach,
  field_dma_sniff_ctrl_calc,
  field_dma_sniff_ctrl_bswap,
  field_dma_sniff_ctrl_out_rev,
  field_dma_sniff_ctrl_out_inv,
  field_dma_sniff_data_sniff_data,
  field_dma_timer0_y,
  field_dma_timer0_x,
  field_dma_timer1_y,
  field_dma_timer1_x,
  field_dma_timer2_y,
  field_dma_timer2_x,
  field_dma_timer3_y,
  field_dma_timer3_x,
  field_i2c0_ic_ack_general_call_ack_gen_call,
  field_i2c0_ic_clr_activity_clr_activity,
  field_i2c0_ic_clr_gen_call_clr_gen_call,
  field_i2c0_ic_clr_intr_clr_intr,
  field_i2c0_ic_clr_rd_req_clr_rd_req,
  field_i2c0_ic_clr_restart_det_clr_restart_det,
  field_i2c0_ic_clr_rx_done_clr_rx_done,
  field_i2c0_ic_clr_rx_over_clr_rx_over,
  field_i2c0_ic_clr_rx_under_clr_rx_under,
  field_i2c0_ic_clr_start_det_clr_start_det,
  field_i2c0_ic_clr_stop_det_clr_stop_det,
  field_i2c0_ic_clr_tx_abrt_clr_tx_abrt,
  field_i2c0_ic_clr_tx_over_clr_tx_over,
  field_i2c0_ic_comp_param_1_apb_data_width,
  field_i2c0_ic_comp_param_1_max_speed_mode,
  field_i2c0_ic_comp_param_1_hc_count_values,
  field_i2c0_ic_comp_param_1_intr_io,
  field_i2c0_ic_comp_param_1_has_dma,
  field_i2c0_ic_comp_param_1_add_encoded_params,
  field_i2c0_ic_comp_param_1_rx_buffer_depth,
  field_i2c0_ic_comp_param_1_tx_buffer_depth,
  field_i2c0_ic_comp_type_ic_comp_type,
  field_i2c0_ic_comp_version_ic_comp_version,
  field_i2c0_ic_con_master_mode,
  field_i2c0_ic_con_speed,
  field_i2c0_ic_con_ic_10bitaddr_slave,
  field_i2c0_ic_con_ic_10bitaddr_master,
  field_i2c0_ic_con_ic_restart_en,
  field_i2c0_ic_con_ic_slave_disable,
  field_i2c0_ic_con_stop_det_ifaddressed,
  field_i2c0_ic_con_tx_empty_ctrl,
  field_i2c0_ic_con_rx_fifo_full_hld_ctrl,
  field_i2c0_ic_con_stop_det_if_master_active,
  field_i2c0_ic_data_cmd_dat,
  field_i2c0_ic_data_cmd_cmd,
  field_i2c0_ic_data_cmd_stop,
  field_i2c0_ic_data_cmd_restart,
  field_i2c0_ic_data_cmd_first_data_byte,
  field_i2c0_ic_dma_cr_rdmae,
  field_i2c0_ic_dma_cr_tdmae,
  field_i2c0_ic_dma_rdlr_dmardl,
  field_i2c0_ic_dma_tdlr_dmatdl,
  field_i2c0_ic_enable_enable,
  field_i2c0_ic_enable_abort,
  field_i2c0_ic_enable_tx_cmd_block,
  field_i2c0_ic_enable_status_ic_en,
  field_i2c0_ic_enable_status_slv_disabled_while_busy,
  field_i2c0_ic_enable_status_slv_rx_data_lost,
  field_i2c0_ic_fs_scl_hcnt_ic_fs_scl_hcnt,
  field_i2c0_ic_fs_scl_lcnt_ic_fs_scl_lcnt,
  field_i2c0_ic_fs_spklen_ic_fs_spklen,
  field_i2c0_ic_intr_mask_m_rx_under,
  field_i2c0_ic_intr_mask_m_rx_over,
  field_i2c0_ic_intr_mask_m_rx_full,
  field_i2c0_ic_intr_mask_m_tx_over,
  field_i2c0_ic_intr_mask_m_tx_empty,
  field_i2c0_ic_intr_mask_m_rd_req,
  field_i2c0_ic_intr_mask_m_tx_abrt,
  field_i2c0_ic_intr_mask_m_rx_done,
  field_i2c0_ic_intr_mask_m_activity,
  field_i2c0_ic_intr_mask_m_stop_det,
  field_i2c0_ic_intr_mask_m_start_det,
  field_i2c0_ic_intr_mask_m_gen_call,
  field_i2c0_ic_intr_mask_m_restart_det,
  field_i2c0_ic_intr_stat_r_rx_under,
  field_i2c0_ic_intr_stat_r_rx_over,
  field_i2c0_ic_intr_stat_r_rx_full,
  field_i2c0_ic_intr_stat_r_tx_over,
  field_i2c0_ic_intr_stat_r_tx_empty,
  field_i2c0_ic_intr_stat_r_rd_req,
  field_i2c0_ic_intr_stat_r_tx_abrt,
  field_i2c0_ic_intr_stat_r_rx_done,
  field_i2c0_ic_intr_stat_r_activity,
  field_i2c0_ic_intr_stat_r_stop_det,
  field_i2c0_ic_intr_stat_r_start_det,
  field_i2c0_ic_intr_stat_r_gen_call,
  field_i2c0_ic_intr_stat_r_restart_det,
  field_i2c0_ic_raw_intr_stat_rx_under,
  field_i2c0_ic_raw_intr_stat_rx_over,
  field_i2c0_ic_raw_intr_stat_rx_full,
  field_i2c0_ic_raw_intr_stat_tx_over,
  field_i2c0_ic_raw_intr_stat_tx_empty,
  field_i2c0_ic_raw_intr_stat_rd_req,
  field_i2c0_ic_raw_intr_stat_tx_abrt,
  field_i2c0_ic_raw_intr_stat_rx_done,
  field_i2c0_ic_raw_intr_stat_activity,
  field_i2c0_ic_raw_intr_stat_stop_det,
  field_i2c0_ic_raw_intr_stat_start_det,
  field_i2c0_ic_raw_intr_stat_gen_call,
  field_i2c0_ic_raw_intr_stat_restart_det,
  field_i2c0_ic_rxflr_rxflr,
  field_i2c0_ic_rx_tl_rx_tl,
  field_i2c0_ic_sar_ic_sar,
  field_i2c0_ic_sda_hold_ic_sda_tx_hold,
  field_i2c0_ic_sda_hold_ic_sda_rx_hold,
  field_i2c0_ic_sda_setup_sda_setup,
  field_i2c0_ic_slv_data_nack_only_nack,
  field_i2c0_ic_ss_scl_hcnt_ic_ss_scl_hcnt,
  field_i2c0_ic_ss_scl_lcnt_ic_ss_scl_lcnt,
  field_i2c0_ic_status_activity,
  field_i2c0_ic_status_tfnf,
  field_i2c0_ic_status_tfe,
  field_i2c0_ic_status_rfne,
  field_i2c0_ic_status_rff,
  field_i2c0_ic_status_mst_activity,
  field_i2c0_ic_status_slv_activity,
  field_i2c0_ic_tar_ic_tar,
  field_i2c0_ic_tar_gc_or_start,
  field_i2c0_ic_tar_special,
  field_i2c0_ic_txflr_txflr,
  field_i2c0_ic_tx_abrt_source_abrt_7b_addr_noack,
  field_i2c0_ic_tx_abrt_source_abrt_10addr1_noack,
  field_i2c0_ic_tx_abrt_source_abrt_10addr2_noack,
  field_i2c0_ic_tx_abrt_source_abrt_txdata_noack,
  field_i2c0_ic_tx_abrt_source_abrt_gcall_noack,
  field_i2c0_ic_tx_abrt_source_abrt_gcall_read,
  field_i2c0_ic_tx_abrt_source_abrt_hs_ackdet,
  field_i2c0_ic_tx_abrt_source_abrt_sbyte_ackdet,
  field_i2c0_ic_tx_abrt_source_abrt_hs_norstrt,
  field_i2c0_ic_tx_abrt_source_abrt_sbyte_norstrt,
  field_i2c0_ic_tx_abrt_source_abrt_10b_rd_norstrt,
  field_i2c0_ic_tx_abrt_source_abrt_master_dis,
  field_i2c0_ic_tx_abrt_source_arb_lost,
  field_i2c0_ic_tx_abrt_source_abrt_slvflush_txfifo,
  field_i2c0_ic_tx_abrt_source_abrt_slv_arblost,
  field_i2c0_ic_tx_abrt_source_abrt_slvrd_intx,
  field_i2c0_ic_tx_abrt_source_abrt_user_abrt,
  field_i2c0_ic_tx_abrt_source_tx_flush_cnt,
  field_i2c0_ic_tx_tl_tx_tl,
  field_i2c1_ic_ack_general_call_ack_gen_call,
  field_i2c1_ic_clr_activity_clr_activity,
  field_i2c1_ic_clr_gen_call_clr_gen_call,
  field_i2c1_ic_clr_intr_clr_intr,
  field_i2c1_ic_clr_rd_req_clr_rd_req,
  field_i2c1_ic_clr_restart_det_clr_restart_det,
  field_i2c1_ic_clr_rx_done_clr_rx_done,
  field_i2c1_ic_clr_rx_over_clr_rx_over,
  field_i2c1_ic_clr_rx_under_clr_rx_under,
  field_i2c1_ic_clr_start_det_clr_start_det,
  field_i2c1_ic_clr_stop_det_clr_stop_det,
  field_i2c1_ic_clr_tx_abrt_clr_tx_abrt,
  field_i2c1_ic_clr_tx_over_clr_tx_over,
  field_i2c1_ic_comp_param_1_apb_data_width,
  field_i2c1_ic_comp_param_1_max_speed_mode,
  field_i2c1_ic_comp_param_1_hc_count_values,
  field_i2c1_ic_comp_param_1_intr_io,
  field_i2c1_ic_comp_param_1_has_dma,
  field_i2c1_ic_comp_param_1_add_encoded_params,
  field_i2c1_ic_comp_param_1_rx_buffer_depth,
  field_i2c1_ic_comp_param_1_tx_buffer_depth,
  field_i2c1_ic_comp_type_ic_comp_type,
  field_i2c1_ic_comp_version_ic_comp_version,
  field_i2c1_ic_con_master_mode,
  field_i2c1_ic_con_speed,
  field_i2c1_ic_con_ic_10bitaddr_slave,
  field_i2c1_ic_con_ic_10bitaddr_master,
  field_i2c1_ic_con_ic_restart_en,
  field_i2c1_ic_con_ic_slave_disable,
  field_i2c1_ic_con_stop_det_ifaddressed,
  field_i2c1_ic_con_tx_empty_ctrl,
  field_i2c1_ic_con_rx_fifo_full_hld_ctrl,
  field_i2c1_ic_con_stop_det_if_master_active,
  field_i2c1_ic_data_cmd_dat,
  field_i2c1_ic_data_cmd_cmd,
  field_i2c1_ic_data_cmd_stop,
  field_i2c1_ic_data_cmd_restart,
  field_i2c1_ic_data_cmd_first_data_byte,
  field_i2c1_ic_dma_cr_rdmae,
  field_i2c1_ic_dma_cr_tdmae,
  field_i2c1_ic_dma_rdlr_dmardl,
  field_i2c1_ic_dma_tdlr_dmatdl,
  field_i2c1_ic_enable_enable,
  field_i2c1_ic_enable_abort,
  field_i2c1_ic_enable_tx_cmd_block,
  field_i2c1_ic_enable_status_ic_en,
  field_i2c1_ic_enable_status_slv_disabled_while_busy,
  field_i2c1_ic_enable_status_slv_rx_data_lost,
  field_i2c1_ic_fs_scl_hcnt_ic_fs_scl_hcnt,
  field_i2c1_ic_fs_scl_lcnt_ic_fs_scl_lcnt,
  field_i2c1_ic_fs_spklen_ic_fs_spklen,
  field_i2c1_ic_intr_mask_m_rx_under,
  field_i2c1_ic_intr_mask_m_rx_over,
  field_i2c1_ic_intr_mask_m_rx_full,
  field_i2c1_ic_intr_mask_m_tx_over,
  field_i2c1_ic_intr_mask_m_tx_empty,
  field_i2c1_ic_intr_mask_m_rd_req,
  field_i2c1_ic_intr_mask_m_tx_abrt,
  field_i2c1_ic_intr_mask_m_rx_done,
  field_i2c1_ic_intr_mask_m_activity,
  field_i2c1_ic_intr_mask_m_stop_det,
  field_i2c1_ic_intr_mask_m_start_det,
  field_i2c1_ic_intr_mask_m_gen_call,
  field_i2c1_ic_intr_mask_m_restart_det,
  field_i2c1_ic_intr_stat_r_rx_under,
  field_i2c1_ic_intr_stat_r_rx_over,
  field_i2c1_ic_intr_stat_r_rx_full,
  field_i2c1_ic_intr_stat_r_tx_over,
  field_i2c1_ic_intr_stat_r_tx_empty,
  field_i2c1_ic_intr_stat_r_rd_req,
  field_i2c1_ic_intr_stat_r_tx_abrt,
  field_i2c1_ic_intr_stat_r_rx_done,
  field_i2c1_ic_intr_stat_r_activity,
  field_i2c1_ic_intr_stat_r_stop_det,
  field_i2c1_ic_intr_stat_r_start_det,
  field_i2c1_ic_intr_stat_r_gen_call,
  field_i2c1_ic_intr_stat_r_restart_det,
  field_i2c1_ic_raw_intr_stat_rx_under,
  field_i2c1_ic_raw_intr_stat_rx_over,
  field_i2c1_ic_raw_intr_stat_rx_full,
  field_i2c1_ic_raw_intr_stat_tx_over,
  field_i2c1_ic_raw_intr_stat_tx_empty,
  field_i2c1_ic_raw_intr_stat_rd_req,
  field_i2c1_ic_raw_intr_stat_tx_abrt,
  field_i2c1_ic_raw_intr_stat_rx_done,
  field_i2c1_ic_raw_intr_stat_activity,
  field_i2c1_ic_raw_intr_stat_stop_det,
  field_i2c1_ic_raw_intr_stat_start_det,
  field_i2c1_ic_raw_intr_stat_gen_call,
  field_i2c1_ic_raw_intr_stat_restart_det,
  field_i2c1_ic_rxflr_rxflr,
  field_i2c1_ic_rx_tl_rx_tl,
  field_i2c1_ic_sar_ic_sar,
  field_i2c1_ic_sda_hold_ic_sda_tx_hold,
  field_i2c1_ic_sda_hold_ic_sda_rx_hold,
  field_i2c1_ic_sda_setup_sda_setup,
  field_i2c1_ic_slv_data_nack_only_nack,
  field_i2c1_ic_ss_scl_hcnt_ic_ss_scl_hcnt,
  field_i2c1_ic_ss_scl_lcnt_ic_ss_scl_lcnt,
  field_i2c1_ic_status_activity,
  field_i2c1_ic_status_tfnf,
  field_i2c1_ic_status_tfe,
  field_i2c1_ic_status_rfne,
  field_i2c1_ic_status_rff,
  field_i2c1_ic_status_mst_activity,
  field_i2c1_ic_status_slv_activity,
  field_i2c1_ic_tar_ic_tar,
  field_i2c1_ic_tar_gc_or_start,
  field_i2c1_ic_tar_special,
  field_i2c1_ic_txflr_txflr,
  field_i2c1_ic_tx_abrt_source_abrt_7b_addr_noack,
  field_i2c1_ic_tx_abrt_source_abrt_10addr1_noack,
  field_i2c1_ic_tx_abrt_source_abrt_10addr2_noack,
  field_i2c1_ic_tx_abrt_source_abrt_txdata_noack,
  field_i2c1_ic_tx_abrt_source_abrt_gcall_noack,
  field_i2c1_ic_tx_abrt_source_abrt_gcall_read,
  field_i2c1_ic_tx_abrt_source_abrt_hs_ackdet,
  field_i2c1_ic_tx_abrt_source_abrt_sbyte_ackdet,
  field_i2c1_ic_tx_abrt_source_abrt_hs_norstrt,
  field_i2c1_ic_tx_abrt_source_abrt_sbyte_norstrt,
  field_i2c1_ic_tx_abrt_source_abrt_10b_rd_norstrt,
  field_i2c1_ic_tx_abrt_source_abrt_master_dis,
  field_i2c1_ic_tx_abrt_source_arb_lost,
  field_i2c1_ic_tx_abrt_source_abrt_slvflush_txfifo,
  field_i2c1_ic_tx_abrt_source_abrt_slv_arblost,
  field_i2c1_ic_tx_abrt_source_abrt_slvrd_intx,
  field_i2c1_ic_tx_abrt_source_abrt_user_abrt,
  field_i2c1_ic_tx_abrt_source_tx_flush_cnt,
  field_i2c1_ic_tx_tl_tx_tl,
  field_pwm_ch0_cc_a,
  field_pwm_ch0_cc_b,
  field_pwm_ch0_csr_en,
  field_pwm_ch0_csr_ph_correct,
  field_pwm_ch0_csr_a_inv,
  field_pwm_ch0_csr_b_inv,
  field_pwm_ch0_csr_divmode,
  field_pwm_ch0_csr_ph_ret,
  field_pwm_ch0_csr_ph_adv,
  field_pwm_ch0_ctr_ch0_ctr,
  field_pwm_ch0_div_frac,
  field_pwm_ch0_div_int,
  field_pwm_ch0_top_ch0_top,
  field_pwm_ch1_cc_a,
  field_pwm_ch1_cc_b,
  field_pwm_ch1_csr_en,
  field_pwm_ch1_csr_ph_correct,
  field_pwm_ch1_csr_a_inv,
  field_pwm_ch1_csr_b_inv,
  field_pwm_ch1_csr_divmode,
  field_pwm_ch1_csr_ph_ret,
  field_pwm_ch1_csr_ph_adv,
  field_pwm_ch1_ctr_ch1_ctr,
  field_pwm_ch1_div_frac,
  field_pwm_ch1_div_int,
  field_pwm_ch1_top_ch1_top,
  field_pwm_ch2_cc_a,
  field_pwm_ch2_cc_b,
  field_pwm_ch2_csr_en,
  field_pwm_ch2_csr_ph_correct,
  field_pwm_ch2_csr_a_inv,
  field_pwm_ch2_csr_b_inv,
  field_pwm_ch2_csr_divmode,
  field_pwm_ch2_csr_ph_ret,
  field_pwm_ch2_csr_ph_adv,
  field_pwm_ch2_ctr_ch2_ctr,
  field_pwm_ch2_div_frac,
  field_pwm_ch2_div_int,
  field_pwm_ch2_top_ch2_top,
  field_pwm_ch3_cc_a,
  field_pwm_ch3_cc_b,
  field_pwm_ch3_csr_en,
  field_pwm_ch3_csr_ph_correct,
  field_pwm_ch3_csr_a_inv,
  field_pwm_ch3_csr_b_inv,
  field_pwm_ch3_csr_divmode,
  field_pwm_ch3_csr_ph_ret,
  field_pwm_ch3_csr_ph_adv,
  field_pwm_ch3_ctr_ch3_ctr,
  field_pwm_ch3_div_frac,
  field_pwm_ch3_div_int,
  field_pwm_ch3_top_ch3_top,
  field_pwm_ch4_cc_a,
  field_pwm_ch4_cc_b,
  field_pwm_ch4_csr_en,
  field_pwm_ch4_csr_ph_correct,
  field_pwm_ch4_csr_a_inv,
  field_pwm_ch4_csr_b_inv,
  field_pwm_ch4_csr_divmode,
  field_pwm_ch4_csr_ph_ret,
  field_pwm_ch4_csr_ph_adv,
  field_pwm_ch4_ctr_ch4_ctr,
  field_pwm_ch4_div_frac,
  field_pwm_ch4_div_int,
  field_pwm_ch4_top_ch4_top,
  field_pwm_ch5_cc_a,
  field_pwm_ch5_cc_b,
  field_pwm_ch5_csr_en,
  field_pwm_ch5_csr_ph_correct,
  field_pwm_ch5_csr_a_inv,
  field_pwm_ch5_csr_b_inv,
  field_pwm_ch5_csr_divmode,
  field_pwm_ch5_csr_ph_ret,
  field_pwm_ch5_csr_ph_adv,
  field_pwm_ch5_ctr_ch5_ctr,
  field_pwm_ch5_div_frac,
  field_pwm_ch5_div_int,
  field_pwm_ch5_top_ch5_top,
  field_pwm_ch6_cc_a,
  field_pwm_ch6_cc_b,
  field_pwm_ch6_csr_en,
  field_pwm_ch6_csr_ph_correct,
  field_pwm_ch6_csr_a_inv,
  field_pwm_ch6_csr_b_inv,
  field_pwm_ch6_csr_divmode,
  field_pwm_ch6_csr_ph_ret,
  field_pwm_ch6_csr_ph_adv,
  field_pwm_ch6_ctr_ch6_ctr,
  field_pwm_ch6_div_frac,
  field_pwm_ch6_div_int,
  field_pwm_ch6_top_ch6_top,
  field_pwm_ch7_cc_a,
  field_pwm_ch7_cc_b,
  field_pwm_ch7_csr_en,
  field_pwm_ch7_csr_ph_correct,
  field_pwm_ch7_csr_a_inv,
  field_pwm_ch7_csr_b_inv,
  field_pwm_ch7_csr_divmode,
  field_pwm_ch7_csr_ph_ret,
  field_pwm_ch7_csr_ph_adv,
  field_pwm_ch7_ctr_ch7_ctr,
  field_pwm_ch7_div_frac,
  field_pwm_ch7_div_int,
  field_pwm_ch7_top_ch7_top,
  field_pwm_en_ch0,
  field_pwm_en_ch1,
  field_pwm_en_ch2,
  field_pwm_en_ch3,
  field_pwm_en_ch4,
  field_pwm_en_ch5,
  field_pwm_en_ch6,
  field_pwm_en_ch7,
  field_pwm_inte_ch0,
  field_pwm_inte_ch1,
  field_pwm_inte_ch2,
  field_pwm_inte_ch3,
  field_pwm_inte_ch4,
  field_pwm_inte_ch5,
  field_pwm_inte_ch6,
  field_pwm_inte_ch7,
  field_pwm_intf_ch0,
  field_pwm_intf_ch1,
  field_pwm_intf_ch2,
  field_pwm_intf_ch3,
  field_pwm_intf_ch4,
  field_pwm_intf_ch5,
  field_pwm_intf_ch6,
  field_pwm_intf_ch7,
  field_pwm_intr_ch0,
  field_pwm_intr_ch1,
  field_pwm_intr_ch2,
  field_pwm_intr_ch3,
  field_pwm_intr_ch4,
  field_pwm_intr_ch5,
  field_pwm_intr_ch6,
  field_pwm_intr_ch7,
  field_pwm_ints_ch0,
  field_pwm_ints_ch1,
  field_pwm_ints_ch2,
  field_pwm_ints_ch3,
  field_pwm_ints_ch4,
  field_pwm_ints_ch5,
  field_pwm_ints_ch6,
  field_pwm_ints_ch7,
  field_resets_reset_adc,
  field_resets_reset_dma,
  field_resets_reset_i2c0,
  field_resets_reset_i2c1,
  field_resets_reset_pwm,
  field_resets_reset_rtc,
  field_resets_reset_spi0,
  field_resets_reset_spi1,
  field_resets_reset_timer,
  field_resets_reset_uart0,
  field_resets_reset_uart1,
  field_rtc_clkdiv_m1_clkdiv_m1,
  field_rtc_ctrl_rtc_enable,
  field_rtc_ctrl_rtc_active,
  field_rtc_ctrl_load,
  field_rtc_ctrl_force_notleapyear,
  field_rtc_inte_rtc,
  field_rtc_intf_rtc,
  field_rtc_intr_rtc,
  field_rtc_ints_rtc,
  field_rtc_irq_setup_0_day,
  field_rtc_irq_setup_0_month,
  field_rtc_irq_setup_0_year,
  field_rtc_irq_setup_0_day_ena,
  field_rtc_irq_setup_0_month_ena,
  field_rtc_irq_setup_0_year_ena,
  field_rtc_irq_setup_0_match_ena,
  field_rtc_irq_setup_0_match_active,
  field_rtc_irq_setup_1_sec,
  field_rtc_irq_setup_1_min,
  field_rtc_irq_setup_1_hour,
  field_rtc_irq_setup_1_dotw,
  field_rtc_irq_setup_1_sec_ena,
  field_rtc_irq_setup_1_min_ena,
  field_rtc_irq_setup_1_hour_ena,
  field_rtc_irq_setup_1_dotw_ena,
  field_rtc_rtc_0_sec,
  field_rtc_rtc_0_min,
  field_rtc_rtc_0_hour,
  field_rtc_rtc_0_dotw,
  field_rtc_rtc_1_day,
  field_rtc_rtc_1_month,
  field_rtc_rtc_1_year,
  field_rtc_setup_0_day,
  field_rtc_setup_0_month,
  field_rtc_setup_0_year,
  field_rtc_setup_1_sec,
  field_rtc_setup_1_min,
  field_rtc_setup_1_hour,
  field_rtc_setup_1_dotw,
  field_spi0_sspcpsr_cpsdvsr,
  field_spi0_sspcr0_dss,
  field_spi0_sspcr0_frf,
  field_spi0_sspcr0_spo,
  field_spi0_sspcr0_sph,
  field_spi0_sspcr0_scr,
  field_spi0_sspcr1_lbm,
  field_spi0_sspcr1_sse,
  field_spi0_sspcr1_ms,
  field_spi0_sspcr1_sod,
  field_spi0_sspdmacr_rxdmae,
  field_spi0_sspdmacr_txdmae,
  field_spi0_sspdr_data,
  field_spi0_sspicr_roric,
  field_spi0_sspicr_rtic,
  field_spi0_sspimsc_rorim,
  field_spi0_sspimsc_rtim,
  field_spi0_sspimsc_rxim,
  field_spi0_sspimsc_txim,
  field_spi0_sspmis_rormis,
  field_spi0_sspmis_rtmis,
  field_spi0_sspmis_rxmis,
  field_spi0_sspmis_txmis,
  field_spi0_ssppcellid0_ssppcellid0,
  field_spi0_ssppcellid1_ssppcellid1,
  field_spi0_ssppcellid2_ssppcellid2,
  field_spi0_ssppcellid3_ssppcellid3,
  field_spi0_sspperiphid0_partnumber0,
  field_spi0_sspperiphid1_partnumber1,
  field_spi0_sspperiphid1_designer0,
  field_spi0_sspperiphid2_designer1,
  field_spi0_sspperiphid2_revision,
  field_spi0_sspperiphid3_configuration,
  field_spi0_sspris_rorris,
  field_spi0_sspris_rtris,
  field_spi0_sspris_rxris,
  field_spi0_sspris_txris,
  field_spi0_sspsr_tfe,
  field_spi0_sspsr_tnf,
  field_spi0_sspsr_rne,
  field_spi0_sspsr_rff,
  field_spi0_sspsr_bsy,
  field_spi1_sspcpsr_cpsdvsr,
  field_spi1_sspcr0_dss,
  field_spi1_sspcr0_frf,
  field_spi1_sspcr0_spo,
  field_spi1_sspcr0_sph,
  field_spi1_sspcr0_scr,
  field_spi1_sspcr1_lbm,
  field_spi1_sspcr1_sse,
  field_spi1_sspcr1_ms,
  field_spi1_sspcr1_sod,
  field_spi1_sspdmacr_rxdmae,
  field_spi1_sspdmacr_txdmae,
  field_spi1_sspdr_data,
  field_spi1_sspicr_roric,
  field_spi1_sspicr_rtic,
  field_spi1_sspimsc_rorim,
  field_spi1_sspimsc_rtim,
  field_spi1_sspimsc_rxim,
  field_spi1_sspimsc_txim,
  field_spi1_sspmis_rormis,
  field_spi1_sspmis_rtmis,
  field_spi1_sspmis_rxmis,
  field_spi1_sspmis_txmis,
  field_spi1_ssppcellid0_ssppcellid0,
  field_spi1_ssppcellid1_ssppcellid1,
  field_spi1_ssppcellid2_ssppcellid2,
  field_spi1_ssppcellid3_ssppcellid3,
  field_spi1_sspperiphid0_partnumber0,
  field_spi1_sspperiphid1_partnumber1,
  field_spi1_sspperiphid1_designer0,
  field_spi1_sspperiphid2_designer1,
  field_spi1_sspperiphid2_revision,
  field_spi1_sspperiphid3_configuration,
  field_spi1_sspris_rorris,
  field_spi1_sspris_rtris,
  field_spi1_sspris_rxris,
  field_spi1_sspris_txris,
  field_spi1_sspsr_tfe,
  field_spi1_sspsr_tnf,
  field_spi1_sspsr_rne,
  field_spi1_sspsr_rff,
  field_spi1_sspsr_bsy,
  field_timer_alarm0_alarm0,
  field_timer_alarm1_alarm1,
  field_timer_alarm2_alarm2,
  field_timer_alarm3_alarm3,
  field_timer_armed_armed,
  field_timer_dbgpause_dbg0,
  field_timer_dbgpause_dbg1,
  field_timer_inte_alarm_0,
  field_timer_inte_alarm_1,
  field_timer_inte_alarm_2,
  field_timer_inte_alarm_3,
  field_timer_intf_alarm_0,
  field_timer_intf_alarm_1,
  field_timer_intf_alarm_2,
  field_timer_intf_alarm_3,
  field_timer_intr_alarm_0,
  field_timer_intr_alarm_1,
  field_timer_intr_alarm_2,
  field_timer_intr_alarm_3,
  field_timer_ints_alarm_0,
  field_timer_ints_alarm_1,
  field_timer_ints_alarm_2,
  field_timer_ints_alarm_3,
  field_timer_pause_pause,
  field_timer_timehr_timehr,
  field_timer_timehw_timehw,
  field_timer_timelr_timelr,
  field_timer_timelw_timelw,
  field_timer_timerawh_timerawh,
  field_timer_timerawl_timerawl,
  field_uart0_uartcr_uarten,
  field_uart0_uartcr_siren,
  field_uart0_uartcr_sirlp,
  field_uart0_uartcr_lbe,
  field_uart0_uartcr_txe,
  field_uart0_uartcr_rxe,
  field_uart0_uartcr_dtr,
  field_uart0_uartcr_rts,
  field_uart0_uartcr_out1,
  field_uart0_uartcr_out2,
  field_uart0_uartcr_rtsen,
  field_uart0_uartcr_ctsen,
  field_uart0_uartdmacr_rxdmae,
  field_uart0_uartdmacr_txdmae,
  field_uart0_uartdmacr_dmaonerr,
  field_uart0_uartdr_data,
  field_uart0_uartdr_fe,
  field_uart0_uartdr_pe,
  field_uart0_uartdr_be,
  field_uart0_uartdr_oe,
  field_uart0_uartfbrd_baud_divfrac,
  field_uart0_uartfr_cts,
  field_uart0_uartfr_dsr,
  field_uart0_uartfr_dcd,
  field_uart0_uartfr_busy,
  field_uart0_uartfr_rxfe,
  field_uart0_uartfr_txff,
  field_uart0_uartfr_rxff,
  field_uart0_uartfr_txfe,
  field_uart0_uartfr_ri,
  field_uart0_uartibrd_baud_divint,
  field_uart0_uarticr_rimic,
  field_uart0_uarticr_ctsmic,
  field_uart0_uarticr_dcdmic,
  field_uart0_uarticr_dsrmic,
  field_uart0_uarticr_rxic,
  field_uart0_uarticr_txic,
  field_uart0_uarticr_rtic,
  field_uart0_uarticr_feic,
  field_uart0_uarticr_peic,
  field_uart0_uarticr_beic,
  field_uart0_uarticr_oeic,
  field_uart0_uartifls_txiflsel,
  field_uart0_uartifls_rxiflsel,
  field_uart0_uartilpr_ilpdvsr,
  field_uart0_uartimsc_rimim,
  field_uart0_uartimsc_ctsmim,
  field_uart0_uartimsc_dcdmim,
  field_uart0_uartimsc_dsrmim,
  field_uart0_uartimsc_rxim,
  field_uart0_uartimsc_txim,
  field_uart0_uartimsc_rtim,
  field_uart0_uartimsc_feim,
  field_uart0_uartimsc_peim,
  field_uart0_uartimsc_beim,
  field_uart0_uartimsc_oeim,
  field_uart0_uartlcr_h_brk,
  field_uart0_uartlcr_h_pen,
  field_uart0_uartlcr_h_eps,
  field_uart0_uartlcr_h_stp2,
  field_uart0_uartlcr_h_fen,
  field_uart0_uartlcr_h_wlen,
  field_uart0_uartlcr_h_sps,
  field_uart0_uartmis_rimmis,
  field_uart0_uartmis_ctsmmis,
  field_uart0_uartmis_dcdmmis,
  field_uart0_uartmis_dsrmmis,
  field_uart0_uartmis_rxmis,
  field_uart0_uartmis_txmis,
  field_uart0_uartmis_rtmis,
  field_uart0_uartmis_femis,
  field_uart0_uartmis_pemis,
  field_uart0_uartmis_bemis,
  field_uart0_uartmis_oemis,
  field_uart0_uartpcellid0_uartpcellid0,
  field_uart0_uartpcellid1_uartpcellid1,
  field_uart0_uartpcellid2_uartpcellid2,
  field_uart0_uartpcellid3_uartpcellid3,
  field_uart0_uartperiphid0_partnumber0,
  field_uart0_uartperiphid1_partnumber1,
  field_uart0_uartperiphid1_designer0,
  field_uart0_uartperiphid2_designer1,
  field_uart0_uartperiphid2_revision,
  field_uart0_uartperiphid3_configuration,
  field_uart0_uartris_rirmis,
  field_uart0_uartris_ctsrmis,
  field_uart0_uartris_dcdrmis,
  field_uart0_uartris_dsrrmis,
  field_uart0_uartris_rxris,
  field_uart0_uartris_txris,
  field_uart0_uartris_rtris,
  field_uart0_uartris_feris,
  field_uart0_uartris_peris,
  field_uart0_uartris_beris,
  field_uart0_uartris_oeris,
  field_uart0_uartrsr_fe,
  field_uart0_uartrsr_pe,
  field_uart0_uartrsr_be,
  field_uart0_uartrsr_oe,
  field_uart1_uartcr_uarten,
  field_uart1_uartcr_siren,
  field_uart1_uartcr_sirlp,
  field_uart1_uartcr_lbe,
  field_uart1_uartcr_txe,
  field_uart1_uartcr_rxe,
  field_uart1_uartcr_dtr,
  field_uart1_uartcr_rts,
  field_uart1_uartcr_out1,
  field_uart1_uartcr_out2,
  field_uart1_uartcr_rtsen,
  field_uart1_uartcr_ctsen,
  field_uart1_uartdmacr_rxdmae,
  field_uart1_uartdmacr_txdmae,
  field_uart1_uartdmacr_dmaonerr,
  field_uart1_uartdr_data,
  field_uart1_uartdr_fe,
  field_uart1_uartdr_pe,
  field_uart1_uartdr_be,
  field_uart1_uartdr_oe,
  field_uart1_uartfbrd_baud_divfrac,
  field_uart1_uartfr_cts,
  field_uart1_uartfr_dsr,
  field_uart1_uartfr_dcd,
  field_uart1_uartfr_busy,
  field_uart1_uartfr_rxfe,
  field_uart1_uartfr_txff,
  field_uart1_uartfr_rxff,
  field_uart1_uartfr_txfe,
  field_uart1_uartfr_ri,
  field_uart1_uartibrd_baud_divint,
  field_uart1_uarticr_rimic,
  field_uart1_uarticr_ctsmic,
  field_uart1_uarticr_dcdmic,
  field_uart1_uarticr_dsrmic,
  field_uart1_uarticr_rxic,
  field_uart1_uarticr_txic,
  field_uart1_uarticr_rtic,
  field_uart1_uarticr_feic,
  field_uart1_uarticr_peic,
  field_uart1_uarticr_beic,
  field_uart1_uarticr_oeic,
  field_uart1_uartifls_txiflsel,
  field_uart1_uartifls_rxiflsel,
  field_uart1_uartilpr_ilpdvsr,
  field_uart1_uartimsc_rimim,
  field_uart1_uartimsc_ctsmim,
  field_uart1_uartimsc_dcdmim,
  field_uart1_uartimsc_dsrmim,
  field_uart1_uartimsc_rxim,
  field_uart1_uartimsc_txim,
  field_uart1_uartimsc_rtim,
  field_uart1_uartimsc_feim,
  field_uart1_uartimsc_peim,
  field_uart1_uartimsc_beim,
  field_uart1_uartimsc_oeim,
  field_uart1_uartlcr_h_brk,
  field_uart1_uartlcr_h_pen,
  field_uart1_uartlcr_h_eps,
  field_uart1_uartlcr_h_stp2,
  field_uart1_uartlcr_h_fen,
  field_uart1_uartlcr_h_wlen,
  field_uart1_uartlcr_h_sps,
  field_uart1_uartmis_rimmis,
  field_uart1_uartmis_ctsmmis,
  field_uart1_uartmis_dcdmmis,
  field_uart1_uartmis_dsrmmis,
  field_uart1_uartmis_rxmis,
  field_uart1_uartmis_txmis,
  field_uart1_uartmis_rtmis,
  field_uart1_uartmis_femis,
  field_uart1_uartmis_pemis,
  field_uart1_uartmis_bemis,
  field_uart1_uartmis_oemis,
  field_uart1_uartpcellid0_uartpcellid0,
  field_uart1_uartpcellid1_uartpcellid1,
  field_uart1_uartpcellid2_uartpcellid2,
  field_uart1_uartpcellid3_uartpcellid3,
  field_uart1_uartperiphid0_partnumber0,
  field_uart1_uartperiphid1_partnumber1,
  field_uart1_uartperiphid1_designer0,
  field_uart1_uartperiphid2_designer1,
  field_uart1_uartperiphid2_revision,
  field_uart1_uartperiphid3_configuration,
  field_uart1_uartris_rirmis,
  field_uart1_uartris_ctsrmis,
  field_uart1_uartris_dcdrmis,
  field_uart1_uartris_dsrrmis,
  field_uart1_uartris_rxris,
  field_uart1_uartris_txris,
  field_uart1_uartris_rtris,
  field_uart1_uartris_feris,
  field_uart1_uartris_peris,
  field_uart1_uartris_beris,
  field_uart1_uartris_oeris,
  field_uart1_uartrsr_fe,
  field_uart1_uartrsr_pe,
  field_uart1_uartrsr_be,
  field_uart1_uartrsr_oe,
  field_usb_addr_endp_address,
  field_usb_addr_endp_endpoint,
  field_usb_addr_endp1_address,
  field_usb_addr_endp1_endpoint,
  field_usb_addr_endp1_intep_dir,
  field_usb_addr_endp1_intep_preamble,
  field_usb_addr_endp10_address,
  field_usb_addr_endp10_endpoint,
  field_usb_addr_endp10_intep_dir,
  field_usb_addr_endp10_intep_preamble,
  field_usb_addr_endp11_address,
  field_usb_addr_endp11_endpoint,
  field_usb_addr_endp11_intep_dir,
  field_usb_addr_endp11_intep_preamble,
  field_usb_addr_endp12_address,
  field_usb_addr_endp12_endpoint,
  field_usb_addr_endp12_intep_dir,
  field_usb_addr_endp12_intep_preamble,
  field_usb_addr_endp13_address,
  field_usb_addr_endp13_endpoint,
  field_usb_addr_endp13_intep_dir,
  field_usb_addr_endp13_intep_preamble,
  field_usb_addr_endp14_address,
  field_usb_addr_endp14_endpoint,
  field_usb_addr_endp14_intep_dir,
  field_usb_addr_endp14_intep_preamble,
  field_usb_addr_endp15_address,
  field_usb_addr_endp15_endpoint,
  field_usb_addr_endp15_intep_dir,
  field_usb_addr_endp15_intep_preamble,
  field_usb_addr_endp2_address,
  field_usb_addr_endp2_endpoint,
  field_usb_addr_endp2_intep_dir,
  field_usb_addr_endp2_intep_preamble,
  field_usb_addr_endp3_address,
  field_usb_addr_endp3_endpoint,
  field_usb_addr_endp3_intep_dir,
  field_usb_addr_endp3_intep_preamble,
  field_usb_addr_endp4_address,
  field_usb_addr_endp4_endpoint,
  field_usb_addr_endp4_intep_dir,
  field_usb_addr_endp4_intep_preamble,
  field_usb_addr_endp5_address,
  field_usb_addr_endp5_endpoint,
  field_usb_addr_endp5_intep_dir,
  field_usb_addr_endp5_intep_preamble,
  field_usb_addr_endp6_address,
  field_usb_addr_endp6_endpoint,
  field_usb_addr_endp6_intep_dir,
  field_usb_addr_endp6_intep_preamble,
  field_usb_addr_endp7_address,
  field_usb_addr_endp7_endpoint,
  field_usb_addr_endp7_intep_dir,
  field_usb_addr_endp7_intep_preamble,
  field_usb_addr_endp8_address,
  field_usb_addr_endp8_endpoint,
  field_usb_addr_endp8_intep_dir,
  field_usb_addr_endp8_intep_preamble,
  field_usb_addr_endp9_address,
  field_usb_addr_endp9_endpoint,
  field_usb_addr_endp9_intep_dir,
  field_usb_addr_endp9_intep_preamble,
  field_usb_buff_cpu_should_handle_ep0_in,
  field_usb_buff_cpu_should_handle_ep0_out,
  field_usb_buff_cpu_should_handle_ep1_in,
  field_usb_buff_cpu_should_handle_ep1_out,
  field_usb_buff_cpu_should_handle_ep2_in,
  field_usb_buff_cpu_should_handle_ep2_out,
  field_usb_buff_cpu_should_handle_ep3_in,
  field_usb_buff_cpu_should_handle_ep3_out,
  field_usb_buff_cpu_should_handle_ep4_in,
  field_usb_buff_cpu_should_handle_ep4_out,
  field_usb_buff_cpu_should_handle_ep5_in,
  field_usb_buff_cpu_should_handle_ep5_out,
  field_usb_buff_cpu_should_handle_ep6_in,
  field_usb_buff_cpu_should_handle_ep6_out,
  field_usb_buff_cpu_should_handle_ep7_in,
  field_usb_buff_cpu_should_handle_ep7_out,
  field_usb_buff_cpu_should_handle_ep8_in,
  field_usb_buff_cpu_should_handle_ep8_out,
  field_usb_buff_cpu_should_handle_ep9_in,
  field_usb_buff_cpu_should_handle_ep9_out,
  field_usb_buff_cpu_should_handle_ep10_in,
  field_usb_buff_cpu_should_handle_ep10_out,
  field_usb_buff_cpu_should_handle_ep11_in,
  field_usb_buff_cpu_should_handle_ep11_out,
  field_usb_buff_cpu_should_handle_ep12_in,
  field_usb_buff_cpu_should_handle_ep12_out,
  field_usb_buff_cpu_should_handle_ep13_in,
  field_usb_buff_cpu_should_handle_ep13_out,
  field_usb_buff_cpu_should_handle_ep14_in,
  field_usb_buff_cpu_should_handle_ep14_out,
  field_usb_buff_cpu_should_handle_ep15_in,
  field_usb_buff_cpu_should_handle_ep15_out,
  field_usb_buff_status_ep0_in,
  field_usb_buff_status_ep0_out,
  field_usb_buff_status_ep1_in,
  field_usb_buff_status_ep1_out,
  field_usb_buff_status_ep2_in,
  field_usb_buff_status_ep2_out,
  field_usb_buff_status_ep3_in,
  field_usb_buff_status_ep3_out,
  field_usb_buff_status_ep4_in,
  field_usb_buff_status_ep4_out,
  field_usb_buff_status_ep5_in,
  field_usb_buff_status_ep5_out,
  field_usb_buff_status_ep6_in,
  field_usb_buff_status_ep6_out,
  field_usb_buff_status_ep7_in,
  field_usb_buff_status_ep7_out,
  field_usb_buff_status_ep8_in,
  field_usb_buff_status_ep8_out,
  field_usb_buff_status_ep9_in,
  field_usb_buff_status_ep9_out,
  field_usb_buff_status_ep10_in,
  field_usb_buff_status_ep10_out,
  field_usb_buff_status_ep11_in,
  field_usb_buff_status_ep11_out,
  field_usb_buff_status_ep12_in,
  field_usb_buff_status_ep12_out,
  field_usb_buff_status_ep13_in,
  field_usb_buff_status_ep13_out,
  field_usb_buff_status_ep14_in,
  field_usb_buff_status_ep14_out,
  field_usb_buff_status_ep15_in,
  field_usb_buff_status_ep15_out,
  field_usb_ep_abort_ep0_in,
  field_usb_ep_abort_ep0_out,
  field_usb_ep_abort_ep1_in,
  field_usb_ep_abort_ep1_out,
  field_usb_ep_abort_ep2_in,
  field_usb_ep_abort_ep2_out,
  field_usb_ep_abort_ep3_in,
  field_usb_ep_abort_ep3_out,
  field_usb_ep_abort_ep4_in,
  field_usb_ep_abort_ep4_out,
  field_usb_ep_abort_ep5_in,
  field_usb_ep_abort_ep5_out,
  field_usb_ep_abort_ep6_in,
  field_usb_ep_abort_ep6_out,
  field_usb_ep_abort_ep7_in,
  field_usb_ep_abort_ep7_out,
  field_usb_ep_abort_ep8_in,
  field_usb_ep_abort_ep8_out,
  field_usb_ep_abort_ep9_in,
  field_usb_ep_abort_ep9_out,
  field_usb_ep_abort_ep10_in,
  field_usb_ep_abort_ep10_out,
  field_usb_ep_abort_ep11_in,
  field_usb_ep_abort_ep11_out,
  field_usb_ep_abort_ep12_in,
  field_usb_ep_abort_ep12_out,
  field_usb_ep_abort_ep13_in,
  field_usb_ep_abort_ep13_out,
  field_usb_ep_abort_ep14_in,
  field_usb_ep_abort_ep14_out,
  field_usb_ep_abort_ep15_in,
  field_usb_ep_abort_ep15_out,
  field_usb_ep_abort_done_ep0_in,
  field_usb_ep_abort_done_ep0_out,
  field_usb_ep_abort_done_ep1_in,
  field_usb_ep_abort_done_ep1_out,
  field_usb_ep_abort_done_ep2_in,
  field_usb_ep_abort_done_ep2_out,
  field_usb_ep_abort_done_ep3_in,
  field_usb_ep_abort_done_ep3_out,
  field_usb_ep_abort_done_ep4_in,
  field_usb_ep_abort_done_ep4_out,
  field_usb_ep_abort_done_ep5_in,
  field_usb_ep_abort_done_ep5_out,
  field_usb_ep_abort_done_ep6_in,
  field_usb_ep_abort_done_ep6_out,
  field_usb_ep_abort_done_ep7_in,
  field_usb_ep_abort_done_ep7_out,
  field_usb_ep_abort_done_ep8_in,
  field_usb_ep_abort_done_ep8_out,
  field_usb_ep_abort_done_ep9_in,
  field_usb_ep_abort_done_ep9_out,
  field_usb_ep_abort_done_ep10_in,
  field_usb_ep_abort_done_ep10_out,
  field_usb_ep_abort_done_ep11_in,
  field_usb_ep_abort_done_ep11_out,
  field_usb_ep_abort_done_ep12_in,
  field_usb_ep_abort_done_ep12_out,
  field_usb_ep_abort_done_ep13_in,
  field_usb_ep_abort_done_ep13_out,
  field_usb_ep_abort_done_ep14_in,
  field_usb_ep_abort_done_ep14_out,
  field_usb_ep_abort_done_ep15_in,
  field_usb_ep_abort_done_ep15_out,
  field_usb_ep_stall_arm_ep0_in,
  field_usb_ep_stall_arm_ep0_out,
  field_usb_ep_status_stall_nak_ep0_in,
  field_usb_ep_status_stall_nak_ep0_out,
  field_usb_ep_status_stall_nak_ep1_in,
  field_usb_ep_status_stall_nak_ep1_out,
  field_usb_ep_status_stall_nak_ep2_in,
  field_usb_ep_status_stall_nak_ep2_out,
  field_usb_ep_status_stall_nak_ep3_in,
  field_usb_ep_status_stall_nak_ep3_out,
  field_usb_ep_status_stall_nak_ep4_in,
  field_usb_ep_status_stall_nak_ep4_out,
  field_usb_ep_status_stall_nak_ep5_in,
  field_usb_ep_status_stall_nak_ep5_out,
  field_usb_ep_status_stall_nak_ep6_in,
  field_usb_ep_status_stall_nak_ep6_out,
  field_usb_ep_status_stall_nak_ep7_in,
  field_usb_ep_status_stall_nak_ep7_out,
  field_usb_ep_status_stall_nak_ep8_in,
  field_usb_ep_status_stall_nak_ep8_out,
  field_usb_ep_status_stall_nak_ep9_in,
  field_usb_ep_status_stall_nak_ep9_out,
  field_usb_ep_status_stall_nak_ep10_in,
  field_usb_ep_status_stall_nak_ep10_out,
  field_usb_ep_status_stall_nak_ep11_in,
  field_usb_ep_status_stall_nak_ep11_out,
  field_usb_ep_status_stall_nak_ep12_in,
  field_usb_ep_status_stall_nak_ep12_out,
  field_usb_ep_status_stall_nak_ep13_in,
  field_usb_ep_status_stall_nak_ep13_out,
  field_usb_ep_status_stall_nak_ep14_in,
  field_usb_ep_status_stall_nak_ep14_out,
  field_usb_ep_status_stall_nak_ep15_in,
  field_usb_ep_status_stall_nak_ep15_out,
  field_usb_inte_host_conn_dis,
  field_usb_inte_host_resume,
  field_usb_inte_host_sof,
  field_usb_inte_trans_complete,
  field_usb_inte_buff_status,
  field_usb_inte_error_data_seq,
  field_usb_inte_error_rx_timeout,
  field_usb_inte_error_rx_overflow,
  field_usb_inte_error_bit_stuff,
  field_usb_inte_error_crc,
  field_usb_inte_stall,
  field_usb_inte_vbus_detect,
  field_usb_inte_bus_reset,
  field_usb_inte_dev_conn_dis,
  field_usb_inte_dev_suspend,
  field_usb_inte_dev_resume_from_host,
  field_usb_inte_setup_req,
  field_usb_inte_dev_sof,
  field_usb_inte_abort_done,
  field_usb_inte_ep_stall_nak,
  field_usb_intf_host_conn_dis,
  field_usb_intf_host_resume,
  field_usb_intf_host_sof,
  field_usb_intf_trans_complete,
  field_usb_intf_buff_status,
  field_usb_intf_error_data_seq,
  field_usb_intf_error_rx_timeout,
  field_usb_intf_error_rx_overflow,
  field_usb_intf_error_bit_stuff,
  field_usb_intf_error_crc,
  field_usb_intf_stall,
  field_usb_intf_vbus_detect,
  field_usb_intf_bus_reset,
  field_usb_intf_dev_conn_dis,
  field_usb_intf_dev_suspend,
  field_usb_intf_dev_resume_from_host,
  field_usb_intf_setup_req,
  field_usb_intf_dev_sof,
  field_usb_intf_abort_done,
  field_usb_intf_ep_stall_nak,
  field_usb_intr_host_conn_dis,
  field_usb_intr_host_resume,
  field_usb_intr_host_sof,
  field_usb_intr_trans_complete,
  field_usb_intr_buff_status,
  field_usb_intr_error_data_seq,
  field_usb_intr_error_rx_timeout,
  field_usb_intr_error_rx_overflow,
  field_usb_intr_error_bit_stuff,
  field_usb_intr_error_crc,
  field_usb_intr_stall,
  field_usb_intr_vbus_detect,
  field_usb_intr_bus_reset,
  field_usb_intr_dev_conn_dis,
  field_usb_intr_dev_suspend,
  field_usb_intr_dev_resume_from_host,
  field_usb_intr_setup_req,
  field_usb_intr_dev_sof,
  field_usb_intr_abort_done,
  field_usb_intr_ep_stall_nak,
  field_usb_ints_host_conn_dis,
  field_usb_ints_host_resume,
  field_usb_ints_host_sof,
  field_usb_ints_trans_complete,
  field_usb_ints_buff_status,
  field_usb_ints_error_data_seq,
  field_usb_ints_error_rx_timeout,
  field_usb_ints_error_rx_overflow,
  field_usb_ints_error_bit_stuff,
  field_usb_ints_error_crc,
  field_usb_ints_stall,
  field_usb_ints_vbus_detect,
  field_usb_ints_bus_reset,
  field_usb_ints_dev_conn_dis,
  field_usb_ints_dev_suspend,
  field_usb_ints_dev_resume_from_host,
  field_usb_ints_setup_req,
  field_usb_ints_dev_sof,
  field_usb_ints_abort_done,
  field_usb_ints_ep_stall_nak,
  field_usb_int_ep_ctrl_int_ep_active,
  field_usb_main_ctrl_controller_en,
  field_usb_main_ctrl_host_ndevice,
  field_usb_main_ctrl_sim_timing,
  field_usb_nak_poll_delay_ls,
  field_usb_nak_poll_delay_fs,
  field_usb_sie_ctrl_start_trans,
  field_usb_sie_ctrl_send_setup,
  field_usb_sie_ctrl_send_data,
  field_usb_sie_ctrl_receive_data,
  field_usb_sie_ctrl_stop_trans,
  field_usb_sie_ctrl_preamble_en,
  field_usb_sie_ctrl_sof_sync,
  field_usb_sie_ctrl_sof_en,
  field_usb_sie_ctrl_keep_alive_en,
  field_usb_sie_ctrl_vbus_en,
  field_usb_sie_ctrl_resume,
  field_usb_sie_ctrl_reset_bus,
  field_usb_sie_ctrl_pulldown_en,
  field_usb_sie_ctrl_pullup_en,
  field_usb_sie_ctrl_rpu_opt,
  field_usb_sie_ctrl_transceiver_pd,
  field_usb_sie_ctrl_direct_dm,
  field_usb_sie_ctrl_direct_dp,
  field_usb_sie_ctrl_direct_en,
  field_usb_sie_ctrl_ep0_int_nak,
  field_usb_sie_ctrl_ep0_int_2buf,
  field_usb_sie_ctrl_ep0_int_1buf,
  field_usb_sie_ctrl_ep0_double_buf,
  field_usb_sie_ctrl_ep0_int_stall,
  field_usb_sie_status_vbus_detected,
  field_usb_sie_status_line_state,
  field_usb_sie_status_suspended,
  field_usb_sie_status_speed,
  field_usb_sie_status_vbus_over_curr,
  field_usb_sie_status_resume,
  field_usb_sie_status_connected,
  field_usb_sie_status_setup_rec,
  field_usb_sie_status_trans_complete,
  field_usb_sie_status_bus_reset,
  field_usb_sie_status_crc_error,
  field_usb_sie_status_bit_stuff_error,
  field_usb_sie_status_rx_overflow,
  field_usb_sie_status_rx_timeout,
  field_usb_sie_status_nak_rec,
  field_usb_sie_status_stall_rec,
  field_usb_sie_status_ack_rec,
  field_usb_sie_status_data_seq_error,
  field_usb_sof_rd_count,
  field_usb_sof_wr_count,
  field_usb_usbphy_direct_dp_pullup_hisel,
  field_usb_usbphy_direct_dp_pullup_en,
  field_usb_usbphy_direct_dp_pulldn_en,
  field_usb_usbphy_direct_dm_pullup_hisel,
  field_usb_usbphy_direct_dm_pullup_en,
  field_usb_usbphy_direct_dm_pulldn_en,
  field_usb_usbphy_direct_tx_dp_oe,
  field_usb_usbphy_direct_tx_dm_oe,
  field_usb_usbphy_direct_tx_dp,
  field_usb_usbphy_direct_tx_dm,
  field_usb_usbphy_direct_rx_pd,
  field_usb_usbphy_direct_tx_pd,
  field_usb_usbphy_direct_tx_fsslew,
  field_usb_usbphy_direct_tx_diffmode,
  field_usb_usbphy_direct_rx_dd,
  field_usb_usbphy_direct_rx_dp,
  field_usb_usbphy_direct_rx_dm,
  field_usb_usbphy_direct_dp_ovcn,
  field_usb_usbphy_direct_dm_ovcn,
  field_usb_usbphy_direct_dp_ovv,
  field_usb_usbphy_direct_dm_ovv,
  field_usb_usbphy_direct_override_dp_pullup_hisel_override_en,
  field_usb_usbphy_direct_override_dm_pullup_hisel_override_en,
  field_usb_usbphy_direct_override_dp_pullup_en_override_en,
  field_usb_usbphy_direct_override_dp_pulldn_en_override_en,
  field_usb_usbphy_direct_override_dm_pulldn_en_override_en,
  field_usb_usbphy_direct_override_tx_dp_oe_override_en,
  field_usb_usbphy_direct_override_tx_dm_oe_override_en,
  field_usb_usbphy_direct_override_tx_dp_override_en,
  field_usb_usbphy_direct_override_tx_dm_override_en,
  field_usb_usbphy_direct_override_rx_pd_override_en,
  field_usb_usbphy_direct_override_tx_pd_override_en,
  field_usb_usbphy_direct_override_tx_fsslew_override_en,
  field_usb_usbphy_direct_override_dm_pullup_override_en,
  field_usb_usbphy_direct_override_tx_diffmode_override_en,
  field_usb_usbphy_trim_dp_pulldn_trim,
  field_usb_usbphy_trim_dm_pulldn_trim,
  field_usb_usb_muxing_to_phy,
  field_usb_usb_muxing_to_extphy,
  field_usb_usb_muxing_to_digital_pad,
  field_usb_usb_muxing_softcon,
  field_usb_usb_pwr_vbus_en,
  field_usb_usb_pwr_vbus_en_override_en,
  field_usb_usb_pwr_vbus_detect,
  field_usb_usb_pwr_vbus_detect_override_en,
  field_usb_usb_pwr_overcurr_detect,
  field_usb_usb_pwr_overcurr_detect_en,
  field_watchdog_ctrl_time,
  field_watchdog_ctrl_pause_jtag,
  field_watchdog_ctrl_pause_dbg0,
  field_watchdog_ctrl_pause_dbg1,
  field_watchdog_ctrl_enable,
  field_watchdog_ctrl_trigger,
  field_watchdog_load_load,
  field_watchdog_reason_timer,
  field_watchdog_reason_force,
  field_watchdog_scratch0_scratch0,
  field_watchdog_scratch1_scratch1,
  field_watchdog_scratch2_scratch2,
  field_watchdog_scratch3_scratch3,
  field_watchdog_scratch4_scratch4,
  field_watchdog_scratch5_scratch5,
  field_watchdog_scratch6_scratch6,
  field_watchdog_scratch7_scratch7,
  field_watchdog_tick_cycles,
  field_watchdog_tick_enable,
  field_watchdog_tick_running,
  field_watchdog_tick_count,
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
struct RegisterFieldTraits<FieldId::field_adc_cs_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_ts_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_start_once> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_start_many> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_ready> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_err> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_err_sticky> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_ainsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_cs_rrobin> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_cs;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_div;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_shift> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_err> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_dreq_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_level> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fcs_thresh> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fcs;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fifo_val> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fifo;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_fifo_err> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_fifo;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_inte_fifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_inte;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_intf_fifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_intf;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_intr_fifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_ints_fifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_ints;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_adc_result_result> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_adc_result;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al1_ctrl_ch0_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al1_read_addr_ch0_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al1_trans_count_trig_ch0_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al1_write_addr_ch0_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al2_ctrl_ch0_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al2_read_addr_ch0_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al2_trans_count_ch0_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al2_write_addr_trig_ch0_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al3_ctrl_ch0_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al3_read_addr_trig_ch0_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al3_trans_count_ch0_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_al3_write_addr_ch0_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_dbg_ctdreq_ch0_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_dbg_tcr_ch0_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_read_addr_ch0_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_trans_count_ch0_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch0_write_addr_ch0_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch0_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al1_ctrl_ch10_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al1_read_addr_ch10_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al1_trans_count_trig_ch10_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al1_write_addr_ch10_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al2_ctrl_ch10_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al2_read_addr_ch10_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al2_trans_count_ch10_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al2_write_addr_trig_ch10_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al3_ctrl_ch10_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al3_read_addr_trig_ch10_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al3_trans_count_ch10_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_al3_write_addr_ch10_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_dbg_ctdreq_ch10_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_dbg_tcr_ch10_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_read_addr_ch10_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_trans_count_ch10_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch10_write_addr_ch10_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch10_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al1_ctrl_ch11_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al1_read_addr_ch11_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al1_trans_count_trig_ch11_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al1_write_addr_ch11_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al2_ctrl_ch11_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al2_read_addr_ch11_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al2_trans_count_ch11_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al2_write_addr_trig_ch11_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al3_ctrl_ch11_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al3_read_addr_trig_ch11_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al3_trans_count_ch11_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_al3_write_addr_ch11_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_dbg_ctdreq_ch11_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_dbg_tcr_ch11_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_read_addr_ch11_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_trans_count_ch11_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch11_write_addr_ch11_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch11_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al1_ctrl_ch1_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al1_read_addr_ch1_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al1_trans_count_trig_ch1_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al1_write_addr_ch1_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al2_ctrl_ch1_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al2_read_addr_ch1_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al2_trans_count_ch1_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al2_write_addr_trig_ch1_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al3_ctrl_ch1_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al3_read_addr_trig_ch1_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al3_trans_count_ch1_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_al3_write_addr_ch1_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_dbg_ctdreq_ch1_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_dbg_tcr_ch1_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_read_addr_ch1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_trans_count_ch1_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch1_write_addr_ch1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al1_ctrl_ch2_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al1_read_addr_ch2_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al1_trans_count_trig_ch2_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al1_write_addr_ch2_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al2_ctrl_ch2_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al2_read_addr_ch2_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al2_trans_count_ch2_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al2_write_addr_trig_ch2_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al3_ctrl_ch2_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al3_read_addr_trig_ch2_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al3_trans_count_ch2_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_al3_write_addr_ch2_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_dbg_ctdreq_ch2_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_dbg_tcr_ch2_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_read_addr_ch2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_trans_count_ch2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch2_write_addr_ch2_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch2_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al1_ctrl_ch3_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al1_read_addr_ch3_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al1_trans_count_trig_ch3_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al1_write_addr_ch3_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al2_ctrl_ch3_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al2_read_addr_ch3_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al2_trans_count_ch3_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al2_write_addr_trig_ch3_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al3_ctrl_ch3_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al3_read_addr_trig_ch3_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al3_trans_count_ch3_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_al3_write_addr_ch3_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_dbg_ctdreq_ch3_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_dbg_tcr_ch3_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_read_addr_ch3_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_trans_count_ch3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch3_write_addr_ch3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al1_ctrl_ch4_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al1_read_addr_ch4_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al1_trans_count_trig_ch4_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al1_write_addr_ch4_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al2_ctrl_ch4_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al2_read_addr_ch4_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al2_trans_count_ch4_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al2_write_addr_trig_ch4_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al3_ctrl_ch4_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al3_read_addr_trig_ch4_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al3_trans_count_ch4_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_al3_write_addr_ch4_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_dbg_ctdreq_ch4_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_dbg_tcr_ch4_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_read_addr_ch4_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_trans_count_ch4_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch4_write_addr_ch4_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch4_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al1_ctrl_ch5_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al1_read_addr_ch5_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al1_trans_count_trig_ch5_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al1_write_addr_ch5_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al2_ctrl_ch5_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al2_read_addr_ch5_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al2_trans_count_ch5_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al2_write_addr_trig_ch5_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al3_ctrl_ch5_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al3_read_addr_trig_ch5_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al3_trans_count_ch5_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_al3_write_addr_ch5_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_dbg_ctdreq_ch5_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_dbg_tcr_ch5_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_read_addr_ch5_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_trans_count_ch5_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch5_write_addr_ch5_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch5_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al1_ctrl_ch6_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al1_read_addr_ch6_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al1_trans_count_trig_ch6_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al1_write_addr_ch6_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al2_ctrl_ch6_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al2_read_addr_ch6_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al2_trans_count_ch6_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al2_write_addr_trig_ch6_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al3_ctrl_ch6_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al3_read_addr_trig_ch6_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al3_trans_count_ch6_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_al3_write_addr_ch6_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_dbg_ctdreq_ch6_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_dbg_tcr_ch6_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_read_addr_ch6_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_trans_count_ch6_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch6_write_addr_ch6_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch6_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al1_ctrl_ch7_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al1_read_addr_ch7_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al1_trans_count_trig_ch7_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al1_write_addr_ch7_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al2_ctrl_ch7_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al2_read_addr_ch7_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al2_trans_count_ch7_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al2_write_addr_trig_ch7_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al3_ctrl_ch7_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al3_read_addr_trig_ch7_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al3_trans_count_ch7_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_al3_write_addr_ch7_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_dbg_ctdreq_ch7_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_dbg_tcr_ch7_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_read_addr_ch7_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_trans_count_ch7_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch7_write_addr_ch7_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch7_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al1_ctrl_ch8_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al1_read_addr_ch8_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al1_trans_count_trig_ch8_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al1_write_addr_ch8_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al2_ctrl_ch8_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al2_read_addr_ch8_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al2_trans_count_ch8_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al2_write_addr_trig_ch8_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al3_ctrl_ch8_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al3_read_addr_trig_ch8_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al3_trans_count_ch8_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_al3_write_addr_ch8_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_dbg_ctdreq_ch8_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_dbg_tcr_ch8_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_read_addr_ch8_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_trans_count_ch8_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch8_write_addr_ch8_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch8_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al1_ctrl_ch9_al1_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al1_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al1_read_addr_ch9_al1_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al1_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al1_trans_count_trig_ch9_al1_trans_count_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al1_trans_count_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al1_write_addr_ch9_al1_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al1_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al2_ctrl_ch9_al2_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al2_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al2_read_addr_ch9_al2_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al2_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al2_trans_count_ch9_al2_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al2_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al2_write_addr_trig_ch9_al2_write_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al2_write_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al3_ctrl_ch9_al3_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al3_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al3_read_addr_trig_ch9_al3_read_addr_trig> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al3_read_addr_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al3_trans_count_ch9_al3_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al3_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_al3_write_addr_ch9_al3_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_al3_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_high_priority> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_data_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_incr_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_incr_write> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_ring_size> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_ring_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_chain_to> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_treq_sel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_irq_quiet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_sniff_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_write_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_read_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_ctrl_trig_ahb_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_ctrl_trig;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_dbg_ctdreq_ch9_dbg_ctdreq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_dbg_ctdreq;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_dbg_tcr_ch9_dbg_tcr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_dbg_tcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_read_addr_ch9_read_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_read_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_trans_count_ch9_trans_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_trans_count;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ch9_write_addr_ch9_write_addr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ch9_write_addr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_chan_abort_chan_abort> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_chan_abort;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_fifo_levels_tdf_lvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_fifo_levels;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_fifo_levels_waf_lvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_fifo_levels;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_fifo_levels_raf_lvl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_fifo_levels;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_inte0_inte0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_inte0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_inte1_inte1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_inte1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_intf0_intf0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_intf0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_intf1_intf1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_intf1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_intr_intr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_intr1_intr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_intr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ints0_ints0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ints0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_ints1_ints1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_ints1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_multi_chan_trigger_multi_chan_trigger> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_multi_chan_trigger;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_n_channels_n_channels> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_n_channels;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_dmach> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_calc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_bswap> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_out_rev> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_ctrl_out_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_sniff_data_sniff_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_sniff_data;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer0_y> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer0_x> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer0;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer1_y> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer1_x> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer2_y> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer2_x> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer3_y> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_dma_timer3_x> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_dma_timer3;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_ack_general_call_ack_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_ack_general_call;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_activity_clr_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_activity;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_gen_call_clr_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_gen_call;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_intr_clr_intr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_rd_req_clr_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_rd_req;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_restart_det_clr_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_restart_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_rx_done_clr_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_rx_done;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_rx_over_clr_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_rx_over;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_rx_under_clr_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_rx_under;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_start_det_clr_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_start_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_stop_det_clr_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_stop_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_tx_abrt_clr_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_tx_abrt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_clr_tx_over_clr_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_clr_tx_over;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_apb_data_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_max_speed_mode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_hc_count_values> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_intr_io> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_has_dma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_add_encoded_params> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_rx_buffer_depth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_param_1_tx_buffer_depth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_type_ic_comp_type> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_type;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_comp_version_ic_comp_version> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_comp_version;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_master_mode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_speed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_ic_10bitaddr_slave> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_ic_10bitaddr_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_ic_restart_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_ic_slave_disable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_stop_det_ifaddressed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_tx_empty_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_rx_fifo_full_hld_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_con_stop_det_if_master_active> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_con;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_data_cmd_dat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_data_cmd_cmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_data_cmd_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_data_cmd_restart> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_data_cmd_first_data_byte> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_dma_cr_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_dma_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_dma_cr_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_dma_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_dma_rdlr_dmardl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_dma_rdlr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_dma_tdlr_dmatdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_dma_tdlr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_abort> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_tx_cmd_block> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_status_ic_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_status_slv_disabled_while_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_enable_status_slv_rx_data_lost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_fs_scl_hcnt_ic_fs_scl_hcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_fs_scl_hcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_fs_scl_lcnt_ic_fs_scl_lcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_fs_scl_lcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_fs_spklen_ic_fs_spklen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_fs_spklen;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_mask_m_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_intr_stat_r_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_raw_intr_stat_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_rxflr_rxflr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_rxflr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_rx_tl_rx_tl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_rx_tl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_sar_ic_sar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_sar;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_sda_hold_ic_sda_tx_hold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_sda_hold;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_sda_hold_ic_sda_rx_hold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_sda_hold;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_sda_setup_sda_setup> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_sda_setup;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_slv_data_nack_only_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_slv_data_nack_only;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_ss_scl_hcnt_ic_ss_scl_hcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_ss_scl_hcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_ss_scl_lcnt_ic_ss_scl_lcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_ss_scl_lcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_tfnf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_tfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_rfne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_rff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_mst_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_status_slv_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_status;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tar_ic_tar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tar;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tar_gc_or_start> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tar;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tar_special> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tar;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_txflr_txflr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_txflr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_7b_addr_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_10addr1_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_10addr2_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_txdata_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_gcall_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_gcall_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_hs_ackdet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_sbyte_ackdet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_hs_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_sbyte_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_10b_rd_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_master_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_arb_lost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_slvflush_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_slv_arblost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_slvrd_intx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_abrt_user_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_abrt_source_tx_flush_cnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c0_ic_tx_tl_tx_tl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c0_ic_tx_tl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_ack_general_call_ack_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_ack_general_call;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_activity_clr_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_activity;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_gen_call_clr_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_gen_call;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_intr_clr_intr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_rd_req_clr_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_rd_req;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_restart_det_clr_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_restart_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_rx_done_clr_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_rx_done;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_rx_over_clr_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_rx_over;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_rx_under_clr_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_rx_under;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_start_det_clr_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_start_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_stop_det_clr_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_stop_det;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_tx_abrt_clr_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_tx_abrt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_clr_tx_over_clr_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_clr_tx_over;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_apb_data_width> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_max_speed_mode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_hc_count_values> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_intr_io> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_has_dma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_add_encoded_params> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_rx_buffer_depth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_param_1_tx_buffer_depth> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_param_1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_type_ic_comp_type> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_type;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_comp_version_ic_comp_version> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_comp_version;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_master_mode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_speed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_ic_10bitaddr_slave> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_ic_10bitaddr_master> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_ic_restart_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_ic_slave_disable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_stop_det_ifaddressed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_tx_empty_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_rx_fifo_full_hld_ctrl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_con_stop_det_if_master_active> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_con;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_data_cmd_dat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_data_cmd_cmd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_data_cmd_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_data_cmd_restart> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_data_cmd_first_data_byte> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_data_cmd;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_dma_cr_rdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_dma_cr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_dma_cr_tdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_dma_cr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_dma_rdlr_dmardl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_dma_rdlr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_dma_tdlr_dmatdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_dma_tdlr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_abort> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_tx_cmd_block> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_status_ic_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_status_slv_disabled_while_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_enable_status_slv_rx_data_lost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_enable_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_fs_scl_hcnt_ic_fs_scl_hcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_fs_scl_hcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_fs_scl_lcnt_ic_fs_scl_lcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_fs_scl_lcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_fs_spklen_ic_fs_spklen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_fs_spklen;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_mask_m_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_mask;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_intr_stat_r_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_intr_stat;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_rx_under> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_rx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_rx_full> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_tx_over> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_tx_empty> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_rd_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_tx_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_rx_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_stop_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_start_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_gen_call> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_raw_intr_stat_restart_det> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_raw_intr_stat;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_rxflr_rxflr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_rxflr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_rx_tl_rx_tl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_rx_tl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_sar_ic_sar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_sar;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_sda_hold_ic_sda_tx_hold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_sda_hold;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_sda_hold_ic_sda_rx_hold> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_sda_hold;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_sda_setup_sda_setup> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_sda_setup;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_slv_data_nack_only_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_slv_data_nack_only;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_ss_scl_hcnt_ic_ss_scl_hcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_ss_scl_hcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_ss_scl_lcnt_ic_ss_scl_lcnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_ss_scl_lcnt;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_tfnf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_tfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_rfne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_rff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_mst_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_status_slv_activity> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_status;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tar_ic_tar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tar;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tar_gc_or_start> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tar;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tar_special> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tar;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_txflr_txflr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_txflr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_7b_addr_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_10addr1_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_10addr2_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_txdata_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_gcall_noack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_gcall_read> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_hs_ackdet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_sbyte_ackdet> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_hs_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_sbyte_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_10b_rd_norstrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_master_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_arb_lost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_slvflush_txfifo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_slv_arblost> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_slvrd_intx> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_abrt_user_abrt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_abrt_source_tx_flush_cnt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_abrt_source;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_i2c1_ic_tx_tl_tx_tl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_i2c1_ic_tx_tl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_ctr_ch0_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch0_top_ch0_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch0_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_ctr_ch1_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch1_top_ch1_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch1_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_ctr_ch2_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch2_top_ch2_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch2_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_ctr_ch3_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch3_top_ch3_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch3_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_ctr_ch4_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch4_top_ch4_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch4_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_ctr_ch5_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch5_top_ch5_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch5_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_ctr_ch6_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch6_top_ch6_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch6_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_cc_a> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_cc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_cc_b> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_cc;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_ph_correct> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_a_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_b_inv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_divmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_ph_ret> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_csr_ph_adv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_csr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_ctr_ch7_ctr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_ctr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_div_frac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_div;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_div_int> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_div;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ch7_top_ch7_top> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ch7_top;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_en_ch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_en;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_inte_ch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_inte;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intf_ch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intf;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_intr_ch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_intr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_pwm_ints_ch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_pwm_ints;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_adc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_dma> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_i2c0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_i2c1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_pwm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_rtc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_spi0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_spi1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_timer> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_uart0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_resets_reset_uart1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_resets_reset;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_clkdiv_m1_clkdiv_m1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_clkdiv_m1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_ctrl_rtc_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_ctrl_rtc_active> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_ctrl_load> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_ctrl_force_notleapyear> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_inte_rtc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_inte;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_intf_rtc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_intf;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_intr_rtc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_ints_rtc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_ints;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_day> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_month> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_year> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_day_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_month_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_year_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_match_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_0_match_active> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_0;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_sec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_min> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_hour> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_dotw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_sec_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_min_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_hour_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_irq_setup_1_dotw_ena> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_irq_setup_1;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_0_sec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_0_min> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_0_hour> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_0;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_0_dotw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_0;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_1_day> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_1_month> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_rtc_1_year> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_rtc_1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_0_day> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_0_month> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_0_year> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_0;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_1_sec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_1_min> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_1_hour> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rtc_setup_1_dotw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rtc_setup_1;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcpsr_cpsdvsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcpsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr0_dss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr0_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr0;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr0_spo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr0;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr0_sph> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr0;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr0_scr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr1_lbm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr1_sse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr1_ms> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspcr1_sod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspcr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspdmacr_rxdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspdmacr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspdmacr_txdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspdmacr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspicr_roric> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspicr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspicr_rtic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspicr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspimsc_rorim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspimsc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspimsc_rtim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspimsc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspimsc_rxim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspimsc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspimsc_txim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspimsc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspmis_rormis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspmis;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspmis_rtmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspmis;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspmis_rxmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspmis;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspmis_txmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspmis;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ssppcellid0_ssppcellid0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ssppcellid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ssppcellid1_ssppcellid1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ssppcellid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ssppcellid2_ssppcellid2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ssppcellid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_ssppcellid3_ssppcellid3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_ssppcellid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid0_partnumber0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid1_partnumber1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid1_designer0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid2_designer1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid2_revision> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspperiphid3_configuration> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspperiphid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspris_rorris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspris;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspris_rtris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspris;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspris_rxris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspris;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspris_txris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspris;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspsr_tfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspsr_tnf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspsr_rne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspsr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspsr_rff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspsr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi0_sspsr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi0_sspsr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcpsr_cpsdvsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcpsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr0_dss> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr0_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr0;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr0_spo> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr0;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr0_sph> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr0;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr0_scr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr0;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr1_lbm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr1_sse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr1_ms> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspcr1_sod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspcr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspdmacr_rxdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspdmacr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspdmacr_txdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspdmacr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspicr_roric> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspicr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspicr_rtic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspicr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspimsc_rorim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspimsc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspimsc_rtim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspimsc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspimsc_rxim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspimsc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspimsc_txim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspimsc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspmis_rormis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspmis;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspmis_rtmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspmis;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspmis_rxmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspmis;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspmis_txmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspmis;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_ssppcellid0_ssppcellid0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_ssppcellid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_ssppcellid1_ssppcellid1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_ssppcellid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_ssppcellid2_ssppcellid2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_ssppcellid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_ssppcellid3_ssppcellid3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_ssppcellid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid0_partnumber0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid1_partnumber1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid1_designer0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid2_designer1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid2_revision> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspperiphid3_configuration> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspperiphid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspris_rorris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspris;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspris_rtris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspris;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspris_rxris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspris;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspris_txris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspris;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspsr_tfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspsr_tnf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspsr_rne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspsr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspsr_rff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspsr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi1_sspsr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_sspsr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_alarm0_alarm0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_alarm0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_alarm1_alarm1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_alarm1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_alarm2_alarm2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_alarm2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_alarm3_alarm3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_alarm3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_armed_armed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_armed;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_dbgpause_dbg0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_dbgpause;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_dbgpause_dbg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_dbgpause;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_inte_alarm_0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_inte;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_inte_alarm_1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_inte;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_inte_alarm_2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_inte;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_inte_alarm_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_inte;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intf_alarm_0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intf;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intf_alarm_1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intf;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intf_alarm_2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intf;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intf_alarm_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intf;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intr_alarm_0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intr_alarm_1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intr_alarm_2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_intr_alarm_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_intr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_ints_alarm_0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_ints;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_ints_alarm_1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_ints;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_ints_alarm_2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_ints;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_ints_alarm_3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_ints;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_pause_pause> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_pause;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timehr_timehr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timehr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timehw_timehw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timehw;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timelr_timelr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timelr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timelw_timelw> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timelw;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timerawh_timerawh> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timerawh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_timer_timerawl_timerawl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_timer_timerawl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_uarten> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_siren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_sirlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_lbe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_rxe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_dtr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_rts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_out1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_out2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_rtsen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartcr_ctsen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartcr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdmacr_rxdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdmacr_txdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdmacr_dmaonerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdr_be> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartdr_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartdr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfbrd_baud_divfrac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfbrd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_dsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_dcd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_txff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartfr_ri> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartfr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartibrd_baud_divint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartibrd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_rimic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_ctsmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_dcdmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_dsrmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_rxic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_txic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_rtic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_feic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_peic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_beic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uarticr_oeic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uarticr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartifls_txiflsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartifls;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartifls_rxiflsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartifls;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartilpr_ilpdvsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartilpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_rimim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_ctsmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_dcdmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_dsrmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_rxim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_txim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_rtim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_feim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_peim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_beim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartimsc_oeim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartimsc;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_brk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_pen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_eps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_stp2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_fen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_wlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartlcr_h_sps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_rimmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_ctsmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_dcdmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_dsrmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_rxmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_txmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_rtmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_femis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_pemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_bemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartmis_oemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartmis;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartpcellid0_uartpcellid0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartpcellid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartpcellid1_uartpcellid1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartpcellid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartpcellid2_uartpcellid2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartpcellid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartpcellid3_uartpcellid3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartpcellid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid0_partnumber0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid1_partnumber1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid1_designer0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid2_designer1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid2_revision> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartperiphid3_configuration> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartperiphid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_rirmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_ctsrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_dcdrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_dsrrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_rxris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_txris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_rtris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_feris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_peris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_beris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartris_oeris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartris;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartrsr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartrsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartrsr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartrsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartrsr_be> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartrsr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart0_uartrsr_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart0_uartrsr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_uarten> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_siren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_sirlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_lbe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_rxe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_dtr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_rts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_out1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_out2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_rtsen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartcr_ctsen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartcr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdmacr_rxdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdmacr_txdmae> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdmacr_dmaonerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdmacr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdr_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdr_be> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartdr_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartdr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfbrd_baud_divfrac> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfbrd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 6u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_dsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_dcd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_busy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_rxfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_txff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_rxff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_txfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartfr_ri> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartfr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartibrd_baud_divint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartibrd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_rimic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_ctsmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_dcdmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_dsrmic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_rxic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_txic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_rtic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_feic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_peic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_beic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uarticr_oeic> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uarticr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartifls_txiflsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartifls;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartifls_rxiflsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartifls;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartilpr_ilpdvsr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartilpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_rimim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_ctsmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_dcdmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_dsrmim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_rxim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_txim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_rtim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_feim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_peim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_beim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartimsc_oeim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartimsc;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_brk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_pen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_eps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_stp2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_fen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_wlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartlcr_h_sps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartlcr_h;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_rimmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_ctsmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_dcdmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_dsrmmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_rxmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_txmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_rtmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_femis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_pemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_bemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartmis_oemis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartmis;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartpcellid0_uartpcellid0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartpcellid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartpcellid1_uartpcellid1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartpcellid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartpcellid2_uartpcellid2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartpcellid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartpcellid3_uartpcellid3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartpcellid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid0_partnumber0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid1_partnumber1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid1_designer0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid2_designer1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid2_revision> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartperiphid3_configuration> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartperiphid3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_rirmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_ctsrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_dcdrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_dsrrmis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_rxris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_txris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_rtris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_feris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_peris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_beris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartris_oeris> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartris;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartrsr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartrsr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartrsr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartrsr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartrsr_be> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartrsr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_uart1_uartrsr_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_uart1_uartrsr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp1_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp1_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp1;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp1_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp1;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp1_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp1;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp10_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp10;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp10_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp10;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp10_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp10;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp10_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp10;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp11_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp11;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp11_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp11;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp11_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp11;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp11_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp11;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp12_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp12;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp12_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp12;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp12_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp12;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp12_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp12;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp13_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp13;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp13_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp13;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp13_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp13;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp13_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp13;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp14_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp14;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp14_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp14;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp14_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp14;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp14_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp14;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp15_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp15;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp15_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp15;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp15_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp15;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp15_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp15;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp2_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp2_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp2;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp2_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp2;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp2_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp2;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp3_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp3_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp3;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp3_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp3;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp3_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp3;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp4_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp4_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp4;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp4_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp4;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp4_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp4;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp5_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp5_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp5;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp5_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp5;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp5_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp5;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp6_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp6_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp6;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp6_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp6;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp6_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp6;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp7_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp7_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp7;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp7_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp7;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp7_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp7;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp8_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp8;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp8_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp8;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp8_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp8;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp8_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp8;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp9_address> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp9;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 7u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp9_endpoint> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp9;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp9_intep_dir> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp9;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_addr_endp9_intep_preamble> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_addr_endp9;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep1_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep1_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep2_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep2_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep3_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep3_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep4_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep4_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep5_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep5_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep6_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep6_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep7_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep7_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep8_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep8_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep9_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep9_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep10_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep10_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep11_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep11_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep12_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep12_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep13_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep13_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep14_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep14_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep15_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_cpu_should_handle_ep15_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_cpu_should_handle;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep1_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep1_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep2_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep2_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep3_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep3_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep4_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep4_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep5_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep5_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep6_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep6_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep7_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep7_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep8_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep8_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep9_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep9_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep10_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep10_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep11_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep11_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep12_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep12_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep13_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep13_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep14_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep14_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep15_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_buff_status_ep15_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_buff_status;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep1_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep1_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep2_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep2_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep3_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep3_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep4_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep4_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep5_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep5_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep6_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep6_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep7_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep7_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep8_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep8_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep9_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep9_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep10_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep10_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep11_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep11_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep12_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep12_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep13_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep13_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep14_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep14_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep15_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_ep15_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep1_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep1_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep2_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep2_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep3_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep3_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep4_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep4_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep5_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep5_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep6_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep6_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep7_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep7_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep8_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep8_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep9_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep9_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep10_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep10_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep11_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep11_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep12_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep12_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep13_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep13_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep14_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep14_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep15_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_abort_done_ep15_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_abort_done;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_stall_arm_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_stall_arm;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_stall_arm_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_stall_arm;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep0_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep0_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep1_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep1_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep2_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep2_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep3_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep3_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep4_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep4_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep5_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep5_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep6_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep6_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep7_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep7_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep8_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep8_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep9_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep9_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep10_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep10_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep11_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep11_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep12_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep12_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep13_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep13_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep14_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep14_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep15_in> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ep_status_stall_nak_ep15_out> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ep_status_stall_nak;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_host_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_host_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_host_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_trans_complete> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_buff_status> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_error_data_seq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_error_rx_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_error_rx_overflow> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_error_bit_stuff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_error_crc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_stall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_vbus_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_bus_reset> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_dev_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_dev_suspend> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_dev_resume_from_host> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_setup_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_dev_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_abort_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_inte_ep_stall_nak> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_inte;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_host_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_host_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_host_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_trans_complete> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_buff_status> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_error_data_seq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_error_rx_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_error_rx_overflow> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_error_bit_stuff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_error_crc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_stall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_vbus_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_bus_reset> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_dev_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_dev_suspend> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_dev_resume_from_host> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_setup_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_dev_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_abort_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intf_ep_stall_nak> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intf;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_host_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_host_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_host_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_trans_complete> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_buff_status> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_error_data_seq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_error_rx_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_error_rx_overflow> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_error_bit_stuff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_error_crc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_stall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_vbus_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_bus_reset> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_dev_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_dev_suspend> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_dev_resume_from_host> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_setup_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_dev_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_abort_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_intr_ep_stall_nak> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_intr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_host_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_host_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_host_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_trans_complete> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_buff_status> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_error_data_seq> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_error_rx_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_error_rx_overflow> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_error_bit_stuff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_error_crc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_stall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_vbus_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_bus_reset> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_dev_conn_dis> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_dev_suspend> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_dev_resume_from_host> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_setup_req> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_dev_sof> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_abort_done> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_ints_ep_stall_nak> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_ints;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_int_ep_ctrl_int_ep_active> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_int_ep_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 15u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_main_ctrl_controller_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_main_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_main_ctrl_host_ndevice> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_main_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_main_ctrl_sim_timing> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_main_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_nak_poll_delay_ls> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_nak_poll;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_nak_poll_delay_fs> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_nak_poll;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 10u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_start_trans> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_send_setup> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_send_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_receive_data> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_stop_trans> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_preamble_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_sof_sync> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_sof_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_keep_alive_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_vbus_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_reset_bus> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_pulldown_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_pullup_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_rpu_opt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_transceiver_pd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_direct_dm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_direct_dp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_direct_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_ep0_int_nak> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_ep0_int_2buf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_ep0_int_1buf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_ep0_double_buf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_ctrl_ep0_int_stall> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_vbus_detected> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_line_state> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_suspended> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_speed> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_vbus_over_curr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_resume> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_connected> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_setup_rec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_trans_complete> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_bus_reset> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_crc_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_bit_stuff_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_rx_overflow> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_rx_timeout> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_nak_rec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_stall_rec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_ack_rec> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sie_status_data_seq_error> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sie_status;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sof_rd_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sof_rd;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_sof_wr_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_sof_wr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 11u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dp_pullup_hisel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dp_pullup_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dp_pulldn_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dm_pullup_hisel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dm_pullup_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dm_pulldn_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_dp_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_dm_oe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_dp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_dm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_rx_pd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_pd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_fsslew> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_tx_diffmode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_rx_dd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_rx_dp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_rx_dm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dp_ovcn> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dm_ovcn> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dp_ovv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_dm_ovv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dp_pullup_hisel_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dm_pullup_hisel_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dp_pullup_en_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dp_pulldn_en_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dm_pulldn_en_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_dp_oe_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_dm_oe_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_dp_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_dm_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_rx_pd_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_pd_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_fsslew_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_dm_pullup_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_direct_override_tx_diffmode_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_direct_override;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_trim_dp_pulldn_trim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_trim;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usbphy_trim_dm_pulldn_trim> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usbphy_trim;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 5u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_muxing_to_phy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_muxing;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_muxing_to_extphy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_muxing;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_muxing_to_digital_pad> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_muxing;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_muxing_softcon> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_muxing;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_vbus_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_vbus_en_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_vbus_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_vbus_detect_override_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_overcurr_detect> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usb_usb_pwr_overcurr_detect_en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usb_usb_pwr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_time> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_pause_jtag> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_pause_dbg0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_pause_dbg1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_ctrl_trigger> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_ctrl;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_load_load> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_load;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 24u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_reason_timer> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_reason;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_reason_force> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_reason;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch0_scratch0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch0;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch1_scratch1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch2_scratch2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch3_scratch3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch4_scratch4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch4;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch5_scratch5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch5;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch6_scratch6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch6;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_scratch7_scratch7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_scratch7;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 32u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_tick_cycles> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_tick;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_tick_enable> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_tick;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_tick_running> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_tick;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_watchdog_tick_count> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_watchdog_tick;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

inline constexpr std::array<FieldId, 1639> kRegisterFields = {{
  FieldId::field_adc_cs_en,
  FieldId::field_adc_cs_ts_en,
  FieldId::field_adc_cs_start_once,
  FieldId::field_adc_cs_start_many,
  FieldId::field_adc_cs_ready,
  FieldId::field_adc_cs_err,
  FieldId::field_adc_cs_err_sticky,
  FieldId::field_adc_cs_ainsel,
  FieldId::field_adc_cs_rrobin,
  FieldId::field_adc_div_frac,
  FieldId::field_adc_div_int,
  FieldId::field_adc_fcs_en,
  FieldId::field_adc_fcs_shift,
  FieldId::field_adc_fcs_err,
  FieldId::field_adc_fcs_dreq_en,
  FieldId::field_adc_fcs_empty,
  FieldId::field_adc_fcs_full,
  FieldId::field_adc_fcs_under,
  FieldId::field_adc_fcs_over,
  FieldId::field_adc_fcs_level,
  FieldId::field_adc_fcs_thresh,
  FieldId::field_adc_fifo_val,
  FieldId::field_adc_fifo_err,
  FieldId::field_adc_inte_fifo,
  FieldId::field_adc_intf_fifo,
  FieldId::field_adc_intr_fifo,
  FieldId::field_adc_ints_fifo,
  FieldId::field_adc_result_result,
  FieldId::field_dma_ch0_al1_ctrl_ch0_al1_ctrl,
  FieldId::field_dma_ch0_al1_read_addr_ch0_al1_read_addr,
  FieldId::field_dma_ch0_al1_trans_count_trig_ch0_al1_trans_count_trig,
  FieldId::field_dma_ch0_al1_write_addr_ch0_al1_write_addr,
  FieldId::field_dma_ch0_al2_ctrl_ch0_al2_ctrl,
  FieldId::field_dma_ch0_al2_read_addr_ch0_al2_read_addr,
  FieldId::field_dma_ch0_al2_trans_count_ch0_al2_trans_count,
  FieldId::field_dma_ch0_al2_write_addr_trig_ch0_al2_write_addr_trig,
  FieldId::field_dma_ch0_al3_ctrl_ch0_al3_ctrl,
  FieldId::field_dma_ch0_al3_read_addr_trig_ch0_al3_read_addr_trig,
  FieldId::field_dma_ch0_al3_trans_count_ch0_al3_trans_count,
  FieldId::field_dma_ch0_al3_write_addr_ch0_al3_write_addr,
  FieldId::field_dma_ch0_ctrl_trig_en,
  FieldId::field_dma_ch0_ctrl_trig_high_priority,
  FieldId::field_dma_ch0_ctrl_trig_data_size,
  FieldId::field_dma_ch0_ctrl_trig_incr_read,
  FieldId::field_dma_ch0_ctrl_trig_incr_write,
  FieldId::field_dma_ch0_ctrl_trig_ring_size,
  FieldId::field_dma_ch0_ctrl_trig_ring_sel,
  FieldId::field_dma_ch0_ctrl_trig_chain_to,
  FieldId::field_dma_ch0_ctrl_trig_treq_sel,
  FieldId::field_dma_ch0_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch0_ctrl_trig_bswap,
  FieldId::field_dma_ch0_ctrl_trig_sniff_en,
  FieldId::field_dma_ch0_ctrl_trig_busy,
  FieldId::field_dma_ch0_ctrl_trig_write_error,
  FieldId::field_dma_ch0_ctrl_trig_read_error,
  FieldId::field_dma_ch0_ctrl_trig_ahb_error,
  FieldId::field_dma_ch0_dbg_ctdreq_ch0_dbg_ctdreq,
  FieldId::field_dma_ch0_dbg_tcr_ch0_dbg_tcr,
  FieldId::field_dma_ch0_read_addr_ch0_read_addr,
  FieldId::field_dma_ch0_trans_count_ch0_trans_count,
  FieldId::field_dma_ch0_write_addr_ch0_write_addr,
  FieldId::field_dma_ch10_al1_ctrl_ch10_al1_ctrl,
  FieldId::field_dma_ch10_al1_read_addr_ch10_al1_read_addr,
  FieldId::field_dma_ch10_al1_trans_count_trig_ch10_al1_trans_count_trig,
  FieldId::field_dma_ch10_al1_write_addr_ch10_al1_write_addr,
  FieldId::field_dma_ch10_al2_ctrl_ch10_al2_ctrl,
  FieldId::field_dma_ch10_al2_read_addr_ch10_al2_read_addr,
  FieldId::field_dma_ch10_al2_trans_count_ch10_al2_trans_count,
  FieldId::field_dma_ch10_al2_write_addr_trig_ch10_al2_write_addr_trig,
  FieldId::field_dma_ch10_al3_ctrl_ch10_al3_ctrl,
  FieldId::field_dma_ch10_al3_read_addr_trig_ch10_al3_read_addr_trig,
  FieldId::field_dma_ch10_al3_trans_count_ch10_al3_trans_count,
  FieldId::field_dma_ch10_al3_write_addr_ch10_al3_write_addr,
  FieldId::field_dma_ch10_ctrl_trig_en,
  FieldId::field_dma_ch10_ctrl_trig_high_priority,
  FieldId::field_dma_ch10_ctrl_trig_data_size,
  FieldId::field_dma_ch10_ctrl_trig_incr_read,
  FieldId::field_dma_ch10_ctrl_trig_incr_write,
  FieldId::field_dma_ch10_ctrl_trig_ring_size,
  FieldId::field_dma_ch10_ctrl_trig_ring_sel,
  FieldId::field_dma_ch10_ctrl_trig_chain_to,
  FieldId::field_dma_ch10_ctrl_trig_treq_sel,
  FieldId::field_dma_ch10_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch10_ctrl_trig_bswap,
  FieldId::field_dma_ch10_ctrl_trig_sniff_en,
  FieldId::field_dma_ch10_ctrl_trig_busy,
  FieldId::field_dma_ch10_ctrl_trig_write_error,
  FieldId::field_dma_ch10_ctrl_trig_read_error,
  FieldId::field_dma_ch10_ctrl_trig_ahb_error,
  FieldId::field_dma_ch10_dbg_ctdreq_ch10_dbg_ctdreq,
  FieldId::field_dma_ch10_dbg_tcr_ch10_dbg_tcr,
  FieldId::field_dma_ch10_read_addr_ch10_read_addr,
  FieldId::field_dma_ch10_trans_count_ch10_trans_count,
  FieldId::field_dma_ch10_write_addr_ch10_write_addr,
  FieldId::field_dma_ch11_al1_ctrl_ch11_al1_ctrl,
  FieldId::field_dma_ch11_al1_read_addr_ch11_al1_read_addr,
  FieldId::field_dma_ch11_al1_trans_count_trig_ch11_al1_trans_count_trig,
  FieldId::field_dma_ch11_al1_write_addr_ch11_al1_write_addr,
  FieldId::field_dma_ch11_al2_ctrl_ch11_al2_ctrl,
  FieldId::field_dma_ch11_al2_read_addr_ch11_al2_read_addr,
  FieldId::field_dma_ch11_al2_trans_count_ch11_al2_trans_count,
  FieldId::field_dma_ch11_al2_write_addr_trig_ch11_al2_write_addr_trig,
  FieldId::field_dma_ch11_al3_ctrl_ch11_al3_ctrl,
  FieldId::field_dma_ch11_al3_read_addr_trig_ch11_al3_read_addr_trig,
  FieldId::field_dma_ch11_al3_trans_count_ch11_al3_trans_count,
  FieldId::field_dma_ch11_al3_write_addr_ch11_al3_write_addr,
  FieldId::field_dma_ch11_ctrl_trig_en,
  FieldId::field_dma_ch11_ctrl_trig_high_priority,
  FieldId::field_dma_ch11_ctrl_trig_data_size,
  FieldId::field_dma_ch11_ctrl_trig_incr_read,
  FieldId::field_dma_ch11_ctrl_trig_incr_write,
  FieldId::field_dma_ch11_ctrl_trig_ring_size,
  FieldId::field_dma_ch11_ctrl_trig_ring_sel,
  FieldId::field_dma_ch11_ctrl_trig_chain_to,
  FieldId::field_dma_ch11_ctrl_trig_treq_sel,
  FieldId::field_dma_ch11_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch11_ctrl_trig_bswap,
  FieldId::field_dma_ch11_ctrl_trig_sniff_en,
  FieldId::field_dma_ch11_ctrl_trig_busy,
  FieldId::field_dma_ch11_ctrl_trig_write_error,
  FieldId::field_dma_ch11_ctrl_trig_read_error,
  FieldId::field_dma_ch11_ctrl_trig_ahb_error,
  FieldId::field_dma_ch11_dbg_ctdreq_ch11_dbg_ctdreq,
  FieldId::field_dma_ch11_dbg_tcr_ch11_dbg_tcr,
  FieldId::field_dma_ch11_read_addr_ch11_read_addr,
  FieldId::field_dma_ch11_trans_count_ch11_trans_count,
  FieldId::field_dma_ch11_write_addr_ch11_write_addr,
  FieldId::field_dma_ch1_al1_ctrl_ch1_al1_ctrl,
  FieldId::field_dma_ch1_al1_read_addr_ch1_al1_read_addr,
  FieldId::field_dma_ch1_al1_trans_count_trig_ch1_al1_trans_count_trig,
  FieldId::field_dma_ch1_al1_write_addr_ch1_al1_write_addr,
  FieldId::field_dma_ch1_al2_ctrl_ch1_al2_ctrl,
  FieldId::field_dma_ch1_al2_read_addr_ch1_al2_read_addr,
  FieldId::field_dma_ch1_al2_trans_count_ch1_al2_trans_count,
  FieldId::field_dma_ch1_al2_write_addr_trig_ch1_al2_write_addr_trig,
  FieldId::field_dma_ch1_al3_ctrl_ch1_al3_ctrl,
  FieldId::field_dma_ch1_al3_read_addr_trig_ch1_al3_read_addr_trig,
  FieldId::field_dma_ch1_al3_trans_count_ch1_al3_trans_count,
  FieldId::field_dma_ch1_al3_write_addr_ch1_al3_write_addr,
  FieldId::field_dma_ch1_ctrl_trig_en,
  FieldId::field_dma_ch1_ctrl_trig_high_priority,
  FieldId::field_dma_ch1_ctrl_trig_data_size,
  FieldId::field_dma_ch1_ctrl_trig_incr_read,
  FieldId::field_dma_ch1_ctrl_trig_incr_write,
  FieldId::field_dma_ch1_ctrl_trig_ring_size,
  FieldId::field_dma_ch1_ctrl_trig_ring_sel,
  FieldId::field_dma_ch1_ctrl_trig_chain_to,
  FieldId::field_dma_ch1_ctrl_trig_treq_sel,
  FieldId::field_dma_ch1_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch1_ctrl_trig_bswap,
  FieldId::field_dma_ch1_ctrl_trig_sniff_en,
  FieldId::field_dma_ch1_ctrl_trig_busy,
  FieldId::field_dma_ch1_ctrl_trig_write_error,
  FieldId::field_dma_ch1_ctrl_trig_read_error,
  FieldId::field_dma_ch1_ctrl_trig_ahb_error,
  FieldId::field_dma_ch1_dbg_ctdreq_ch1_dbg_ctdreq,
  FieldId::field_dma_ch1_dbg_tcr_ch1_dbg_tcr,
  FieldId::field_dma_ch1_read_addr_ch1_read_addr,
  FieldId::field_dma_ch1_trans_count_ch1_trans_count,
  FieldId::field_dma_ch1_write_addr_ch1_write_addr,
  FieldId::field_dma_ch2_al1_ctrl_ch2_al1_ctrl,
  FieldId::field_dma_ch2_al1_read_addr_ch2_al1_read_addr,
  FieldId::field_dma_ch2_al1_trans_count_trig_ch2_al1_trans_count_trig,
  FieldId::field_dma_ch2_al1_write_addr_ch2_al1_write_addr,
  FieldId::field_dma_ch2_al2_ctrl_ch2_al2_ctrl,
  FieldId::field_dma_ch2_al2_read_addr_ch2_al2_read_addr,
  FieldId::field_dma_ch2_al2_trans_count_ch2_al2_trans_count,
  FieldId::field_dma_ch2_al2_write_addr_trig_ch2_al2_write_addr_trig,
  FieldId::field_dma_ch2_al3_ctrl_ch2_al3_ctrl,
  FieldId::field_dma_ch2_al3_read_addr_trig_ch2_al3_read_addr_trig,
  FieldId::field_dma_ch2_al3_trans_count_ch2_al3_trans_count,
  FieldId::field_dma_ch2_al3_write_addr_ch2_al3_write_addr,
  FieldId::field_dma_ch2_ctrl_trig_en,
  FieldId::field_dma_ch2_ctrl_trig_high_priority,
  FieldId::field_dma_ch2_ctrl_trig_data_size,
  FieldId::field_dma_ch2_ctrl_trig_incr_read,
  FieldId::field_dma_ch2_ctrl_trig_incr_write,
  FieldId::field_dma_ch2_ctrl_trig_ring_size,
  FieldId::field_dma_ch2_ctrl_trig_ring_sel,
  FieldId::field_dma_ch2_ctrl_trig_chain_to,
  FieldId::field_dma_ch2_ctrl_trig_treq_sel,
  FieldId::field_dma_ch2_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch2_ctrl_trig_bswap,
  FieldId::field_dma_ch2_ctrl_trig_sniff_en,
  FieldId::field_dma_ch2_ctrl_trig_busy,
  FieldId::field_dma_ch2_ctrl_trig_write_error,
  FieldId::field_dma_ch2_ctrl_trig_read_error,
  FieldId::field_dma_ch2_ctrl_trig_ahb_error,
  FieldId::field_dma_ch2_dbg_ctdreq_ch2_dbg_ctdreq,
  FieldId::field_dma_ch2_dbg_tcr_ch2_dbg_tcr,
  FieldId::field_dma_ch2_read_addr_ch2_read_addr,
  FieldId::field_dma_ch2_trans_count_ch2_trans_count,
  FieldId::field_dma_ch2_write_addr_ch2_write_addr,
  FieldId::field_dma_ch3_al1_ctrl_ch3_al1_ctrl,
  FieldId::field_dma_ch3_al1_read_addr_ch3_al1_read_addr,
  FieldId::field_dma_ch3_al1_trans_count_trig_ch3_al1_trans_count_trig,
  FieldId::field_dma_ch3_al1_write_addr_ch3_al1_write_addr,
  FieldId::field_dma_ch3_al2_ctrl_ch3_al2_ctrl,
  FieldId::field_dma_ch3_al2_read_addr_ch3_al2_read_addr,
  FieldId::field_dma_ch3_al2_trans_count_ch3_al2_trans_count,
  FieldId::field_dma_ch3_al2_write_addr_trig_ch3_al2_write_addr_trig,
  FieldId::field_dma_ch3_al3_ctrl_ch3_al3_ctrl,
  FieldId::field_dma_ch3_al3_read_addr_trig_ch3_al3_read_addr_trig,
  FieldId::field_dma_ch3_al3_trans_count_ch3_al3_trans_count,
  FieldId::field_dma_ch3_al3_write_addr_ch3_al3_write_addr,
  FieldId::field_dma_ch3_ctrl_trig_en,
  FieldId::field_dma_ch3_ctrl_trig_high_priority,
  FieldId::field_dma_ch3_ctrl_trig_data_size,
  FieldId::field_dma_ch3_ctrl_trig_incr_read,
  FieldId::field_dma_ch3_ctrl_trig_incr_write,
  FieldId::field_dma_ch3_ctrl_trig_ring_size,
  FieldId::field_dma_ch3_ctrl_trig_ring_sel,
  FieldId::field_dma_ch3_ctrl_trig_chain_to,
  FieldId::field_dma_ch3_ctrl_trig_treq_sel,
  FieldId::field_dma_ch3_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch3_ctrl_trig_bswap,
  FieldId::field_dma_ch3_ctrl_trig_sniff_en,
  FieldId::field_dma_ch3_ctrl_trig_busy,
  FieldId::field_dma_ch3_ctrl_trig_write_error,
  FieldId::field_dma_ch3_ctrl_trig_read_error,
  FieldId::field_dma_ch3_ctrl_trig_ahb_error,
  FieldId::field_dma_ch3_dbg_ctdreq_ch3_dbg_ctdreq,
  FieldId::field_dma_ch3_dbg_tcr_ch3_dbg_tcr,
  FieldId::field_dma_ch3_read_addr_ch3_read_addr,
  FieldId::field_dma_ch3_trans_count_ch3_trans_count,
  FieldId::field_dma_ch3_write_addr_ch3_write_addr,
  FieldId::field_dma_ch4_al1_ctrl_ch4_al1_ctrl,
  FieldId::field_dma_ch4_al1_read_addr_ch4_al1_read_addr,
  FieldId::field_dma_ch4_al1_trans_count_trig_ch4_al1_trans_count_trig,
  FieldId::field_dma_ch4_al1_write_addr_ch4_al1_write_addr,
  FieldId::field_dma_ch4_al2_ctrl_ch4_al2_ctrl,
  FieldId::field_dma_ch4_al2_read_addr_ch4_al2_read_addr,
  FieldId::field_dma_ch4_al2_trans_count_ch4_al2_trans_count,
  FieldId::field_dma_ch4_al2_write_addr_trig_ch4_al2_write_addr_trig,
  FieldId::field_dma_ch4_al3_ctrl_ch4_al3_ctrl,
  FieldId::field_dma_ch4_al3_read_addr_trig_ch4_al3_read_addr_trig,
  FieldId::field_dma_ch4_al3_trans_count_ch4_al3_trans_count,
  FieldId::field_dma_ch4_al3_write_addr_ch4_al3_write_addr,
  FieldId::field_dma_ch4_ctrl_trig_en,
  FieldId::field_dma_ch4_ctrl_trig_high_priority,
  FieldId::field_dma_ch4_ctrl_trig_data_size,
  FieldId::field_dma_ch4_ctrl_trig_incr_read,
  FieldId::field_dma_ch4_ctrl_trig_incr_write,
  FieldId::field_dma_ch4_ctrl_trig_ring_size,
  FieldId::field_dma_ch4_ctrl_trig_ring_sel,
  FieldId::field_dma_ch4_ctrl_trig_chain_to,
  FieldId::field_dma_ch4_ctrl_trig_treq_sel,
  FieldId::field_dma_ch4_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch4_ctrl_trig_bswap,
  FieldId::field_dma_ch4_ctrl_trig_sniff_en,
  FieldId::field_dma_ch4_ctrl_trig_busy,
  FieldId::field_dma_ch4_ctrl_trig_write_error,
  FieldId::field_dma_ch4_ctrl_trig_read_error,
  FieldId::field_dma_ch4_ctrl_trig_ahb_error,
  FieldId::field_dma_ch4_dbg_ctdreq_ch4_dbg_ctdreq,
  FieldId::field_dma_ch4_dbg_tcr_ch4_dbg_tcr,
  FieldId::field_dma_ch4_read_addr_ch4_read_addr,
  FieldId::field_dma_ch4_trans_count_ch4_trans_count,
  FieldId::field_dma_ch4_write_addr_ch4_write_addr,
  FieldId::field_dma_ch5_al1_ctrl_ch5_al1_ctrl,
  FieldId::field_dma_ch5_al1_read_addr_ch5_al1_read_addr,
  FieldId::field_dma_ch5_al1_trans_count_trig_ch5_al1_trans_count_trig,
  FieldId::field_dma_ch5_al1_write_addr_ch5_al1_write_addr,
  FieldId::field_dma_ch5_al2_ctrl_ch5_al2_ctrl,
  FieldId::field_dma_ch5_al2_read_addr_ch5_al2_read_addr,
  FieldId::field_dma_ch5_al2_trans_count_ch5_al2_trans_count,
  FieldId::field_dma_ch5_al2_write_addr_trig_ch5_al2_write_addr_trig,
  FieldId::field_dma_ch5_al3_ctrl_ch5_al3_ctrl,
  FieldId::field_dma_ch5_al3_read_addr_trig_ch5_al3_read_addr_trig,
  FieldId::field_dma_ch5_al3_trans_count_ch5_al3_trans_count,
  FieldId::field_dma_ch5_al3_write_addr_ch5_al3_write_addr,
  FieldId::field_dma_ch5_ctrl_trig_en,
  FieldId::field_dma_ch5_ctrl_trig_high_priority,
  FieldId::field_dma_ch5_ctrl_trig_data_size,
  FieldId::field_dma_ch5_ctrl_trig_incr_read,
  FieldId::field_dma_ch5_ctrl_trig_incr_write,
  FieldId::field_dma_ch5_ctrl_trig_ring_size,
  FieldId::field_dma_ch5_ctrl_trig_ring_sel,
  FieldId::field_dma_ch5_ctrl_trig_chain_to,
  FieldId::field_dma_ch5_ctrl_trig_treq_sel,
  FieldId::field_dma_ch5_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch5_ctrl_trig_bswap,
  FieldId::field_dma_ch5_ctrl_trig_sniff_en,
  FieldId::field_dma_ch5_ctrl_trig_busy,
  FieldId::field_dma_ch5_ctrl_trig_write_error,
  FieldId::field_dma_ch5_ctrl_trig_read_error,
  FieldId::field_dma_ch5_ctrl_trig_ahb_error,
  FieldId::field_dma_ch5_dbg_ctdreq_ch5_dbg_ctdreq,
  FieldId::field_dma_ch5_dbg_tcr_ch5_dbg_tcr,
  FieldId::field_dma_ch5_read_addr_ch5_read_addr,
  FieldId::field_dma_ch5_trans_count_ch5_trans_count,
  FieldId::field_dma_ch5_write_addr_ch5_write_addr,
  FieldId::field_dma_ch6_al1_ctrl_ch6_al1_ctrl,
  FieldId::field_dma_ch6_al1_read_addr_ch6_al1_read_addr,
  FieldId::field_dma_ch6_al1_trans_count_trig_ch6_al1_trans_count_trig,
  FieldId::field_dma_ch6_al1_write_addr_ch6_al1_write_addr,
  FieldId::field_dma_ch6_al2_ctrl_ch6_al2_ctrl,
  FieldId::field_dma_ch6_al2_read_addr_ch6_al2_read_addr,
  FieldId::field_dma_ch6_al2_trans_count_ch6_al2_trans_count,
  FieldId::field_dma_ch6_al2_write_addr_trig_ch6_al2_write_addr_trig,
  FieldId::field_dma_ch6_al3_ctrl_ch6_al3_ctrl,
  FieldId::field_dma_ch6_al3_read_addr_trig_ch6_al3_read_addr_trig,
  FieldId::field_dma_ch6_al3_trans_count_ch6_al3_trans_count,
  FieldId::field_dma_ch6_al3_write_addr_ch6_al3_write_addr,
  FieldId::field_dma_ch6_ctrl_trig_en,
  FieldId::field_dma_ch6_ctrl_trig_high_priority,
  FieldId::field_dma_ch6_ctrl_trig_data_size,
  FieldId::field_dma_ch6_ctrl_trig_incr_read,
  FieldId::field_dma_ch6_ctrl_trig_incr_write,
  FieldId::field_dma_ch6_ctrl_trig_ring_size,
  FieldId::field_dma_ch6_ctrl_trig_ring_sel,
  FieldId::field_dma_ch6_ctrl_trig_chain_to,
  FieldId::field_dma_ch6_ctrl_trig_treq_sel,
  FieldId::field_dma_ch6_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch6_ctrl_trig_bswap,
  FieldId::field_dma_ch6_ctrl_trig_sniff_en,
  FieldId::field_dma_ch6_ctrl_trig_busy,
  FieldId::field_dma_ch6_ctrl_trig_write_error,
  FieldId::field_dma_ch6_ctrl_trig_read_error,
  FieldId::field_dma_ch6_ctrl_trig_ahb_error,
  FieldId::field_dma_ch6_dbg_ctdreq_ch6_dbg_ctdreq,
  FieldId::field_dma_ch6_dbg_tcr_ch6_dbg_tcr,
  FieldId::field_dma_ch6_read_addr_ch6_read_addr,
  FieldId::field_dma_ch6_trans_count_ch6_trans_count,
  FieldId::field_dma_ch6_write_addr_ch6_write_addr,
  FieldId::field_dma_ch7_al1_ctrl_ch7_al1_ctrl,
  FieldId::field_dma_ch7_al1_read_addr_ch7_al1_read_addr,
  FieldId::field_dma_ch7_al1_trans_count_trig_ch7_al1_trans_count_trig,
  FieldId::field_dma_ch7_al1_write_addr_ch7_al1_write_addr,
  FieldId::field_dma_ch7_al2_ctrl_ch7_al2_ctrl,
  FieldId::field_dma_ch7_al2_read_addr_ch7_al2_read_addr,
  FieldId::field_dma_ch7_al2_trans_count_ch7_al2_trans_count,
  FieldId::field_dma_ch7_al2_write_addr_trig_ch7_al2_write_addr_trig,
  FieldId::field_dma_ch7_al3_ctrl_ch7_al3_ctrl,
  FieldId::field_dma_ch7_al3_read_addr_trig_ch7_al3_read_addr_trig,
  FieldId::field_dma_ch7_al3_trans_count_ch7_al3_trans_count,
  FieldId::field_dma_ch7_al3_write_addr_ch7_al3_write_addr,
  FieldId::field_dma_ch7_ctrl_trig_en,
  FieldId::field_dma_ch7_ctrl_trig_high_priority,
  FieldId::field_dma_ch7_ctrl_trig_data_size,
  FieldId::field_dma_ch7_ctrl_trig_incr_read,
  FieldId::field_dma_ch7_ctrl_trig_incr_write,
  FieldId::field_dma_ch7_ctrl_trig_ring_size,
  FieldId::field_dma_ch7_ctrl_trig_ring_sel,
  FieldId::field_dma_ch7_ctrl_trig_chain_to,
  FieldId::field_dma_ch7_ctrl_trig_treq_sel,
  FieldId::field_dma_ch7_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch7_ctrl_trig_bswap,
  FieldId::field_dma_ch7_ctrl_trig_sniff_en,
  FieldId::field_dma_ch7_ctrl_trig_busy,
  FieldId::field_dma_ch7_ctrl_trig_write_error,
  FieldId::field_dma_ch7_ctrl_trig_read_error,
  FieldId::field_dma_ch7_ctrl_trig_ahb_error,
  FieldId::field_dma_ch7_dbg_ctdreq_ch7_dbg_ctdreq,
  FieldId::field_dma_ch7_dbg_tcr_ch7_dbg_tcr,
  FieldId::field_dma_ch7_read_addr_ch7_read_addr,
  FieldId::field_dma_ch7_trans_count_ch7_trans_count,
  FieldId::field_dma_ch7_write_addr_ch7_write_addr,
  FieldId::field_dma_ch8_al1_ctrl_ch8_al1_ctrl,
  FieldId::field_dma_ch8_al1_read_addr_ch8_al1_read_addr,
  FieldId::field_dma_ch8_al1_trans_count_trig_ch8_al1_trans_count_trig,
  FieldId::field_dma_ch8_al1_write_addr_ch8_al1_write_addr,
  FieldId::field_dma_ch8_al2_ctrl_ch8_al2_ctrl,
  FieldId::field_dma_ch8_al2_read_addr_ch8_al2_read_addr,
  FieldId::field_dma_ch8_al2_trans_count_ch8_al2_trans_count,
  FieldId::field_dma_ch8_al2_write_addr_trig_ch8_al2_write_addr_trig,
  FieldId::field_dma_ch8_al3_ctrl_ch8_al3_ctrl,
  FieldId::field_dma_ch8_al3_read_addr_trig_ch8_al3_read_addr_trig,
  FieldId::field_dma_ch8_al3_trans_count_ch8_al3_trans_count,
  FieldId::field_dma_ch8_al3_write_addr_ch8_al3_write_addr,
  FieldId::field_dma_ch8_ctrl_trig_en,
  FieldId::field_dma_ch8_ctrl_trig_high_priority,
  FieldId::field_dma_ch8_ctrl_trig_data_size,
  FieldId::field_dma_ch8_ctrl_trig_incr_read,
  FieldId::field_dma_ch8_ctrl_trig_incr_write,
  FieldId::field_dma_ch8_ctrl_trig_ring_size,
  FieldId::field_dma_ch8_ctrl_trig_ring_sel,
  FieldId::field_dma_ch8_ctrl_trig_chain_to,
  FieldId::field_dma_ch8_ctrl_trig_treq_sel,
  FieldId::field_dma_ch8_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch8_ctrl_trig_bswap,
  FieldId::field_dma_ch8_ctrl_trig_sniff_en,
  FieldId::field_dma_ch8_ctrl_trig_busy,
  FieldId::field_dma_ch8_ctrl_trig_write_error,
  FieldId::field_dma_ch8_ctrl_trig_read_error,
  FieldId::field_dma_ch8_ctrl_trig_ahb_error,
  FieldId::field_dma_ch8_dbg_ctdreq_ch8_dbg_ctdreq,
  FieldId::field_dma_ch8_dbg_tcr_ch8_dbg_tcr,
  FieldId::field_dma_ch8_read_addr_ch8_read_addr,
  FieldId::field_dma_ch8_trans_count_ch8_trans_count,
  FieldId::field_dma_ch8_write_addr_ch8_write_addr,
  FieldId::field_dma_ch9_al1_ctrl_ch9_al1_ctrl,
  FieldId::field_dma_ch9_al1_read_addr_ch9_al1_read_addr,
  FieldId::field_dma_ch9_al1_trans_count_trig_ch9_al1_trans_count_trig,
  FieldId::field_dma_ch9_al1_write_addr_ch9_al1_write_addr,
  FieldId::field_dma_ch9_al2_ctrl_ch9_al2_ctrl,
  FieldId::field_dma_ch9_al2_read_addr_ch9_al2_read_addr,
  FieldId::field_dma_ch9_al2_trans_count_ch9_al2_trans_count,
  FieldId::field_dma_ch9_al2_write_addr_trig_ch9_al2_write_addr_trig,
  FieldId::field_dma_ch9_al3_ctrl_ch9_al3_ctrl,
  FieldId::field_dma_ch9_al3_read_addr_trig_ch9_al3_read_addr_trig,
  FieldId::field_dma_ch9_al3_trans_count_ch9_al3_trans_count,
  FieldId::field_dma_ch9_al3_write_addr_ch9_al3_write_addr,
  FieldId::field_dma_ch9_ctrl_trig_en,
  FieldId::field_dma_ch9_ctrl_trig_high_priority,
  FieldId::field_dma_ch9_ctrl_trig_data_size,
  FieldId::field_dma_ch9_ctrl_trig_incr_read,
  FieldId::field_dma_ch9_ctrl_trig_incr_write,
  FieldId::field_dma_ch9_ctrl_trig_ring_size,
  FieldId::field_dma_ch9_ctrl_trig_ring_sel,
  FieldId::field_dma_ch9_ctrl_trig_chain_to,
  FieldId::field_dma_ch9_ctrl_trig_treq_sel,
  FieldId::field_dma_ch9_ctrl_trig_irq_quiet,
  FieldId::field_dma_ch9_ctrl_trig_bswap,
  FieldId::field_dma_ch9_ctrl_trig_sniff_en,
  FieldId::field_dma_ch9_ctrl_trig_busy,
  FieldId::field_dma_ch9_ctrl_trig_write_error,
  FieldId::field_dma_ch9_ctrl_trig_read_error,
  FieldId::field_dma_ch9_ctrl_trig_ahb_error,
  FieldId::field_dma_ch9_dbg_ctdreq_ch9_dbg_ctdreq,
  FieldId::field_dma_ch9_dbg_tcr_ch9_dbg_tcr,
  FieldId::field_dma_ch9_read_addr_ch9_read_addr,
  FieldId::field_dma_ch9_trans_count_ch9_trans_count,
  FieldId::field_dma_ch9_write_addr_ch9_write_addr,
  FieldId::field_dma_chan_abort_chan_abort,
  FieldId::field_dma_fifo_levels_tdf_lvl,
  FieldId::field_dma_fifo_levels_waf_lvl,
  FieldId::field_dma_fifo_levels_raf_lvl,
  FieldId::field_dma_inte0_inte0,
  FieldId::field_dma_inte1_inte1,
  FieldId::field_dma_intf0_intf0,
  FieldId::field_dma_intf1_intf1,
  FieldId::field_dma_intr_intr,
  FieldId::field_dma_intr1_intr1,
  FieldId::field_dma_ints0_ints0,
  FieldId::field_dma_ints1_ints1,
  FieldId::field_dma_multi_chan_trigger_multi_chan_trigger,
  FieldId::field_dma_n_channels_n_channels,
  FieldId::field_dma_sniff_ctrl_en,
  FieldId::field_dma_sniff_ctrl_dmach,
  FieldId::field_dma_sniff_ctrl_calc,
  FieldId::field_dma_sniff_ctrl_bswap,
  FieldId::field_dma_sniff_ctrl_out_rev,
  FieldId::field_dma_sniff_ctrl_out_inv,
  FieldId::field_dma_sniff_data_sniff_data,
  FieldId::field_dma_timer0_y,
  FieldId::field_dma_timer0_x,
  FieldId::field_dma_timer1_y,
  FieldId::field_dma_timer1_x,
  FieldId::field_dma_timer2_y,
  FieldId::field_dma_timer2_x,
  FieldId::field_dma_timer3_y,
  FieldId::field_dma_timer3_x,
  FieldId::field_i2c0_ic_ack_general_call_ack_gen_call,
  FieldId::field_i2c0_ic_clr_activity_clr_activity,
  FieldId::field_i2c0_ic_clr_gen_call_clr_gen_call,
  FieldId::field_i2c0_ic_clr_intr_clr_intr,
  FieldId::field_i2c0_ic_clr_rd_req_clr_rd_req,
  FieldId::field_i2c0_ic_clr_restart_det_clr_restart_det,
  FieldId::field_i2c0_ic_clr_rx_done_clr_rx_done,
  FieldId::field_i2c0_ic_clr_rx_over_clr_rx_over,
  FieldId::field_i2c0_ic_clr_rx_under_clr_rx_under,
  FieldId::field_i2c0_ic_clr_start_det_clr_start_det,
  FieldId::field_i2c0_ic_clr_stop_det_clr_stop_det,
  FieldId::field_i2c0_ic_clr_tx_abrt_clr_tx_abrt,
  FieldId::field_i2c0_ic_clr_tx_over_clr_tx_over,
  FieldId::field_i2c0_ic_comp_param_1_apb_data_width,
  FieldId::field_i2c0_ic_comp_param_1_max_speed_mode,
  FieldId::field_i2c0_ic_comp_param_1_hc_count_values,
  FieldId::field_i2c0_ic_comp_param_1_intr_io,
  FieldId::field_i2c0_ic_comp_param_1_has_dma,
  FieldId::field_i2c0_ic_comp_param_1_add_encoded_params,
  FieldId::field_i2c0_ic_comp_param_1_rx_buffer_depth,
  FieldId::field_i2c0_ic_comp_param_1_tx_buffer_depth,
  FieldId::field_i2c0_ic_comp_type_ic_comp_type,
  FieldId::field_i2c0_ic_comp_version_ic_comp_version,
  FieldId::field_i2c0_ic_con_master_mode,
  FieldId::field_i2c0_ic_con_speed,
  FieldId::field_i2c0_ic_con_ic_10bitaddr_slave,
  FieldId::field_i2c0_ic_con_ic_10bitaddr_master,
  FieldId::field_i2c0_ic_con_ic_restart_en,
  FieldId::field_i2c0_ic_con_ic_slave_disable,
  FieldId::field_i2c0_ic_con_stop_det_ifaddressed,
  FieldId::field_i2c0_ic_con_tx_empty_ctrl,
  FieldId::field_i2c0_ic_con_rx_fifo_full_hld_ctrl,
  FieldId::field_i2c0_ic_con_stop_det_if_master_active,
  FieldId::field_i2c0_ic_data_cmd_dat,
  FieldId::field_i2c0_ic_data_cmd_cmd,
  FieldId::field_i2c0_ic_data_cmd_stop,
  FieldId::field_i2c0_ic_data_cmd_restart,
  FieldId::field_i2c0_ic_data_cmd_first_data_byte,
  FieldId::field_i2c0_ic_dma_cr_rdmae,
  FieldId::field_i2c0_ic_dma_cr_tdmae,
  FieldId::field_i2c0_ic_dma_rdlr_dmardl,
  FieldId::field_i2c0_ic_dma_tdlr_dmatdl,
  FieldId::field_i2c0_ic_enable_enable,
  FieldId::field_i2c0_ic_enable_abort,
  FieldId::field_i2c0_ic_enable_tx_cmd_block,
  FieldId::field_i2c0_ic_enable_status_ic_en,
  FieldId::field_i2c0_ic_enable_status_slv_disabled_while_busy,
  FieldId::field_i2c0_ic_enable_status_slv_rx_data_lost,
  FieldId::field_i2c0_ic_fs_scl_hcnt_ic_fs_scl_hcnt,
  FieldId::field_i2c0_ic_fs_scl_lcnt_ic_fs_scl_lcnt,
  FieldId::field_i2c0_ic_fs_spklen_ic_fs_spklen,
  FieldId::field_i2c0_ic_intr_mask_m_rx_under,
  FieldId::field_i2c0_ic_intr_mask_m_rx_over,
  FieldId::field_i2c0_ic_intr_mask_m_rx_full,
  FieldId::field_i2c0_ic_intr_mask_m_tx_over,
  FieldId::field_i2c0_ic_intr_mask_m_tx_empty,
  FieldId::field_i2c0_ic_intr_mask_m_rd_req,
  FieldId::field_i2c0_ic_intr_mask_m_tx_abrt,
  FieldId::field_i2c0_ic_intr_mask_m_rx_done,
  FieldId::field_i2c0_ic_intr_mask_m_activity,
  FieldId::field_i2c0_ic_intr_mask_m_stop_det,
  FieldId::field_i2c0_ic_intr_mask_m_start_det,
  FieldId::field_i2c0_ic_intr_mask_m_gen_call,
  FieldId::field_i2c0_ic_intr_mask_m_restart_det,
  FieldId::field_i2c0_ic_intr_stat_r_rx_under,
  FieldId::field_i2c0_ic_intr_stat_r_rx_over,
  FieldId::field_i2c0_ic_intr_stat_r_rx_full,
  FieldId::field_i2c0_ic_intr_stat_r_tx_over,
  FieldId::field_i2c0_ic_intr_stat_r_tx_empty,
  FieldId::field_i2c0_ic_intr_stat_r_rd_req,
  FieldId::field_i2c0_ic_intr_stat_r_tx_abrt,
  FieldId::field_i2c0_ic_intr_stat_r_rx_done,
  FieldId::field_i2c0_ic_intr_stat_r_activity,
  FieldId::field_i2c0_ic_intr_stat_r_stop_det,
  FieldId::field_i2c0_ic_intr_stat_r_start_det,
  FieldId::field_i2c0_ic_intr_stat_r_gen_call,
  FieldId::field_i2c0_ic_intr_stat_r_restart_det,
  FieldId::field_i2c0_ic_raw_intr_stat_rx_under,
  FieldId::field_i2c0_ic_raw_intr_stat_rx_over,
  FieldId::field_i2c0_ic_raw_intr_stat_rx_full,
  FieldId::field_i2c0_ic_raw_intr_stat_tx_over,
  FieldId::field_i2c0_ic_raw_intr_stat_tx_empty,
  FieldId::field_i2c0_ic_raw_intr_stat_rd_req,
  FieldId::field_i2c0_ic_raw_intr_stat_tx_abrt,
  FieldId::field_i2c0_ic_raw_intr_stat_rx_done,
  FieldId::field_i2c0_ic_raw_intr_stat_activity,
  FieldId::field_i2c0_ic_raw_intr_stat_stop_det,
  FieldId::field_i2c0_ic_raw_intr_stat_start_det,
  FieldId::field_i2c0_ic_raw_intr_stat_gen_call,
  FieldId::field_i2c0_ic_raw_intr_stat_restart_det,
  FieldId::field_i2c0_ic_rxflr_rxflr,
  FieldId::field_i2c0_ic_rx_tl_rx_tl,
  FieldId::field_i2c0_ic_sar_ic_sar,
  FieldId::field_i2c0_ic_sda_hold_ic_sda_tx_hold,
  FieldId::field_i2c0_ic_sda_hold_ic_sda_rx_hold,
  FieldId::field_i2c0_ic_sda_setup_sda_setup,
  FieldId::field_i2c0_ic_slv_data_nack_only_nack,
  FieldId::field_i2c0_ic_ss_scl_hcnt_ic_ss_scl_hcnt,
  FieldId::field_i2c0_ic_ss_scl_lcnt_ic_ss_scl_lcnt,
  FieldId::field_i2c0_ic_status_activity,
  FieldId::field_i2c0_ic_status_tfnf,
  FieldId::field_i2c0_ic_status_tfe,
  FieldId::field_i2c0_ic_status_rfne,
  FieldId::field_i2c0_ic_status_rff,
  FieldId::field_i2c0_ic_status_mst_activity,
  FieldId::field_i2c0_ic_status_slv_activity,
  FieldId::field_i2c0_ic_tar_ic_tar,
  FieldId::field_i2c0_ic_tar_gc_or_start,
  FieldId::field_i2c0_ic_tar_special,
  FieldId::field_i2c0_ic_txflr_txflr,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_7b_addr_noack,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_10addr1_noack,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_10addr2_noack,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_txdata_noack,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_gcall_noack,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_gcall_read,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_hs_ackdet,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_sbyte_ackdet,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_hs_norstrt,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_sbyte_norstrt,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_10b_rd_norstrt,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_master_dis,
  FieldId::field_i2c0_ic_tx_abrt_source_arb_lost,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_slvflush_txfifo,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_slv_arblost,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_slvrd_intx,
  FieldId::field_i2c0_ic_tx_abrt_source_abrt_user_abrt,
  FieldId::field_i2c0_ic_tx_abrt_source_tx_flush_cnt,
  FieldId::field_i2c0_ic_tx_tl_tx_tl,
  FieldId::field_i2c1_ic_ack_general_call_ack_gen_call,
  FieldId::field_i2c1_ic_clr_activity_clr_activity,
  FieldId::field_i2c1_ic_clr_gen_call_clr_gen_call,
  FieldId::field_i2c1_ic_clr_intr_clr_intr,
  FieldId::field_i2c1_ic_clr_rd_req_clr_rd_req,
  FieldId::field_i2c1_ic_clr_restart_det_clr_restart_det,
  FieldId::field_i2c1_ic_clr_rx_done_clr_rx_done,
  FieldId::field_i2c1_ic_clr_rx_over_clr_rx_over,
  FieldId::field_i2c1_ic_clr_rx_under_clr_rx_under,
  FieldId::field_i2c1_ic_clr_start_det_clr_start_det,
  FieldId::field_i2c1_ic_clr_stop_det_clr_stop_det,
  FieldId::field_i2c1_ic_clr_tx_abrt_clr_tx_abrt,
  FieldId::field_i2c1_ic_clr_tx_over_clr_tx_over,
  FieldId::field_i2c1_ic_comp_param_1_apb_data_width,
  FieldId::field_i2c1_ic_comp_param_1_max_speed_mode,
  FieldId::field_i2c1_ic_comp_param_1_hc_count_values,
  FieldId::field_i2c1_ic_comp_param_1_intr_io,
  FieldId::field_i2c1_ic_comp_param_1_has_dma,
  FieldId::field_i2c1_ic_comp_param_1_add_encoded_params,
  FieldId::field_i2c1_ic_comp_param_1_rx_buffer_depth,
  FieldId::field_i2c1_ic_comp_param_1_tx_buffer_depth,
  FieldId::field_i2c1_ic_comp_type_ic_comp_type,
  FieldId::field_i2c1_ic_comp_version_ic_comp_version,
  FieldId::field_i2c1_ic_con_master_mode,
  FieldId::field_i2c1_ic_con_speed,
  FieldId::field_i2c1_ic_con_ic_10bitaddr_slave,
  FieldId::field_i2c1_ic_con_ic_10bitaddr_master,
  FieldId::field_i2c1_ic_con_ic_restart_en,
  FieldId::field_i2c1_ic_con_ic_slave_disable,
  FieldId::field_i2c1_ic_con_stop_det_ifaddressed,
  FieldId::field_i2c1_ic_con_tx_empty_ctrl,
  FieldId::field_i2c1_ic_con_rx_fifo_full_hld_ctrl,
  FieldId::field_i2c1_ic_con_stop_det_if_master_active,
  FieldId::field_i2c1_ic_data_cmd_dat,
  FieldId::field_i2c1_ic_data_cmd_cmd,
  FieldId::field_i2c1_ic_data_cmd_stop,
  FieldId::field_i2c1_ic_data_cmd_restart,
  FieldId::field_i2c1_ic_data_cmd_first_data_byte,
  FieldId::field_i2c1_ic_dma_cr_rdmae,
  FieldId::field_i2c1_ic_dma_cr_tdmae,
  FieldId::field_i2c1_ic_dma_rdlr_dmardl,
  FieldId::field_i2c1_ic_dma_tdlr_dmatdl,
  FieldId::field_i2c1_ic_enable_enable,
  FieldId::field_i2c1_ic_enable_abort,
  FieldId::field_i2c1_ic_enable_tx_cmd_block,
  FieldId::field_i2c1_ic_enable_status_ic_en,
  FieldId::field_i2c1_ic_enable_status_slv_disabled_while_busy,
  FieldId::field_i2c1_ic_enable_status_slv_rx_data_lost,
  FieldId::field_i2c1_ic_fs_scl_hcnt_ic_fs_scl_hcnt,
  FieldId::field_i2c1_ic_fs_scl_lcnt_ic_fs_scl_lcnt,
  FieldId::field_i2c1_ic_fs_spklen_ic_fs_spklen,
  FieldId::field_i2c1_ic_intr_mask_m_rx_under,
  FieldId::field_i2c1_ic_intr_mask_m_rx_over,
  FieldId::field_i2c1_ic_intr_mask_m_rx_full,
  FieldId::field_i2c1_ic_intr_mask_m_tx_over,
  FieldId::field_i2c1_ic_intr_mask_m_tx_empty,
  FieldId::field_i2c1_ic_intr_mask_m_rd_req,
  FieldId::field_i2c1_ic_intr_mask_m_tx_abrt,
  FieldId::field_i2c1_ic_intr_mask_m_rx_done,
  FieldId::field_i2c1_ic_intr_mask_m_activity,
  FieldId::field_i2c1_ic_intr_mask_m_stop_det,
  FieldId::field_i2c1_ic_intr_mask_m_start_det,
  FieldId::field_i2c1_ic_intr_mask_m_gen_call,
  FieldId::field_i2c1_ic_intr_mask_m_restart_det,
  FieldId::field_i2c1_ic_intr_stat_r_rx_under,
  FieldId::field_i2c1_ic_intr_stat_r_rx_over,
  FieldId::field_i2c1_ic_intr_stat_r_rx_full,
  FieldId::field_i2c1_ic_intr_stat_r_tx_over,
  FieldId::field_i2c1_ic_intr_stat_r_tx_empty,
  FieldId::field_i2c1_ic_intr_stat_r_rd_req,
  FieldId::field_i2c1_ic_intr_stat_r_tx_abrt,
  FieldId::field_i2c1_ic_intr_stat_r_rx_done,
  FieldId::field_i2c1_ic_intr_stat_r_activity,
  FieldId::field_i2c1_ic_intr_stat_r_stop_det,
  FieldId::field_i2c1_ic_intr_stat_r_start_det,
  FieldId::field_i2c1_ic_intr_stat_r_gen_call,
  FieldId::field_i2c1_ic_intr_stat_r_restart_det,
  FieldId::field_i2c1_ic_raw_intr_stat_rx_under,
  FieldId::field_i2c1_ic_raw_intr_stat_rx_over,
  FieldId::field_i2c1_ic_raw_intr_stat_rx_full,
  FieldId::field_i2c1_ic_raw_intr_stat_tx_over,
  FieldId::field_i2c1_ic_raw_intr_stat_tx_empty,
  FieldId::field_i2c1_ic_raw_intr_stat_rd_req,
  FieldId::field_i2c1_ic_raw_intr_stat_tx_abrt,
  FieldId::field_i2c1_ic_raw_intr_stat_rx_done,
  FieldId::field_i2c1_ic_raw_intr_stat_activity,
  FieldId::field_i2c1_ic_raw_intr_stat_stop_det,
  FieldId::field_i2c1_ic_raw_intr_stat_start_det,
  FieldId::field_i2c1_ic_raw_intr_stat_gen_call,
  FieldId::field_i2c1_ic_raw_intr_stat_restart_det,
  FieldId::field_i2c1_ic_rxflr_rxflr,
  FieldId::field_i2c1_ic_rx_tl_rx_tl,
  FieldId::field_i2c1_ic_sar_ic_sar,
  FieldId::field_i2c1_ic_sda_hold_ic_sda_tx_hold,
  FieldId::field_i2c1_ic_sda_hold_ic_sda_rx_hold,
  FieldId::field_i2c1_ic_sda_setup_sda_setup,
  FieldId::field_i2c1_ic_slv_data_nack_only_nack,
  FieldId::field_i2c1_ic_ss_scl_hcnt_ic_ss_scl_hcnt,
  FieldId::field_i2c1_ic_ss_scl_lcnt_ic_ss_scl_lcnt,
  FieldId::field_i2c1_ic_status_activity,
  FieldId::field_i2c1_ic_status_tfnf,
  FieldId::field_i2c1_ic_status_tfe,
  FieldId::field_i2c1_ic_status_rfne,
  FieldId::field_i2c1_ic_status_rff,
  FieldId::field_i2c1_ic_status_mst_activity,
  FieldId::field_i2c1_ic_status_slv_activity,
  FieldId::field_i2c1_ic_tar_ic_tar,
  FieldId::field_i2c1_ic_tar_gc_or_start,
  FieldId::field_i2c1_ic_tar_special,
  FieldId::field_i2c1_ic_txflr_txflr,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_7b_addr_noack,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_10addr1_noack,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_10addr2_noack,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_txdata_noack,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_gcall_noack,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_gcall_read,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_hs_ackdet,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_sbyte_ackdet,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_hs_norstrt,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_sbyte_norstrt,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_10b_rd_norstrt,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_master_dis,
  FieldId::field_i2c1_ic_tx_abrt_source_arb_lost,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_slvflush_txfifo,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_slv_arblost,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_slvrd_intx,
  FieldId::field_i2c1_ic_tx_abrt_source_abrt_user_abrt,
  FieldId::field_i2c1_ic_tx_abrt_source_tx_flush_cnt,
  FieldId::field_i2c1_ic_tx_tl_tx_tl,
  FieldId::field_pwm_ch0_cc_a,
  FieldId::field_pwm_ch0_cc_b,
  FieldId::field_pwm_ch0_csr_en,
  FieldId::field_pwm_ch0_csr_ph_correct,
  FieldId::field_pwm_ch0_csr_a_inv,
  FieldId::field_pwm_ch0_csr_b_inv,
  FieldId::field_pwm_ch0_csr_divmode,
  FieldId::field_pwm_ch0_csr_ph_ret,
  FieldId::field_pwm_ch0_csr_ph_adv,
  FieldId::field_pwm_ch0_ctr_ch0_ctr,
  FieldId::field_pwm_ch0_div_frac,
  FieldId::field_pwm_ch0_div_int,
  FieldId::field_pwm_ch0_top_ch0_top,
  FieldId::field_pwm_ch1_cc_a,
  FieldId::field_pwm_ch1_cc_b,
  FieldId::field_pwm_ch1_csr_en,
  FieldId::field_pwm_ch1_csr_ph_correct,
  FieldId::field_pwm_ch1_csr_a_inv,
  FieldId::field_pwm_ch1_csr_b_inv,
  FieldId::field_pwm_ch1_csr_divmode,
  FieldId::field_pwm_ch1_csr_ph_ret,
  FieldId::field_pwm_ch1_csr_ph_adv,
  FieldId::field_pwm_ch1_ctr_ch1_ctr,
  FieldId::field_pwm_ch1_div_frac,
  FieldId::field_pwm_ch1_div_int,
  FieldId::field_pwm_ch1_top_ch1_top,
  FieldId::field_pwm_ch2_cc_a,
  FieldId::field_pwm_ch2_cc_b,
  FieldId::field_pwm_ch2_csr_en,
  FieldId::field_pwm_ch2_csr_ph_correct,
  FieldId::field_pwm_ch2_csr_a_inv,
  FieldId::field_pwm_ch2_csr_b_inv,
  FieldId::field_pwm_ch2_csr_divmode,
  FieldId::field_pwm_ch2_csr_ph_ret,
  FieldId::field_pwm_ch2_csr_ph_adv,
  FieldId::field_pwm_ch2_ctr_ch2_ctr,
  FieldId::field_pwm_ch2_div_frac,
  FieldId::field_pwm_ch2_div_int,
  FieldId::field_pwm_ch2_top_ch2_top,
  FieldId::field_pwm_ch3_cc_a,
  FieldId::field_pwm_ch3_cc_b,
  FieldId::field_pwm_ch3_csr_en,
  FieldId::field_pwm_ch3_csr_ph_correct,
  FieldId::field_pwm_ch3_csr_a_inv,
  FieldId::field_pwm_ch3_csr_b_inv,
  FieldId::field_pwm_ch3_csr_divmode,
  FieldId::field_pwm_ch3_csr_ph_ret,
  FieldId::field_pwm_ch3_csr_ph_adv,
  FieldId::field_pwm_ch3_ctr_ch3_ctr,
  FieldId::field_pwm_ch3_div_frac,
  FieldId::field_pwm_ch3_div_int,
  FieldId::field_pwm_ch3_top_ch3_top,
  FieldId::field_pwm_ch4_cc_a,
  FieldId::field_pwm_ch4_cc_b,
  FieldId::field_pwm_ch4_csr_en,
  FieldId::field_pwm_ch4_csr_ph_correct,
  FieldId::field_pwm_ch4_csr_a_inv,
  FieldId::field_pwm_ch4_csr_b_inv,
  FieldId::field_pwm_ch4_csr_divmode,
  FieldId::field_pwm_ch4_csr_ph_ret,
  FieldId::field_pwm_ch4_csr_ph_adv,
  FieldId::field_pwm_ch4_ctr_ch4_ctr,
  FieldId::field_pwm_ch4_div_frac,
  FieldId::field_pwm_ch4_div_int,
  FieldId::field_pwm_ch4_top_ch4_top,
  FieldId::field_pwm_ch5_cc_a,
  FieldId::field_pwm_ch5_cc_b,
  FieldId::field_pwm_ch5_csr_en,
  FieldId::field_pwm_ch5_csr_ph_correct,
  FieldId::field_pwm_ch5_csr_a_inv,
  FieldId::field_pwm_ch5_csr_b_inv,
  FieldId::field_pwm_ch5_csr_divmode,
  FieldId::field_pwm_ch5_csr_ph_ret,
  FieldId::field_pwm_ch5_csr_ph_adv,
  FieldId::field_pwm_ch5_ctr_ch5_ctr,
  FieldId::field_pwm_ch5_div_frac,
  FieldId::field_pwm_ch5_div_int,
  FieldId::field_pwm_ch5_top_ch5_top,
  FieldId::field_pwm_ch6_cc_a,
  FieldId::field_pwm_ch6_cc_b,
  FieldId::field_pwm_ch6_csr_en,
  FieldId::field_pwm_ch6_csr_ph_correct,
  FieldId::field_pwm_ch6_csr_a_inv,
  FieldId::field_pwm_ch6_csr_b_inv,
  FieldId::field_pwm_ch6_csr_divmode,
  FieldId::field_pwm_ch6_csr_ph_ret,
  FieldId::field_pwm_ch6_csr_ph_adv,
  FieldId::field_pwm_ch6_ctr_ch6_ctr,
  FieldId::field_pwm_ch6_div_frac,
  FieldId::field_pwm_ch6_div_int,
  FieldId::field_pwm_ch6_top_ch6_top,
  FieldId::field_pwm_ch7_cc_a,
  FieldId::field_pwm_ch7_cc_b,
  FieldId::field_pwm_ch7_csr_en,
  FieldId::field_pwm_ch7_csr_ph_correct,
  FieldId::field_pwm_ch7_csr_a_inv,
  FieldId::field_pwm_ch7_csr_b_inv,
  FieldId::field_pwm_ch7_csr_divmode,
  FieldId::field_pwm_ch7_csr_ph_ret,
  FieldId::field_pwm_ch7_csr_ph_adv,
  FieldId::field_pwm_ch7_ctr_ch7_ctr,
  FieldId::field_pwm_ch7_div_frac,
  FieldId::field_pwm_ch7_div_int,
  FieldId::field_pwm_ch7_top_ch7_top,
  FieldId::field_pwm_en_ch0,
  FieldId::field_pwm_en_ch1,
  FieldId::field_pwm_en_ch2,
  FieldId::field_pwm_en_ch3,
  FieldId::field_pwm_en_ch4,
  FieldId::field_pwm_en_ch5,
  FieldId::field_pwm_en_ch6,
  FieldId::field_pwm_en_ch7,
  FieldId::field_pwm_inte_ch0,
  FieldId::field_pwm_inte_ch1,
  FieldId::field_pwm_inte_ch2,
  FieldId::field_pwm_inte_ch3,
  FieldId::field_pwm_inte_ch4,
  FieldId::field_pwm_inte_ch5,
  FieldId::field_pwm_inte_ch6,
  FieldId::field_pwm_inte_ch7,
  FieldId::field_pwm_intf_ch0,
  FieldId::field_pwm_intf_ch1,
  FieldId::field_pwm_intf_ch2,
  FieldId::field_pwm_intf_ch3,
  FieldId::field_pwm_intf_ch4,
  FieldId::field_pwm_intf_ch5,
  FieldId::field_pwm_intf_ch6,
  FieldId::field_pwm_intf_ch7,
  FieldId::field_pwm_intr_ch0,
  FieldId::field_pwm_intr_ch1,
  FieldId::field_pwm_intr_ch2,
  FieldId::field_pwm_intr_ch3,
  FieldId::field_pwm_intr_ch4,
  FieldId::field_pwm_intr_ch5,
  FieldId::field_pwm_intr_ch6,
  FieldId::field_pwm_intr_ch7,
  FieldId::field_pwm_ints_ch0,
  FieldId::field_pwm_ints_ch1,
  FieldId::field_pwm_ints_ch2,
  FieldId::field_pwm_ints_ch3,
  FieldId::field_pwm_ints_ch4,
  FieldId::field_pwm_ints_ch5,
  FieldId::field_pwm_ints_ch6,
  FieldId::field_pwm_ints_ch7,
  FieldId::field_resets_reset_adc,
  FieldId::field_resets_reset_dma,
  FieldId::field_resets_reset_i2c0,
  FieldId::field_resets_reset_i2c1,
  FieldId::field_resets_reset_pwm,
  FieldId::field_resets_reset_rtc,
  FieldId::field_resets_reset_spi0,
  FieldId::field_resets_reset_spi1,
  FieldId::field_resets_reset_timer,
  FieldId::field_resets_reset_uart0,
  FieldId::field_resets_reset_uart1,
  FieldId::field_rtc_clkdiv_m1_clkdiv_m1,
  FieldId::field_rtc_ctrl_rtc_enable,
  FieldId::field_rtc_ctrl_rtc_active,
  FieldId::field_rtc_ctrl_load,
  FieldId::field_rtc_ctrl_force_notleapyear,
  FieldId::field_rtc_inte_rtc,
  FieldId::field_rtc_intf_rtc,
  FieldId::field_rtc_intr_rtc,
  FieldId::field_rtc_ints_rtc,
  FieldId::field_rtc_irq_setup_0_day,
  FieldId::field_rtc_irq_setup_0_month,
  FieldId::field_rtc_irq_setup_0_year,
  FieldId::field_rtc_irq_setup_0_day_ena,
  FieldId::field_rtc_irq_setup_0_month_ena,
  FieldId::field_rtc_irq_setup_0_year_ena,
  FieldId::field_rtc_irq_setup_0_match_ena,
  FieldId::field_rtc_irq_setup_0_match_active,
  FieldId::field_rtc_irq_setup_1_sec,
  FieldId::field_rtc_irq_setup_1_min,
  FieldId::field_rtc_irq_setup_1_hour,
  FieldId::field_rtc_irq_setup_1_dotw,
  FieldId::field_rtc_irq_setup_1_sec_ena,
  FieldId::field_rtc_irq_setup_1_min_ena,
  FieldId::field_rtc_irq_setup_1_hour_ena,
  FieldId::field_rtc_irq_setup_1_dotw_ena,
  FieldId::field_rtc_rtc_0_sec,
  FieldId::field_rtc_rtc_0_min,
  FieldId::field_rtc_rtc_0_hour,
  FieldId::field_rtc_rtc_0_dotw,
  FieldId::field_rtc_rtc_1_day,
  FieldId::field_rtc_rtc_1_month,
  FieldId::field_rtc_rtc_1_year,
  FieldId::field_rtc_setup_0_day,
  FieldId::field_rtc_setup_0_month,
  FieldId::field_rtc_setup_0_year,
  FieldId::field_rtc_setup_1_sec,
  FieldId::field_rtc_setup_1_min,
  FieldId::field_rtc_setup_1_hour,
  FieldId::field_rtc_setup_1_dotw,
  FieldId::field_spi0_sspcpsr_cpsdvsr,
  FieldId::field_spi0_sspcr0_dss,
  FieldId::field_spi0_sspcr0_frf,
  FieldId::field_spi0_sspcr0_spo,
  FieldId::field_spi0_sspcr0_sph,
  FieldId::field_spi0_sspcr0_scr,
  FieldId::field_spi0_sspcr1_lbm,
  FieldId::field_spi0_sspcr1_sse,
  FieldId::field_spi0_sspcr1_ms,
  FieldId::field_spi0_sspcr1_sod,
  FieldId::field_spi0_sspdmacr_rxdmae,
  FieldId::field_spi0_sspdmacr_txdmae,
  FieldId::field_spi0_sspdr_data,
  FieldId::field_spi0_sspicr_roric,
  FieldId::field_spi0_sspicr_rtic,
  FieldId::field_spi0_sspimsc_rorim,
  FieldId::field_spi0_sspimsc_rtim,
  FieldId::field_spi0_sspimsc_rxim,
  FieldId::field_spi0_sspimsc_txim,
  FieldId::field_spi0_sspmis_rormis,
  FieldId::field_spi0_sspmis_rtmis,
  FieldId::field_spi0_sspmis_rxmis,
  FieldId::field_spi0_sspmis_txmis,
  FieldId::field_spi0_ssppcellid0_ssppcellid0,
  FieldId::field_spi0_ssppcellid1_ssppcellid1,
  FieldId::field_spi0_ssppcellid2_ssppcellid2,
  FieldId::field_spi0_ssppcellid3_ssppcellid3,
  FieldId::field_spi0_sspperiphid0_partnumber0,
  FieldId::field_spi0_sspperiphid1_partnumber1,
  FieldId::field_spi0_sspperiphid1_designer0,
  FieldId::field_spi0_sspperiphid2_designer1,
  FieldId::field_spi0_sspperiphid2_revision,
  FieldId::field_spi0_sspperiphid3_configuration,
  FieldId::field_spi0_sspris_rorris,
  FieldId::field_spi0_sspris_rtris,
  FieldId::field_spi0_sspris_rxris,
  FieldId::field_spi0_sspris_txris,
  FieldId::field_spi0_sspsr_tfe,
  FieldId::field_spi0_sspsr_tnf,
  FieldId::field_spi0_sspsr_rne,
  FieldId::field_spi0_sspsr_rff,
  FieldId::field_spi0_sspsr_bsy,
  FieldId::field_spi1_sspcpsr_cpsdvsr,
  FieldId::field_spi1_sspcr0_dss,
  FieldId::field_spi1_sspcr0_frf,
  FieldId::field_spi1_sspcr0_spo,
  FieldId::field_spi1_sspcr0_sph,
  FieldId::field_spi1_sspcr0_scr,
  FieldId::field_spi1_sspcr1_lbm,
  FieldId::field_spi1_sspcr1_sse,
  FieldId::field_spi1_sspcr1_ms,
  FieldId::field_spi1_sspcr1_sod,
  FieldId::field_spi1_sspdmacr_rxdmae,
  FieldId::field_spi1_sspdmacr_txdmae,
  FieldId::field_spi1_sspdr_data,
  FieldId::field_spi1_sspicr_roric,
  FieldId::field_spi1_sspicr_rtic,
  FieldId::field_spi1_sspimsc_rorim,
  FieldId::field_spi1_sspimsc_rtim,
  FieldId::field_spi1_sspimsc_rxim,
  FieldId::field_spi1_sspimsc_txim,
  FieldId::field_spi1_sspmis_rormis,
  FieldId::field_spi1_sspmis_rtmis,
  FieldId::field_spi1_sspmis_rxmis,
  FieldId::field_spi1_sspmis_txmis,
  FieldId::field_spi1_ssppcellid0_ssppcellid0,
  FieldId::field_spi1_ssppcellid1_ssppcellid1,
  FieldId::field_spi1_ssppcellid2_ssppcellid2,
  FieldId::field_spi1_ssppcellid3_ssppcellid3,
  FieldId::field_spi1_sspperiphid0_partnumber0,
  FieldId::field_spi1_sspperiphid1_partnumber1,
  FieldId::field_spi1_sspperiphid1_designer0,
  FieldId::field_spi1_sspperiphid2_designer1,
  FieldId::field_spi1_sspperiphid2_revision,
  FieldId::field_spi1_sspperiphid3_configuration,
  FieldId::field_spi1_sspris_rorris,
  FieldId::field_spi1_sspris_rtris,
  FieldId::field_spi1_sspris_rxris,
  FieldId::field_spi1_sspris_txris,
  FieldId::field_spi1_sspsr_tfe,
  FieldId::field_spi1_sspsr_tnf,
  FieldId::field_spi1_sspsr_rne,
  FieldId::field_spi1_sspsr_rff,
  FieldId::field_spi1_sspsr_bsy,
  FieldId::field_timer_alarm0_alarm0,
  FieldId::field_timer_alarm1_alarm1,
  FieldId::field_timer_alarm2_alarm2,
  FieldId::field_timer_alarm3_alarm3,
  FieldId::field_timer_armed_armed,
  FieldId::field_timer_dbgpause_dbg0,
  FieldId::field_timer_dbgpause_dbg1,
  FieldId::field_timer_inte_alarm_0,
  FieldId::field_timer_inte_alarm_1,
  FieldId::field_timer_inte_alarm_2,
  FieldId::field_timer_inte_alarm_3,
  FieldId::field_timer_intf_alarm_0,
  FieldId::field_timer_intf_alarm_1,
  FieldId::field_timer_intf_alarm_2,
  FieldId::field_timer_intf_alarm_3,
  FieldId::field_timer_intr_alarm_0,
  FieldId::field_timer_intr_alarm_1,
  FieldId::field_timer_intr_alarm_2,
  FieldId::field_timer_intr_alarm_3,
  FieldId::field_timer_ints_alarm_0,
  FieldId::field_timer_ints_alarm_1,
  FieldId::field_timer_ints_alarm_2,
  FieldId::field_timer_ints_alarm_3,
  FieldId::field_timer_pause_pause,
  FieldId::field_timer_timehr_timehr,
  FieldId::field_timer_timehw_timehw,
  FieldId::field_timer_timelr_timelr,
  FieldId::field_timer_timelw_timelw,
  FieldId::field_timer_timerawh_timerawh,
  FieldId::field_timer_timerawl_timerawl,
  FieldId::field_uart0_uartcr_uarten,
  FieldId::field_uart0_uartcr_siren,
  FieldId::field_uart0_uartcr_sirlp,
  FieldId::field_uart0_uartcr_lbe,
  FieldId::field_uart0_uartcr_txe,
  FieldId::field_uart0_uartcr_rxe,
  FieldId::field_uart0_uartcr_dtr,
  FieldId::field_uart0_uartcr_rts,
  FieldId::field_uart0_uartcr_out1,
  FieldId::field_uart0_uartcr_out2,
  FieldId::field_uart0_uartcr_rtsen,
  FieldId::field_uart0_uartcr_ctsen,
  FieldId::field_uart0_uartdmacr_rxdmae,
  FieldId::field_uart0_uartdmacr_txdmae,
  FieldId::field_uart0_uartdmacr_dmaonerr,
  FieldId::field_uart0_uartdr_data,
  FieldId::field_uart0_uartdr_fe,
  FieldId::field_uart0_uartdr_pe,
  FieldId::field_uart0_uartdr_be,
  FieldId::field_uart0_uartdr_oe,
  FieldId::field_uart0_uartfbrd_baud_divfrac,
  FieldId::field_uart0_uartfr_cts,
  FieldId::field_uart0_uartfr_dsr,
  FieldId::field_uart0_uartfr_dcd,
  FieldId::field_uart0_uartfr_busy,
  FieldId::field_uart0_uartfr_rxfe,
  FieldId::field_uart0_uartfr_txff,
  FieldId::field_uart0_uartfr_rxff,
  FieldId::field_uart0_uartfr_txfe,
  FieldId::field_uart0_uartfr_ri,
  FieldId::field_uart0_uartibrd_baud_divint,
  FieldId::field_uart0_uarticr_rimic,
  FieldId::field_uart0_uarticr_ctsmic,
  FieldId::field_uart0_uarticr_dcdmic,
  FieldId::field_uart0_uarticr_dsrmic,
  FieldId::field_uart0_uarticr_rxic,
  FieldId::field_uart0_uarticr_txic,
  FieldId::field_uart0_uarticr_rtic,
  FieldId::field_uart0_uarticr_feic,
  FieldId::field_uart0_uarticr_peic,
  FieldId::field_uart0_uarticr_beic,
  FieldId::field_uart0_uarticr_oeic,
  FieldId::field_uart0_uartifls_txiflsel,
  FieldId::field_uart0_uartifls_rxiflsel,
  FieldId::field_uart0_uartilpr_ilpdvsr,
  FieldId::field_uart0_uartimsc_rimim,
  FieldId::field_uart0_uartimsc_ctsmim,
  FieldId::field_uart0_uartimsc_dcdmim,
  FieldId::field_uart0_uartimsc_dsrmim,
  FieldId::field_uart0_uartimsc_rxim,
  FieldId::field_uart0_uartimsc_txim,
  FieldId::field_uart0_uartimsc_rtim,
  FieldId::field_uart0_uartimsc_feim,
  FieldId::field_uart0_uartimsc_peim,
  FieldId::field_uart0_uartimsc_beim,
  FieldId::field_uart0_uartimsc_oeim,
  FieldId::field_uart0_uartlcr_h_brk,
  FieldId::field_uart0_uartlcr_h_pen,
  FieldId::field_uart0_uartlcr_h_eps,
  FieldId::field_uart0_uartlcr_h_stp2,
  FieldId::field_uart0_uartlcr_h_fen,
  FieldId::field_uart0_uartlcr_h_wlen,
  FieldId::field_uart0_uartlcr_h_sps,
  FieldId::field_uart0_uartmis_rimmis,
  FieldId::field_uart0_uartmis_ctsmmis,
  FieldId::field_uart0_uartmis_dcdmmis,
  FieldId::field_uart0_uartmis_dsrmmis,
  FieldId::field_uart0_uartmis_rxmis,
  FieldId::field_uart0_uartmis_txmis,
  FieldId::field_uart0_uartmis_rtmis,
  FieldId::field_uart0_uartmis_femis,
  FieldId::field_uart0_uartmis_pemis,
  FieldId::field_uart0_uartmis_bemis,
  FieldId::field_uart0_uartmis_oemis,
  FieldId::field_uart0_uartpcellid0_uartpcellid0,
  FieldId::field_uart0_uartpcellid1_uartpcellid1,
  FieldId::field_uart0_uartpcellid2_uartpcellid2,
  FieldId::field_uart0_uartpcellid3_uartpcellid3,
  FieldId::field_uart0_uartperiphid0_partnumber0,
  FieldId::field_uart0_uartperiphid1_partnumber1,
  FieldId::field_uart0_uartperiphid1_designer0,
  FieldId::field_uart0_uartperiphid2_designer1,
  FieldId::field_uart0_uartperiphid2_revision,
  FieldId::field_uart0_uartperiphid3_configuration,
  FieldId::field_uart0_uartris_rirmis,
  FieldId::field_uart0_uartris_ctsrmis,
  FieldId::field_uart0_uartris_dcdrmis,
  FieldId::field_uart0_uartris_dsrrmis,
  FieldId::field_uart0_uartris_rxris,
  FieldId::field_uart0_uartris_txris,
  FieldId::field_uart0_uartris_rtris,
  FieldId::field_uart0_uartris_feris,
  FieldId::field_uart0_uartris_peris,
  FieldId::field_uart0_uartris_beris,
  FieldId::field_uart0_uartris_oeris,
  FieldId::field_uart0_uartrsr_fe,
  FieldId::field_uart0_uartrsr_pe,
  FieldId::field_uart0_uartrsr_be,
  FieldId::field_uart0_uartrsr_oe,
  FieldId::field_uart1_uartcr_uarten,
  FieldId::field_uart1_uartcr_siren,
  FieldId::field_uart1_uartcr_sirlp,
  FieldId::field_uart1_uartcr_lbe,
  FieldId::field_uart1_uartcr_txe,
  FieldId::field_uart1_uartcr_rxe,
  FieldId::field_uart1_uartcr_dtr,
  FieldId::field_uart1_uartcr_rts,
  FieldId::field_uart1_uartcr_out1,
  FieldId::field_uart1_uartcr_out2,
  FieldId::field_uart1_uartcr_rtsen,
  FieldId::field_uart1_uartcr_ctsen,
  FieldId::field_uart1_uartdmacr_rxdmae,
  FieldId::field_uart1_uartdmacr_txdmae,
  FieldId::field_uart1_uartdmacr_dmaonerr,
  FieldId::field_uart1_uartdr_data,
  FieldId::field_uart1_uartdr_fe,
  FieldId::field_uart1_uartdr_pe,
  FieldId::field_uart1_uartdr_be,
  FieldId::field_uart1_uartdr_oe,
  FieldId::field_uart1_uartfbrd_baud_divfrac,
  FieldId::field_uart1_uartfr_cts,
  FieldId::field_uart1_uartfr_dsr,
  FieldId::field_uart1_uartfr_dcd,
  FieldId::field_uart1_uartfr_busy,
  FieldId::field_uart1_uartfr_rxfe,
  FieldId::field_uart1_uartfr_txff,
  FieldId::field_uart1_uartfr_rxff,
  FieldId::field_uart1_uartfr_txfe,
  FieldId::field_uart1_uartfr_ri,
  FieldId::field_uart1_uartibrd_baud_divint,
  FieldId::field_uart1_uarticr_rimic,
  FieldId::field_uart1_uarticr_ctsmic,
  FieldId::field_uart1_uarticr_dcdmic,
  FieldId::field_uart1_uarticr_dsrmic,
  FieldId::field_uart1_uarticr_rxic,
  FieldId::field_uart1_uarticr_txic,
  FieldId::field_uart1_uarticr_rtic,
  FieldId::field_uart1_uarticr_feic,
  FieldId::field_uart1_uarticr_peic,
  FieldId::field_uart1_uarticr_beic,
  FieldId::field_uart1_uarticr_oeic,
  FieldId::field_uart1_uartifls_txiflsel,
  FieldId::field_uart1_uartifls_rxiflsel,
  FieldId::field_uart1_uartilpr_ilpdvsr,
  FieldId::field_uart1_uartimsc_rimim,
  FieldId::field_uart1_uartimsc_ctsmim,
  FieldId::field_uart1_uartimsc_dcdmim,
  FieldId::field_uart1_uartimsc_dsrmim,
  FieldId::field_uart1_uartimsc_rxim,
  FieldId::field_uart1_uartimsc_txim,
  FieldId::field_uart1_uartimsc_rtim,
  FieldId::field_uart1_uartimsc_feim,
  FieldId::field_uart1_uartimsc_peim,
  FieldId::field_uart1_uartimsc_beim,
  FieldId::field_uart1_uartimsc_oeim,
  FieldId::field_uart1_uartlcr_h_brk,
  FieldId::field_uart1_uartlcr_h_pen,
  FieldId::field_uart1_uartlcr_h_eps,
  FieldId::field_uart1_uartlcr_h_stp2,
  FieldId::field_uart1_uartlcr_h_fen,
  FieldId::field_uart1_uartlcr_h_wlen,
  FieldId::field_uart1_uartlcr_h_sps,
  FieldId::field_uart1_uartmis_rimmis,
  FieldId::field_uart1_uartmis_ctsmmis,
  FieldId::field_uart1_uartmis_dcdmmis,
  FieldId::field_uart1_uartmis_dsrmmis,
  FieldId::field_uart1_uartmis_rxmis,
  FieldId::field_uart1_uartmis_txmis,
  FieldId::field_uart1_uartmis_rtmis,
  FieldId::field_uart1_uartmis_femis,
  FieldId::field_uart1_uartmis_pemis,
  FieldId::field_uart1_uartmis_bemis,
  FieldId::field_uart1_uartmis_oemis,
  FieldId::field_uart1_uartpcellid0_uartpcellid0,
  FieldId::field_uart1_uartpcellid1_uartpcellid1,
  FieldId::field_uart1_uartpcellid2_uartpcellid2,
  FieldId::field_uart1_uartpcellid3_uartpcellid3,
  FieldId::field_uart1_uartperiphid0_partnumber0,
  FieldId::field_uart1_uartperiphid1_partnumber1,
  FieldId::field_uart1_uartperiphid1_designer0,
  FieldId::field_uart1_uartperiphid2_designer1,
  FieldId::field_uart1_uartperiphid2_revision,
  FieldId::field_uart1_uartperiphid3_configuration,
  FieldId::field_uart1_uartris_rirmis,
  FieldId::field_uart1_uartris_ctsrmis,
  FieldId::field_uart1_uartris_dcdrmis,
  FieldId::field_uart1_uartris_dsrrmis,
  FieldId::field_uart1_uartris_rxris,
  FieldId::field_uart1_uartris_txris,
  FieldId::field_uart1_uartris_rtris,
  FieldId::field_uart1_uartris_feris,
  FieldId::field_uart1_uartris_peris,
  FieldId::field_uart1_uartris_beris,
  FieldId::field_uart1_uartris_oeris,
  FieldId::field_uart1_uartrsr_fe,
  FieldId::field_uart1_uartrsr_pe,
  FieldId::field_uart1_uartrsr_be,
  FieldId::field_uart1_uartrsr_oe,
  FieldId::field_usb_addr_endp_address,
  FieldId::field_usb_addr_endp_endpoint,
  FieldId::field_usb_addr_endp1_address,
  FieldId::field_usb_addr_endp1_endpoint,
  FieldId::field_usb_addr_endp1_intep_dir,
  FieldId::field_usb_addr_endp1_intep_preamble,
  FieldId::field_usb_addr_endp10_address,
  FieldId::field_usb_addr_endp10_endpoint,
  FieldId::field_usb_addr_endp10_intep_dir,
  FieldId::field_usb_addr_endp10_intep_preamble,
  FieldId::field_usb_addr_endp11_address,
  FieldId::field_usb_addr_endp11_endpoint,
  FieldId::field_usb_addr_endp11_intep_dir,
  FieldId::field_usb_addr_endp11_intep_preamble,
  FieldId::field_usb_addr_endp12_address,
  FieldId::field_usb_addr_endp12_endpoint,
  FieldId::field_usb_addr_endp12_intep_dir,
  FieldId::field_usb_addr_endp12_intep_preamble,
  FieldId::field_usb_addr_endp13_address,
  FieldId::field_usb_addr_endp13_endpoint,
  FieldId::field_usb_addr_endp13_intep_dir,
  FieldId::field_usb_addr_endp13_intep_preamble,
  FieldId::field_usb_addr_endp14_address,
  FieldId::field_usb_addr_endp14_endpoint,
  FieldId::field_usb_addr_endp14_intep_dir,
  FieldId::field_usb_addr_endp14_intep_preamble,
  FieldId::field_usb_addr_endp15_address,
  FieldId::field_usb_addr_endp15_endpoint,
  FieldId::field_usb_addr_endp15_intep_dir,
  FieldId::field_usb_addr_endp15_intep_preamble,
  FieldId::field_usb_addr_endp2_address,
  FieldId::field_usb_addr_endp2_endpoint,
  FieldId::field_usb_addr_endp2_intep_dir,
  FieldId::field_usb_addr_endp2_intep_preamble,
  FieldId::field_usb_addr_endp3_address,
  FieldId::field_usb_addr_endp3_endpoint,
  FieldId::field_usb_addr_endp3_intep_dir,
  FieldId::field_usb_addr_endp3_intep_preamble,
  FieldId::field_usb_addr_endp4_address,
  FieldId::field_usb_addr_endp4_endpoint,
  FieldId::field_usb_addr_endp4_intep_dir,
  FieldId::field_usb_addr_endp4_intep_preamble,
  FieldId::field_usb_addr_endp5_address,
  FieldId::field_usb_addr_endp5_endpoint,
  FieldId::field_usb_addr_endp5_intep_dir,
  FieldId::field_usb_addr_endp5_intep_preamble,
  FieldId::field_usb_addr_endp6_address,
  FieldId::field_usb_addr_endp6_endpoint,
  FieldId::field_usb_addr_endp6_intep_dir,
  FieldId::field_usb_addr_endp6_intep_preamble,
  FieldId::field_usb_addr_endp7_address,
  FieldId::field_usb_addr_endp7_endpoint,
  FieldId::field_usb_addr_endp7_intep_dir,
  FieldId::field_usb_addr_endp7_intep_preamble,
  FieldId::field_usb_addr_endp8_address,
  FieldId::field_usb_addr_endp8_endpoint,
  FieldId::field_usb_addr_endp8_intep_dir,
  FieldId::field_usb_addr_endp8_intep_preamble,
  FieldId::field_usb_addr_endp9_address,
  FieldId::field_usb_addr_endp9_endpoint,
  FieldId::field_usb_addr_endp9_intep_dir,
  FieldId::field_usb_addr_endp9_intep_preamble,
  FieldId::field_usb_buff_cpu_should_handle_ep0_in,
  FieldId::field_usb_buff_cpu_should_handle_ep0_out,
  FieldId::field_usb_buff_cpu_should_handle_ep1_in,
  FieldId::field_usb_buff_cpu_should_handle_ep1_out,
  FieldId::field_usb_buff_cpu_should_handle_ep2_in,
  FieldId::field_usb_buff_cpu_should_handle_ep2_out,
  FieldId::field_usb_buff_cpu_should_handle_ep3_in,
  FieldId::field_usb_buff_cpu_should_handle_ep3_out,
  FieldId::field_usb_buff_cpu_should_handle_ep4_in,
  FieldId::field_usb_buff_cpu_should_handle_ep4_out,
  FieldId::field_usb_buff_cpu_should_handle_ep5_in,
  FieldId::field_usb_buff_cpu_should_handle_ep5_out,
  FieldId::field_usb_buff_cpu_should_handle_ep6_in,
  FieldId::field_usb_buff_cpu_should_handle_ep6_out,
  FieldId::field_usb_buff_cpu_should_handle_ep7_in,
  FieldId::field_usb_buff_cpu_should_handle_ep7_out,
  FieldId::field_usb_buff_cpu_should_handle_ep8_in,
  FieldId::field_usb_buff_cpu_should_handle_ep8_out,
  FieldId::field_usb_buff_cpu_should_handle_ep9_in,
  FieldId::field_usb_buff_cpu_should_handle_ep9_out,
  FieldId::field_usb_buff_cpu_should_handle_ep10_in,
  FieldId::field_usb_buff_cpu_should_handle_ep10_out,
  FieldId::field_usb_buff_cpu_should_handle_ep11_in,
  FieldId::field_usb_buff_cpu_should_handle_ep11_out,
  FieldId::field_usb_buff_cpu_should_handle_ep12_in,
  FieldId::field_usb_buff_cpu_should_handle_ep12_out,
  FieldId::field_usb_buff_cpu_should_handle_ep13_in,
  FieldId::field_usb_buff_cpu_should_handle_ep13_out,
  FieldId::field_usb_buff_cpu_should_handle_ep14_in,
  FieldId::field_usb_buff_cpu_should_handle_ep14_out,
  FieldId::field_usb_buff_cpu_should_handle_ep15_in,
  FieldId::field_usb_buff_cpu_should_handle_ep15_out,
  FieldId::field_usb_buff_status_ep0_in,
  FieldId::field_usb_buff_status_ep0_out,
  FieldId::field_usb_buff_status_ep1_in,
  FieldId::field_usb_buff_status_ep1_out,
  FieldId::field_usb_buff_status_ep2_in,
  FieldId::field_usb_buff_status_ep2_out,
  FieldId::field_usb_buff_status_ep3_in,
  FieldId::field_usb_buff_status_ep3_out,
  FieldId::field_usb_buff_status_ep4_in,
  FieldId::field_usb_buff_status_ep4_out,
  FieldId::field_usb_buff_status_ep5_in,
  FieldId::field_usb_buff_status_ep5_out,
  FieldId::field_usb_buff_status_ep6_in,
  FieldId::field_usb_buff_status_ep6_out,
  FieldId::field_usb_buff_status_ep7_in,
  FieldId::field_usb_buff_status_ep7_out,
  FieldId::field_usb_buff_status_ep8_in,
  FieldId::field_usb_buff_status_ep8_out,
  FieldId::field_usb_buff_status_ep9_in,
  FieldId::field_usb_buff_status_ep9_out,
  FieldId::field_usb_buff_status_ep10_in,
  FieldId::field_usb_buff_status_ep10_out,
  FieldId::field_usb_buff_status_ep11_in,
  FieldId::field_usb_buff_status_ep11_out,
  FieldId::field_usb_buff_status_ep12_in,
  FieldId::field_usb_buff_status_ep12_out,
  FieldId::field_usb_buff_status_ep13_in,
  FieldId::field_usb_buff_status_ep13_out,
  FieldId::field_usb_buff_status_ep14_in,
  FieldId::field_usb_buff_status_ep14_out,
  FieldId::field_usb_buff_status_ep15_in,
  FieldId::field_usb_buff_status_ep15_out,
  FieldId::field_usb_ep_abort_ep0_in,
  FieldId::field_usb_ep_abort_ep0_out,
  FieldId::field_usb_ep_abort_ep1_in,
  FieldId::field_usb_ep_abort_ep1_out,
  FieldId::field_usb_ep_abort_ep2_in,
  FieldId::field_usb_ep_abort_ep2_out,
  FieldId::field_usb_ep_abort_ep3_in,
  FieldId::field_usb_ep_abort_ep3_out,
  FieldId::field_usb_ep_abort_ep4_in,
  FieldId::field_usb_ep_abort_ep4_out,
  FieldId::field_usb_ep_abort_ep5_in,
  FieldId::field_usb_ep_abort_ep5_out,
  FieldId::field_usb_ep_abort_ep6_in,
  FieldId::field_usb_ep_abort_ep6_out,
  FieldId::field_usb_ep_abort_ep7_in,
  FieldId::field_usb_ep_abort_ep7_out,
  FieldId::field_usb_ep_abort_ep8_in,
  FieldId::field_usb_ep_abort_ep8_out,
  FieldId::field_usb_ep_abort_ep9_in,
  FieldId::field_usb_ep_abort_ep9_out,
  FieldId::field_usb_ep_abort_ep10_in,
  FieldId::field_usb_ep_abort_ep10_out,
  FieldId::field_usb_ep_abort_ep11_in,
  FieldId::field_usb_ep_abort_ep11_out,
  FieldId::field_usb_ep_abort_ep12_in,
  FieldId::field_usb_ep_abort_ep12_out,
  FieldId::field_usb_ep_abort_ep13_in,
  FieldId::field_usb_ep_abort_ep13_out,
  FieldId::field_usb_ep_abort_ep14_in,
  FieldId::field_usb_ep_abort_ep14_out,
  FieldId::field_usb_ep_abort_ep15_in,
  FieldId::field_usb_ep_abort_ep15_out,
  FieldId::field_usb_ep_abort_done_ep0_in,
  FieldId::field_usb_ep_abort_done_ep0_out,
  FieldId::field_usb_ep_abort_done_ep1_in,
  FieldId::field_usb_ep_abort_done_ep1_out,
  FieldId::field_usb_ep_abort_done_ep2_in,
  FieldId::field_usb_ep_abort_done_ep2_out,
  FieldId::field_usb_ep_abort_done_ep3_in,
  FieldId::field_usb_ep_abort_done_ep3_out,
  FieldId::field_usb_ep_abort_done_ep4_in,
  FieldId::field_usb_ep_abort_done_ep4_out,
  FieldId::field_usb_ep_abort_done_ep5_in,
  FieldId::field_usb_ep_abort_done_ep5_out,
  FieldId::field_usb_ep_abort_done_ep6_in,
  FieldId::field_usb_ep_abort_done_ep6_out,
  FieldId::field_usb_ep_abort_done_ep7_in,
  FieldId::field_usb_ep_abort_done_ep7_out,
  FieldId::field_usb_ep_abort_done_ep8_in,
  FieldId::field_usb_ep_abort_done_ep8_out,
  FieldId::field_usb_ep_abort_done_ep9_in,
  FieldId::field_usb_ep_abort_done_ep9_out,
  FieldId::field_usb_ep_abort_done_ep10_in,
  FieldId::field_usb_ep_abort_done_ep10_out,
  FieldId::field_usb_ep_abort_done_ep11_in,
  FieldId::field_usb_ep_abort_done_ep11_out,
  FieldId::field_usb_ep_abort_done_ep12_in,
  FieldId::field_usb_ep_abort_done_ep12_out,
  FieldId::field_usb_ep_abort_done_ep13_in,
  FieldId::field_usb_ep_abort_done_ep13_out,
  FieldId::field_usb_ep_abort_done_ep14_in,
  FieldId::field_usb_ep_abort_done_ep14_out,
  FieldId::field_usb_ep_abort_done_ep15_in,
  FieldId::field_usb_ep_abort_done_ep15_out,
  FieldId::field_usb_ep_stall_arm_ep0_in,
  FieldId::field_usb_ep_stall_arm_ep0_out,
  FieldId::field_usb_ep_status_stall_nak_ep0_in,
  FieldId::field_usb_ep_status_stall_nak_ep0_out,
  FieldId::field_usb_ep_status_stall_nak_ep1_in,
  FieldId::field_usb_ep_status_stall_nak_ep1_out,
  FieldId::field_usb_ep_status_stall_nak_ep2_in,
  FieldId::field_usb_ep_status_stall_nak_ep2_out,
  FieldId::field_usb_ep_status_stall_nak_ep3_in,
  FieldId::field_usb_ep_status_stall_nak_ep3_out,
  FieldId::field_usb_ep_status_stall_nak_ep4_in,
  FieldId::field_usb_ep_status_stall_nak_ep4_out,
  FieldId::field_usb_ep_status_stall_nak_ep5_in,
  FieldId::field_usb_ep_status_stall_nak_ep5_out,
  FieldId::field_usb_ep_status_stall_nak_ep6_in,
  FieldId::field_usb_ep_status_stall_nak_ep6_out,
  FieldId::field_usb_ep_status_stall_nak_ep7_in,
  FieldId::field_usb_ep_status_stall_nak_ep7_out,
  FieldId::field_usb_ep_status_stall_nak_ep8_in,
  FieldId::field_usb_ep_status_stall_nak_ep8_out,
  FieldId::field_usb_ep_status_stall_nak_ep9_in,
  FieldId::field_usb_ep_status_stall_nak_ep9_out,
  FieldId::field_usb_ep_status_stall_nak_ep10_in,
  FieldId::field_usb_ep_status_stall_nak_ep10_out,
  FieldId::field_usb_ep_status_stall_nak_ep11_in,
  FieldId::field_usb_ep_status_stall_nak_ep11_out,
  FieldId::field_usb_ep_status_stall_nak_ep12_in,
  FieldId::field_usb_ep_status_stall_nak_ep12_out,
  FieldId::field_usb_ep_status_stall_nak_ep13_in,
  FieldId::field_usb_ep_status_stall_nak_ep13_out,
  FieldId::field_usb_ep_status_stall_nak_ep14_in,
  FieldId::field_usb_ep_status_stall_nak_ep14_out,
  FieldId::field_usb_ep_status_stall_nak_ep15_in,
  FieldId::field_usb_ep_status_stall_nak_ep15_out,
  FieldId::field_usb_inte_host_conn_dis,
  FieldId::field_usb_inte_host_resume,
  FieldId::field_usb_inte_host_sof,
  FieldId::field_usb_inte_trans_complete,
  FieldId::field_usb_inte_buff_status,
  FieldId::field_usb_inte_error_data_seq,
  FieldId::field_usb_inte_error_rx_timeout,
  FieldId::field_usb_inte_error_rx_overflow,
  FieldId::field_usb_inte_error_bit_stuff,
  FieldId::field_usb_inte_error_crc,
  FieldId::field_usb_inte_stall,
  FieldId::field_usb_inte_vbus_detect,
  FieldId::field_usb_inte_bus_reset,
  FieldId::field_usb_inte_dev_conn_dis,
  FieldId::field_usb_inte_dev_suspend,
  FieldId::field_usb_inte_dev_resume_from_host,
  FieldId::field_usb_inte_setup_req,
  FieldId::field_usb_inte_dev_sof,
  FieldId::field_usb_inte_abort_done,
  FieldId::field_usb_inte_ep_stall_nak,
  FieldId::field_usb_intf_host_conn_dis,
  FieldId::field_usb_intf_host_resume,
  FieldId::field_usb_intf_host_sof,
  FieldId::field_usb_intf_trans_complete,
  FieldId::field_usb_intf_buff_status,
  FieldId::field_usb_intf_error_data_seq,
  FieldId::field_usb_intf_error_rx_timeout,
  FieldId::field_usb_intf_error_rx_overflow,
  FieldId::field_usb_intf_error_bit_stuff,
  FieldId::field_usb_intf_error_crc,
  FieldId::field_usb_intf_stall,
  FieldId::field_usb_intf_vbus_detect,
  FieldId::field_usb_intf_bus_reset,
  FieldId::field_usb_intf_dev_conn_dis,
  FieldId::field_usb_intf_dev_suspend,
  FieldId::field_usb_intf_dev_resume_from_host,
  FieldId::field_usb_intf_setup_req,
  FieldId::field_usb_intf_dev_sof,
  FieldId::field_usb_intf_abort_done,
  FieldId::field_usb_intf_ep_stall_nak,
  FieldId::field_usb_intr_host_conn_dis,
  FieldId::field_usb_intr_host_resume,
  FieldId::field_usb_intr_host_sof,
  FieldId::field_usb_intr_trans_complete,
  FieldId::field_usb_intr_buff_status,
  FieldId::field_usb_intr_error_data_seq,
  FieldId::field_usb_intr_error_rx_timeout,
  FieldId::field_usb_intr_error_rx_overflow,
  FieldId::field_usb_intr_error_bit_stuff,
  FieldId::field_usb_intr_error_crc,
  FieldId::field_usb_intr_stall,
  FieldId::field_usb_intr_vbus_detect,
  FieldId::field_usb_intr_bus_reset,
  FieldId::field_usb_intr_dev_conn_dis,
  FieldId::field_usb_intr_dev_suspend,
  FieldId::field_usb_intr_dev_resume_from_host,
  FieldId::field_usb_intr_setup_req,
  FieldId::field_usb_intr_dev_sof,
  FieldId::field_usb_intr_abort_done,
  FieldId::field_usb_intr_ep_stall_nak,
  FieldId::field_usb_ints_host_conn_dis,
  FieldId::field_usb_ints_host_resume,
  FieldId::field_usb_ints_host_sof,
  FieldId::field_usb_ints_trans_complete,
  FieldId::field_usb_ints_buff_status,
  FieldId::field_usb_ints_error_data_seq,
  FieldId::field_usb_ints_error_rx_timeout,
  FieldId::field_usb_ints_error_rx_overflow,
  FieldId::field_usb_ints_error_bit_stuff,
  FieldId::field_usb_ints_error_crc,
  FieldId::field_usb_ints_stall,
  FieldId::field_usb_ints_vbus_detect,
  FieldId::field_usb_ints_bus_reset,
  FieldId::field_usb_ints_dev_conn_dis,
  FieldId::field_usb_ints_dev_suspend,
  FieldId::field_usb_ints_dev_resume_from_host,
  FieldId::field_usb_ints_setup_req,
  FieldId::field_usb_ints_dev_sof,
  FieldId::field_usb_ints_abort_done,
  FieldId::field_usb_ints_ep_stall_nak,
  FieldId::field_usb_int_ep_ctrl_int_ep_active,
  FieldId::field_usb_main_ctrl_controller_en,
  FieldId::field_usb_main_ctrl_host_ndevice,
  FieldId::field_usb_main_ctrl_sim_timing,
  FieldId::field_usb_nak_poll_delay_ls,
  FieldId::field_usb_nak_poll_delay_fs,
  FieldId::field_usb_sie_ctrl_start_trans,
  FieldId::field_usb_sie_ctrl_send_setup,
  FieldId::field_usb_sie_ctrl_send_data,
  FieldId::field_usb_sie_ctrl_receive_data,
  FieldId::field_usb_sie_ctrl_stop_trans,
  FieldId::field_usb_sie_ctrl_preamble_en,
  FieldId::field_usb_sie_ctrl_sof_sync,
  FieldId::field_usb_sie_ctrl_sof_en,
  FieldId::field_usb_sie_ctrl_keep_alive_en,
  FieldId::field_usb_sie_ctrl_vbus_en,
  FieldId::field_usb_sie_ctrl_resume,
  FieldId::field_usb_sie_ctrl_reset_bus,
  FieldId::field_usb_sie_ctrl_pulldown_en,
  FieldId::field_usb_sie_ctrl_pullup_en,
  FieldId::field_usb_sie_ctrl_rpu_opt,
  FieldId::field_usb_sie_ctrl_transceiver_pd,
  FieldId::field_usb_sie_ctrl_direct_dm,
  FieldId::field_usb_sie_ctrl_direct_dp,
  FieldId::field_usb_sie_ctrl_direct_en,
  FieldId::field_usb_sie_ctrl_ep0_int_nak,
  FieldId::field_usb_sie_ctrl_ep0_int_2buf,
  FieldId::field_usb_sie_ctrl_ep0_int_1buf,
  FieldId::field_usb_sie_ctrl_ep0_double_buf,
  FieldId::field_usb_sie_ctrl_ep0_int_stall,
  FieldId::field_usb_sie_status_vbus_detected,
  FieldId::field_usb_sie_status_line_state,
  FieldId::field_usb_sie_status_suspended,
  FieldId::field_usb_sie_status_speed,
  FieldId::field_usb_sie_status_vbus_over_curr,
  FieldId::field_usb_sie_status_resume,
  FieldId::field_usb_sie_status_connected,
  FieldId::field_usb_sie_status_setup_rec,
  FieldId::field_usb_sie_status_trans_complete,
  FieldId::field_usb_sie_status_bus_reset,
  FieldId::field_usb_sie_status_crc_error,
  FieldId::field_usb_sie_status_bit_stuff_error,
  FieldId::field_usb_sie_status_rx_overflow,
  FieldId::field_usb_sie_status_rx_timeout,
  FieldId::field_usb_sie_status_nak_rec,
  FieldId::field_usb_sie_status_stall_rec,
  FieldId::field_usb_sie_status_ack_rec,
  FieldId::field_usb_sie_status_data_seq_error,
  FieldId::field_usb_sof_rd_count,
  FieldId::field_usb_sof_wr_count,
  FieldId::field_usb_usbphy_direct_dp_pullup_hisel,
  FieldId::field_usb_usbphy_direct_dp_pullup_en,
  FieldId::field_usb_usbphy_direct_dp_pulldn_en,
  FieldId::field_usb_usbphy_direct_dm_pullup_hisel,
  FieldId::field_usb_usbphy_direct_dm_pullup_en,
  FieldId::field_usb_usbphy_direct_dm_pulldn_en,
  FieldId::field_usb_usbphy_direct_tx_dp_oe,
  FieldId::field_usb_usbphy_direct_tx_dm_oe,
  FieldId::field_usb_usbphy_direct_tx_dp,
  FieldId::field_usb_usbphy_direct_tx_dm,
  FieldId::field_usb_usbphy_direct_rx_pd,
  FieldId::field_usb_usbphy_direct_tx_pd,
  FieldId::field_usb_usbphy_direct_tx_fsslew,
  FieldId::field_usb_usbphy_direct_tx_diffmode,
  FieldId::field_usb_usbphy_direct_rx_dd,
  FieldId::field_usb_usbphy_direct_rx_dp,
  FieldId::field_usb_usbphy_direct_rx_dm,
  FieldId::field_usb_usbphy_direct_dp_ovcn,
  FieldId::field_usb_usbphy_direct_dm_ovcn,
  FieldId::field_usb_usbphy_direct_dp_ovv,
  FieldId::field_usb_usbphy_direct_dm_ovv,
  FieldId::field_usb_usbphy_direct_override_dp_pullup_hisel_override_en,
  FieldId::field_usb_usbphy_direct_override_dm_pullup_hisel_override_en,
  FieldId::field_usb_usbphy_direct_override_dp_pullup_en_override_en,
  FieldId::field_usb_usbphy_direct_override_dp_pulldn_en_override_en,
  FieldId::field_usb_usbphy_direct_override_dm_pulldn_en_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_dp_oe_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_dm_oe_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_dp_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_dm_override_en,
  FieldId::field_usb_usbphy_direct_override_rx_pd_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_pd_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_fsslew_override_en,
  FieldId::field_usb_usbphy_direct_override_dm_pullup_override_en,
  FieldId::field_usb_usbphy_direct_override_tx_diffmode_override_en,
  FieldId::field_usb_usbphy_trim_dp_pulldn_trim,
  FieldId::field_usb_usbphy_trim_dm_pulldn_trim,
  FieldId::field_usb_usb_muxing_to_phy,
  FieldId::field_usb_usb_muxing_to_extphy,
  FieldId::field_usb_usb_muxing_to_digital_pad,
  FieldId::field_usb_usb_muxing_softcon,
  FieldId::field_usb_usb_pwr_vbus_en,
  FieldId::field_usb_usb_pwr_vbus_en_override_en,
  FieldId::field_usb_usb_pwr_vbus_detect,
  FieldId::field_usb_usb_pwr_vbus_detect_override_en,
  FieldId::field_usb_usb_pwr_overcurr_detect,
  FieldId::field_usb_usb_pwr_overcurr_detect_en,
  FieldId::field_watchdog_ctrl_time,
  FieldId::field_watchdog_ctrl_pause_jtag,
  FieldId::field_watchdog_ctrl_pause_dbg0,
  FieldId::field_watchdog_ctrl_pause_dbg1,
  FieldId::field_watchdog_ctrl_enable,
  FieldId::field_watchdog_ctrl_trigger,
  FieldId::field_watchdog_load_load,
  FieldId::field_watchdog_reason_timer,
  FieldId::field_watchdog_reason_force,
  FieldId::field_watchdog_scratch0_scratch0,
  FieldId::field_watchdog_scratch1_scratch1,
  FieldId::field_watchdog_scratch2_scratch2,
  FieldId::field_watchdog_scratch3_scratch3,
  FieldId::field_watchdog_scratch4_scratch4,
  FieldId::field_watchdog_scratch5_scratch5,
  FieldId::field_watchdog_scratch6_scratch6,
  FieldId::field_watchdog_scratch7_scratch7,
  FieldId::field_watchdog_tick_cycles,
  FieldId::field_watchdog_tick_enable,
  FieldId::field_watchdog_tick_running,
  FieldId::field_watchdog_tick_count,
}};
}
}
}
}
}
}
