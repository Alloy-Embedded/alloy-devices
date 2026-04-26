#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include "common.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasFaultInput = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40010000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40010000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_bdtr_moe, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim1_egr_ug, RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40010000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim1_psc_psc, RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40010000u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM10> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim10_psc, 0x40014400u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim10_egr, 0x40014400u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim10_egr_ug, RuntimeRegisterRef{RegisterId::register_tim10_egr, 0x40014400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim10_psc_psc, RuntimeRegisterRef{RegisterId::register_tim10_psc, 0x40014400u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM11> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim11_psc, 0x40014800u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim11_egr, 0x40014800u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim11_egr_ug, RuntimeRegisterRef{RegisterId::register_tim11_egr, 0x40014800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim11_psc_psc, RuntimeRegisterRef{RegisterId::register_tim11_psc, 0x40014800u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM12> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim12_cr1, 0x40001800u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim12_sr, 0x40001800u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim12_psc, 0x40001800u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim12_egr, 0x40001800u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim12_egr_ug, RuntimeRegisterRef{RegisterId::register_tim12_egr, 0x40001800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim12_psc_psc, RuntimeRegisterRef{RegisterId::register_tim12_psc, 0x40001800u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM13> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim13_cr1, 0x40001C00u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim13_sr, 0x40001C00u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim13_psc, 0x40001C00u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim13_egr, 0x40001C00u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim13_egr_ug, RuntimeRegisterRef{RegisterId::register_tim13_egr, 0x40001C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim13_psc_psc, RuntimeRegisterRef{RegisterId::register_tim13_psc, 0x40001C00u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
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
struct PwmSemanticTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
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
struct PwmSemanticTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim4_psc, 0x40000800u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim4_egr, 0x40000800u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim4_egr_ug, RuntimeRegisterRef{RegisterId::register_tim4_egr, 0x40000800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim4_psc_psc, RuntimeRegisterRef{RegisterId::register_tim4_psc, 0x40000800u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim5_psc, 0x40000C00u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim5_egr, 0x40000C00u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim5_egr_ug, RuntimeRegisterRef{RegisterId::register_tim5_egr, 0x40000C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim5_psc_psc, RuntimeRegisterRef{RegisterId::register_tim5_psc, 0x40000C00u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM6> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
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
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
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

template<>
struct PwmSemanticTraits<PeripheralId::TIM8> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasFaultInput = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim8_psc, 0x40010400u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim8_egr, 0x40010400u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_bdtr_moe, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim8_egr_ug, RuntimeRegisterRef{RegisterId::register_tim8_egr, 0x40010400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim8_psc_psc, RuntimeRegisterRef{RegisterId::register_tim8_psc, 0x40010400u, 40u, true}, 0u, 16u, true};
};

template<>
struct PwmSemanticTraits<PeripheralId::TIM9> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasFaultInput = false;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_tim9_psc, 0x40014000u, 40u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_tim9_egr, 0x40014000u, 20u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_tim9_egr_ug, RuntimeRegisterRef{RegisterId::register_tim9_egr, 0x40014000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_tim9_psc_psc, RuntimeRegisterRef{RegisterId::register_tim9_psc, 0x40014000u, 40u, true}, 0u, 16u, true};
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
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40010000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40010000u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40010000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40010000u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40010000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40010000u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM1, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40010000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40010000u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim1_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim1_bdtr, 0x40010000u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM10, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim10_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim10_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim10_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim10_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccr1, 0x40014400u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM10, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM10, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM10, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM11, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim11_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim11_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim11_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim11_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccr1, 0x40014800u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM11, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM11, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM11, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM12, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim12_ccmr1_input, 0x40001800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim12_ccr1, 0x40001800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim12_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim12_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim12_dier, 0x40001800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim12_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim12_sr, 0x40001800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccmr1_input, 0x40001800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim12_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_cr1, 0x40001800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccr1, 0x40001800u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM12, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim12_ccmr1_input, 0x40001800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim12_ccr2, 0x40001800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim12_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim12_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim12_dier, 0x40001800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim12_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim12_sr, 0x40001800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccmr1_input, 0x40001800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim12_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_cr1, 0x40001800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccr2, 0x40001800u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM12, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_dier, 0x40001800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_sr, 0x40001800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_cr1, 0x40001800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001800u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM12, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_dier, 0x40001800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_sr, 0x40001800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_ccer, 0x40001800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_cr1, 0x40001800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim12_arr, 0x40001800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001800u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM13, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim13_ccmr1_input, 0x40001C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim13_ccr1, 0x40001C00u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim13_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim13_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim13_dier, 0x40001C00u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim13_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim13_sr, 0x40001C00u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccmr1_input, 0x40001C00u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim13_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_cr1, 0x40001C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccr1, 0x40001C00u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM13, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim13_ccmr1_input, 0x40001C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_dier, 0x40001C00u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_sr, 0x40001C00u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccmr1_input, 0x40001C00u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_cr1, 0x40001C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM13, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_dier, 0x40001C00u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_sr, 0x40001C00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_cr1, 0x40001C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM13, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_dier, 0x40001C00u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_sr, 0x40001C00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_ccer, 0x40001C00u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_cr1, 0x40001C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim13_arr, 0x40001C00u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40001C00u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
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
struct PwmChannelSemanticTraits<PeripheralId::TIM4, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr1, 0x40000800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccr1, 0x40000800u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM4, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr2, 0x40000800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr1_input, 0x40000800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccr2, 0x40000800u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM4, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr3, 0x40000800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccr3, 0x40000800u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM4, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim4_ccr4, 0x40000800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim4_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim4_dier, 0x40000800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim4_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim4_sr, 0x40000800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccmr2_input, 0x40000800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim4_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim4_ccer, 0x40000800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_ccr4, 0x40000800u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM5, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr1, 0x40000C00u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim5_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccr1, 0x40000C00u, 52u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM5, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr2, 0x40000C00u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim5_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccr2, 0x40000C00u, 56u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM5, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr3, 0x40000C00u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim5_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccr3, 0x40000C00u, 60u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM5, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr4, 0x40000C00u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim5_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccr4, 0x40000C00u, 64u, true}, 0u, 32u, true};
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

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM8, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr1, 0x40010400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim8_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccr1, 0x40010400u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM8, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr2, 0x40010400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim8_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccr2, 0x40010400u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM8, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr3, 0x40010400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim8_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccr3, 0x40010400u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM8, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr4, 0x40010400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim8_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccr4, 0x40010400u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::field_tim8_bdtr_dtg, RuntimeRegisterRef{RegisterId::register_tim8_bdtr, 0x40010400u, 68u, true}, 0u, 8u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM9, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim9_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim9_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccr1, 0x40014000u, 52u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM9, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim9_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim9_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccr2, 0x40014000u, 56u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM9, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::TIM9, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDeadtimeFallField = kInvalidFieldRef;
};

inline constexpr std::array<PeripheralId, 14> kPwmSemanticPeripherals = {{
  PeripheralId::TIM1,
  PeripheralId::TIM10,
  PeripheralId::TIM11,
  PeripheralId::TIM12,
  PeripheralId::TIM13,
  PeripheralId::TIM14,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM4,
  PeripheralId::TIM5,
  PeripheralId::TIM6,
  PeripheralId::TIM7,
  PeripheralId::TIM8,
  PeripheralId::TIM9,
}};

// complete-rp2040-semantics Phase D: per-slice PWM HW facts.
template<std::uint8_t SliceIndex>
struct PwmSliceHwTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint8_t kChannelAPin = 0u;
  static constexpr std::uint8_t kChannelBPin = 0u;
  static constexpr std::uint8_t kCounterBits = 0u;
  static constexpr std::uint16_t kClockDivMinQ4 = 0u;
  static constexpr std::uint16_t kClockDivMaxQ4 = 0u;
};


// extend-pwm-coverage-all-mcus Phase A: STM32 TIM PWM facts.
enum class RuntimeStmTimerKind : std::uint8_t {
  None = 0,
  Advanced = 1,
  General = 2,
};

enum class RuntimeStmTimerPwmId : std::uint8_t {
  None = 0,
  TIM1 = 1,
  TIM10 = 2,
  TIM11 = 3,
  TIM12 = 4,
  TIM13 = 5,
  TIM14 = 6,
  TIM2 = 7,
  TIM3 = 8,
  TIM4 = 9,
  TIM5 = 10,
  TIM8 = 11,
  TIM9 = 12,
};

template<RuntimeStmTimerPwmId Id>
struct StmTimerPwmTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::None;
  static constexpr std::uint8_t kChannelCount = 0u;
  static constexpr std::uint8_t kCounterBits = 0u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = false;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40010000u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::Advanced;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 1> kValidCh1Pins = {PinId::PA8};
  static constexpr std::array<PinId, 1> kValidCh2Pins = {PinId::PA9};
  static constexpr std::array<PinId, 1> kValidCh3Pins = {PinId::PA10};
  static constexpr std::array<PinId, 1> kValidCh4Pins = {PinId::PA11};
  static constexpr std::array<PinId, 2> kValidCh1NPins = {PinId::PA7, PinId::PB13};
  static constexpr std::array<PinId, 2> kValidCh2NPins = {PinId::PB0, PinId::PB14};
  static constexpr std::array<PinId, 2> kValidCh3NPins = {PinId::PB1, PinId::PB15};
  static constexpr bool kSupportsComplementary = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM10> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40014400u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM11> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40014800u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM12> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40001800u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM13> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40001c00u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM14> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40002000u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 1u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40000000u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 32u;
  static constexpr std::array<PinId, 2> kValidCh1Pins = {PinId::PA15, PinId::PA5};
  static constexpr std::array<PinId, 2> kValidCh2Pins = {PinId::PA1, PinId::PB3};
  static constexpr std::array<PinId, 2> kValidCh3Pins = {PinId::PA2, PinId::PB10};
  static constexpr std::array<PinId, 2> kValidCh4Pins = {PinId::PA3, PinId::PB11};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40000400u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 3> kValidCh1Pins = {PinId::PA6, PinId::PB4, PinId::PC6};
  static constexpr std::array<PinId, 3> kValidCh2Pins = {PinId::PA7, PinId::PB5, PinId::PC7};
  static constexpr std::array<PinId, 2> kValidCh3Pins = {PinId::PB0, PinId::PC8};
  static constexpr std::array<PinId, 2> kValidCh4Pins = {PinId::PB1, PinId::PC9};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40000800u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 1> kValidCh1Pins = {PinId::PB6};
  static constexpr std::array<PinId, 1> kValidCh2Pins = {PinId::PB7};
  static constexpr std::array<PinId, 1> kValidCh3Pins = {PinId::PB8};
  static constexpr std::array<PinId, 1> kValidCh4Pins = {PinId::PB9};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40000c00u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 32u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 1> kValidCh2Pins = {PinId::PA1};
  static constexpr std::array<PinId, 1> kValidCh3Pins = {PinId::PA2};
  static constexpr std::array<PinId, 1> kValidCh4Pins = {PinId::PA3};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM8> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40010400u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::Advanced;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};

template<>
struct StmTimerPwmTraits<RuntimeStmTimerPwmId::TIM9> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40014000u;
  static constexpr RuntimeStmTimerKind kKind = RuntimeStmTimerKind::General;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr std::uint8_t kCounterBits = 16u;
  static constexpr std::array<PinId, 0> kValidCh1Pins = {};
  static constexpr std::array<PinId, 0> kValidCh2Pins = {};
  static constexpr std::array<PinId, 0> kValidCh3Pins = {};
  static constexpr std::array<PinId, 0> kValidCh4Pins = {};
  static constexpr std::array<PinId, 0> kValidCh1NPins = {};
  static constexpr std::array<PinId, 0> kValidCh2NPins = {};
  static constexpr std::array<PinId, 0> kValidCh3NPins = {};
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBrake = false;
  static constexpr bool kSupportsCenterAligned = true;
  static constexpr std::uint32_t kMaxClockHz = 0u;
};


// extend-pwm-coverage-all-mcus Phase B: Espressif MCPWM facts.
enum class RuntimeMcpwmId : std::uint8_t {
  None = 0,
};

template<RuntimeMcpwmId Id>
struct McpwmTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr std::uint8_t kTimerCount = 0u;
  static constexpr std::uint8_t kOutputSignalCount = 0u;
  static constexpr std::array<std::uint16_t, 0> kGpioMatrixSignals = {};
  static constexpr std::array<std::uint16_t, 0> kCaptureSignals = {};
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsCarrierModulation = false;
  static constexpr bool kSupportsFaultInput = false;
};


// extend-pwm-coverage-all-mcus Phase C: NXP iMXRT FlexPWM facts.
enum class RuntimeFlexPwmId : std::uint8_t {
  None = 0,
};

template<RuntimeFlexPwmId Id>
struct FlexPwmTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr std::uint8_t kSubmoduleCount = 0u;
  static constexpr bool kPairedChannels = false;
  static constexpr bool kSupportsComplementary = false;
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsForceInitialization = false;
};


// extend-pwm-coverage-all-mcus Phase D: Microchip AVR-DA TCA PWM facts.
enum class RuntimeAvrDaTcaPwmId : std::uint8_t {
  None = 0,
};

template<RuntimeAvrDaTcaPwmId Id>
struct AvrDaTcaPwmTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr std::array<PinId, 0> kDefaultChannelPins = {};
  static constexpr std::uint8_t kSplitModeChannels = 0u;
  static constexpr std::uint8_t kSingleModeChannels = 0u;
  static constexpr std::uint8_t kCounterBits = 0u;
  static constexpr bool kPortmuxAlt = false;
};


// extend-pwm-coverage-all-mcus Phase D: Microchip SAM E70 PWM/TC facts.
enum class RuntimeSame70PwmKind : std::uint8_t {
  None = 0,
  Pwm = 1,
  Tc = 2,
};

enum class RuntimeSame70PwmId : std::uint8_t {
  None = 0,
};

template<RuntimeSame70PwmId Id>
struct Same70PwmTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::None;
  static constexpr std::uint8_t kChannelCount = 0u;
  static constexpr bool kSupportsDeadTime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsDma = false;
};

}
}
}
}
}
}
}
