#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
namespace driver_semantics {
template<PeripheralId Id>
struct AdcSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kChannelCount = 0u;
  static constexpr std::uint32_t kResultBits = 0u;
  static constexpr bool kHasDma = false;
  static constexpr bool kHasHardwareTrigger = false;
  static constexpr bool kHasChannelBitmaskSelect = false;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kConfigRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSampleTimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSequenceRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kDataRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kReadyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kContinuousField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kResolutionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAlignField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kExternalTriggerEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kExternalTriggerSelectField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEndOfConversionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEndOfSequenceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOverrunField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kChannelSelectField = kInvalidFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelBitPattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelEnablePattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelDisablePattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelStatusPattern = kInvalidIndexedFieldRef;
};

template<>
struct AdcSemanticTraits<PeripheralId::ADC1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_adc_st_aditf2_v1_1_cube;
  static constexpr std::uint32_t kChannelCount = 19u;
  static constexpr std::uint32_t kResultBits = 12u;
  static constexpr bool kHasDma = false;
  static constexpr bool kHasHardwareTrigger = true;
  static constexpr bool kHasChannelBitmaskSelect = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_adc1_sr, 0x40012000u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true};
  static constexpr RuntimeRegisterRef kSampleTimeRegister = RuntimeRegisterRef{RegisterId::register_adc1_smpr2, 0x40012000u, 16u, true};
  static constexpr RuntimeRegisterRef kSequenceRegister = RuntimeRegisterRef{RegisterId::register_adc1_sqr3, 0x40012000u, 52u, true};
  static constexpr RuntimeRegisterRef kDataRegister = RuntimeRegisterRef{RegisterId::register_adc1_dr, 0x40012000u, 76u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_adc1_cr2_adon, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kReadyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_adc1_cr2_swstart, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 30u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kContinuousField = RuntimeFieldRef{FieldId::field_adc1_cr2_cont, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kResolutionField = RuntimeFieldRef{FieldId::field_adc1_cr1_res, RuntimeRegisterRef{RegisterId::register_adc1_cr1, 0x40012000u, 4u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kAlignField = RuntimeFieldRef{FieldId::field_adc1_cr2_align, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kDmaEnableField = RuntimeFieldRef{FieldId::field_adc1_cr2_dma, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kDmaModeField = RuntimeFieldRef{FieldId::field_adc1_cr2_dds, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kExternalTriggerEnableField = RuntimeFieldRef{FieldId::field_adc1_cr2_exten, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kExternalTriggerSelectField = RuntimeFieldRef{FieldId::field_adc1_cr2_extsel, RuntimeRegisterRef{RegisterId::register_adc1_cr2, 0x40012000u, 8u, true}, 24u, 4u, true};
  static constexpr RuntimeFieldRef kEndOfConversionField = RuntimeFieldRef{FieldId::field_adc1_sr_eoc, RuntimeRegisterRef{RegisterId::register_adc1_sr, 0x40012000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kEndOfSequenceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOverrunField = RuntimeFieldRef{FieldId::field_adc1_sr_ovr, RuntimeRegisterRef{RegisterId::register_adc1_sr, 0x40012000u, 0u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kDataField = RuntimeFieldRef{FieldId::field_adc1_dr_data, RuntimeRegisterRef{RegisterId::register_adc1_dr, 0x40012000u, 76u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kChannelSelectField = RuntimeFieldRef{FieldId::field_adc1_sqr3_sq1, RuntimeRegisterRef{RegisterId::register_adc1_sqr3, 0x40012000u, 52u, true}, 0u, 5u, true};
  static constexpr RuntimeIndexedFieldRef kChannelBitPattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelEnablePattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelDisablePattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelStatusPattern = kInvalidIndexedFieldRef;
};

inline constexpr std::array<PeripheralId, 1> kAdcSemanticPeripherals = {{
  PeripheralId::ADC1,
}};
}
}
}
}
}
}
}
