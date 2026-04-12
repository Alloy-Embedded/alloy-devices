#pragma once

#include <array>
#include "runtime_refs.hpp"
#include "runtime_semantics.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
struct PackageDescriptor {
  DeviceRefId device_id;
  PackageRefId package_id;
  int pin_count;
};
inline constexpr PackageDescriptor kPackageMap[] = {
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, 64},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, 64},
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
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_1, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 1},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_10, PinRefId::stm32f401re_PC2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 10},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_11, PinRefId::stm32f401re_PC3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 11},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_12, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 12},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_13, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 13},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_14, PinRefId::stm32f401re_PA0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 14},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_15, PinRefId::stm32f401re_PA1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 15},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_16, PinRefId::stm32f401re_PA2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 16},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_17, PinRefId::stm32f401re_PA3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 17},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_18, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 18},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_19, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 19},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_2, PinRefId::stm32f401re_PC13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 2},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_20, PinRefId::stm32f401re_PA4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 20},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_21, PinRefId::stm32f401re_PA5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 21},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_22, PinRefId::stm32f401re_PA6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 22},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_23, PinRefId::stm32f401re_PA7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 23},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_24, PinRefId::stm32f401re_PC4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 24},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_25, PinRefId::stm32f401re_PC5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 25},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_26, PinRefId::stm32f401re_PB0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 26},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_27, PinRefId::stm32f401re_PB1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 27},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_28, PinRefId::stm32f401re_PB2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 28},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_29, PinRefId::stm32f401re_PB10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 29},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_3, PinRefId::stm32f401re_PC14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 3},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_30, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 30},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_31, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 31},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_32, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 32},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_33, PinRefId::stm32f401re_PB12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 33},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_34, PinRefId::stm32f401re_PB13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 34},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_35, PinRefId::stm32f401re_PB14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 35},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_36, PinRefId::stm32f401re_PB15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 36},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_37, PinRefId::stm32f401re_PC6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 37},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_38, PinRefId::stm32f401re_PC7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 38},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_39, PinRefId::stm32f401re_PC8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 39},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_4, PinRefId::stm32f401re_PC15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 4},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_40, PinRefId::stm32f401re_PC9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 40},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_41, PinRefId::stm32f401re_PA8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 41},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_42, PinRefId::stm32f401re_PA9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 42},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_43, PinRefId::stm32f401re_PA10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 43},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_44, PinRefId::stm32f401re_PA11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 44},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_45, PinRefId::stm32f401re_PA12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 45},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_46, PinRefId::stm32f401re_PA13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 46},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_47, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 47},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_48, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 48},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_49, PinRefId::stm32f401re_PA14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 49},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_5, PinRefId::stm32f401re_PH0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 5},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_50, PinRefId::stm32f401re_PA15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 50},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_51, PinRefId::stm32f401re_PC10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 51},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_52, PinRefId::stm32f401re_PC11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 52},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_53, PinRefId::stm32f401re_PC12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 53},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_54, PinRefId::stm32f401re_PD2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 54},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_55, PinRefId::stm32f401re_PB3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 55},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_56, PinRefId::stm32f401re_PB4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 56},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_57, PinRefId::stm32f401re_PB5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 57},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_58, PinRefId::stm32f401re_PB6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 58},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_59, PinRefId::stm32f401re_PB7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 59},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_6, PinRefId::stm32f401re_PH1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 6},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_60, PinRefId::none, PackagePadKindId::package_pad_kind_boot, BondingStateId::bonding_state_dedicated, 60},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_61, PinRefId::stm32f401re_PB8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 61},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_62, PinRefId::stm32f401re_PB9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 62},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_63, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 63},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_64, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 64},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_7, PinRefId::none, PackagePadKindId::package_pad_kind_reset, BondingStateId::bonding_state_dedicated, 7},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_8, PinRefId::stm32f401re_PC0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 8},
  {DeviceRefId::stm32f401re, PackageRefId::stm32f401re_lqfp64, PackagePadRefId::stm32f401re_9, PinRefId::stm32f401re_PC1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 9},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_1, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 1},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_10, PinRefId::stm32f405rg_PC2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 10},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_11, PinRefId::stm32f405rg_PC3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 11},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_12, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 12},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_13, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 13},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_14, PinRefId::stm32f405rg_PA0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 14},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_15, PinRefId::stm32f405rg_PA1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 15},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_16, PinRefId::stm32f405rg_PA2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 16},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_17, PinRefId::stm32f405rg_PA3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 17},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_18, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 18},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_19, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 19},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_2, PinRefId::stm32f405rg_PC13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 2},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_20, PinRefId::stm32f405rg_PA4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 20},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_21, PinRefId::stm32f405rg_PA5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 21},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_22, PinRefId::stm32f405rg_PA6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 22},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_23, PinRefId::stm32f405rg_PA7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 23},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_24, PinRefId::stm32f405rg_PC4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 24},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_25, PinRefId::stm32f405rg_PC5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 25},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_26, PinRefId::stm32f405rg_PB0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 26},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_27, PinRefId::stm32f405rg_PB1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 27},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_28, PinRefId::stm32f405rg_PB2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 28},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_29, PinRefId::stm32f405rg_PB10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 29},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_3, PinRefId::stm32f405rg_PC14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 3},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_30, PinRefId::stm32f405rg_PB11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 30},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_31, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 31},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_32, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 32},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_33, PinRefId::stm32f405rg_PB12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 33},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_34, PinRefId::stm32f405rg_PB13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 34},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_35, PinRefId::stm32f405rg_PB14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 35},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_36, PinRefId::stm32f405rg_PB15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 36},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_37, PinRefId::stm32f405rg_PC6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 37},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_38, PinRefId::stm32f405rg_PC7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 38},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_39, PinRefId::stm32f405rg_PC8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 39},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_4, PinRefId::stm32f405rg_PC15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 4},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_40, PinRefId::stm32f405rg_PC9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 40},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_41, PinRefId::stm32f405rg_PA8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 41},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_42, PinRefId::stm32f405rg_PA9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 42},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_43, PinRefId::stm32f405rg_PA10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 43},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_44, PinRefId::stm32f405rg_PA11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 44},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_45, PinRefId::stm32f405rg_PA12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 45},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_46, PinRefId::stm32f405rg_PA13, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 46},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_47, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 47},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_48, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 48},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_49, PinRefId::stm32f405rg_PA14, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 49},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_5, PinRefId::stm32f405rg_PH0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 5},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_50, PinRefId::stm32f405rg_PA15, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 50},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_51, PinRefId::stm32f405rg_PC10, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 51},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_52, PinRefId::stm32f405rg_PC11, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 52},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_53, PinRefId::stm32f405rg_PC12, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 53},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_54, PinRefId::stm32f405rg_PD2, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 54},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_55, PinRefId::stm32f405rg_PB3, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 55},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_56, PinRefId::stm32f405rg_PB4, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 56},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_57, PinRefId::stm32f405rg_PB5, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 57},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_58, PinRefId::stm32f405rg_PB6, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 58},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_59, PinRefId::stm32f405rg_PB7, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 59},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_6, PinRefId::stm32f405rg_PH1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 6},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_60, PinRefId::none, PackagePadKindId::package_pad_kind_boot, BondingStateId::bonding_state_dedicated, 60},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_61, PinRefId::stm32f405rg_PB8, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 61},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_62, PinRefId::stm32f405rg_PB9, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 62},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_63, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 63},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_64, PinRefId::none, PackagePadKindId::package_pad_kind_power, BondingStateId::bonding_state_dedicated, 64},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_7, PinRefId::none, PackagePadKindId::package_pad_kind_reset, BondingStateId::bonding_state_dedicated, 7},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_8, PinRefId::stm32f405rg_PC0, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 8},
  {DeviceRefId::stm32f405rg, PackageRefId::stm32f405rg_lqfp64, PackagePadRefId::stm32f405rg_9, PinRefId::stm32f405rg_PC1, PackagePadKindId::package_pad_kind_io, BondingStateId::bonding_state_bonded, 9},
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
