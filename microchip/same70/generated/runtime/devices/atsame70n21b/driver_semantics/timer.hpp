#pragma once

#include <array>
#include <cstddef>
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
struct TimerSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kCounterBits = 0u;
  static constexpr std::uint32_t kChannelCount = 0u;
  static constexpr bool kHasCompare = false;
  static constexpr bool kHasCapture = false;
  static constexpr bool kHasEncoder = false;
  static constexpr bool kHasPwm = false;
  static constexpr bool kHasOnePulse = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kEventRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCounterRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateFlagField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateGenerationField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOnePulseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TC0> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_microchip_tc_zl;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 3u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 32u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 16u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 28u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 28u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockSourceField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 4u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderEnableField = RuntimeFieldRef{FieldId::field_tc0_bmr_qden, RuntimeRegisterRef{RegisterId::register_tc0_bmr, 0x4000C000u, 196u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = RuntimeFieldRef{FieldId::field_tc0_bmr_posen, RuntimeRegisterRef{RegisterId::register_tc0_bmr, 0x4000C000u, 196u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = RuntimeFieldRef{FieldId::field_tc0_bmr_speeden, RuntimeRegisterRef{RegisterId::register_tc0_bmr, 0x4000C000u, 196u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = RuntimeFieldRef{FieldId::field_tc0_bmr_edgpha, RuntimeRegisterRef{RegisterId::register_tc0_bmr, 0x4000C000u, 196u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tc0_qisr_dir, RuntimeRegisterRef{RegisterId::register_tc0_qisr, 0x4000C000u, 212u, true}, 8u, 1u, true};
};

template<>
struct TimerSemanticTraits<PeripheralId::TC1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_microchip_tc_zl;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 3u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 32u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 28u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 28u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockSourceField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 4u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderEnableField = RuntimeFieldRef{FieldId::field_tc1_bmr_qden, RuntimeRegisterRef{RegisterId::register_tc1_bmr, 0x40010000u, 196u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = RuntimeFieldRef{FieldId::field_tc1_bmr_posen, RuntimeRegisterRef{RegisterId::register_tc1_bmr, 0x40010000u, 196u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = RuntimeFieldRef{FieldId::field_tc1_bmr_speeden, RuntimeRegisterRef{RegisterId::register_tc1_bmr, 0x40010000u, 196u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = RuntimeFieldRef{FieldId::field_tc1_bmr_edgpha, RuntimeRegisterRef{RegisterId::register_tc1_bmr, 0x40010000u, 196u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tc1_qisr_dir, RuntimeRegisterRef{RegisterId::register_tc1_qisr, 0x40010000u, 212u, true}, 8u, 1u, true};
};

template<>
struct TimerSemanticTraits<PeripheralId::TC2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_microchip_tc_zl;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 3u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 32u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockSourceField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 4u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderEnableField = RuntimeFieldRef{FieldId::field_tc2_bmr_qden, RuntimeRegisterRef{RegisterId::register_tc2_bmr, 0x40014000u, 196u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = RuntimeFieldRef{FieldId::field_tc2_bmr_posen, RuntimeRegisterRef{RegisterId::register_tc2_bmr, 0x40014000u, 196u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = RuntimeFieldRef{FieldId::field_tc2_bmr_speeden, RuntimeRegisterRef{RegisterId::register_tc2_bmr, 0x40014000u, 196u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = RuntimeFieldRef{FieldId::field_tc2_bmr_edgpha, RuntimeRegisterRef{RegisterId::register_tc2_bmr, 0x40014000u, 196u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tc2_qisr_dir, RuntimeRegisterRef{RegisterId::register_tc2_qisr, 0x40014000u, 212u, true}, 8u, 1u, true};
};

template<>
struct TimerSemanticTraits<PeripheralId::TC3> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_microchip_tc_zl;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 3u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 32u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 16u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 28u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 28u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockSourceField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 4u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderEnableField = RuntimeFieldRef{FieldId::field_tc3_bmr_qden, RuntimeRegisterRef{RegisterId::register_tc3_bmr, 0x40054000u, 196u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = RuntimeFieldRef{FieldId::field_tc3_bmr_posen, RuntimeRegisterRef{RegisterId::register_tc3_bmr, 0x40054000u, 196u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = RuntimeFieldRef{FieldId::field_tc3_bmr_speeden, RuntimeRegisterRef{RegisterId::register_tc3_bmr, 0x40054000u, 196u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = RuntimeFieldRef{FieldId::field_tc3_bmr_edgpha, RuntimeRegisterRef{RegisterId::register_tc3_bmr, 0x40054000u, 196u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tc3_qisr_dir, RuntimeRegisterRef{RegisterId::register_tc3_qisr, 0x40054000u, 212u, true}, 8u, 1u, true};
};

template<PeripheralId Id, std::size_t ChannelIndex>
struct TimerChannelSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr bool kSupportsCompare = false;
  static constexpr bool kSupportsCapture = false;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = false;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCounterRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCaptureRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInterruptFlagField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC0, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 32u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 20u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 24u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 28u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 16u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 20u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC0, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 64u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 96u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 84u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 88u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 92u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 80u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 84u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 64u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 100u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 96u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC0, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 128u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 160u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 148u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 152u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 156u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 144u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 148u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 128u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 164u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 160u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4000C000u, 132u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC1, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 32u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 20u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 24u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 28u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 20u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 64u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 96u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 84u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 88u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 92u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 80u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 84u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 64u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 100u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 96u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 128u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 160u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 148u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 152u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 156u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 144u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40010000u, 148u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 128u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 164u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 160u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40010000u, 132u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC2, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 32u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 20u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 20u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC2, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 96u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 84u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 88u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 92u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 80u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 84u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 100u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 96u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC2, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 128u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 160u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 148u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 152u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 156u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 144u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 148u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 128u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 164u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 160u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 132u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC3, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 32u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 20u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 24u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 28u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 16u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 20u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 36u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC3, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 64u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 96u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 84u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 88u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 92u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 80u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 84u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 64u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 100u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 96u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TC3, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 128u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 160u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 148u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 152u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 156u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 144u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40054000u, 148u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 128u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 164u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 160u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40054000u, 132u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPreloadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = kInvalidFieldRef;
};

inline constexpr std::array<PeripheralId, 4> kTimerSemanticPeripherals = {{
  PeripheralId::TC0,
  PeripheralId::TC1,
  PeripheralId::TC2,
  PeripheralId::TC3,
}};
}
}
}
}
}
}
}
