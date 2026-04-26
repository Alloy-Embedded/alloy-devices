#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "common.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g0b1re {
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
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasBreakInput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim14_egr, 0x40002000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim14_cnt, 0x40002000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim14_psc, 0x40002000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim14_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim14_dier_uie, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim14_sr_uif, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim14_egr_ug, RuntimeRegisterRef{RegisterId::register_tim14_egr, 0x40002000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim14_psc_psc, RuntimeRegisterRef{RegisterId::register_tim14_psc, 0x40002000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim14_arr_arr, RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim14_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim14_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM15> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim15_egr, 0x40014000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim15_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim15_psc, 0x40014000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim15_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim15_dier_uie, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim15_sr_uif, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim15_egr_ug, RuntimeRegisterRef{RegisterId::register_tim15_egr, 0x40014000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim15_psc_psc, RuntimeRegisterRef{RegisterId::register_tim15_psc, 0x40014000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim15_arr_arr, RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim15_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim15_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_smcr, 0x40014000u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM16> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim16_egr, 0x40014400u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim16_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim16_psc, 0x40014400u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim16_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim16_dier_uie, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim16_sr_uif, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim16_egr_ug, RuntimeRegisterRef{RegisterId::register_tim16_egr, 0x40014400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim16_psc_psc, RuntimeRegisterRef{RegisterId::register_tim16_psc, 0x40014400u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim16_arr_arr, RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim16_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim16_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM17> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim17_egr, 0x40014800u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim17_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim17_psc, 0x40014800u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim17_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim17_dier_uie, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim17_sr_uif, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim17_egr_ug, RuntimeRegisterRef{RegisterId::register_tim17_egr, 0x40014800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim17_psc_psc, RuntimeRegisterRef{RegisterId::register_tim17_psc, 0x40014800u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim17_arr_arr, RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim17_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim17_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim2_egr, 0x40000000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim2_cnt, 0x40000000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim2_psc, 0x40000000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_uie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_uif, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim2_egr_ug, RuntimeRegisterRef{RegisterId::register_tim2_egr, 0x40000000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim2_psc_psc, RuntimeRegisterRef{RegisterId::register_tim2_psc, 0x40000000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim2_arr_arr, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim2_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim2_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_smcr, 0x40000000u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tim2_cr1_dir, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim3_egr, 0x40000400u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim3_cnt, 0x40000400u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim3_psc, 0x40000400u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_uie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_uif, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim3_egr_ug, RuntimeRegisterRef{RegisterId::register_tim3_egr, 0x40000400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim3_psc_psc, RuntimeRegisterRef{RegisterId::register_tim3_psc, 0x40000400u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim3_arr_arr, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim3_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim3_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_smcr, 0x40000400u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tim3_cr1_dir, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim4_egr, 0x40000800u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim4_cnt, 0x40000800u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim4_psc, 0x40000800u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_uie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_uif, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim4_egr_ug, RuntimeRegisterRef{RegisterId::register_tim4_egr, 0x40000800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim4_psc_psc, RuntimeRegisterRef{RegisterId::register_tim4_psc, 0x40000800u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim4_arr_arr, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim4_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim4_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_smcr, 0x40000800u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::field_tim4_cr1_dir, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim6_egr, 0x40001000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim6_cnt, 0x40001000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim6_psc, 0x40001000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim6_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim6_dier_uie, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim6_sr_uif, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim6_egr_ug, RuntimeRegisterRef{RegisterId::register_tim6_egr, 0x40001000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim6_psc_psc, RuntimeRegisterRef{RegisterId::register_tim6_psc, 0x40001000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim6_arr_arr, RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim6_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim6_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasEncoder = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim7_egr, 0x40001400u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim7_cnt, 0x40001400u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim7_psc, 0x40001400u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim7_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim7_dier_uie, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim7_sr_uif, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim7_egr_ug, RuntimeRegisterRef{RegisterId::register_tim7_egr, 0x40001400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim7_psc_psc, RuntimeRegisterRef{RegisterId::register_tim7_psc, 0x40001400u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim7_arr_arr, RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim7_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim7_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 8u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEncoderEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPositionEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderSpeedEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEncoderPhaseEdgeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 4u, 1u, true};
  static constexpr std::uint32_t kUpdateIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kCaptureIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kBreakIrqNumber = 0xFFFFFFFFu;
  static constexpr std::uint32_t kTriggerIrqNumber = 0xFFFFFFFFu;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxAutoReload = 0u;
  static constexpr std::array<std::uint8_t, 0> kTriggerSources = {};
  static constexpr std::array<std::uint8_t, 0> kMasterOutputModes = {};
  static constexpr bool kSupportsDmaBurst = false;
  static constexpr bool kSupportsRepetitionCounter = false;
  static constexpr bool kSupportsXorInput = false;
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
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
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40012C00u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM14, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccr1, 0x40002000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim14_cnt, 0x40002000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccr1, 0x40002000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim14_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim14_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim14_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim14_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim14_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim14_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM14, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim14_cnt, 0x40002000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM14, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim14_cnt, 0x40002000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM14, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim14_cnt, 0x40002000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM15, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim15_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim15_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim15_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim15_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM15, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim15_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim15_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim15_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim15_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM15, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim15_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM15, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim15_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM16, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim16_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim16_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim16_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim16_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim16_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim16_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim16_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM16, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim16_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM16, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim16_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM16, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim16_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM17, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim17_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim17_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim17_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim17_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim17_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim17_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim17_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM17, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim17_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM17, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim17_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM17, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim17_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM2, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr1, 0x40000000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim2_cnt, 0x40000000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr1, 0x40000000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim2_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM2, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr2, 0x40000000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim2_cnt, 0x40000000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr2, 0x40000000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim2_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM2, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr3, 0x40000000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim2_cnt, 0x40000000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr3, 0x40000000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim2_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM2, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr4, 0x40000000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim2_cnt, 0x40000000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr4, 0x40000000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim2_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM3, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr1, 0x40000400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim3_cnt, 0x40000400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr1, 0x40000400u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim3_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM3, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr2, 0x40000400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim3_cnt, 0x40000400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr2, 0x40000400u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim3_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM3, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr3, 0x40000400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim3_cnt, 0x40000400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr3, 0x40000400u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim3_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM3, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr4, 0x40000400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim3_cnt, 0x40000400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr4, 0x40000400u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim3_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM4, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr1, 0x40000800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim4_cnt, 0x40000800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr1, 0x40000800u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim4_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM4, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr2, 0x40000800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim4_cnt, 0x40000800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr2, 0x40000800u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim4_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM4, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr3, 0x40000800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim4_cnt, 0x40000800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr3, 0x40000800u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim4_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM4, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr4, 0x40000800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim4_cnt, 0x40000800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr4, 0x40000800u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim4_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM6, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim6_cnt, 0x40001000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM6, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim6_cnt, 0x40001000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM6, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim6_cnt, 0x40001000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM6, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim6_cnt, 0x40001000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM7, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim7_cnt, 0x40001400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM7, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim7_cnt, 0x40001400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM7, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim7_cnt, 0x40001400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM7, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsEncoderInput = false;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim7_cnt, 0x40001400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 8u, 2u, true};
};

inline constexpr std::array<PeripheralId, 10> kTimerSemanticPeripherals = {{
  PeripheralId::TIM1,
  PeripheralId::TIM14,
  PeripheralId::TIM15,
  PeripheralId::TIM16,
  PeripheralId::TIM17,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM4,
  PeripheralId::TIM6,
  PeripheralId::TIM7,
}};

// complete-rp2040-semantics Phase D: per-controller timer HW facts.
enum class RuntimeTimerCtrlId : std::uint8_t {
  None = 0,
};

template<RuntimeTimerCtrlId Id>
struct TimerControllerHwTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr std::uint8_t kCounterBits = 0u;
  static constexpr std::uint8_t kAlarmCount = 0u;
  static constexpr std::uint8_t kDreqAlarmBase = 0u;
};

}
}
}
}
}
}
}
