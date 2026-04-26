#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70n21b {
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
  static constexpr std::uint32_t kInternalChannelCount = 0u;
  static constexpr std::array<InternalAdcChannel, 0> kInternalChannels = {};
  static constexpr std::uint32_t kCalibrationDataPointCount = 0u;
  static constexpr std::array<CalibrationDataPoint, 0> kCalibrationDataPoints = {};
  static constexpr CalibrationContext kCalibrationContext = {};
  static constexpr std::uint32_t kSupportedResolutionCount = 0u;
  static constexpr std::array<AdcResolutionOption, 0> kSupportedResolutions = {};
  static constexpr std::uint32_t kSupportedSampleTimeCount = 0u;
  static constexpr std::array<AdcSampleTimeOption, 0> kSupportedSampleTimes = {};
  static constexpr std::uint32_t kSupportedOversamplingCount = 0u;
  static constexpr std::array<AdcOversamplingOption, 0> kSupportedOversamplings = {};
  static constexpr std::uint32_t kAdcMaxClockHz = 0u;
  static constexpr std::uint32_t kDmaBindingCount = 0u;
  static constexpr std::array<AdcDmaBinding, 0> kDmaBindings = {};
  static constexpr std::uint32_t kExternalTriggerCount = 0u;
  static constexpr std::array<AdcExternalTrigger, 0> kExternalTriggers = {};
  static constexpr std::uint32_t kSupportedDmaModeCount = 0u;
  static constexpr std::array<AdcDmaModeOption, 0> kSupportedDmaModes = {};
};

template<>
struct AdcSemanticTraits<PeripheralId::AFEC0> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_adc_microchip_afec_s;
  static constexpr std::uint32_t kChannelCount = 12u;
  static constexpr std::uint32_t kResultBits = 12u;
  static constexpr bool kHasDma = true;
  static constexpr bool kHasHardwareTrigger = true;
  static constexpr bool kHasChannelBitmaskSelect = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_afec0_cr, 0x4003C000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_afec0_isr, 0x4003C000u, 48u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_afec0_mr, 0x4003C000u, 4u, true};
  static constexpr RuntimeRegisterRef kSampleTimeRegister = RuntimeRegisterRef{RegisterId::register_afec0_mr, 0x4003C000u, 4u, true};
  static constexpr RuntimeRegisterRef kSequenceRegister = RuntimeRegisterRef{RegisterId::register_afec0_seq1r, 0x4003C000u, 12u, true};
  static constexpr RuntimeRegisterRef kDataRegister = RuntimeRegisterRef{RegisterId::register_afec0_lcdr, 0x4003C000u, 32u, true};
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kReadyField = RuntimeFieldRef{FieldId::field_afec0_isr_drdy, RuntimeRegisterRef{RegisterId::register_afec0_isr, 0x4003C000u, 48u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_afec0_cr_start, RuntimeRegisterRef{RegisterId::register_afec0_cr, 0x4003C000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kContinuousField = RuntimeFieldRef{FieldId::field_afec0_mr_freerun, RuntimeRegisterRef{RegisterId::register_afec0_mr, 0x4003C000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kResolutionField = RuntimeFieldRef{FieldId::field_afec0_emr_res, RuntimeRegisterRef{RegisterId::register_afec0_emr, 0x4003C000u, 8u, true}, 16u, 3u, true};
  static constexpr RuntimeFieldRef kAlignField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kExternalTriggerEnableField = RuntimeFieldRef{FieldId::field_afec0_mr_trgen, RuntimeRegisterRef{RegisterId::register_afec0_mr, 0x4003C000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kExternalTriggerSelectField = RuntimeFieldRef{FieldId::field_afec0_mr_trgsel, RuntimeRegisterRef{RegisterId::register_afec0_mr, 0x4003C000u, 4u, true}, 1u, 3u, true};
  static constexpr RuntimeFieldRef kEndOfConversionField = RuntimeFieldRef{FieldId::field_afec0_isr_drdy, RuntimeRegisterRef{RegisterId::register_afec0_isr, 0x4003C000u, 48u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kEndOfSequenceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOverrunField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDataField = RuntimeFieldRef{FieldId::field_afec0_lcdr_ldata, RuntimeRegisterRef{RegisterId::register_afec0_lcdr, 0x4003C000u, 32u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kChannelSelectField = kInvalidFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelBitPattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelEnablePattern = RuntimeIndexedFieldRef{0x4003C000u, 20u, 0u, 0u, 1u, 1u, true};
  static constexpr RuntimeIndexedFieldRef kChannelDisablePattern = RuntimeIndexedFieldRef{0x4003C000u, 24u, 0u, 0u, 1u, 1u, true};
  static constexpr RuntimeIndexedFieldRef kChannelStatusPattern = RuntimeIndexedFieldRef{0x4003C000u, 28u, 0u, 0u, 1u, 1u, true};
  static constexpr std::uint32_t kInternalChannelCount = 0u;
  static constexpr std::array<InternalAdcChannel, 0> kInternalChannels = {};
  static constexpr std::uint32_t kCalibrationDataPointCount = 0u;
  static constexpr std::array<CalibrationDataPoint, 0> kCalibrationDataPoints = {};
  static constexpr CalibrationContext kCalibrationContext = CalibrationContext{};
  static constexpr std::uint32_t kSupportedResolutionCount = 0u;
  static constexpr std::array<AdcResolutionOption, 0> kSupportedResolutions = {};
  static constexpr std::uint32_t kSupportedSampleTimeCount = 0u;
  static constexpr std::array<AdcSampleTimeOption, 0> kSupportedSampleTimes = {};
  static constexpr std::uint32_t kSupportedOversamplingCount = 0u;
  static constexpr std::array<AdcOversamplingOption, 0> kSupportedOversamplings = {};
  static constexpr std::uint32_t kAdcMaxClockHz = 0u;
  static constexpr std::uint32_t kDmaBindingCount = 0u;
  static constexpr std::array<AdcDmaBinding, 0> kDmaBindings = {};
  static constexpr std::uint32_t kExternalTriggerCount = 0u;
  static constexpr std::array<AdcExternalTrigger, 0> kExternalTriggers = {};
  static constexpr std::uint32_t kSupportedDmaModeCount = 0u;
  static constexpr std::array<AdcDmaModeOption, 0> kSupportedDmaModes = {};
};

template<>
struct AdcSemanticTraits<PeripheralId::AFEC1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_adc_microchip_afec_s;
  static constexpr std::uint32_t kChannelCount = 12u;
  static constexpr std::uint32_t kResultBits = 12u;
  static constexpr bool kHasDma = true;
  static constexpr bool kHasHardwareTrigger = true;
  static constexpr bool kHasChannelBitmaskSelect = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_afec1_cr, 0x40064000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_afec1_isr, 0x40064000u, 48u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_afec1_mr, 0x40064000u, 4u, true};
  static constexpr RuntimeRegisterRef kSampleTimeRegister = RuntimeRegisterRef{RegisterId::register_afec1_mr, 0x40064000u, 4u, true};
  static constexpr RuntimeRegisterRef kSequenceRegister = RuntimeRegisterRef{RegisterId::register_afec1_seq1r, 0x40064000u, 12u, true};
  static constexpr RuntimeRegisterRef kDataRegister = RuntimeRegisterRef{RegisterId::register_afec1_lcdr, 0x40064000u, 32u, true};
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kReadyField = RuntimeFieldRef{FieldId::field_afec1_isr_drdy, RuntimeRegisterRef{RegisterId::register_afec1_isr, 0x40064000u, 48u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_afec1_cr_start, RuntimeRegisterRef{RegisterId::register_afec1_cr, 0x40064000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kContinuousField = RuntimeFieldRef{FieldId::field_afec1_mr_freerun, RuntimeRegisterRef{RegisterId::register_afec1_mr, 0x40064000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kResolutionField = RuntimeFieldRef{FieldId::field_afec1_emr_res, RuntimeRegisterRef{RegisterId::register_afec1_emr, 0x40064000u, 8u, true}, 16u, 3u, true};
  static constexpr RuntimeFieldRef kAlignField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDmaModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kExternalTriggerEnableField = RuntimeFieldRef{FieldId::field_afec1_mr_trgen, RuntimeRegisterRef{RegisterId::register_afec1_mr, 0x40064000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kExternalTriggerSelectField = RuntimeFieldRef{FieldId::field_afec1_mr_trgsel, RuntimeRegisterRef{RegisterId::register_afec1_mr, 0x40064000u, 4u, true}, 1u, 3u, true};
  static constexpr RuntimeFieldRef kEndOfConversionField = RuntimeFieldRef{FieldId::field_afec1_isr_drdy, RuntimeRegisterRef{RegisterId::register_afec1_isr, 0x40064000u, 48u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kEndOfSequenceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOverrunField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDataField = RuntimeFieldRef{FieldId::field_afec1_lcdr_ldata, RuntimeRegisterRef{RegisterId::register_afec1_lcdr, 0x40064000u, 32u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kChannelSelectField = kInvalidFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelBitPattern = kInvalidIndexedFieldRef;
  static constexpr RuntimeIndexedFieldRef kChannelEnablePattern = RuntimeIndexedFieldRef{0x40064000u, 20u, 0u, 0u, 1u, 1u, true};
  static constexpr RuntimeIndexedFieldRef kChannelDisablePattern = RuntimeIndexedFieldRef{0x40064000u, 24u, 0u, 0u, 1u, 1u, true};
  static constexpr RuntimeIndexedFieldRef kChannelStatusPattern = RuntimeIndexedFieldRef{0x40064000u, 28u, 0u, 0u, 1u, 1u, true};
  static constexpr std::uint32_t kInternalChannelCount = 0u;
  static constexpr std::array<InternalAdcChannel, 0> kInternalChannels = {};
  static constexpr std::uint32_t kCalibrationDataPointCount = 0u;
  static constexpr std::array<CalibrationDataPoint, 0> kCalibrationDataPoints = {};
  static constexpr CalibrationContext kCalibrationContext = CalibrationContext{};
  static constexpr std::uint32_t kSupportedResolutionCount = 0u;
  static constexpr std::array<AdcResolutionOption, 0> kSupportedResolutions = {};
  static constexpr std::uint32_t kSupportedSampleTimeCount = 0u;
  static constexpr std::array<AdcSampleTimeOption, 0> kSupportedSampleTimes = {};
  static constexpr std::uint32_t kSupportedOversamplingCount = 0u;
  static constexpr std::array<AdcOversamplingOption, 0> kSupportedOversamplings = {};
  static constexpr std::uint32_t kAdcMaxClockHz = 0u;
  static constexpr std::uint32_t kDmaBindingCount = 0u;
  static constexpr std::array<AdcDmaBinding, 0> kDmaBindings = {};
  static constexpr std::uint32_t kExternalTriggerCount = 0u;
  static constexpr std::array<AdcExternalTrigger, 0> kExternalTriggers = {};
  static constexpr std::uint32_t kSupportedDmaModeCount = 0u;
  static constexpr std::array<AdcDmaModeOption, 0> kSupportedDmaModes = {};
};

inline constexpr std::array<PeripheralId, 2> kAdcSemanticPeripherals = {{
  PeripheralId::AFEC0,
  PeripheralId::AFEC1,
}};
}
}
}
}
}
}
}
