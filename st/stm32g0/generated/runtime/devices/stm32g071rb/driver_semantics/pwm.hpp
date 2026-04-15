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
namespace stm32g071rb {
namespace driver_semantics {
template<PeripheralId Id>
struct PwmSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kCounterBits = 0u;
  static constexpr std::uint32_t kChannelCount = 0u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = false;
  static constexpr bool kHasSynchronizedUpdate = false;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kOutputEnableRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kClockRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSyncRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = kInvalidFieldRef;
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasFaultInput = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40012C00u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40012C00u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40012C00u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40012C00u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_bdtr_moe, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim1_egr_ug, RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40012C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim1_psc_psc, RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40012C00u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim14_psc, 0x40002000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim14_egr, 0x40002000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim14_egr_ug, RuntimeRegisterRef{RegisterId::register_tim14_egr, 0x40002000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim14_psc_psc, RuntimeRegisterRef{RegisterId::register_tim14_psc, 0x40002000u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM15> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim15_psc, 0x40014000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim15_egr, 0x40014000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim15_egr_ug, RuntimeRegisterRef{RegisterId::register_tim15_egr, 0x40014000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim15_psc_psc, RuntimeRegisterRef{RegisterId::register_tim15_psc, 0x40014000u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM16> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim16_psc, 0x40014400u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim16_egr, 0x40014400u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim16_egr_ug, RuntimeRegisterRef{RegisterId::register_tim16_egr, 0x40014400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim16_psc_psc, RuntimeRegisterRef{RegisterId::register_tim16_psc, 0x40014400u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM17> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim17_psc, 0x40014800u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim17_egr, 0x40014800u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim17_egr_ug, RuntimeRegisterRef{RegisterId::register_tim17_egr, 0x40014800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim17_psc_psc, RuntimeRegisterRef{RegisterId::register_tim17_psc, 0x40014800u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim2_psc, 0x40000000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim2_egr, 0x40000000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim2_egr_ug, RuntimeRegisterRef{RegisterId::register_tim2_egr, 0x40000000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim2_psc_psc, RuntimeRegisterRef{RegisterId::register_tim2_psc, 0x40000000u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim3_psc, 0x40000400u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim3_egr, 0x40000400u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim3_egr_ug, RuntimeRegisterRef{RegisterId::register_tim3_egr, 0x40000400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim3_psc_psc, RuntimeRegisterRef{RegisterId::register_tim3_psc, 0x40000400u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim6_psc, 0x40001000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim6_egr, 0x40001000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim6_egr_ug, RuntimeRegisterRef{RegisterId::register_tim6_egr, 0x40001000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim6_psc_psc, RuntimeRegisterRef{RegisterId::register_tim6_psc, 0x40001000u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v3_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim7_psc, 0x40001400u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim7_egr, 0x40001400u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim7_egr_ug, RuntimeRegisterRef{RegisterId::register_tim7_egr, 0x40001400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim7_psc_psc, RuntimeRegisterRef{RegisterId::register_tim7_psc, 0x40001400u, 40u, true}, 0u, 16u, true};
};

template<PeripheralId Id, std::size_t ChannelIndex>
struct PwmChannelSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInterruptFlagField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPolarityField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPeriodField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDutyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40012C00u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40012C00u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40012C00u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_oc1m, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40012C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40012C00u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40012C00u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40012C00u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40012C00u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_oc2m, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40012C00u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40012C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40012C00u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40012C00u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40012C00u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40012C00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_oc3m, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40012C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40012C00u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40012C00u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40012C00u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40012C00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_oc4m, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40012C00u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40012C00u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40012C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40012C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40012C00u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40012C00u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM14, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccr1, 0x40002000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim14_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim14_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim14_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim14_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccr1, 0x40002000u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM14, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccmr1_input, 0x40002000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM14, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM14, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40002000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_dier, 0x40002000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_sr, 0x40002000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_ccer, 0x40002000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_cr1, 0x40002000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim14_arr, 0x40002000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40002000u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM15, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim15_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim15_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccr1, 0x40014000u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM15, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim15_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim15_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim15_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccmr1_input, 0x40014000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim15_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccr2, 0x40014000u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM15, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM15, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_dier, 0x40014000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_sr, 0x40014000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_ccer, 0x40014000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim15_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM16, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim16_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim16_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim16_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim16_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccr1, 0x40014400u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM16, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccmr1_input, 0x40014400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM16, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM16, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_dier, 0x40014400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_sr, 0x40014400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_ccer, 0x40014400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim16_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM17, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim17_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim17_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim17_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim17_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccr1, 0x40014800u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM17, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccmr1_input, 0x40014800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM17, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM17, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_dier, 0x40014800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_sr, 0x40014800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_ccer, 0x40014800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim17_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM2, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr1, 0x40000000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccr1, 0x40000000u, 52u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM2, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr2, 0x40000000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr1_input, 0x40000000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccr2, 0x40000000u, 56u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM2, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr3, 0x40000000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccr3, 0x40000000u, 60u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM2, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim2_ccr4, 0x40000000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim2_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim2_dier, 0x40000000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim2_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim2_sr, 0x40000000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccmr2_input, 0x40000000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim2_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim2_ccer, 0x40000000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_ccr4, 0x40000000u, 64u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM3, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr1, 0x40000400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccr1, 0x40000400u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM3, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr2, 0x40000400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr1_input, 0x40000400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccr2, 0x40000400u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM3, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr3, 0x40000400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccr3, 0x40000400u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM3, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim3_ccr4, 0x40000400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim3_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim3_dier, 0x40000400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim3_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim3_sr, 0x40000400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccmr2_input, 0x40000400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim3_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim3_ccer, 0x40000400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_ccr4, 0x40000400u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM6, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM6, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM6, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM6, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_dier, 0x40001000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_sr, 0x40001000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_cr1, 0x40001000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim6_arr, 0x40001000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001000u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM7, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM7, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM7, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM7, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_dier, 0x40001400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_sr, 0x40001400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_cr1, 0x40001400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim7_arr, 0x40001400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001400u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

inline constexpr std::array<PeripheralId, 9> kPwmSemanticPeripherals = {{
  PeripheralId::TIM1,
  PeripheralId::TIM14,
  PeripheralId::TIM15,
  PeripheralId::TIM16,
  PeripheralId::TIM17,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM6,
  PeripheralId::TIM7,
}};
}
}
}
}
}
}
}
