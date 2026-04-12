#pragma once

#include <array>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
struct PackageDescriptor {
  DeviceRefId device_id;
  PackageRefId package_id;
  int pin_count;
};
inline constexpr PackageDescriptor kPackageMap[] = {
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, 20},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, 64},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, 64},
};

struct PackagePadDescriptor {
  DeviceRefId device_id;
  PackageRefId package_id;
  PackagePadRefId pad_id;
  PinRefId pin_id;
  PackagePadKindId pad_kind_id;
  BondingStateId bonding_state_id;
  int physical_index;
};
inline constexpr PackagePadDescriptor kPackagePads[] = {
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_1, PinRefId::stm32g030f6_PB7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 1},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_10, PinRefId::stm32g030f6_PA3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 10},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_11, PinRefId::stm32g030f6_PA4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 11},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_12, PinRefId::stm32g030f6_PA5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 12},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_13, PinRefId::stm32g030f6_PA6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 13},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_14, PinRefId::stm32g030f6_PA7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 14},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_15, PinRefId::stm32g030f6_PB0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 15},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_16, PinRefId::stm32g030f6_PA11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 16},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_17, PinRefId::stm32g030f6_PA12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 17},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_18, PinRefId::stm32g030f6_PA13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 18},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_19, PinRefId::stm32g030f6_PA14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 19},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_2, PinRefId::stm32g030f6_PC14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 2},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_20, PinRefId::stm32g030f6_PB3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 20},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_3, PinRefId::stm32g030f6_PC15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 3},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_4, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 4},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_5, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 5},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_6, PinRefId::none, PackagePadKindId::package_pad_kind_reset, BondingStateId::bonding_state_dedicated, 6},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_7, PinRefId::stm32g030f6_PA0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 7},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_8, PinRefId::stm32g030f6_PA1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 8},
  {DeviceRefId::stm32g030f6, PackageRefId::stm32g030f6_tssop20, PackagePadRefId::stm32g030f6_9, PinRefId::stm32g030f6_PA2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 9},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_1, PinRefId::stm32g071rb_PC11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 1},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_10, PinRefId::stm32g071rb_PF0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 10},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_11, PinRefId::stm32g071rb_PF1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 11},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_12, PinRefId::stm32g071rb_PF2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 12},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_13, PinRefId::stm32g071rb_PC0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 13},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_14, PinRefId::stm32g071rb_PC1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 14},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_15, PinRefId::stm32g071rb_PC2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 15},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_16, PinRefId::stm32g071rb_PC3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 16},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_17, PinRefId::stm32g071rb_PA0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 17},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_18, PinRefId::stm32g071rb_PA1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 18},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_19, PinRefId::stm32g071rb_PA2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 19},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_2, PinRefId::stm32g071rb_PC12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 2},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_20, PinRefId::stm32g071rb_PA3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 20},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_21, PinRefId::stm32g071rb_PA4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 21},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_22, PinRefId::stm32g071rb_PA5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 22},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_23, PinRefId::stm32g071rb_PA6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 23},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_24, PinRefId::stm32g071rb_PA7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 24},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_25, PinRefId::stm32g071rb_PC4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 25},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_26, PinRefId::stm32g071rb_PC5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 26},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_27, PinRefId::stm32g071rb_PB0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 27},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_28, PinRefId::stm32g071rb_PB1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 28},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_29, PinRefId::stm32g071rb_PB2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 29},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_3, PinRefId::stm32g071rb_PC13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 3},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_30, PinRefId::stm32g071rb_PB10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 30},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_31, PinRefId::stm32g071rb_PB11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 31},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_32, PinRefId::stm32g071rb_PB12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 32},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_33, PinRefId::stm32g071rb_PB13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 33},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_34, PinRefId::stm32g071rb_PB14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 34},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_35, PinRefId::stm32g071rb_PB15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 35},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_36, PinRefId::stm32g071rb_PA8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 36},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_37, PinRefId::stm32g071rb_PA9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 37},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_38, PinRefId::stm32g071rb_PC6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 38},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_39, PinRefId::stm32g071rb_PC7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 39},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_4, PinRefId::stm32g071rb_PC14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 4},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_40, PinRefId::stm32g071rb_PD8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 40},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_41, PinRefId::stm32g071rb_PD9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 41},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_42, PinRefId::stm32g071rb_PA10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 42},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_43, PinRefId::stm32g071rb_PA11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 43},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_44, PinRefId::stm32g071rb_PA12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 44},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_45, PinRefId::stm32g071rb_PA13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 45},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_46, PinRefId::stm32g071rb_PA14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 46},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_47, PinRefId::stm32g071rb_PA15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 47},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_48, PinRefId::stm32g071rb_PC8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 48},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_49, PinRefId::stm32g071rb_PC9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 49},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_5, PinRefId::stm32g071rb_PC15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 5},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_50, PinRefId::stm32g071rb_PD0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 50},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_51, PinRefId::stm32g071rb_PD1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 51},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_52, PinRefId::stm32g071rb_PD2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 52},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_53, PinRefId::stm32g071rb_PD3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 53},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_54, PinRefId::stm32g071rb_PD4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 54},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_55, PinRefId::stm32g071rb_PD5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 55},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_56, PinRefId::stm32g071rb_PD6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 56},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_57, PinRefId::stm32g071rb_PB3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 57},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_58, PinRefId::stm32g071rb_PB4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 58},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_59, PinRefId::stm32g071rb_PB5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 59},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_6, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 6},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_60, PinRefId::stm32g071rb_PB6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 60},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_61, PinRefId::stm32g071rb_PB7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 61},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_62, PinRefId::stm32g071rb_PB8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 62},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_63, PinRefId::stm32g071rb_PB9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 63},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_64, PinRefId::stm32g071rb_PC10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 64},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_7, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 7},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_8, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 8},
  {DeviceRefId::stm32g071rb, PackageRefId::stm32g071rb_lqfp64, PackagePadRefId::stm32g071rb_9, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 9},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_1, PinRefId::stm32g0b1re_PC11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 1},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_10, PinRefId::stm32g0b1re_PF0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 10},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_11, PinRefId::stm32g0b1re_PF1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 11},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_12, PinRefId::stm32g0b1re_PF2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 12},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_13, PinRefId::stm32g0b1re_PC0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 13},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_14, PinRefId::stm32g0b1re_PC1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 14},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_15, PinRefId::stm32g0b1re_PC2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 15},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_16, PinRefId::stm32g0b1re_PC3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 16},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_17, PinRefId::stm32g0b1re_PA0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 17},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_18, PinRefId::stm32g0b1re_PA1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 18},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_19, PinRefId::stm32g0b1re_PA2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 19},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_2, PinRefId::stm32g0b1re_PC12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 2},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_20, PinRefId::stm32g0b1re_PA3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 20},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_21, PinRefId::stm32g0b1re_PA4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 21},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_22, PinRefId::stm32g0b1re_PA5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 22},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_23, PinRefId::stm32g0b1re_PA6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 23},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_24, PinRefId::stm32g0b1re_PA7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 24},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_25, PinRefId::stm32g0b1re_PC4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 25},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_26, PinRefId::stm32g0b1re_PC5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 26},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_27, PinRefId::stm32g0b1re_PB0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 27},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_28, PinRefId::stm32g0b1re_PB1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 28},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_29, PinRefId::stm32g0b1re_PB2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 29},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_3, PinRefId::stm32g0b1re_PC13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 3},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_30, PinRefId::stm32g0b1re_PB10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 30},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_31, PinRefId::stm32g0b1re_PB11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 31},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_32, PinRefId::stm32g0b1re_PB12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 32},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_33, PinRefId::stm32g0b1re_PB13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 33},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_34, PinRefId::stm32g0b1re_PB14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 34},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_35, PinRefId::stm32g0b1re_PB15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 35},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_36, PinRefId::stm32g0b1re_PA8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 36},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_37, PinRefId::stm32g0b1re_PA9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 37},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_38, PinRefId::stm32g0b1re_PC6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 38},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_39, PinRefId::stm32g0b1re_PC7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 39},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_4, PinRefId::stm32g0b1re_PC14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 4},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_40, PinRefId::stm32g0b1re_PD8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 40},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_41, PinRefId::stm32g0b1re_PD9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 41},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_42, PinRefId::stm32g0b1re_PA10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 42},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_43, PinRefId::stm32g0b1re_PA11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 43},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_44, PinRefId::stm32g0b1re_PA12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 44},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_45, PinRefId::stm32g0b1re_PA13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 45},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_46, PinRefId::stm32g0b1re_PA14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 46},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_47, PinRefId::stm32g0b1re_PA15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 47},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_48, PinRefId::stm32g0b1re_PC8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 48},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_49, PinRefId::stm32g0b1re_PC9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 49},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_5, PinRefId::stm32g0b1re_PC15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 5},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_50, PinRefId::stm32g0b1re_PD0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 50},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_51, PinRefId::stm32g0b1re_PD1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 51},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_52, PinRefId::stm32g0b1re_PD2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 52},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_53, PinRefId::stm32g0b1re_PD3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 53},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_54, PinRefId::stm32g0b1re_PD4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 54},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_55, PinRefId::stm32g0b1re_PD5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 55},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_56, PinRefId::stm32g0b1re_PD6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 56},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_57, PinRefId::stm32g0b1re_PB3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 57},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_58, PinRefId::stm32g0b1re_PB4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 58},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_59, PinRefId::stm32g0b1re_PB5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 59},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_6, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 6},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_60, PinRefId::stm32g0b1re_PB6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 60},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_61, PinRefId::stm32g0b1re_PB7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 61},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_62, PinRefId::stm32g0b1re_PB8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 62},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_63, PinRefId::stm32g0b1re_PB9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 63},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_64, PinRefId::stm32g0b1re_PC10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 64},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_7, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 7},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_8, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 8},
  {DeviceRefId::stm32g0b1re, PackageRefId::stm32g0b1re_lqfp64, PackagePadRefId::stm32g0b1re_9, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 9},
};

struct PinConstraintDescriptor {
  DeviceRefId device_id;
  PinRefId pin_id;
  ConstraintRefId constraint_id;
  ConstraintKindId kind_id;
  ConstraintValueId value_id;
};
inline constexpr std::array<PinConstraintDescriptor, 0> kPinConstraints = {};
}
}
}
