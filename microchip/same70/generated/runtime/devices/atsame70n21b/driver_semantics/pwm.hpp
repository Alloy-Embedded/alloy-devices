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
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxPeriod = 0u;
  static constexpr std::array<std::uint8_t, 0> kDeadtimeOptions = {};
  static constexpr std::array<std::uint8_t, 0> kSupportedAlignments = {};
  static constexpr std::array<std::uint8_t, 0> kBreakInputs = {};
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBreakInput = false;
  static constexpr bool kSupportsComplementaryOutputs = false;
  static constexpr bool kSupportsAsymmetricPwm = false;
  static constexpr bool kSupportsCombinedPwm = false;
};

template<>
struct PwmSemanticTraits<PeripheralId::PWM0> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_pwm_microchip_pwm_y;
  static constexpr std::uint32_t kCounterBits = 24u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasFaultInput = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_pwm0_clk, 0x40020000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_pwm0_ena, 0x40020000u, 4u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_pwm0_sr, 0x40020000u, 12u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_pwm0_clk, 0x40020000u, 0u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_pwm0_scuc, 0x40020000u, 40u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_pwm0_scuc_updulock, RuntimeRegisterRef{RegisterId::register_pwm0_scuc, 0x40020000u, 40u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_pwm0_clk_prea, RuntimeRegisterRef{RegisterId::register_pwm0_clk, 0x40020000u, 0u, true}, 8u, 4u, true};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxPeriod = 0u;
  static constexpr std::array<std::uint8_t, 0> kDeadtimeOptions = {};
  static constexpr std::array<std::uint8_t, 0> kSupportedAlignments = {};
  static constexpr std::array<std::uint8_t, 0> kBreakInputs = {};
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBreakInput = false;
  static constexpr bool kSupportsComplementaryOutputs = false;
  static constexpr bool kSupportsAsymmetricPwm = false;
  static constexpr bool kSupportsCombinedPwm = false;
};

template<>
struct PwmSemanticTraits<PeripheralId::PWM1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_pwm_microchip_pwm_y;
  static constexpr std::uint32_t kCounterBits = 24u;
  static constexpr std::uint32_t kChannelCount = 4u;
  static constexpr bool kHasComplementaryOutputs = true;
  static constexpr bool kHasDeadtime = true;
  static constexpr bool kHasFaultInput = true;
  static constexpr bool kHasCenterAligned = true;
  static constexpr bool kHasSynchronizedUpdate = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_pwm1_clk, 0x4005C000u, 0u, true};
  static constexpr RuntimeRegisterRef kOutputEnableRegister = RuntimeRegisterRef{RegisterId::register_pwm1_ena, 0x4005C000u, 4u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_pwm1_sr, 0x4005C000u, 12u, true};
  static constexpr RuntimeRegisterRef kClockRegister = RuntimeRegisterRef{RegisterId::register_pwm1_clk, 0x4005C000u, 0u, true};
  static constexpr RuntimeRegisterRef kSyncRegister = RuntimeRegisterRef{RegisterId::register_pwm1_scuc, 0x4005C000u, 40u, true};
  static constexpr RuntimeFieldRef kMasterOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLoadField = RuntimeFieldRef{FieldId::field_pwm1_scuc_updulock, RuntimeRegisterRef{RegisterId::register_pwm1_scuc, 0x4005C000u, 40u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kClearLoadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClockPrescalerField = RuntimeFieldRef{FieldId::field_pwm1_clk_prea, RuntimeRegisterRef{RegisterId::register_pwm1_clk, 0x4005C000u, 0u, true}, 8u, 4u, true};
  static constexpr std::uint32_t kMaxPrescaler = 0u;
  static constexpr std::uint32_t kMaxPeriod = 0u;
  static constexpr std::array<std::uint8_t, 0> kDeadtimeOptions = {};
  static constexpr std::array<std::uint8_t, 0> kSupportedAlignments = {};
  static constexpr std::array<std::uint8_t, 0> kBreakInputs = {};
  static constexpr bool kSupportsDeadtime = false;
  static constexpr bool kSupportsBreakInput = false;
  static constexpr bool kSupportsComplementaryOutputs = false;
  static constexpr bool kSupportsAsymmetricPwm = false;
  static constexpr bool kSupportsCombinedPwm = false;
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
struct PwmChannelSemanticTraits<PeripheralId::PWM0, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 512u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 516u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 524u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 536u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm0_ena_chid0, RuntimeRegisterRef{RegisterId::register_pwm0_ena, 0x40020000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm0_ier1_chid0, RuntimeRegisterRef{RegisterId::register_pwm0_ier1, 0x40020000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm0_isr1_chid0, RuntimeRegisterRef{RegisterId::register_pwm0_isr1, 0x40020000u, 28u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 512u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 512u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 512u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 524u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 516u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 536u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 536u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM0, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 544u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 548u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 556u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 568u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm0_ena_chid1, RuntimeRegisterRef{RegisterId::register_pwm0_ena, 0x40020000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm0_ier1_chid1, RuntimeRegisterRef{RegisterId::register_pwm0_ier1, 0x40020000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm0_isr1_chid1, RuntimeRegisterRef{RegisterId::register_pwm0_isr1, 0x40020000u, 28u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 544u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 544u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 544u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 556u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 548u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 568u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 568u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM0, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 576u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 580u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 588u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 600u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm0_ena_chid2, RuntimeRegisterRef{RegisterId::register_pwm0_ena, 0x40020000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm0_ier1_chid2, RuntimeRegisterRef{RegisterId::register_pwm0_ier1, 0x40020000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm0_isr1_chid2, RuntimeRegisterRef{RegisterId::register_pwm0_isr1, 0x40020000u, 28u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 576u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 576u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 576u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 588u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 580u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 600u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 600u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM0, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 608u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 612u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 620u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x40020000u, 632u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm0_ena_chid3, RuntimeRegisterRef{RegisterId::register_pwm0_ena, 0x40020000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm0_ier1_chid3, RuntimeRegisterRef{RegisterId::register_pwm0_ier1, 0x40020000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm0_isr1_chid3, RuntimeRegisterRef{RegisterId::register_pwm0_isr1, 0x40020000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 608u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 608u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 608u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 620u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 612u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 632u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x40020000u, 632u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM1, 0u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 512u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 516u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 524u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 536u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm1_ena_chid0, RuntimeRegisterRef{RegisterId::register_pwm1_ena, 0x4005C000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm1_ier1_chid0, RuntimeRegisterRef{RegisterId::register_pwm1_ier1, 0x4005C000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm1_isr1_chid0, RuntimeRegisterRef{RegisterId::register_pwm1_isr1, 0x4005C000u, 28u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 512u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 512u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 512u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 524u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 516u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 536u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 536u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM1, 1u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 544u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 548u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 556u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 568u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm1_ena_chid1, RuntimeRegisterRef{RegisterId::register_pwm1_ena, 0x4005C000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm1_ier1_chid1, RuntimeRegisterRef{RegisterId::register_pwm1_ier1, 0x4005C000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm1_isr1_chid1, RuntimeRegisterRef{RegisterId::register_pwm1_isr1, 0x4005C000u, 28u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 544u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 544u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 544u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 556u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 548u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 568u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 568u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM1, 2u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 576u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 580u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 588u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 600u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm1_ena_chid2, RuntimeRegisterRef{RegisterId::register_pwm1_ena, 0x4005C000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm1_ier1_chid2, RuntimeRegisterRef{RegisterId::register_pwm1_ier1, 0x4005C000u, 16u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm1_isr1_chid2, RuntimeRegisterRef{RegisterId::register_pwm1_isr1, 0x4005C000u, 28u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 576u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 576u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 576u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 588u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 580u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 600u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 600u, true}, 0u, 16u, true};
};

template<>
struct PwmChannelSemanticTraits<PeripheralId::PWM1, 3u> {
  static constexpr bool kPresent = true;
  static constexpr bool kSupportsComplementaryOutput = true;
  static constexpr bool kSupportsDeadtime = true;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 608u, true};
  static constexpr RuntimeRegisterRef kCompareRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 612u, true};
  static constexpr RuntimeRegisterRef kSecondaryCompareRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPeriodRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 620u, true};
  static constexpr RuntimeRegisterRef kDeadtimeRegister = RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 632u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_pwm1_ena_chid3, RuntimeRegisterRef{RegisterId::register_pwm1_ena, 0x4005C000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptEnableField = RuntimeFieldRef{FieldId::field_pwm1_ier1_chid3, RuntimeRegisterRef{RegisterId::register_pwm1_ier1, 0x4005C000u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kInterruptFlagField = RuntimeFieldRef{FieldId::field_pwm1_isr1_chid3, RuntimeRegisterRef{RegisterId::register_pwm1_isr1, 0x4005C000u, 28u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 608u, true}, 0u, 4u, true};
  static constexpr RuntimeFieldRef kPolarityField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 608u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kComplementaryOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCenterAlignedField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 608u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPeriodField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 620u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 612u, true}, 0u, 24u, true};
  static constexpr RuntimeFieldRef kDeadtimeRiseField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 632u, true}, 16u, 16u, true};
  static constexpr RuntimeFieldRef kDeadtimeFallField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::none, 0x4005C000u, 632u, true}, 0u, 16u, true};
};

inline constexpr std::array<PeripheralId, 2> kPwmSemanticPeripherals = {{
  PeripheralId::PWM0,
  PeripheralId::PWM1,
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
  PWM0 = 1,
  PWM1 = 2,
  TC0 = 3,
  TC1 = 4,
  TC2 = 5,
  TC3 = 6,
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

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::PWM0> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40020000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Pwm;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr bool kSupportsDeadTime = true;
  static constexpr bool kSupportsFaultInput = true;
  static constexpr bool kSupportsDma = true;
};

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::PWM1> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x4005c000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Pwm;
  static constexpr std::uint8_t kChannelCount = 4u;
  static constexpr bool kSupportsDeadTime = true;
  static constexpr bool kSupportsFaultInput = true;
  static constexpr bool kSupportsDma = true;
};

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::TC0> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x4000c000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Tc;
  static constexpr std::uint8_t kChannelCount = 3u;
  static constexpr bool kSupportsDeadTime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsDma = true;
};

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::TC1> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40010000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Tc;
  static constexpr std::uint8_t kChannelCount = 3u;
  static constexpr bool kSupportsDeadTime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsDma = true;
};

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::TC2> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40014000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Tc;
  static constexpr std::uint8_t kChannelCount = 3u;
  static constexpr bool kSupportsDeadTime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsDma = true;
};

template<>
struct Same70PwmTraits<RuntimeSame70PwmId::TC3> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40054000u;
  static constexpr RuntimeSame70PwmKind kKind = RuntimeSame70PwmKind::Tc;
  static constexpr std::uint8_t kChannelCount = 3u;
  static constexpr bool kSupportsDeadTime = false;
  static constexpr bool kSupportsFaultInput = false;
  static constexpr bool kSupportsDma = true;
};

}
}
}
}
}
}
}
