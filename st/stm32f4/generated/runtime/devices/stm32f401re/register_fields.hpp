#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"
#include "registers.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class FieldId : std::uint16_t {
  none,
  field_gpioa_afrh_afrh8,
  field_gpioa_afrh_afrh9,
  field_gpioa_afrh_afrh10,
  field_gpioa_afrh_afrh11,
  field_gpioa_afrh_afrh12,
  field_gpioa_afrh_afrh13,
  field_gpioa_afrh_afrh14,
  field_gpioa_afrh_afrh15,
  field_gpioa_afrl_afrl0,
  field_gpioa_afrl_afrl1,
  field_gpioa_afrl_afrl2,
  field_gpioa_afrl_afrl3,
  field_gpioa_afrl_afrl4,
  field_gpioa_afrl_afrl5,
  field_gpioa_afrl_afrl6,
  field_gpioa_afrl_afrl7,
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
  field_gpiob_afrh_afrh8,
  field_gpiob_afrh_afrh9,
  field_gpiob_afrh_afrh10,
  field_gpiob_afrh_afrh11,
  field_gpiob_afrh_afrh12,
  field_gpiob_afrh_afrh13,
  field_gpiob_afrh_afrh14,
  field_gpiob_afrh_afrh15,
  field_gpiob_afrl_afrl0,
  field_gpiob_afrl_afrl1,
  field_gpiob_afrl_afrl2,
  field_gpiob_afrl_afrl3,
  field_gpiob_afrl_afrl4,
  field_gpiob_afrl_afrl5,
  field_gpiob_afrl_afrl6,
  field_gpiob_afrl_afrl7,
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
  field_gpioc_afrh_afrh8,
  field_gpioc_afrh_afrh9,
  field_gpioc_afrh_afrh10,
  field_gpioc_afrh_afrh11,
  field_gpioc_afrh_afrh12,
  field_gpioc_afrh_afrh13,
  field_gpioc_afrh_afrh14,
  field_gpioc_afrh_afrh15,
  field_gpioc_afrl_afrl0,
  field_gpioc_afrl_afrl1,
  field_gpioc_afrl_afrl2,
  field_gpioc_afrl_afrl3,
  field_gpioc_afrl_afrl4,
  field_gpioc_afrl_afrl5,
  field_gpioc_afrl_afrl6,
  field_gpioc_afrl_afrl7,
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
  field_gpiod_afrh_afrh8,
  field_gpiod_afrh_afrh9,
  field_gpiod_afrh_afrh10,
  field_gpiod_afrh_afrh11,
  field_gpiod_afrh_afrh12,
  field_gpiod_afrh_afrh13,
  field_gpiod_afrh_afrh14,
  field_gpiod_afrh_afrh15,
  field_gpiod_afrl_afrl0,
  field_gpiod_afrl_afrl1,
  field_gpiod_afrl_afrl2,
  field_gpiod_afrl_afrl3,
  field_gpiod_afrl_afrl4,
  field_gpiod_afrl_afrl5,
  field_gpiod_afrl_afrl6,
  field_gpiod_afrl_afrl7,
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
  field_gpioe_afrh_afrh8,
  field_gpioe_afrh_afrh9,
  field_gpioe_afrh_afrh10,
  field_gpioe_afrh_afrh11,
  field_gpioe_afrh_afrh12,
  field_gpioe_afrh_afrh13,
  field_gpioe_afrh_afrh14,
  field_gpioe_afrh_afrh15,
  field_gpioe_afrl_afrl0,
  field_gpioe_afrl_afrl1,
  field_gpioe_afrl_afrl2,
  field_gpioe_afrl_afrl3,
  field_gpioe_afrl_afrl4,
  field_gpioe_afrl_afrl5,
  field_gpioe_afrl_afrl6,
  field_gpioe_afrl_afrl7,
  field_gpioe_bsrr_bs0,
  field_gpioe_bsrr_bs1,
  field_gpioe_bsrr_bs2,
  field_gpioe_bsrr_bs3,
  field_gpioe_bsrr_bs4,
  field_gpioe_bsrr_bs5,
  field_gpioe_bsrr_bs6,
  field_gpioe_bsrr_bs7,
  field_gpioe_bsrr_bs8,
  field_gpioe_bsrr_bs9,
  field_gpioe_bsrr_bs10,
  field_gpioe_bsrr_bs11,
  field_gpioe_bsrr_bs12,
  field_gpioe_bsrr_bs13,
  field_gpioe_bsrr_bs14,
  field_gpioe_bsrr_bs15,
  field_gpioe_bsrr_br0,
  field_gpioe_bsrr_br1,
  field_gpioe_bsrr_br2,
  field_gpioe_bsrr_br3,
  field_gpioe_bsrr_br4,
  field_gpioe_bsrr_br5,
  field_gpioe_bsrr_br6,
  field_gpioe_bsrr_br7,
  field_gpioe_bsrr_br8,
  field_gpioe_bsrr_br9,
  field_gpioe_bsrr_br10,
  field_gpioe_bsrr_br11,
  field_gpioe_bsrr_br12,
  field_gpioe_bsrr_br13,
  field_gpioe_bsrr_br14,
  field_gpioe_bsrr_br15,
  field_gpioe_idr_idr0,
  field_gpioe_idr_idr1,
  field_gpioe_idr_idr2,
  field_gpioe_idr_idr3,
  field_gpioe_idr_idr4,
  field_gpioe_idr_idr5,
  field_gpioe_idr_idr6,
  field_gpioe_idr_idr7,
  field_gpioe_idr_idr8,
  field_gpioe_idr_idr9,
  field_gpioe_idr_idr10,
  field_gpioe_idr_idr11,
  field_gpioe_idr_idr12,
  field_gpioe_idr_idr13,
  field_gpioe_idr_idr14,
  field_gpioe_idr_idr15,
  field_gpioe_lckr_lck0,
  field_gpioe_lckr_lck1,
  field_gpioe_lckr_lck2,
  field_gpioe_lckr_lck3,
  field_gpioe_lckr_lck4,
  field_gpioe_lckr_lck5,
  field_gpioe_lckr_lck6,
  field_gpioe_lckr_lck7,
  field_gpioe_lckr_lck8,
  field_gpioe_lckr_lck9,
  field_gpioe_lckr_lck10,
  field_gpioe_lckr_lck11,
  field_gpioe_lckr_lck12,
  field_gpioe_lckr_lck13,
  field_gpioe_lckr_lck14,
  field_gpioe_lckr_lck15,
  field_gpioe_lckr_lckk,
  field_gpioe_moder_moder0,
  field_gpioe_moder_moder1,
  field_gpioe_moder_moder2,
  field_gpioe_moder_moder3,
  field_gpioe_moder_moder4,
  field_gpioe_moder_moder5,
  field_gpioe_moder_moder6,
  field_gpioe_moder_moder7,
  field_gpioe_moder_moder8,
  field_gpioe_moder_moder9,
  field_gpioe_moder_moder10,
  field_gpioe_moder_moder11,
  field_gpioe_moder_moder12,
  field_gpioe_moder_moder13,
  field_gpioe_moder_moder14,
  field_gpioe_moder_moder15,
  field_gpioe_odr_odr0,
  field_gpioe_odr_odr1,
  field_gpioe_odr_odr2,
  field_gpioe_odr_odr3,
  field_gpioe_odr_odr4,
  field_gpioe_odr_odr5,
  field_gpioe_odr_odr6,
  field_gpioe_odr_odr7,
  field_gpioe_odr_odr8,
  field_gpioe_odr_odr9,
  field_gpioe_odr_odr10,
  field_gpioe_odr_odr11,
  field_gpioe_odr_odr12,
  field_gpioe_odr_odr13,
  field_gpioe_odr_odr14,
  field_gpioe_odr_odr15,
  field_gpioe_ospeedr_ospeedr0,
  field_gpioe_ospeedr_ospeedr1,
  field_gpioe_ospeedr_ospeedr2,
  field_gpioe_ospeedr_ospeedr3,
  field_gpioe_ospeedr_ospeedr4,
  field_gpioe_ospeedr_ospeedr5,
  field_gpioe_ospeedr_ospeedr6,
  field_gpioe_ospeedr_ospeedr7,
  field_gpioe_ospeedr_ospeedr8,
  field_gpioe_ospeedr_ospeedr9,
  field_gpioe_ospeedr_ospeedr10,
  field_gpioe_ospeedr_ospeedr11,
  field_gpioe_ospeedr_ospeedr12,
  field_gpioe_ospeedr_ospeedr13,
  field_gpioe_ospeedr_ospeedr14,
  field_gpioe_ospeedr_ospeedr15,
  field_gpioe_otyper_ot0,
  field_gpioe_otyper_ot1,
  field_gpioe_otyper_ot2,
  field_gpioe_otyper_ot3,
  field_gpioe_otyper_ot4,
  field_gpioe_otyper_ot5,
  field_gpioe_otyper_ot6,
  field_gpioe_otyper_ot7,
  field_gpioe_otyper_ot8,
  field_gpioe_otyper_ot9,
  field_gpioe_otyper_ot10,
  field_gpioe_otyper_ot11,
  field_gpioe_otyper_ot12,
  field_gpioe_otyper_ot13,
  field_gpioe_otyper_ot14,
  field_gpioe_otyper_ot15,
  field_gpioe_pupdr_pupdr0,
  field_gpioe_pupdr_pupdr1,
  field_gpioe_pupdr_pupdr2,
  field_gpioe_pupdr_pupdr3,
  field_gpioe_pupdr_pupdr4,
  field_gpioe_pupdr_pupdr5,
  field_gpioe_pupdr_pupdr6,
  field_gpioe_pupdr_pupdr7,
  field_gpioe_pupdr_pupdr8,
  field_gpioe_pupdr_pupdr9,
  field_gpioe_pupdr_pupdr10,
  field_gpioe_pupdr_pupdr11,
  field_gpioe_pupdr_pupdr12,
  field_gpioe_pupdr_pupdr13,
  field_gpioe_pupdr_pupdr14,
  field_gpioe_pupdr_pupdr15,
  field_gpioh_afrh_afrh8,
  field_gpioh_afrh_afrh9,
  field_gpioh_afrh_afrh10,
  field_gpioh_afrh_afrh11,
  field_gpioh_afrh_afrh12,
  field_gpioh_afrh_afrh13,
  field_gpioh_afrh_afrh14,
  field_gpioh_afrh_afrh15,
  field_gpioh_afrl_afrl0,
  field_gpioh_afrl_afrl1,
  field_gpioh_afrl_afrl2,
  field_gpioh_afrl_afrl3,
  field_gpioh_afrl_afrl4,
  field_gpioh_afrl_afrl5,
  field_gpioh_afrl_afrl6,
  field_gpioh_afrl_afrl7,
  field_gpioh_bsrr_bs0,
  field_gpioh_bsrr_bs1,
  field_gpioh_bsrr_bs2,
  field_gpioh_bsrr_bs3,
  field_gpioh_bsrr_bs4,
  field_gpioh_bsrr_bs5,
  field_gpioh_bsrr_bs6,
  field_gpioh_bsrr_bs7,
  field_gpioh_bsrr_bs8,
  field_gpioh_bsrr_bs9,
  field_gpioh_bsrr_bs10,
  field_gpioh_bsrr_bs11,
  field_gpioh_bsrr_bs12,
  field_gpioh_bsrr_bs13,
  field_gpioh_bsrr_bs14,
  field_gpioh_bsrr_bs15,
  field_gpioh_bsrr_br0,
  field_gpioh_bsrr_br1,
  field_gpioh_bsrr_br2,
  field_gpioh_bsrr_br3,
  field_gpioh_bsrr_br4,
  field_gpioh_bsrr_br5,
  field_gpioh_bsrr_br6,
  field_gpioh_bsrr_br7,
  field_gpioh_bsrr_br8,
  field_gpioh_bsrr_br9,
  field_gpioh_bsrr_br10,
  field_gpioh_bsrr_br11,
  field_gpioh_bsrr_br12,
  field_gpioh_bsrr_br13,
  field_gpioh_bsrr_br14,
  field_gpioh_bsrr_br15,
  field_gpioh_idr_idr0,
  field_gpioh_idr_idr1,
  field_gpioh_idr_idr2,
  field_gpioh_idr_idr3,
  field_gpioh_idr_idr4,
  field_gpioh_idr_idr5,
  field_gpioh_idr_idr6,
  field_gpioh_idr_idr7,
  field_gpioh_idr_idr8,
  field_gpioh_idr_idr9,
  field_gpioh_idr_idr10,
  field_gpioh_idr_idr11,
  field_gpioh_idr_idr12,
  field_gpioh_idr_idr13,
  field_gpioh_idr_idr14,
  field_gpioh_idr_idr15,
  field_gpioh_lckr_lck0,
  field_gpioh_lckr_lck1,
  field_gpioh_lckr_lck2,
  field_gpioh_lckr_lck3,
  field_gpioh_lckr_lck4,
  field_gpioh_lckr_lck5,
  field_gpioh_lckr_lck6,
  field_gpioh_lckr_lck7,
  field_gpioh_lckr_lck8,
  field_gpioh_lckr_lck9,
  field_gpioh_lckr_lck10,
  field_gpioh_lckr_lck11,
  field_gpioh_lckr_lck12,
  field_gpioh_lckr_lck13,
  field_gpioh_lckr_lck14,
  field_gpioh_lckr_lck15,
  field_gpioh_lckr_lckk,
  field_gpioh_moder_moder0,
  field_gpioh_moder_moder1,
  field_gpioh_moder_moder2,
  field_gpioh_moder_moder3,
  field_gpioh_moder_moder4,
  field_gpioh_moder_moder5,
  field_gpioh_moder_moder6,
  field_gpioh_moder_moder7,
  field_gpioh_moder_moder8,
  field_gpioh_moder_moder9,
  field_gpioh_moder_moder10,
  field_gpioh_moder_moder11,
  field_gpioh_moder_moder12,
  field_gpioh_moder_moder13,
  field_gpioh_moder_moder14,
  field_gpioh_moder_moder15,
  field_gpioh_odr_odr0,
  field_gpioh_odr_odr1,
  field_gpioh_odr_odr2,
  field_gpioh_odr_odr3,
  field_gpioh_odr_odr4,
  field_gpioh_odr_odr5,
  field_gpioh_odr_odr6,
  field_gpioh_odr_odr7,
  field_gpioh_odr_odr8,
  field_gpioh_odr_odr9,
  field_gpioh_odr_odr10,
  field_gpioh_odr_odr11,
  field_gpioh_odr_odr12,
  field_gpioh_odr_odr13,
  field_gpioh_odr_odr14,
  field_gpioh_odr_odr15,
  field_gpioh_ospeedr_ospeedr0,
  field_gpioh_ospeedr_ospeedr1,
  field_gpioh_ospeedr_ospeedr2,
  field_gpioh_ospeedr_ospeedr3,
  field_gpioh_ospeedr_ospeedr4,
  field_gpioh_ospeedr_ospeedr5,
  field_gpioh_ospeedr_ospeedr6,
  field_gpioh_ospeedr_ospeedr7,
  field_gpioh_ospeedr_ospeedr8,
  field_gpioh_ospeedr_ospeedr9,
  field_gpioh_ospeedr_ospeedr10,
  field_gpioh_ospeedr_ospeedr11,
  field_gpioh_ospeedr_ospeedr12,
  field_gpioh_ospeedr_ospeedr13,
  field_gpioh_ospeedr_ospeedr14,
  field_gpioh_ospeedr_ospeedr15,
  field_gpioh_otyper_ot0,
  field_gpioh_otyper_ot1,
  field_gpioh_otyper_ot2,
  field_gpioh_otyper_ot3,
  field_gpioh_otyper_ot4,
  field_gpioh_otyper_ot5,
  field_gpioh_otyper_ot6,
  field_gpioh_otyper_ot7,
  field_gpioh_otyper_ot8,
  field_gpioh_otyper_ot9,
  field_gpioh_otyper_ot10,
  field_gpioh_otyper_ot11,
  field_gpioh_otyper_ot12,
  field_gpioh_otyper_ot13,
  field_gpioh_otyper_ot14,
  field_gpioh_otyper_ot15,
  field_gpioh_pupdr_pupdr0,
  field_gpioh_pupdr_pupdr1,
  field_gpioh_pupdr_pupdr2,
  field_gpioh_pupdr_pupdr3,
  field_gpioh_pupdr_pupdr4,
  field_gpioh_pupdr_pupdr5,
  field_gpioh_pupdr_pupdr6,
  field_gpioh_pupdr_pupdr7,
  field_gpioh_pupdr_pupdr8,
  field_gpioh_pupdr_pupdr9,
  field_gpioh_pupdr_pupdr10,
  field_gpioh_pupdr_pupdr11,
  field_gpioh_pupdr_pupdr12,
  field_gpioh_pupdr_pupdr13,
  field_gpioh_pupdr_pupdr14,
  field_gpioh_pupdr_pupdr15,
  field_rcc_ahb1enr_gpioaen,
  field_rcc_ahb1enr_gpioben,
  field_rcc_ahb1enr_gpiocen,
  field_rcc_ahb1enr_gpioden,
  field_rcc_ahb1enr_gpiohen,
  field_rcc_ahb1rstr_gpioarst,
  field_rcc_ahb1rstr_gpiobrst,
  field_rcc_ahb1rstr_gpiocrst,
  field_rcc_ahb1rstr_gpiodrst,
  field_rcc_ahb1rstr_gpiohrst,
  field_rcc_apb1enr_spi2en,
  field_rcc_apb1enr_usart2en,
  field_rcc_apb1rstr_spi2rst,
  field_rcc_apb2enr_usart1en,
  field_rcc_apb2enr_spi1en,
  field_rcc_apb2rstr_usart1rst,
  field_rcc_apb2rstr_spi1rst,
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
  field_spi1_cr2_frf,
  field_spi1_cr2_errie,
  field_spi1_cr2_rxneie,
  field_spi1_cr2_txeie,
  field_spi1_crcpr_crcpoly,
  field_spi1_dr_dr,
  field_spi1_i2scfgr_chlen,
  field_spi1_i2scfgr_datlen,
  field_spi1_i2scfgr_ckpol,
  field_spi1_i2scfgr_i2sstd,
  field_spi1_i2scfgr_pcmsync,
  field_spi1_i2scfgr_i2scfg,
  field_spi1_i2scfgr_i2se,
  field_spi1_i2scfgr_i2smod,
  field_spi1_i2spr_i2sdiv,
  field_spi1_i2spr_odd,
  field_spi1_i2spr_mckoe,
  field_spi1_rxcrcr_rxcrc,
  field_spi1_sr_rxne,
  field_spi1_sr_txe,
  field_spi1_sr_chside,
  field_spi1_sr_udr,
  field_spi1_sr_crcerr,
  field_spi1_sr_modf,
  field_spi1_sr_ovr,
  field_spi1_sr_bsy,
  field_spi1_sr_tifrfe,
  field_spi1_txcrcr_txcrc,
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
  field_spi2_cr2_frf,
  field_spi2_cr2_errie,
  field_spi2_cr2_rxneie,
  field_spi2_cr2_txeie,
  field_spi2_crcpr_crcpoly,
  field_spi2_dr_dr,
  field_spi2_i2scfgr_chlen,
  field_spi2_i2scfgr_datlen,
  field_spi2_i2scfgr_ckpol,
  field_spi2_i2scfgr_i2sstd,
  field_spi2_i2scfgr_pcmsync,
  field_spi2_i2scfgr_i2scfg,
  field_spi2_i2scfgr_i2se,
  field_spi2_i2scfgr_i2smod,
  field_spi2_i2spr_i2sdiv,
  field_spi2_i2spr_odd,
  field_spi2_i2spr_mckoe,
  field_spi2_rxcrcr_rxcrc,
  field_spi2_sr_rxne,
  field_spi2_sr_txe,
  field_spi2_sr_chside,
  field_spi2_sr_udr,
  field_spi2_sr_crcerr,
  field_spi2_sr_modf,
  field_spi2_sr_ovr,
  field_spi2_sr_bsy,
  field_spi2_sr_tifrfe,
  field_spi2_txcrcr_txcrc,
  field_spi3_cr1_cpha,
  field_spi3_cr1_cpol,
  field_spi3_cr1_mstr,
  field_spi3_cr1_br,
  field_spi3_cr1_spe,
  field_spi3_cr1_lsbfirst,
  field_spi3_cr1_ssi,
  field_spi3_cr1_ssm,
  field_spi3_cr1_rxonly,
  field_spi3_cr1_dff,
  field_spi3_cr1_crcnext,
  field_spi3_cr1_crcen,
  field_spi3_cr1_bidioe,
  field_spi3_cr1_bidimode,
  field_spi3_cr2_rxdmaen,
  field_spi3_cr2_txdmaen,
  field_spi3_cr2_ssoe,
  field_spi3_cr2_frf,
  field_spi3_cr2_errie,
  field_spi3_cr2_rxneie,
  field_spi3_cr2_txeie,
  field_spi3_crcpr_crcpoly,
  field_spi3_dr_dr,
  field_spi3_i2scfgr_chlen,
  field_spi3_i2scfgr_datlen,
  field_spi3_i2scfgr_ckpol,
  field_spi3_i2scfgr_i2sstd,
  field_spi3_i2scfgr_pcmsync,
  field_spi3_i2scfgr_i2scfg,
  field_spi3_i2scfgr_i2se,
  field_spi3_i2scfgr_i2smod,
  field_spi3_i2spr_i2sdiv,
  field_spi3_i2spr_odd,
  field_spi3_i2spr_mckoe,
  field_spi3_rxcrcr_rxcrc,
  field_spi3_sr_rxne,
  field_spi3_sr_txe,
  field_spi3_sr_chside,
  field_spi3_sr_udr,
  field_spi3_sr_crcerr,
  field_spi3_sr_modf,
  field_spi3_sr_ovr,
  field_spi3_sr_bsy,
  field_spi3_sr_tifrfe,
  field_spi3_txcrcr_txcrc,
  field_spi4_cr1_cpha,
  field_spi4_cr1_cpol,
  field_spi4_cr1_mstr,
  field_spi4_cr1_br,
  field_spi4_cr1_spe,
  field_spi4_cr1_lsbfirst,
  field_spi4_cr1_ssi,
  field_spi4_cr1_ssm,
  field_spi4_cr1_rxonly,
  field_spi4_cr1_dff,
  field_spi4_cr1_crcnext,
  field_spi4_cr1_crcen,
  field_spi4_cr1_bidioe,
  field_spi4_cr1_bidimode,
  field_spi4_cr2_rxdmaen,
  field_spi4_cr2_txdmaen,
  field_spi4_cr2_ssoe,
  field_spi4_cr2_frf,
  field_spi4_cr2_errie,
  field_spi4_cr2_rxneie,
  field_spi4_cr2_txeie,
  field_spi4_crcpr_crcpoly,
  field_spi4_dr_dr,
  field_spi4_i2scfgr_chlen,
  field_spi4_i2scfgr_datlen,
  field_spi4_i2scfgr_ckpol,
  field_spi4_i2scfgr_i2sstd,
  field_spi4_i2scfgr_pcmsync,
  field_spi4_i2scfgr_i2scfg,
  field_spi4_i2scfgr_i2se,
  field_spi4_i2scfgr_i2smod,
  field_spi4_i2spr_i2sdiv,
  field_spi4_i2spr_odd,
  field_spi4_i2spr_mckoe,
  field_spi4_rxcrcr_rxcrc,
  field_spi4_sr_rxne,
  field_spi4_sr_txe,
  field_spi4_sr_chside,
  field_spi4_sr_udr,
  field_spi4_sr_crcerr,
  field_spi4_sr_modf,
  field_spi4_sr_ovr,
  field_spi4_sr_bsy,
  field_spi4_sr_tifrfe,
  field_spi4_txcrcr_txcrc,
  field_usart1_brr_div_fraction,
  field_usart1_brr_div_mantissa,
  field_usart1_cr1_sbk,
  field_usart1_cr1_rwu,
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
  field_usart1_cr1_m,
  field_usart1_cr1_ue,
  field_usart1_cr1_over8,
  field_usart1_cr2_add,
  field_usart1_cr2_lbdl,
  field_usart1_cr2_lbdie,
  field_usart1_cr2_lbcl,
  field_usart1_cr2_cpha,
  field_usart1_cr2_cpol,
  field_usart1_cr2_clken,
  field_usart1_cr2_stop,
  field_usart1_cr2_linen,
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
  field_usart1_dr_dr,
  field_usart1_gtpr_psc,
  field_usart1_gtpr_gt,
  field_usart1_sr_pe,
  field_usart1_sr_fe,
  field_usart1_sr_nf,
  field_usart1_sr_ore,
  field_usart1_sr_idle,
  field_usart1_sr_rxne,
  field_usart1_sr_tc,
  field_usart1_sr_txe,
  field_usart1_sr_lbd,
  field_usart1_sr_cts,
  field_usart2_brr_div_fraction,
  field_usart2_brr_div_mantissa,
  field_usart2_cr1_sbk,
  field_usart2_cr1_rwu,
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
  field_usart2_cr1_m,
  field_usart2_cr1_ue,
  field_usart2_cr1_over8,
  field_usart2_cr2_add,
  field_usart2_cr2_lbdl,
  field_usart2_cr2_lbdie,
  field_usart2_cr2_lbcl,
  field_usart2_cr2_cpha,
  field_usart2_cr2_cpol,
  field_usart2_cr2_clken,
  field_usart2_cr2_stop,
  field_usart2_cr2_linen,
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
  field_usart2_dr_dr,
  field_usart2_gtpr_psc,
  field_usart2_gtpr_gt,
  field_usart2_sr_pe,
  field_usart2_sr_fe,
  field_usart2_sr_nf,
  field_usart2_sr_ore,
  field_usart2_sr_idle,
  field_usart2_sr_rxne,
  field_usart2_sr_tc,
  field_usart2_sr_txe,
  field_usart2_sr_lbd,
  field_usart2_sr_cts,
  field_usart6_brr_div_fraction,
  field_usart6_brr_div_mantissa,
  field_usart6_cr1_sbk,
  field_usart6_cr1_rwu,
  field_usart6_cr1_re,
  field_usart6_cr1_te,
  field_usart6_cr1_idleie,
  field_usart6_cr1_rxneie,
  field_usart6_cr1_tcie,
  field_usart6_cr1_txeie,
  field_usart6_cr1_peie,
  field_usart6_cr1_ps,
  field_usart6_cr1_pce,
  field_usart6_cr1_wake,
  field_usart6_cr1_m,
  field_usart6_cr1_ue,
  field_usart6_cr1_over8,
  field_usart6_cr2_add,
  field_usart6_cr2_lbdl,
  field_usart6_cr2_lbdie,
  field_usart6_cr2_lbcl,
  field_usart6_cr2_cpha,
  field_usart6_cr2_cpol,
  field_usart6_cr2_clken,
  field_usart6_cr2_stop,
  field_usart6_cr2_linen,
  field_usart6_cr3_eie,
  field_usart6_cr3_iren,
  field_usart6_cr3_irlp,
  field_usart6_cr3_hdsel,
  field_usart6_cr3_nack,
  field_usart6_cr3_scen,
  field_usart6_cr3_dmar,
  field_usart6_cr3_dmat,
  field_usart6_cr3_rtse,
  field_usart6_cr3_ctse,
  field_usart6_cr3_ctsie,
  field_usart6_cr3_onebit,
  field_usart6_dr_dr,
  field_usart6_gtpr_psc,
  field_usart6_gtpr_gt,
  field_usart6_sr_pe,
  field_usart6_sr_fe,
  field_usart6_sr_nf,
  field_usart6_sr_ore,
  field_usart6_sr_idle,
  field_usart6_sr_rxne,
  field_usart6_sr_tc,
  field_usart6_sr_txe,
  field_usart6_sr_lbd,
  field_usart6_sr_cts,
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
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioa_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioa_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiob_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiob_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioc_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioc_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpiod_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpiod_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
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
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioe_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioe_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrh_afrh15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrh;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_afrl_afrl7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_afrl;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_bs15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 19u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 21u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 23u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 25u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 27u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 29u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_bsrr_br15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_bsrr;
  static constexpr std::uint16_t kBitOffset = 31u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_write_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_idr_idr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_idr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lck15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_lckr_lckk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_lckr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_moder_moder15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_moder;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_odr_odr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_odr;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_ospeedr_ospeedr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_ospeedr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_otyper_ot15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_otyper;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr0> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr1> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr2> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr3> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr4> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr5> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr6> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr7> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 16u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr9> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 18u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr10> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 20u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr11> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 22u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr12> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 24u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr13> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 26u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr14> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 28u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_gpioh_pupdr_pupdr15> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_gpioh_pupdr;
  static constexpr std::uint16_t kBitOffset = 30u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1enr_gpioaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1enr_gpioben> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1enr_gpiocen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1enr_gpioden> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1enr_gpiohen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1enr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1rstr_gpioarst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1rstr_gpiobrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1rstr_gpiocrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1rstr_gpiodrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_ahb1rstr_gpiohrst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_ahb1rstr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb1enr_spi2en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb1enr_usart2en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1enr;
  static constexpr std::uint16_t kBitOffset = 17u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb1rstr_spi2rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb1rstr;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb2enr_usart1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2enr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb2enr_spi1en> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2enr;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb2rstr_usart1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2rstr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_rcc_apb2rstr_spi1rst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_rcc_apb2rstr;
  static constexpr std::uint16_t kBitOffset = 12u;
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
struct RegisterFieldTraits<FieldId::field_spi1_i2scfgr_i2se> {
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
struct RegisterFieldTraits<FieldId::field_spi1_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
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
struct RegisterFieldTraits<FieldId::field_spi1_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi1_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
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
struct RegisterFieldTraits<FieldId::field_spi2_i2scfgr_i2se> {
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
struct RegisterFieldTraits<FieldId::field_spi2_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
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
struct RegisterFieldTraits<FieldId::field_spi2_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi2_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_mstr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_br> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_spe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_lsbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_ssi> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_ssm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_rxonly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_dff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_crcnext> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_crcen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_bidioe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr1_bidimode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_rxdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_txdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_ssoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_errie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_cr2_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_cr2;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_crcpr_crcpoly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_crcpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_chlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_datlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_ckpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_i2sstd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_pcmsync> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_i2se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2scfgr_i2smod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2spr_i2sdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2spr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2spr_odd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2spr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_i2spr_mckoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_i2spr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_chside> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_crcerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_modf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_ovr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_sr_tifrfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi3_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi3_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_mstr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_br> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 3u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_spe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_lsbfirst> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_ssi> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_ssm> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_rxonly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_dff> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_crcnext> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_crcen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_bidioe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr1_bidimode> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_rxdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_txdmaen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_ssoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_frf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_errie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_cr2_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_cr2;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_crcpr_crcpoly> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_crcpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_chlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_datlen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_ckpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_i2sstd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_pcmsync> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_i2scfg> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_i2se> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2scfgr_i2smod> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2scfgr;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2spr_i2sdiv> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2spr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2spr_odd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2spr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_i2spr_mckoe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_i2spr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_rxcrcr_rxcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_rxcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_chside> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_udr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_crcerr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_modf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_ovr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_bsy> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_sr_tifrfe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_spi4_txcrcr_txcrc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_spi4_txcrcr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 16u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_brr_div_fraction> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_brr_div_mantissa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_rwu> {
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
struct RegisterFieldTraits<FieldId::field_usart1_cr1_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
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
struct RegisterFieldTraits<FieldId::field_usart1_cr2_add> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
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
struct RegisterFieldTraits<FieldId::field_usart1_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
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
struct RegisterFieldTraits<FieldId::field_usart1_sr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_lbd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart1_sr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart1_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_brr_div_fraction> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_brr_div_mantissa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_rwu> {
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
struct RegisterFieldTraits<FieldId::field_usart2_cr1_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
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
struct RegisterFieldTraits<FieldId::field_usart2_cr2_add> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
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
struct RegisterFieldTraits<FieldId::field_usart2_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
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
struct RegisterFieldTraits<FieldId::field_usart2_sr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_lbd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart2_sr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart2_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_brr_div_fraction> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_brr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_brr_div_mantissa> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_brr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 12u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_sbk> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_rwu> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_re> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_te> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_idleie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_rxneie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_tcie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_txeie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_peie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_ps> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_pce> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_wake> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_m> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_ue> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 13u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr1_over8> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr1;
  static constexpr std::uint16_t kBitOffset = 15u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_add> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 4u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_lbdl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_lbdie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_lbcl> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_cpha> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_cpol> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_clken> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_stop> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 12u;
  static constexpr std::uint16_t kBitWidth = 2u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr2_linen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr2;
  static constexpr std::uint16_t kBitOffset = 14u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_eie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_iren> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_irlp> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_hdsel> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_nack> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_scen> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_dmar> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_dmat> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_rtse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_ctse> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_ctsie> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 10u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_cr3_onebit> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_cr3;
  static constexpr std::uint16_t kBitOffset = 11u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_dr_dr> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_dr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 9u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_gtpr_psc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_gtpr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_gtpr_gt> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_gtpr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 8u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_pe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 0u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_fe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 1u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_nf> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 2u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_ore> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 3u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_idle> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 4u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_rxne> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 5u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_tc> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 6u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_txe> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 7u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_only;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_lbd> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 8u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

template<>
struct RegisterFieldTraits<FieldId::field_usart6_sr_cts> {
  static constexpr bool kPresent = true;
  static constexpr RegisterId kRegisterId = RegisterId::register_usart6_sr;
  static constexpr std::uint16_t kBitOffset = 9u;
  static constexpr std::uint16_t kBitWidth = 1u;
  static constexpr AccessKindId kAccessId = AccessKindId::access_kind_read_write;
};

inline constexpr std::array<FieldId, 1316> kRegisterFields = {{
  FieldId::field_gpioa_afrh_afrh8,
  FieldId::field_gpioa_afrh_afrh9,
  FieldId::field_gpioa_afrh_afrh10,
  FieldId::field_gpioa_afrh_afrh11,
  FieldId::field_gpioa_afrh_afrh12,
  FieldId::field_gpioa_afrh_afrh13,
  FieldId::field_gpioa_afrh_afrh14,
  FieldId::field_gpioa_afrh_afrh15,
  FieldId::field_gpioa_afrl_afrl0,
  FieldId::field_gpioa_afrl_afrl1,
  FieldId::field_gpioa_afrl_afrl2,
  FieldId::field_gpioa_afrl_afrl3,
  FieldId::field_gpioa_afrl_afrl4,
  FieldId::field_gpioa_afrl_afrl5,
  FieldId::field_gpioa_afrl_afrl6,
  FieldId::field_gpioa_afrl_afrl7,
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
  FieldId::field_gpiob_afrh_afrh8,
  FieldId::field_gpiob_afrh_afrh9,
  FieldId::field_gpiob_afrh_afrh10,
  FieldId::field_gpiob_afrh_afrh11,
  FieldId::field_gpiob_afrh_afrh12,
  FieldId::field_gpiob_afrh_afrh13,
  FieldId::field_gpiob_afrh_afrh14,
  FieldId::field_gpiob_afrh_afrh15,
  FieldId::field_gpiob_afrl_afrl0,
  FieldId::field_gpiob_afrl_afrl1,
  FieldId::field_gpiob_afrl_afrl2,
  FieldId::field_gpiob_afrl_afrl3,
  FieldId::field_gpiob_afrl_afrl4,
  FieldId::field_gpiob_afrl_afrl5,
  FieldId::field_gpiob_afrl_afrl6,
  FieldId::field_gpiob_afrl_afrl7,
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
  FieldId::field_gpioc_afrh_afrh8,
  FieldId::field_gpioc_afrh_afrh9,
  FieldId::field_gpioc_afrh_afrh10,
  FieldId::field_gpioc_afrh_afrh11,
  FieldId::field_gpioc_afrh_afrh12,
  FieldId::field_gpioc_afrh_afrh13,
  FieldId::field_gpioc_afrh_afrh14,
  FieldId::field_gpioc_afrh_afrh15,
  FieldId::field_gpioc_afrl_afrl0,
  FieldId::field_gpioc_afrl_afrl1,
  FieldId::field_gpioc_afrl_afrl2,
  FieldId::field_gpioc_afrl_afrl3,
  FieldId::field_gpioc_afrl_afrl4,
  FieldId::field_gpioc_afrl_afrl5,
  FieldId::field_gpioc_afrl_afrl6,
  FieldId::field_gpioc_afrl_afrl7,
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
  FieldId::field_gpiod_afrh_afrh8,
  FieldId::field_gpiod_afrh_afrh9,
  FieldId::field_gpiod_afrh_afrh10,
  FieldId::field_gpiod_afrh_afrh11,
  FieldId::field_gpiod_afrh_afrh12,
  FieldId::field_gpiod_afrh_afrh13,
  FieldId::field_gpiod_afrh_afrh14,
  FieldId::field_gpiod_afrh_afrh15,
  FieldId::field_gpiod_afrl_afrl0,
  FieldId::field_gpiod_afrl_afrl1,
  FieldId::field_gpiod_afrl_afrl2,
  FieldId::field_gpiod_afrl_afrl3,
  FieldId::field_gpiod_afrl_afrl4,
  FieldId::field_gpiod_afrl_afrl5,
  FieldId::field_gpiod_afrl_afrl6,
  FieldId::field_gpiod_afrl_afrl7,
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
  FieldId::field_gpioe_afrh_afrh8,
  FieldId::field_gpioe_afrh_afrh9,
  FieldId::field_gpioe_afrh_afrh10,
  FieldId::field_gpioe_afrh_afrh11,
  FieldId::field_gpioe_afrh_afrh12,
  FieldId::field_gpioe_afrh_afrh13,
  FieldId::field_gpioe_afrh_afrh14,
  FieldId::field_gpioe_afrh_afrh15,
  FieldId::field_gpioe_afrl_afrl0,
  FieldId::field_gpioe_afrl_afrl1,
  FieldId::field_gpioe_afrl_afrl2,
  FieldId::field_gpioe_afrl_afrl3,
  FieldId::field_gpioe_afrl_afrl4,
  FieldId::field_gpioe_afrl_afrl5,
  FieldId::field_gpioe_afrl_afrl6,
  FieldId::field_gpioe_afrl_afrl7,
  FieldId::field_gpioe_bsrr_bs0,
  FieldId::field_gpioe_bsrr_bs1,
  FieldId::field_gpioe_bsrr_bs2,
  FieldId::field_gpioe_bsrr_bs3,
  FieldId::field_gpioe_bsrr_bs4,
  FieldId::field_gpioe_bsrr_bs5,
  FieldId::field_gpioe_bsrr_bs6,
  FieldId::field_gpioe_bsrr_bs7,
  FieldId::field_gpioe_bsrr_bs8,
  FieldId::field_gpioe_bsrr_bs9,
  FieldId::field_gpioe_bsrr_bs10,
  FieldId::field_gpioe_bsrr_bs11,
  FieldId::field_gpioe_bsrr_bs12,
  FieldId::field_gpioe_bsrr_bs13,
  FieldId::field_gpioe_bsrr_bs14,
  FieldId::field_gpioe_bsrr_bs15,
  FieldId::field_gpioe_bsrr_br0,
  FieldId::field_gpioe_bsrr_br1,
  FieldId::field_gpioe_bsrr_br2,
  FieldId::field_gpioe_bsrr_br3,
  FieldId::field_gpioe_bsrr_br4,
  FieldId::field_gpioe_bsrr_br5,
  FieldId::field_gpioe_bsrr_br6,
  FieldId::field_gpioe_bsrr_br7,
  FieldId::field_gpioe_bsrr_br8,
  FieldId::field_gpioe_bsrr_br9,
  FieldId::field_gpioe_bsrr_br10,
  FieldId::field_gpioe_bsrr_br11,
  FieldId::field_gpioe_bsrr_br12,
  FieldId::field_gpioe_bsrr_br13,
  FieldId::field_gpioe_bsrr_br14,
  FieldId::field_gpioe_bsrr_br15,
  FieldId::field_gpioe_idr_idr0,
  FieldId::field_gpioe_idr_idr1,
  FieldId::field_gpioe_idr_idr2,
  FieldId::field_gpioe_idr_idr3,
  FieldId::field_gpioe_idr_idr4,
  FieldId::field_gpioe_idr_idr5,
  FieldId::field_gpioe_idr_idr6,
  FieldId::field_gpioe_idr_idr7,
  FieldId::field_gpioe_idr_idr8,
  FieldId::field_gpioe_idr_idr9,
  FieldId::field_gpioe_idr_idr10,
  FieldId::field_gpioe_idr_idr11,
  FieldId::field_gpioe_idr_idr12,
  FieldId::field_gpioe_idr_idr13,
  FieldId::field_gpioe_idr_idr14,
  FieldId::field_gpioe_idr_idr15,
  FieldId::field_gpioe_lckr_lck0,
  FieldId::field_gpioe_lckr_lck1,
  FieldId::field_gpioe_lckr_lck2,
  FieldId::field_gpioe_lckr_lck3,
  FieldId::field_gpioe_lckr_lck4,
  FieldId::field_gpioe_lckr_lck5,
  FieldId::field_gpioe_lckr_lck6,
  FieldId::field_gpioe_lckr_lck7,
  FieldId::field_gpioe_lckr_lck8,
  FieldId::field_gpioe_lckr_lck9,
  FieldId::field_gpioe_lckr_lck10,
  FieldId::field_gpioe_lckr_lck11,
  FieldId::field_gpioe_lckr_lck12,
  FieldId::field_gpioe_lckr_lck13,
  FieldId::field_gpioe_lckr_lck14,
  FieldId::field_gpioe_lckr_lck15,
  FieldId::field_gpioe_lckr_lckk,
  FieldId::field_gpioe_moder_moder0,
  FieldId::field_gpioe_moder_moder1,
  FieldId::field_gpioe_moder_moder2,
  FieldId::field_gpioe_moder_moder3,
  FieldId::field_gpioe_moder_moder4,
  FieldId::field_gpioe_moder_moder5,
  FieldId::field_gpioe_moder_moder6,
  FieldId::field_gpioe_moder_moder7,
  FieldId::field_gpioe_moder_moder8,
  FieldId::field_gpioe_moder_moder9,
  FieldId::field_gpioe_moder_moder10,
  FieldId::field_gpioe_moder_moder11,
  FieldId::field_gpioe_moder_moder12,
  FieldId::field_gpioe_moder_moder13,
  FieldId::field_gpioe_moder_moder14,
  FieldId::field_gpioe_moder_moder15,
  FieldId::field_gpioe_odr_odr0,
  FieldId::field_gpioe_odr_odr1,
  FieldId::field_gpioe_odr_odr2,
  FieldId::field_gpioe_odr_odr3,
  FieldId::field_gpioe_odr_odr4,
  FieldId::field_gpioe_odr_odr5,
  FieldId::field_gpioe_odr_odr6,
  FieldId::field_gpioe_odr_odr7,
  FieldId::field_gpioe_odr_odr8,
  FieldId::field_gpioe_odr_odr9,
  FieldId::field_gpioe_odr_odr10,
  FieldId::field_gpioe_odr_odr11,
  FieldId::field_gpioe_odr_odr12,
  FieldId::field_gpioe_odr_odr13,
  FieldId::field_gpioe_odr_odr14,
  FieldId::field_gpioe_odr_odr15,
  FieldId::field_gpioe_ospeedr_ospeedr0,
  FieldId::field_gpioe_ospeedr_ospeedr1,
  FieldId::field_gpioe_ospeedr_ospeedr2,
  FieldId::field_gpioe_ospeedr_ospeedr3,
  FieldId::field_gpioe_ospeedr_ospeedr4,
  FieldId::field_gpioe_ospeedr_ospeedr5,
  FieldId::field_gpioe_ospeedr_ospeedr6,
  FieldId::field_gpioe_ospeedr_ospeedr7,
  FieldId::field_gpioe_ospeedr_ospeedr8,
  FieldId::field_gpioe_ospeedr_ospeedr9,
  FieldId::field_gpioe_ospeedr_ospeedr10,
  FieldId::field_gpioe_ospeedr_ospeedr11,
  FieldId::field_gpioe_ospeedr_ospeedr12,
  FieldId::field_gpioe_ospeedr_ospeedr13,
  FieldId::field_gpioe_ospeedr_ospeedr14,
  FieldId::field_gpioe_ospeedr_ospeedr15,
  FieldId::field_gpioe_otyper_ot0,
  FieldId::field_gpioe_otyper_ot1,
  FieldId::field_gpioe_otyper_ot2,
  FieldId::field_gpioe_otyper_ot3,
  FieldId::field_gpioe_otyper_ot4,
  FieldId::field_gpioe_otyper_ot5,
  FieldId::field_gpioe_otyper_ot6,
  FieldId::field_gpioe_otyper_ot7,
  FieldId::field_gpioe_otyper_ot8,
  FieldId::field_gpioe_otyper_ot9,
  FieldId::field_gpioe_otyper_ot10,
  FieldId::field_gpioe_otyper_ot11,
  FieldId::field_gpioe_otyper_ot12,
  FieldId::field_gpioe_otyper_ot13,
  FieldId::field_gpioe_otyper_ot14,
  FieldId::field_gpioe_otyper_ot15,
  FieldId::field_gpioe_pupdr_pupdr0,
  FieldId::field_gpioe_pupdr_pupdr1,
  FieldId::field_gpioe_pupdr_pupdr2,
  FieldId::field_gpioe_pupdr_pupdr3,
  FieldId::field_gpioe_pupdr_pupdr4,
  FieldId::field_gpioe_pupdr_pupdr5,
  FieldId::field_gpioe_pupdr_pupdr6,
  FieldId::field_gpioe_pupdr_pupdr7,
  FieldId::field_gpioe_pupdr_pupdr8,
  FieldId::field_gpioe_pupdr_pupdr9,
  FieldId::field_gpioe_pupdr_pupdr10,
  FieldId::field_gpioe_pupdr_pupdr11,
  FieldId::field_gpioe_pupdr_pupdr12,
  FieldId::field_gpioe_pupdr_pupdr13,
  FieldId::field_gpioe_pupdr_pupdr14,
  FieldId::field_gpioe_pupdr_pupdr15,
  FieldId::field_gpioh_afrh_afrh8,
  FieldId::field_gpioh_afrh_afrh9,
  FieldId::field_gpioh_afrh_afrh10,
  FieldId::field_gpioh_afrh_afrh11,
  FieldId::field_gpioh_afrh_afrh12,
  FieldId::field_gpioh_afrh_afrh13,
  FieldId::field_gpioh_afrh_afrh14,
  FieldId::field_gpioh_afrh_afrh15,
  FieldId::field_gpioh_afrl_afrl0,
  FieldId::field_gpioh_afrl_afrl1,
  FieldId::field_gpioh_afrl_afrl2,
  FieldId::field_gpioh_afrl_afrl3,
  FieldId::field_gpioh_afrl_afrl4,
  FieldId::field_gpioh_afrl_afrl5,
  FieldId::field_gpioh_afrl_afrl6,
  FieldId::field_gpioh_afrl_afrl7,
  FieldId::field_gpioh_bsrr_bs0,
  FieldId::field_gpioh_bsrr_bs1,
  FieldId::field_gpioh_bsrr_bs2,
  FieldId::field_gpioh_bsrr_bs3,
  FieldId::field_gpioh_bsrr_bs4,
  FieldId::field_gpioh_bsrr_bs5,
  FieldId::field_gpioh_bsrr_bs6,
  FieldId::field_gpioh_bsrr_bs7,
  FieldId::field_gpioh_bsrr_bs8,
  FieldId::field_gpioh_bsrr_bs9,
  FieldId::field_gpioh_bsrr_bs10,
  FieldId::field_gpioh_bsrr_bs11,
  FieldId::field_gpioh_bsrr_bs12,
  FieldId::field_gpioh_bsrr_bs13,
  FieldId::field_gpioh_bsrr_bs14,
  FieldId::field_gpioh_bsrr_bs15,
  FieldId::field_gpioh_bsrr_br0,
  FieldId::field_gpioh_bsrr_br1,
  FieldId::field_gpioh_bsrr_br2,
  FieldId::field_gpioh_bsrr_br3,
  FieldId::field_gpioh_bsrr_br4,
  FieldId::field_gpioh_bsrr_br5,
  FieldId::field_gpioh_bsrr_br6,
  FieldId::field_gpioh_bsrr_br7,
  FieldId::field_gpioh_bsrr_br8,
  FieldId::field_gpioh_bsrr_br9,
  FieldId::field_gpioh_bsrr_br10,
  FieldId::field_gpioh_bsrr_br11,
  FieldId::field_gpioh_bsrr_br12,
  FieldId::field_gpioh_bsrr_br13,
  FieldId::field_gpioh_bsrr_br14,
  FieldId::field_gpioh_bsrr_br15,
  FieldId::field_gpioh_idr_idr0,
  FieldId::field_gpioh_idr_idr1,
  FieldId::field_gpioh_idr_idr2,
  FieldId::field_gpioh_idr_idr3,
  FieldId::field_gpioh_idr_idr4,
  FieldId::field_gpioh_idr_idr5,
  FieldId::field_gpioh_idr_idr6,
  FieldId::field_gpioh_idr_idr7,
  FieldId::field_gpioh_idr_idr8,
  FieldId::field_gpioh_idr_idr9,
  FieldId::field_gpioh_idr_idr10,
  FieldId::field_gpioh_idr_idr11,
  FieldId::field_gpioh_idr_idr12,
  FieldId::field_gpioh_idr_idr13,
  FieldId::field_gpioh_idr_idr14,
  FieldId::field_gpioh_idr_idr15,
  FieldId::field_gpioh_lckr_lck0,
  FieldId::field_gpioh_lckr_lck1,
  FieldId::field_gpioh_lckr_lck2,
  FieldId::field_gpioh_lckr_lck3,
  FieldId::field_gpioh_lckr_lck4,
  FieldId::field_gpioh_lckr_lck5,
  FieldId::field_gpioh_lckr_lck6,
  FieldId::field_gpioh_lckr_lck7,
  FieldId::field_gpioh_lckr_lck8,
  FieldId::field_gpioh_lckr_lck9,
  FieldId::field_gpioh_lckr_lck10,
  FieldId::field_gpioh_lckr_lck11,
  FieldId::field_gpioh_lckr_lck12,
  FieldId::field_gpioh_lckr_lck13,
  FieldId::field_gpioh_lckr_lck14,
  FieldId::field_gpioh_lckr_lck15,
  FieldId::field_gpioh_lckr_lckk,
  FieldId::field_gpioh_moder_moder0,
  FieldId::field_gpioh_moder_moder1,
  FieldId::field_gpioh_moder_moder2,
  FieldId::field_gpioh_moder_moder3,
  FieldId::field_gpioh_moder_moder4,
  FieldId::field_gpioh_moder_moder5,
  FieldId::field_gpioh_moder_moder6,
  FieldId::field_gpioh_moder_moder7,
  FieldId::field_gpioh_moder_moder8,
  FieldId::field_gpioh_moder_moder9,
  FieldId::field_gpioh_moder_moder10,
  FieldId::field_gpioh_moder_moder11,
  FieldId::field_gpioh_moder_moder12,
  FieldId::field_gpioh_moder_moder13,
  FieldId::field_gpioh_moder_moder14,
  FieldId::field_gpioh_moder_moder15,
  FieldId::field_gpioh_odr_odr0,
  FieldId::field_gpioh_odr_odr1,
  FieldId::field_gpioh_odr_odr2,
  FieldId::field_gpioh_odr_odr3,
  FieldId::field_gpioh_odr_odr4,
  FieldId::field_gpioh_odr_odr5,
  FieldId::field_gpioh_odr_odr6,
  FieldId::field_gpioh_odr_odr7,
  FieldId::field_gpioh_odr_odr8,
  FieldId::field_gpioh_odr_odr9,
  FieldId::field_gpioh_odr_odr10,
  FieldId::field_gpioh_odr_odr11,
  FieldId::field_gpioh_odr_odr12,
  FieldId::field_gpioh_odr_odr13,
  FieldId::field_gpioh_odr_odr14,
  FieldId::field_gpioh_odr_odr15,
  FieldId::field_gpioh_ospeedr_ospeedr0,
  FieldId::field_gpioh_ospeedr_ospeedr1,
  FieldId::field_gpioh_ospeedr_ospeedr2,
  FieldId::field_gpioh_ospeedr_ospeedr3,
  FieldId::field_gpioh_ospeedr_ospeedr4,
  FieldId::field_gpioh_ospeedr_ospeedr5,
  FieldId::field_gpioh_ospeedr_ospeedr6,
  FieldId::field_gpioh_ospeedr_ospeedr7,
  FieldId::field_gpioh_ospeedr_ospeedr8,
  FieldId::field_gpioh_ospeedr_ospeedr9,
  FieldId::field_gpioh_ospeedr_ospeedr10,
  FieldId::field_gpioh_ospeedr_ospeedr11,
  FieldId::field_gpioh_ospeedr_ospeedr12,
  FieldId::field_gpioh_ospeedr_ospeedr13,
  FieldId::field_gpioh_ospeedr_ospeedr14,
  FieldId::field_gpioh_ospeedr_ospeedr15,
  FieldId::field_gpioh_otyper_ot0,
  FieldId::field_gpioh_otyper_ot1,
  FieldId::field_gpioh_otyper_ot2,
  FieldId::field_gpioh_otyper_ot3,
  FieldId::field_gpioh_otyper_ot4,
  FieldId::field_gpioh_otyper_ot5,
  FieldId::field_gpioh_otyper_ot6,
  FieldId::field_gpioh_otyper_ot7,
  FieldId::field_gpioh_otyper_ot8,
  FieldId::field_gpioh_otyper_ot9,
  FieldId::field_gpioh_otyper_ot10,
  FieldId::field_gpioh_otyper_ot11,
  FieldId::field_gpioh_otyper_ot12,
  FieldId::field_gpioh_otyper_ot13,
  FieldId::field_gpioh_otyper_ot14,
  FieldId::field_gpioh_otyper_ot15,
  FieldId::field_gpioh_pupdr_pupdr0,
  FieldId::field_gpioh_pupdr_pupdr1,
  FieldId::field_gpioh_pupdr_pupdr2,
  FieldId::field_gpioh_pupdr_pupdr3,
  FieldId::field_gpioh_pupdr_pupdr4,
  FieldId::field_gpioh_pupdr_pupdr5,
  FieldId::field_gpioh_pupdr_pupdr6,
  FieldId::field_gpioh_pupdr_pupdr7,
  FieldId::field_gpioh_pupdr_pupdr8,
  FieldId::field_gpioh_pupdr_pupdr9,
  FieldId::field_gpioh_pupdr_pupdr10,
  FieldId::field_gpioh_pupdr_pupdr11,
  FieldId::field_gpioh_pupdr_pupdr12,
  FieldId::field_gpioh_pupdr_pupdr13,
  FieldId::field_gpioh_pupdr_pupdr14,
  FieldId::field_gpioh_pupdr_pupdr15,
  FieldId::field_rcc_ahb1enr_gpioaen,
  FieldId::field_rcc_ahb1enr_gpioben,
  FieldId::field_rcc_ahb1enr_gpiocen,
  FieldId::field_rcc_ahb1enr_gpioden,
  FieldId::field_rcc_ahb1enr_gpiohen,
  FieldId::field_rcc_ahb1rstr_gpioarst,
  FieldId::field_rcc_ahb1rstr_gpiobrst,
  FieldId::field_rcc_ahb1rstr_gpiocrst,
  FieldId::field_rcc_ahb1rstr_gpiodrst,
  FieldId::field_rcc_ahb1rstr_gpiohrst,
  FieldId::field_rcc_apb1enr_spi2en,
  FieldId::field_rcc_apb1enr_usart2en,
  FieldId::field_rcc_apb1rstr_spi2rst,
  FieldId::field_rcc_apb2enr_usart1en,
  FieldId::field_rcc_apb2enr_spi1en,
  FieldId::field_rcc_apb2rstr_usart1rst,
  FieldId::field_rcc_apb2rstr_spi1rst,
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
  FieldId::field_spi1_cr2_frf,
  FieldId::field_spi1_cr2_errie,
  FieldId::field_spi1_cr2_rxneie,
  FieldId::field_spi1_cr2_txeie,
  FieldId::field_spi1_crcpr_crcpoly,
  FieldId::field_spi1_dr_dr,
  FieldId::field_spi1_i2scfgr_chlen,
  FieldId::field_spi1_i2scfgr_datlen,
  FieldId::field_spi1_i2scfgr_ckpol,
  FieldId::field_spi1_i2scfgr_i2sstd,
  FieldId::field_spi1_i2scfgr_pcmsync,
  FieldId::field_spi1_i2scfgr_i2scfg,
  FieldId::field_spi1_i2scfgr_i2se,
  FieldId::field_spi1_i2scfgr_i2smod,
  FieldId::field_spi1_i2spr_i2sdiv,
  FieldId::field_spi1_i2spr_odd,
  FieldId::field_spi1_i2spr_mckoe,
  FieldId::field_spi1_rxcrcr_rxcrc,
  FieldId::field_spi1_sr_rxne,
  FieldId::field_spi1_sr_txe,
  FieldId::field_spi1_sr_chside,
  FieldId::field_spi1_sr_udr,
  FieldId::field_spi1_sr_crcerr,
  FieldId::field_spi1_sr_modf,
  FieldId::field_spi1_sr_ovr,
  FieldId::field_spi1_sr_bsy,
  FieldId::field_spi1_sr_tifrfe,
  FieldId::field_spi1_txcrcr_txcrc,
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
  FieldId::field_spi2_cr2_frf,
  FieldId::field_spi2_cr2_errie,
  FieldId::field_spi2_cr2_rxneie,
  FieldId::field_spi2_cr2_txeie,
  FieldId::field_spi2_crcpr_crcpoly,
  FieldId::field_spi2_dr_dr,
  FieldId::field_spi2_i2scfgr_chlen,
  FieldId::field_spi2_i2scfgr_datlen,
  FieldId::field_spi2_i2scfgr_ckpol,
  FieldId::field_spi2_i2scfgr_i2sstd,
  FieldId::field_spi2_i2scfgr_pcmsync,
  FieldId::field_spi2_i2scfgr_i2scfg,
  FieldId::field_spi2_i2scfgr_i2se,
  FieldId::field_spi2_i2scfgr_i2smod,
  FieldId::field_spi2_i2spr_i2sdiv,
  FieldId::field_spi2_i2spr_odd,
  FieldId::field_spi2_i2spr_mckoe,
  FieldId::field_spi2_rxcrcr_rxcrc,
  FieldId::field_spi2_sr_rxne,
  FieldId::field_spi2_sr_txe,
  FieldId::field_spi2_sr_chside,
  FieldId::field_spi2_sr_udr,
  FieldId::field_spi2_sr_crcerr,
  FieldId::field_spi2_sr_modf,
  FieldId::field_spi2_sr_ovr,
  FieldId::field_spi2_sr_bsy,
  FieldId::field_spi2_sr_tifrfe,
  FieldId::field_spi2_txcrcr_txcrc,
  FieldId::field_spi3_cr1_cpha,
  FieldId::field_spi3_cr1_cpol,
  FieldId::field_spi3_cr1_mstr,
  FieldId::field_spi3_cr1_br,
  FieldId::field_spi3_cr1_spe,
  FieldId::field_spi3_cr1_lsbfirst,
  FieldId::field_spi3_cr1_ssi,
  FieldId::field_spi3_cr1_ssm,
  FieldId::field_spi3_cr1_rxonly,
  FieldId::field_spi3_cr1_dff,
  FieldId::field_spi3_cr1_crcnext,
  FieldId::field_spi3_cr1_crcen,
  FieldId::field_spi3_cr1_bidioe,
  FieldId::field_spi3_cr1_bidimode,
  FieldId::field_spi3_cr2_rxdmaen,
  FieldId::field_spi3_cr2_txdmaen,
  FieldId::field_spi3_cr2_ssoe,
  FieldId::field_spi3_cr2_frf,
  FieldId::field_spi3_cr2_errie,
  FieldId::field_spi3_cr2_rxneie,
  FieldId::field_spi3_cr2_txeie,
  FieldId::field_spi3_crcpr_crcpoly,
  FieldId::field_spi3_dr_dr,
  FieldId::field_spi3_i2scfgr_chlen,
  FieldId::field_spi3_i2scfgr_datlen,
  FieldId::field_spi3_i2scfgr_ckpol,
  FieldId::field_spi3_i2scfgr_i2sstd,
  FieldId::field_spi3_i2scfgr_pcmsync,
  FieldId::field_spi3_i2scfgr_i2scfg,
  FieldId::field_spi3_i2scfgr_i2se,
  FieldId::field_spi3_i2scfgr_i2smod,
  FieldId::field_spi3_i2spr_i2sdiv,
  FieldId::field_spi3_i2spr_odd,
  FieldId::field_spi3_i2spr_mckoe,
  FieldId::field_spi3_rxcrcr_rxcrc,
  FieldId::field_spi3_sr_rxne,
  FieldId::field_spi3_sr_txe,
  FieldId::field_spi3_sr_chside,
  FieldId::field_spi3_sr_udr,
  FieldId::field_spi3_sr_crcerr,
  FieldId::field_spi3_sr_modf,
  FieldId::field_spi3_sr_ovr,
  FieldId::field_spi3_sr_bsy,
  FieldId::field_spi3_sr_tifrfe,
  FieldId::field_spi3_txcrcr_txcrc,
  FieldId::field_spi4_cr1_cpha,
  FieldId::field_spi4_cr1_cpol,
  FieldId::field_spi4_cr1_mstr,
  FieldId::field_spi4_cr1_br,
  FieldId::field_spi4_cr1_spe,
  FieldId::field_spi4_cr1_lsbfirst,
  FieldId::field_spi4_cr1_ssi,
  FieldId::field_spi4_cr1_ssm,
  FieldId::field_spi4_cr1_rxonly,
  FieldId::field_spi4_cr1_dff,
  FieldId::field_spi4_cr1_crcnext,
  FieldId::field_spi4_cr1_crcen,
  FieldId::field_spi4_cr1_bidioe,
  FieldId::field_spi4_cr1_bidimode,
  FieldId::field_spi4_cr2_rxdmaen,
  FieldId::field_spi4_cr2_txdmaen,
  FieldId::field_spi4_cr2_ssoe,
  FieldId::field_spi4_cr2_frf,
  FieldId::field_spi4_cr2_errie,
  FieldId::field_spi4_cr2_rxneie,
  FieldId::field_spi4_cr2_txeie,
  FieldId::field_spi4_crcpr_crcpoly,
  FieldId::field_spi4_dr_dr,
  FieldId::field_spi4_i2scfgr_chlen,
  FieldId::field_spi4_i2scfgr_datlen,
  FieldId::field_spi4_i2scfgr_ckpol,
  FieldId::field_spi4_i2scfgr_i2sstd,
  FieldId::field_spi4_i2scfgr_pcmsync,
  FieldId::field_spi4_i2scfgr_i2scfg,
  FieldId::field_spi4_i2scfgr_i2se,
  FieldId::field_spi4_i2scfgr_i2smod,
  FieldId::field_spi4_i2spr_i2sdiv,
  FieldId::field_spi4_i2spr_odd,
  FieldId::field_spi4_i2spr_mckoe,
  FieldId::field_spi4_rxcrcr_rxcrc,
  FieldId::field_spi4_sr_rxne,
  FieldId::field_spi4_sr_txe,
  FieldId::field_spi4_sr_chside,
  FieldId::field_spi4_sr_udr,
  FieldId::field_spi4_sr_crcerr,
  FieldId::field_spi4_sr_modf,
  FieldId::field_spi4_sr_ovr,
  FieldId::field_spi4_sr_bsy,
  FieldId::field_spi4_sr_tifrfe,
  FieldId::field_spi4_txcrcr_txcrc,
  FieldId::field_usart1_brr_div_fraction,
  FieldId::field_usart1_brr_div_mantissa,
  FieldId::field_usart1_cr1_sbk,
  FieldId::field_usart1_cr1_rwu,
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
  FieldId::field_usart1_cr1_m,
  FieldId::field_usart1_cr1_ue,
  FieldId::field_usart1_cr1_over8,
  FieldId::field_usart1_cr2_add,
  FieldId::field_usart1_cr2_lbdl,
  FieldId::field_usart1_cr2_lbdie,
  FieldId::field_usart1_cr2_lbcl,
  FieldId::field_usart1_cr2_cpha,
  FieldId::field_usart1_cr2_cpol,
  FieldId::field_usart1_cr2_clken,
  FieldId::field_usart1_cr2_stop,
  FieldId::field_usart1_cr2_linen,
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
  FieldId::field_usart1_dr_dr,
  FieldId::field_usart1_gtpr_psc,
  FieldId::field_usart1_gtpr_gt,
  FieldId::field_usart1_sr_pe,
  FieldId::field_usart1_sr_fe,
  FieldId::field_usart1_sr_nf,
  FieldId::field_usart1_sr_ore,
  FieldId::field_usart1_sr_idle,
  FieldId::field_usart1_sr_rxne,
  FieldId::field_usart1_sr_tc,
  FieldId::field_usart1_sr_txe,
  FieldId::field_usart1_sr_lbd,
  FieldId::field_usart1_sr_cts,
  FieldId::field_usart2_brr_div_fraction,
  FieldId::field_usart2_brr_div_mantissa,
  FieldId::field_usart2_cr1_sbk,
  FieldId::field_usart2_cr1_rwu,
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
  FieldId::field_usart2_cr1_m,
  FieldId::field_usart2_cr1_ue,
  FieldId::field_usart2_cr1_over8,
  FieldId::field_usart2_cr2_add,
  FieldId::field_usart2_cr2_lbdl,
  FieldId::field_usart2_cr2_lbdie,
  FieldId::field_usart2_cr2_lbcl,
  FieldId::field_usart2_cr2_cpha,
  FieldId::field_usart2_cr2_cpol,
  FieldId::field_usart2_cr2_clken,
  FieldId::field_usart2_cr2_stop,
  FieldId::field_usart2_cr2_linen,
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
  FieldId::field_usart2_dr_dr,
  FieldId::field_usart2_gtpr_psc,
  FieldId::field_usart2_gtpr_gt,
  FieldId::field_usart2_sr_pe,
  FieldId::field_usart2_sr_fe,
  FieldId::field_usart2_sr_nf,
  FieldId::field_usart2_sr_ore,
  FieldId::field_usart2_sr_idle,
  FieldId::field_usart2_sr_rxne,
  FieldId::field_usart2_sr_tc,
  FieldId::field_usart2_sr_txe,
  FieldId::field_usart2_sr_lbd,
  FieldId::field_usart2_sr_cts,
  FieldId::field_usart6_brr_div_fraction,
  FieldId::field_usart6_brr_div_mantissa,
  FieldId::field_usart6_cr1_sbk,
  FieldId::field_usart6_cr1_rwu,
  FieldId::field_usart6_cr1_re,
  FieldId::field_usart6_cr1_te,
  FieldId::field_usart6_cr1_idleie,
  FieldId::field_usart6_cr1_rxneie,
  FieldId::field_usart6_cr1_tcie,
  FieldId::field_usart6_cr1_txeie,
  FieldId::field_usart6_cr1_peie,
  FieldId::field_usart6_cr1_ps,
  FieldId::field_usart6_cr1_pce,
  FieldId::field_usart6_cr1_wake,
  FieldId::field_usart6_cr1_m,
  FieldId::field_usart6_cr1_ue,
  FieldId::field_usart6_cr1_over8,
  FieldId::field_usart6_cr2_add,
  FieldId::field_usart6_cr2_lbdl,
  FieldId::field_usart6_cr2_lbdie,
  FieldId::field_usart6_cr2_lbcl,
  FieldId::field_usart6_cr2_cpha,
  FieldId::field_usart6_cr2_cpol,
  FieldId::field_usart6_cr2_clken,
  FieldId::field_usart6_cr2_stop,
  FieldId::field_usart6_cr2_linen,
  FieldId::field_usart6_cr3_eie,
  FieldId::field_usart6_cr3_iren,
  FieldId::field_usart6_cr3_irlp,
  FieldId::field_usart6_cr3_hdsel,
  FieldId::field_usart6_cr3_nack,
  FieldId::field_usart6_cr3_scen,
  FieldId::field_usart6_cr3_dmar,
  FieldId::field_usart6_cr3_dmat,
  FieldId::field_usart6_cr3_rtse,
  FieldId::field_usart6_cr3_ctse,
  FieldId::field_usart6_cr3_ctsie,
  FieldId::field_usart6_cr3_onebit,
  FieldId::field_usart6_dr_dr,
  FieldId::field_usart6_gtpr_psc,
  FieldId::field_usart6_gtpr_gt,
  FieldId::field_usart6_sr_pe,
  FieldId::field_usart6_sr_fe,
  FieldId::field_usart6_sr_nf,
  FieldId::field_usart6_sr_ore,
  FieldId::field_usart6_sr_idle,
  FieldId::field_usart6_sr_rxne,
  FieldId::field_usart6_sr_tc,
  FieldId::field_usart6_sr_txe,
  FieldId::field_usart6_sr_lbd,
  FieldId::field_usart6_sr_cts,
}};
}
}
}
}
}
}
