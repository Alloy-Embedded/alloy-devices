#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
enum class PinId : std::uint16_t {
  none,
  GPIO_AD_B0_00,
  GPIO_AD_B0_01,
  GPIO_AD_B0_02,
  GPIO_AD_B0_03,
  GPIO_AD_B0_04,
  GPIO_AD_B0_05,
  GPIO_AD_B0_06,
  GPIO_AD_B0_07,
  GPIO_AD_B0_08,
  GPIO_AD_B0_09,
  GPIO_AD_B0_10,
  GPIO_AD_B0_11,
  GPIO_AD_B0_12,
  GPIO_AD_B0_13,
  GPIO_AD_B0_14,
  GPIO_AD_B0_15,
  GPIO_AD_B1_00,
  GPIO_AD_B1_01,
  GPIO_AD_B1_02,
  GPIO_AD_B1_03,
  GPIO_AD_B1_04,
  GPIO_AD_B1_05,
  GPIO_AD_B1_06,
  GPIO_AD_B1_07,
  GPIO_AD_B1_08,
  GPIO_AD_B1_09,
  GPIO_AD_B1_10,
  GPIO_AD_B1_11,
  GPIO_AD_B1_12,
  GPIO_AD_B1_13,
  GPIO_AD_B1_14,
  GPIO_AD_B1_15,
  GPIO_B0_00,
  GPIO_B0_01,
  GPIO_B0_02,
  GPIO_B0_03,
  GPIO_B0_04,
  GPIO_B0_05,
  GPIO_B0_06,
  GPIO_B0_07,
  GPIO_B0_08,
  GPIO_B0_09,
  GPIO_B0_10,
  GPIO_B0_11,
  GPIO_B0_12,
  GPIO_B0_13,
  GPIO_B0_14,
  GPIO_B0_15,
  GPIO_B1_00,
  GPIO_B1_01,
  GPIO_B1_02,
  GPIO_B1_03,
  GPIO_B1_04,
  GPIO_B1_05,
  GPIO_B1_06,
  GPIO_B1_07,
  GPIO_B1_08,
  GPIO_B1_09,
  GPIO_B1_10,
  GPIO_B1_11,
  GPIO_B1_12,
  GPIO_B1_13,
  GPIO_B1_14,
  GPIO_B1_15,
  GPIO_EMC_00,
  GPIO_EMC_01,
  GPIO_EMC_02,
  GPIO_EMC_03,
  GPIO_EMC_04,
  GPIO_EMC_05,
  GPIO_EMC_06,
  GPIO_EMC_07,
  GPIO_EMC_08,
  GPIO_EMC_09,
  GPIO_EMC_10,
  GPIO_EMC_11,
  GPIO_EMC_12,
  GPIO_EMC_13,
  GPIO_EMC_14,
  GPIO_EMC_15,
  GPIO_EMC_16,
  GPIO_EMC_17,
  GPIO_EMC_18,
  GPIO_EMC_19,
  GPIO_EMC_20,
  GPIO_EMC_21,
  GPIO_EMC_22,
  GPIO_EMC_23,
  GPIO_EMC_24,
  GPIO_EMC_25,
  GPIO_EMC_26,
  GPIO_EMC_27,
  GPIO_EMC_28,
  GPIO_EMC_29,
  GPIO_EMC_30,
  GPIO_EMC_31,
  GPIO_EMC_32,
  GPIO_EMC_33,
  GPIO_EMC_34,
  GPIO_EMC_35,
  GPIO_EMC_36,
  GPIO_EMC_37,
  GPIO_EMC_38,
  GPIO_EMC_39,
  GPIO_EMC_40,
  GPIO_EMC_41,
  GPIO_SD_B0_00,
  GPIO_SD_B0_01,
  GPIO_SD_B0_02,
  GPIO_SD_B0_03,
  GPIO_SD_B0_04,
  GPIO_SD_B0_05,
  GPIO_SD_B1_00,
  GPIO_SD_B1_01,
  GPIO_SD_B1_02,
  GPIO_SD_B1_03,
  GPIO_SD_B1_04,
  GPIO_SD_B1_05,
  GPIO_SD_B1_06,
  GPIO_SD_B1_07,
  GPIO_SD_B1_08,
  GPIO_SD_B1_09,
  GPIO_SD_B1_10,
  GPIO_SD_B1_11,
};

template<PinId Id>
struct PinTraits {
  static constexpr bool kPresent = false;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = -1;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::GPIO_AD_B0_15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::GPIO_AD_B1_15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::GPIO_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_B0_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_B0_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_B0_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_B0_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_B0_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_B0_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::GPIO_B0_12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::GPIO_B0_13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::GPIO_B0_14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::GPIO_B0_15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::GPIO_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::GPIO_B1_12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::GPIO_B1_13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::GPIO_B1_14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::GPIO_B1_15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::GPIO_EMC_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_EMC_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_EMC_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_EMC_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_EMC_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_EMC_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_EMC_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_EMC_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_EMC_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_EMC_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_EMC_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_EMC_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

template<>
struct PinTraits<PinId::GPIO_EMC_12> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 12;
};

template<>
struct PinTraits<PinId::GPIO_EMC_13> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 13;
};

template<>
struct PinTraits<PinId::GPIO_EMC_14> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 14;
};

template<>
struct PinTraits<PinId::GPIO_EMC_15> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 15;
};

template<>
struct PinTraits<PinId::GPIO_EMC_16> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 16;
};

template<>
struct PinTraits<PinId::GPIO_EMC_17> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 17;
};

template<>
struct PinTraits<PinId::GPIO_EMC_18> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 18;
};

template<>
struct PinTraits<PinId::GPIO_EMC_19> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 19;
};

template<>
struct PinTraits<PinId::GPIO_EMC_20> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 20;
};

template<>
struct PinTraits<PinId::GPIO_EMC_21> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 21;
};

template<>
struct PinTraits<PinId::GPIO_EMC_22> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 22;
};

template<>
struct PinTraits<PinId::GPIO_EMC_23> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 23;
};

template<>
struct PinTraits<PinId::GPIO_EMC_24> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 24;
};

template<>
struct PinTraits<PinId::GPIO_EMC_25> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 25;
};

template<>
struct PinTraits<PinId::GPIO_EMC_26> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 26;
};

template<>
struct PinTraits<PinId::GPIO_EMC_27> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 27;
};

template<>
struct PinTraits<PinId::GPIO_EMC_28> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 28;
};

template<>
struct PinTraits<PinId::GPIO_EMC_29> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 29;
};

template<>
struct PinTraits<PinId::GPIO_EMC_30> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 30;
};

template<>
struct PinTraits<PinId::GPIO_EMC_31> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 31;
};

template<>
struct PinTraits<PinId::GPIO_EMC_32> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 32;
};

template<>
struct PinTraits<PinId::GPIO_EMC_33> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 33;
};

template<>
struct PinTraits<PinId::GPIO_EMC_34> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 34;
};

template<>
struct PinTraits<PinId::GPIO_EMC_35> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 35;
};

template<>
struct PinTraits<PinId::GPIO_EMC_36> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 36;
};

template<>
struct PinTraits<PinId::GPIO_EMC_37> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 37;
};

template<>
struct PinTraits<PinId::GPIO_EMC_38> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 38;
};

template<>
struct PinTraits<PinId::GPIO_EMC_39> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 39;
};

template<>
struct PinTraits<PinId::GPIO_EMC_40> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 40;
};

template<>
struct PinTraits<PinId::GPIO_EMC_41> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 41;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_SD_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 0;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 1;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 2;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 3;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 4;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 5;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 6;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 7;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 8;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 9;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 10;
};

template<>
struct PinTraits<PinId::GPIO_SD_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PortId kPortId = PortId::none;
  static constexpr int kPinNumber = 11;
};

inline constexpr std::array<PinId, 124> kPins = {{
  PinId::GPIO_AD_B0_00,
  PinId::GPIO_AD_B0_01,
  PinId::GPIO_AD_B0_02,
  PinId::GPIO_AD_B0_03,
  PinId::GPIO_AD_B0_04,
  PinId::GPIO_AD_B0_05,
  PinId::GPIO_AD_B0_06,
  PinId::GPIO_AD_B0_07,
  PinId::GPIO_AD_B0_08,
  PinId::GPIO_AD_B0_09,
  PinId::GPIO_AD_B0_10,
  PinId::GPIO_AD_B0_11,
  PinId::GPIO_AD_B0_12,
  PinId::GPIO_AD_B0_13,
  PinId::GPIO_AD_B0_14,
  PinId::GPIO_AD_B0_15,
  PinId::GPIO_AD_B1_00,
  PinId::GPIO_AD_B1_01,
  PinId::GPIO_AD_B1_02,
  PinId::GPIO_AD_B1_03,
  PinId::GPIO_AD_B1_04,
  PinId::GPIO_AD_B1_05,
  PinId::GPIO_AD_B1_06,
  PinId::GPIO_AD_B1_07,
  PinId::GPIO_AD_B1_08,
  PinId::GPIO_AD_B1_09,
  PinId::GPIO_AD_B1_10,
  PinId::GPIO_AD_B1_11,
  PinId::GPIO_AD_B1_12,
  PinId::GPIO_AD_B1_13,
  PinId::GPIO_AD_B1_14,
  PinId::GPIO_AD_B1_15,
  PinId::GPIO_B0_00,
  PinId::GPIO_B0_01,
  PinId::GPIO_B0_02,
  PinId::GPIO_B0_03,
  PinId::GPIO_B0_04,
  PinId::GPIO_B0_05,
  PinId::GPIO_B0_06,
  PinId::GPIO_B0_07,
  PinId::GPIO_B0_08,
  PinId::GPIO_B0_09,
  PinId::GPIO_B0_10,
  PinId::GPIO_B0_11,
  PinId::GPIO_B0_12,
  PinId::GPIO_B0_13,
  PinId::GPIO_B0_14,
  PinId::GPIO_B0_15,
  PinId::GPIO_B1_00,
  PinId::GPIO_B1_01,
  PinId::GPIO_B1_02,
  PinId::GPIO_B1_03,
  PinId::GPIO_B1_04,
  PinId::GPIO_B1_05,
  PinId::GPIO_B1_06,
  PinId::GPIO_B1_07,
  PinId::GPIO_B1_08,
  PinId::GPIO_B1_09,
  PinId::GPIO_B1_10,
  PinId::GPIO_B1_11,
  PinId::GPIO_B1_12,
  PinId::GPIO_B1_13,
  PinId::GPIO_B1_14,
  PinId::GPIO_B1_15,
  PinId::GPIO_EMC_00,
  PinId::GPIO_EMC_01,
  PinId::GPIO_EMC_02,
  PinId::GPIO_EMC_03,
  PinId::GPIO_EMC_04,
  PinId::GPIO_EMC_05,
  PinId::GPIO_EMC_06,
  PinId::GPIO_EMC_07,
  PinId::GPIO_EMC_08,
  PinId::GPIO_EMC_09,
  PinId::GPIO_EMC_10,
  PinId::GPIO_EMC_11,
  PinId::GPIO_EMC_12,
  PinId::GPIO_EMC_13,
  PinId::GPIO_EMC_14,
  PinId::GPIO_EMC_15,
  PinId::GPIO_EMC_16,
  PinId::GPIO_EMC_17,
  PinId::GPIO_EMC_18,
  PinId::GPIO_EMC_19,
  PinId::GPIO_EMC_20,
  PinId::GPIO_EMC_21,
  PinId::GPIO_EMC_22,
  PinId::GPIO_EMC_23,
  PinId::GPIO_EMC_24,
  PinId::GPIO_EMC_25,
  PinId::GPIO_EMC_26,
  PinId::GPIO_EMC_27,
  PinId::GPIO_EMC_28,
  PinId::GPIO_EMC_29,
  PinId::GPIO_EMC_30,
  PinId::GPIO_EMC_31,
  PinId::GPIO_EMC_32,
  PinId::GPIO_EMC_33,
  PinId::GPIO_EMC_34,
  PinId::GPIO_EMC_35,
  PinId::GPIO_EMC_36,
  PinId::GPIO_EMC_37,
  PinId::GPIO_EMC_38,
  PinId::GPIO_EMC_39,
  PinId::GPIO_EMC_40,
  PinId::GPIO_EMC_41,
  PinId::GPIO_SD_B0_00,
  PinId::GPIO_SD_B0_01,
  PinId::GPIO_SD_B0_02,
  PinId::GPIO_SD_B0_03,
  PinId::GPIO_SD_B0_04,
  PinId::GPIO_SD_B0_05,
  PinId::GPIO_SD_B1_00,
  PinId::GPIO_SD_B1_01,
  PinId::GPIO_SD_B1_02,
  PinId::GPIO_SD_B1_03,
  PinId::GPIO_SD_B1_04,
  PinId::GPIO_SD_B1_05,
  PinId::GPIO_SD_B1_06,
  PinId::GPIO_SD_B1_07,
  PinId::GPIO_SD_B1_08,
  PinId::GPIO_SD_B1_09,
  PinId::GPIO_SD_B1_10,
  PinId::GPIO_SD_B1_11,
}};
}
}
}
}
}
}
