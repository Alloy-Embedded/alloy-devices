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
namespace stm32f401re {
namespace driver_semantics {
template<PeripheralId Id>
struct TimerSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kCounterBits = 0u;
  static constexpr std::uint32_t kChannelCount = 0u;
  static constexpr bool kHasCompare = false;
  static constexpr bool kHasCapture = false;
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
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasBreakInput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40010000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim1_cnt, 0x40010000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40010000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_uie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_uif, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim1_egr_ug, RuntimeRegisterRef{RegisterId::register_tim1_egr, 0x40010000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim1_psc_psc, RuntimeRegisterRef{RegisterId::register_tim1_psc, 0x40010000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim1_arr_arr, RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim1_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim1_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim1_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim1_cr1, 0x40010000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM10> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim10_egr, 0x40014400u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim10_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim10_psc, 0x40014400u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim10_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim10_dier_uie, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim10_sr_uif, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim10_egr_ug, RuntimeRegisterRef{RegisterId::register_tim10_egr, 0x40014400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim10_psc_psc, RuntimeRegisterRef{RegisterId::register_tim10_psc, 0x40014400u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim10_arr_arr, RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim10_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim10_cr1, 0x40014400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM11> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim11_egr, 0x40014800u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim11_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim11_psc, 0x40014800u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim11_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim11_dier_uie, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim11_sr_uif, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim11_egr_ug, RuntimeRegisterRef{RegisterId::register_tim11_egr, 0x40014800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim11_psc_psc, RuntimeRegisterRef{RegisterId::register_tim11_psc, 0x40014800u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim11_arr_arr, RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim11_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim11_cr1, 0x40014800u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
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
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim2_arr, 0x40000000u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim2_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim2_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim2_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim2_cr1, 0x40000000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
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
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim3_arr, 0x40000400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim3_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim3_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim3_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim3_cr1, 0x40000400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
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
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim4_arr, 0x40000800u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim4_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim4_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim4_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim4_cr1, 0x40000800u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 32u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim5_egr, 0x40000C00u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim5_cnt, 0x40000C00u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim5_psc, 0x40000C00u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_uie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_uif, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim5_egr_ug, RuntimeRegisterRef{RegisterId::register_tim5_egr, 0x40000C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim5_psc_psc, RuntimeRegisterRef{RegisterId::register_tim5_psc, 0x40000C00u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true}, 0u, 32u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim5_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim5_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim5_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim5_cr1, 0x40000C00u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM8> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_tim;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasBreakInput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim8_egr, 0x40010400u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim8_cnt, 0x40010400u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim8_psc, 0x40010400u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_uie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_uif, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim8_egr_ug, RuntimeRegisterRef{RegisterId::register_tim8_egr, 0x40010400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim8_psc_psc, RuntimeRegisterRef{RegisterId::register_tim8_psc, 0x40010400u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim8_arr_arr, RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim8_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::field_tim8_cr1_cms, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim8_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim8_cr1, 0x40010400u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<>
struct TimerSemanticTraits<PeripheralId::TIM9> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_timer_st_gptimer2_v2_x_cube;
  static constexpr std::uint32_t kCounterBits = 16u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasCompare = true;
  static constexpr bool kHasCapture = true;
  static constexpr bool kHasPwm = true;
  static constexpr bool kHasOnePulse = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasComplementaryOutputs = false;
  static constexpr bool kHasDeadtime = false;
  static constexpr bool kHasBreakInput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kEventRegister = RuntimeRegisterRef{RegisterId::register_tim9_egr, 0x40014000u, 20u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim9_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_tim9_psc, 0x40014000u, 40u, true};
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim9_cr1_cen, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModuleDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSoftwareResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateInterruptEnableField = RuntimeFieldRef{FieldId::field_tim9_dier_uie, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateFlagField = RuntimeFieldRef{FieldId::field_tim9_sr_uif, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateGenerationField = RuntimeFieldRef{FieldId::field_tim9_egr_ug, RuntimeRegisterRef{RegisterId::register_tim9_egr, 0x40014000u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_tim9_psc_psc, RuntimeRegisterRef{RegisterId::register_tim9_psc, 0x40014000u, 40u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::field_tim9_arr_arr, RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kOnePulseField = RuntimeFieldRef{FieldId::field_tim9_cr1_opm, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 5u, 2u, true};
  static constexpr RuntimeFieldRef kAutoReloadPreloadField = RuntimeFieldRef{FieldId::field_tim9_cr1_arpe, RuntimeRegisterRef{RegisterId::register_tim9_cr1, 0x40014000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kClockSourceField = kInvalidFieldRef;
};

template<PeripheralId Id, std::size_t ChannelIndex>
struct TimerChannelSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr bool kSupportsCompare = false;
  static constexpr bool kSupportsCapture = false;
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
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40010000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim1_cnt, 0x40010000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr1, 0x40010000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc1ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40010000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim1_cnt, 0x40010000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr2, 0x40010000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc2ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr1_input, 0x40010000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40010000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim1_cnt, 0x40010000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr3, 0x40010000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc3ne, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM1, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40010000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim1_arr, 0x40010000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim1_cnt, 0x40010000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim1_ccr4, 0x40010000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim1_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim1_dier, 0x40010000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim1_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim1_sr, 0x40010000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim1_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim1_ccer, 0x40010000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim1_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim1_ccmr2_input, 0x40010000u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM10, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim10_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccr1, 0x40014400u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim10_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim10_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim10_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim10_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim10_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim10_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM10, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim10_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccmr1_input, 0x40014400u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM10, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim10_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM10, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim10_arr, 0x40014400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim10_cnt, 0x40014400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014400u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_dier, 0x40014400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_sr, 0x40014400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim10_ccer, 0x40014400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014400u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM11, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim11_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccr1, 0x40014800u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim11_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim11_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim11_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim11_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim11_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim11_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM11, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim11_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccmr1_input, 0x40014800u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM11, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim11_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM11, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim11_arr, 0x40014800u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim11_cnt, 0x40014800u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014800u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_dier, 0x40014800u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_sr, 0x40014800u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim11_ccer, 0x40014800u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014800u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM2, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
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
struct TimerChannelSemanticTraits<PeripheralId::TIM5, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr1, 0x40000C00u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim5_cnt, 0x40000C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr1, 0x40000C00u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim5_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM5, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr2, 0x40000C00u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim5_cnt, 0x40000C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr2, 0x40000C00u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim5_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim5_ccmr1_input, 0x40000C00u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM5, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr3, 0x40000C00u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim5_cnt, 0x40000C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr3, 0x40000C00u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim5_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM5, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr4, 0x40000C00u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim5_arr, 0x40000C00u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim5_cnt, 0x40000C00u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim5_ccr4, 0x40000C00u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim5_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim5_dier, 0x40000C00u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim5_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim5_sr, 0x40000C00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim5_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim5_ccer, 0x40000C00u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim5_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim5_ccmr2_input, 0x40000C00u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM8, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr1, 0x40010400u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim8_cnt, 0x40010400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr1, 0x40010400u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc1ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim8_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM8, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr2, 0x40010400u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim8_cnt, 0x40010400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr2, 0x40010400u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc2ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim8_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim8_ccmr1_input, 0x40010400u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM8, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr3, 0x40010400u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim8_cnt, 0x40010400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr3, 0x40010400u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc3ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc3if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc3ne, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim8_ccmr2_input_cc3s, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM8, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr4, 0x40010400u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim8_arr, 0x40010400u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim8_cnt, 0x40010400u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim8_ccr4, 0x40010400u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim8_dier_cc4ie, RuntimeRegisterRef{RegisterId::register_tim8_dier, 0x40010400u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim8_sr_cc4if, RuntimeRegisterRef{RegisterId::register_tim8_sr, 0x40010400u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc4e, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim8_ccer_cc4p, RuntimeRegisterRef{RegisterId::register_tim8_ccer, 0x40010400u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim8_ccmr2_input_cc4s, RuntimeRegisterRef{RegisterId::register_tim8_ccmr2_input, 0x40010400u, 28u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM9, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim9_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr1, 0x40014000u, 52u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim9_dier_cc1ie, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim9_sr_cc1if, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc1e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc1p, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim9_ccmr1_input_cc1s, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM9, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim9_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::register_tim9_ccr2, 0x40014000u, 56u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_tim9_dier_cc2ie, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_tim9_sr_cc2if, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc2e, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::field_tim9_ccer_cc2p, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::field_tim9_ccmr1_input_cc2s, RuntimeRegisterRef{RegisterId::register_tim9_ccmr1_input, 0x40014000u, 24u, true}, 8u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM9, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim9_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 60u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 4u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 0u, 2u, true};
};

template<>
struct TimerChannelSemanticTraits<PeripheralId::TIM9, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsCompare = true;
  static constexpr bool kSupportsCapture = true;
  static constexpr bool kSupportsPwm = true;
  static constexpr bool kSupportsComplementaryOutput = false;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::register_tim9_arr, 0x40014000u, 44u, true};
  static constexpr RuntimeRegisterRef kCounterRegister = RuntimeRegisterRef{RegisterId::register_tim9_cnt, 0x40014000u, 36u, true};
  static constexpr RuntimeRegisterRef kCaptureRegister = RuntimeRegisterRef{RegisterId::none, 0x40014000u, 64u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_dier, 0x40014000u, 12u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_sr, 0x40014000u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 12u, 3u, true};
  static constexpr RuntimeFieldRef kPreloadField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputEnableField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_tim9_ccer, 0x40014000u, 32u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCaptureSelectField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40014000u, 28u, true}, 8u, 2u, true};
};

inline constexpr std::array<PeripheralId, 9> kTimerSemanticPeripherals = {{
  PeripheralId::TIM1,
  PeripheralId::TIM10,
  PeripheralId::TIM11,
  PeripheralId::TIM2,
  PeripheralId::TIM3,
  PeripheralId::TIM4,
  PeripheralId::TIM5,
  PeripheralId::TIM8,
  PeripheralId::TIM9,
}};
}
}
}
}
}
}
}
