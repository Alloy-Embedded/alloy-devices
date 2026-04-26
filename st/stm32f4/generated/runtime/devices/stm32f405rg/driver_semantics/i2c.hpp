#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"
#include "../pins.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
namespace driver_semantics {
template<PeripheralId Id>
struct I2cSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr RuntimeRegisterRef kCr1Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCr2Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCcrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kTriseRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSr1Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSr2Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kDrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kIcrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kMmrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kIadrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCwgrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kRhrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kThrRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kPeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAckField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kFreqField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCcrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kFsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDutyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTriseField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSbField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAddrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxneField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBtfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArloField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBusyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDrDataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSaddField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdWrnField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNbytesField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoendField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTcField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArloIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArlocfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsenField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSvdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSwrstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrszField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMreadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCldivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kChdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCkdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kHoldField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxcompField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArblstField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr std::array<DmaBindingRef, 0> kDmaBindings = {};
  static constexpr RuntimeFieldRef kKernelClockSelectorField = kInvalidFieldRef;
  static constexpr std::array<KernelClockSourceOption, 0> kKernelClockSourceOptions = {};
  static constexpr std::uint32_t kKernelMaxClockHz = 0u;
  static constexpr RuntimeFieldRef kClockGateField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 0> kSupportedSpeeds = {};
  static constexpr std::array<I2cTimingPreset, 0> kTimingPresets = {};
  static constexpr bool kSupportsSmbus = false;
  static constexpr bool kSupportsPmbus = false;
  static constexpr bool kSupportsSlave = false;
  static constexpr bool kSupportsDualAddress = false;
  static constexpr bool kSupportsGeneralCall = false;
  static constexpr bool kSupports7BitAddressing = false;
  static constexpr bool kSupports10BitAddressing = false;
};

template<>
struct I2cSemanticTraits<PeripheralId::I2C1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr RuntimeRegisterRef kCr1Register = RuntimeRegisterRef{RegisterId::register_i2c1_cr1, 0x40005400u, 0u, true};
  static constexpr RuntimeRegisterRef kCr2Register = RuntimeRegisterRef{RegisterId::register_i2c1_cr2, 0x40005400u, 4u, true};
  static constexpr RuntimeRegisterRef kCcrRegister = RuntimeRegisterRef{RegisterId::register_i2c1_ccr, 0x40005400u, 28u, true};
  static constexpr RuntimeRegisterRef kTriseRegister = RuntimeRegisterRef{RegisterId::register_i2c1_trise, 0x40005400u, 32u, true};
  static constexpr RuntimeRegisterRef kSr1Register = RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true};
  static constexpr RuntimeRegisterRef kSr2Register = RuntimeRegisterRef{RegisterId::register_i2c1_sr2, 0x40005400u, 24u, true};
  static constexpr RuntimeRegisterRef kDrRegister = RuntimeRegisterRef{RegisterId::register_i2c1_dr, 0x40005400u, 16u, true};
  static constexpr RuntimeRegisterRef kIcrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kMmrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kIadrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCwgrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kRhrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kThrRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kPeField = RuntimeFieldRef{FieldId::field_i2c1_cr1_pe, RuntimeRegisterRef{RegisterId::register_i2c1_cr1, 0x40005400u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAckField = RuntimeFieldRef{FieldId::field_i2c1_cr1_ack, RuntimeRegisterRef{RegisterId::register_i2c1_cr1, 0x40005400u, 0u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_i2c1_cr1_start, RuntimeRegisterRef{RegisterId::register_i2c1_cr1, 0x40005400u, 0u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::field_i2c1_cr1_stop, RuntimeRegisterRef{RegisterId::register_i2c1_cr1, 0x40005400u, 0u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kFreqField = RuntimeFieldRef{FieldId::field_i2c1_cr2_freq, RuntimeRegisterRef{RegisterId::register_i2c1_cr2, 0x40005400u, 4u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kCcrField = RuntimeFieldRef{FieldId::field_i2c1_ccr_ccr, RuntimeRegisterRef{RegisterId::register_i2c1_ccr, 0x40005400u, 28u, true}, 0u, 12u, true};
  static constexpr RuntimeFieldRef kFsField = RuntimeFieldRef{FieldId::field_i2c1_ccr_f_s, RuntimeRegisterRef{RegisterId::register_i2c1_ccr, 0x40005400u, 28u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::field_i2c1_ccr_duty, RuntimeRegisterRef{RegisterId::register_i2c1_ccr, 0x40005400u, 28u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kTriseField = RuntimeFieldRef{FieldId::field_i2c1_trise_trise, RuntimeRegisterRef{RegisterId::register_i2c1_trise, 0x40005400u, 32u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kSbField = RuntimeFieldRef{FieldId::field_i2c1_sr1_sb, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAddrField = RuntimeFieldRef{FieldId::field_i2c1_sr1_addr, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kTxeField = RuntimeFieldRef{FieldId::field_i2c1_sr1_txe, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kRxneField = RuntimeFieldRef{FieldId::field_i2c1_sr1_rxne, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kBtfField = RuntimeFieldRef{FieldId::field_i2c1_sr1_btf, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kAfField = RuntimeFieldRef{FieldId::field_i2c1_sr1_af, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kBerrField = RuntimeFieldRef{FieldId::field_i2c1_sr1_berr, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kArloField = RuntimeFieldRef{FieldId::field_i2c1_sr1_arlo, RuntimeRegisterRef{RegisterId::register_i2c1_sr1, 0x40005400u, 20u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kBusyField = RuntimeFieldRef{FieldId::field_i2c1_sr2_busy, RuntimeRegisterRef{RegisterId::register_i2c1_sr2, 0x40005400u, 24u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kDrDataField = RuntimeFieldRef{FieldId::field_i2c1_dr_dr, RuntimeRegisterRef{RegisterId::register_i2c1_dr, 0x40005400u, 16u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kSaddField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdWrnField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNbytesField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoendField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTcField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArloIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArlocfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsenField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSvdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSwrstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrszField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMreadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCldivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kChdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCkdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kHoldField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxcompField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArblstField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr RuntimeFieldRef kKernelClockSelectorField = kInvalidFieldRef;
  static constexpr std::array<KernelClockSourceOption, 0> kKernelClockSourceOptions = {};
  static constexpr std::uint32_t kKernelMaxClockHz = 0u;
  static constexpr RuntimeFieldRef kClockGateField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 2> kSupportedSpeeds = {{100000u, 400000u}};
  static constexpr std::array<I2cTimingPreset, 2> kTimingPresets = {{{100000u, 42000000u, 0x10805e89u, true}, {400000u, 42000000u, 0x00b0122au, true}}};
  static constexpr bool kSupportsSmbus = true;
  static constexpr bool kSupportsPmbus = false;
  static constexpr bool kSupportsSlave = true;
  static constexpr bool kSupportsDualAddress = true;
  static constexpr bool kSupportsGeneralCall = true;
  static constexpr bool kSupports7BitAddressing = true;
  static constexpr bool kSupports10BitAddressing = true;
};

template<>
struct I2cSemanticTraits<PeripheralId::I2C2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr RuntimeRegisterRef kCr1Register = RuntimeRegisterRef{RegisterId::register_i2c2_cr1, 0x40005800u, 0u, true};
  static constexpr RuntimeRegisterRef kCr2Register = RuntimeRegisterRef{RegisterId::register_i2c2_cr2, 0x40005800u, 4u, true};
  static constexpr RuntimeRegisterRef kCcrRegister = RuntimeRegisterRef{RegisterId::register_i2c2_ccr, 0x40005800u, 28u, true};
  static constexpr RuntimeRegisterRef kTriseRegister = RuntimeRegisterRef{RegisterId::register_i2c2_trise, 0x40005800u, 32u, true};
  static constexpr RuntimeRegisterRef kSr1Register = RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true};
  static constexpr RuntimeRegisterRef kSr2Register = RuntimeRegisterRef{RegisterId::register_i2c2_sr2, 0x40005800u, 24u, true};
  static constexpr RuntimeRegisterRef kDrRegister = RuntimeRegisterRef{RegisterId::register_i2c2_dr, 0x40005800u, 16u, true};
  static constexpr RuntimeRegisterRef kIcrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kMmrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kIadrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCwgrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kRhrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kThrRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kPeField = RuntimeFieldRef{FieldId::field_i2c2_cr1_pe, RuntimeRegisterRef{RegisterId::register_i2c2_cr1, 0x40005800u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAckField = RuntimeFieldRef{FieldId::field_i2c2_cr1_ack, RuntimeRegisterRef{RegisterId::register_i2c2_cr1, 0x40005800u, 0u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_i2c2_cr1_start, RuntimeRegisterRef{RegisterId::register_i2c2_cr1, 0x40005800u, 0u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::field_i2c2_cr1_stop, RuntimeRegisterRef{RegisterId::register_i2c2_cr1, 0x40005800u, 0u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kFreqField = RuntimeFieldRef{FieldId::field_i2c2_cr2_freq, RuntimeRegisterRef{RegisterId::register_i2c2_cr2, 0x40005800u, 4u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kCcrField = RuntimeFieldRef{FieldId::field_i2c2_ccr_ccr, RuntimeRegisterRef{RegisterId::register_i2c2_ccr, 0x40005800u, 28u, true}, 0u, 12u, true};
  static constexpr RuntimeFieldRef kFsField = RuntimeFieldRef{FieldId::field_i2c2_ccr_f_s, RuntimeRegisterRef{RegisterId::register_i2c2_ccr, 0x40005800u, 28u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::field_i2c2_ccr_duty, RuntimeRegisterRef{RegisterId::register_i2c2_ccr, 0x40005800u, 28u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kTriseField = RuntimeFieldRef{FieldId::field_i2c2_trise_trise, RuntimeRegisterRef{RegisterId::register_i2c2_trise, 0x40005800u, 32u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kSbField = RuntimeFieldRef{FieldId::field_i2c2_sr1_sb, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAddrField = RuntimeFieldRef{FieldId::field_i2c2_sr1_addr, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kTxeField = RuntimeFieldRef{FieldId::field_i2c2_sr1_txe, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kRxneField = RuntimeFieldRef{FieldId::field_i2c2_sr1_rxne, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kBtfField = RuntimeFieldRef{FieldId::field_i2c2_sr1_btf, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kAfField = RuntimeFieldRef{FieldId::field_i2c2_sr1_af, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kBerrField = RuntimeFieldRef{FieldId::field_i2c2_sr1_berr, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kArloField = RuntimeFieldRef{FieldId::field_i2c2_sr1_arlo, RuntimeRegisterRef{RegisterId::register_i2c2_sr1, 0x40005800u, 20u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kBusyField = RuntimeFieldRef{FieldId::field_i2c2_sr2_busy, RuntimeRegisterRef{RegisterId::register_i2c2_sr2, 0x40005800u, 24u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kDrDataField = RuntimeFieldRef{FieldId::field_i2c2_dr_dr, RuntimeRegisterRef{RegisterId::register_i2c2_dr, 0x40005800u, 16u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kSaddField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdWrnField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNbytesField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoendField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTcField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArloIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArlocfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsenField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSvdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSwrstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrszField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMreadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCldivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kChdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCkdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kHoldField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxcompField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArblstField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr RuntimeFieldRef kKernelClockSelectorField = kInvalidFieldRef;
  static constexpr std::array<KernelClockSourceOption, 0> kKernelClockSourceOptions = {};
  static constexpr std::uint32_t kKernelMaxClockHz = 0u;
  static constexpr RuntimeFieldRef kClockGateField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 2> kSupportedSpeeds = {{100000u, 400000u}};
  static constexpr std::array<I2cTimingPreset, 2> kTimingPresets = {{{100000u, 42000000u, 0x10805e89u, true}, {400000u, 42000000u, 0x00b0122au, true}}};
  static constexpr bool kSupportsSmbus = true;
  static constexpr bool kSupportsPmbus = false;
  static constexpr bool kSupportsSlave = true;
  static constexpr bool kSupportsDualAddress = true;
  static constexpr bool kSupportsGeneralCall = true;
  static constexpr bool kSupports7BitAddressing = true;
  static constexpr bool kSupports10BitAddressing = true;
};

template<>
struct I2cSemanticTraits<PeripheralId::I2C3> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_i2c_st_i2c1_v1_5_cube;
  static constexpr RuntimeRegisterRef kCr1Register = RuntimeRegisterRef{RegisterId::register_i2c3_cr1, 0x40005C00u, 0u, true};
  static constexpr RuntimeRegisterRef kCr2Register = RuntimeRegisterRef{RegisterId::register_i2c3_cr2, 0x40005C00u, 4u, true};
  static constexpr RuntimeRegisterRef kCcrRegister = RuntimeRegisterRef{RegisterId::register_i2c3_ccr, 0x40005C00u, 28u, true};
  static constexpr RuntimeRegisterRef kTriseRegister = RuntimeRegisterRef{RegisterId::register_i2c3_trise, 0x40005C00u, 32u, true};
  static constexpr RuntimeRegisterRef kSr1Register = RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true};
  static constexpr RuntimeRegisterRef kSr2Register = RuntimeRegisterRef{RegisterId::register_i2c3_sr2, 0x40005C00u, 24u, true};
  static constexpr RuntimeRegisterRef kDrRegister = RuntimeRegisterRef{RegisterId::register_i2c3_dr, 0x40005C00u, 16u, true};
  static constexpr RuntimeRegisterRef kIcrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kMmrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kIadrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCwgrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kRhrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kThrRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kPeField = RuntimeFieldRef{FieldId::field_i2c3_cr1_pe, RuntimeRegisterRef{RegisterId::register_i2c3_cr1, 0x40005C00u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAckField = RuntimeFieldRef{FieldId::field_i2c3_cr1_ack, RuntimeRegisterRef{RegisterId::register_i2c3_cr1, 0x40005C00u, 0u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kStartField = RuntimeFieldRef{FieldId::field_i2c3_cr1_start, RuntimeRegisterRef{RegisterId::register_i2c3_cr1, 0x40005C00u, 0u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kStopField = RuntimeFieldRef{FieldId::field_i2c3_cr1_stop, RuntimeRegisterRef{RegisterId::register_i2c3_cr1, 0x40005C00u, 0u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kFreqField = RuntimeFieldRef{FieldId::field_i2c3_cr2_freq, RuntimeRegisterRef{RegisterId::register_i2c3_cr2, 0x40005C00u, 4u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kCcrField = RuntimeFieldRef{FieldId::field_i2c3_ccr_ccr, RuntimeRegisterRef{RegisterId::register_i2c3_ccr, 0x40005C00u, 28u, true}, 0u, 12u, true};
  static constexpr RuntimeFieldRef kFsField = RuntimeFieldRef{FieldId::field_i2c3_ccr_f_s, RuntimeRegisterRef{RegisterId::register_i2c3_ccr, 0x40005C00u, 28u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kDutyField = RuntimeFieldRef{FieldId::field_i2c3_ccr_duty, RuntimeRegisterRef{RegisterId::register_i2c3_ccr, 0x40005C00u, 28u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kTriseField = RuntimeFieldRef{FieldId::field_i2c3_trise_trise, RuntimeRegisterRef{RegisterId::register_i2c3_trise, 0x40005C00u, 32u, true}, 0u, 6u, true};
  static constexpr RuntimeFieldRef kSbField = RuntimeFieldRef{FieldId::field_i2c3_sr1_sb, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kAddrField = RuntimeFieldRef{FieldId::field_i2c3_sr1_addr, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kTxeField = RuntimeFieldRef{FieldId::field_i2c3_sr1_txe, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kRxneField = RuntimeFieldRef{FieldId::field_i2c3_sr1_rxne, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kBtfField = RuntimeFieldRef{FieldId::field_i2c3_sr1_btf, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kAfField = RuntimeFieldRef{FieldId::field_i2c3_sr1_af, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kBerrField = RuntimeFieldRef{FieldId::field_i2c3_sr1_berr, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kArloField = RuntimeFieldRef{FieldId::field_i2c3_sr1_arlo, RuntimeRegisterRef{RegisterId::register_i2c3_sr1, 0x40005C00u, 20u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kBusyField = RuntimeFieldRef{FieldId::field_i2c3_sr2_busy, RuntimeRegisterRef{RegisterId::register_i2c3_sr2, 0x40005C00u, 24u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kDrDataField = RuntimeFieldRef{FieldId::field_i2c3_dr_dr, RuntimeRegisterRef{RegisterId::register_i2c3_dr, 0x40005C00u, 16u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kSaddField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdWrnField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNbytesField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAutoendField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTcField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxdataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArloIsrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStopcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBerrcfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArlocfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsenField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMsdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSvdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSwrstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrszField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMreadField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kIadrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCldivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kChdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCkdivField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kHoldField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxcompField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxrdyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNackField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kArblstField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 0> kIrqNumbers = {};
  static constexpr RuntimeFieldRef kKernelClockSelectorField = kInvalidFieldRef;
  static constexpr std::array<KernelClockSourceOption, 0> kKernelClockSourceOptions = {};
  static constexpr std::uint32_t kKernelMaxClockHz = 0u;
  static constexpr RuntimeFieldRef kClockGateField = kInvalidFieldRef;
  static constexpr std::array<std::uint32_t, 2> kSupportedSpeeds = {{100000u, 400000u}};
  static constexpr std::array<I2cTimingPreset, 2> kTimingPresets = {{{100000u, 42000000u, 0x10805e89u, true}, {400000u, 42000000u, 0x00b0122au, true}}};
  static constexpr bool kSupportsSmbus = true;
  static constexpr bool kSupportsPmbus = false;
  static constexpr bool kSupportsSlave = true;
  static constexpr bool kSupportsDualAddress = true;
  static constexpr bool kSupportsGeneralCall = true;
  static constexpr bool kSupports7BitAddressing = true;
  static constexpr bool kSupports10BitAddressing = true;
};

inline constexpr std::array<PeripheralId, 3> kI2cSemanticPeripherals = {{
  PeripheralId::I2C1,
  PeripheralId::I2C2,
  PeripheralId::I2C3,
}};

// fill-i2c-semantic-gaps: per-controller I2C / TWI HW facts.
enum class RuntimeI2cClockSource : std::uint8_t {
  None = 0,
  Pclk = 1,
  Hsi16 = 2,
  Sysclk = 3,
};

enum class RuntimeI2cCtrlId : std::uint8_t {
  None = 0,
  I2C1 = 1,
  I2C2 = 2,
  I2C3 = 3,
};

template<RuntimeI2cCtrlId Id>
struct I2cPeripheralTraits {
  static constexpr bool kPresent = false;
  static constexpr std::uint32_t kBaseAddress = 0u;
  static constexpr RuntimeI2cClockSource kClockSource = RuntimeI2cClockSource::None;
  static constexpr std::uint8_t kDreqTx = 0u;
  static constexpr std::uint8_t kDreqRx = 0u;
  static constexpr std::array<PinId, 0> kValidSdaPins = {};
  static constexpr std::array<PinId, 0> kValidSclPins = {};
  static constexpr std::uint16_t kInSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kInSclSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSclSignal = 0xFFFFu;
  static constexpr bool kSupportsFastModePlus = false;
  static constexpr bool kPortmuxAlt = false;
};

template<>
struct I2cPeripheralTraits<RuntimeI2cCtrlId::I2C1> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40005400u;
  static constexpr RuntimeI2cClockSource kClockSource = RuntimeI2cClockSource::Pclk;
  static constexpr std::uint8_t kDreqTx = 0u;
  static constexpr std::uint8_t kDreqRx = 0u;
  static constexpr std::array<PinId, 2> kValidSdaPins = {PinId::PB7, PinId::PB9};
  static constexpr std::array<PinId, 2> kValidSclPins = {PinId::PB6, PinId::PB8};
  static constexpr std::uint16_t kInSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kInSclSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSclSignal = 0xFFFFu;
  static constexpr bool kSupportsFastModePlus = true;
  static constexpr bool kPortmuxAlt = false;
};

template<>
struct I2cPeripheralTraits<RuntimeI2cCtrlId::I2C2> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40005800u;
  static constexpr RuntimeI2cClockSource kClockSource = RuntimeI2cClockSource::Pclk;
  static constexpr std::uint8_t kDreqTx = 0u;
  static constexpr std::uint8_t kDreqRx = 0u;
  static constexpr std::array<PinId, 1> kValidSdaPins = {PinId::PB11};
  static constexpr std::array<PinId, 1> kValidSclPins = {PinId::PB10};
  static constexpr std::uint16_t kInSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kInSclSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSclSignal = 0xFFFFu;
  static constexpr bool kSupportsFastModePlus = true;
  static constexpr bool kPortmuxAlt = false;
};

template<>
struct I2cPeripheralTraits<RuntimeI2cCtrlId::I2C3> {
  static constexpr bool kPresent = true;
  static constexpr std::uint32_t kBaseAddress = 0x40005c00u;
  static constexpr RuntimeI2cClockSource kClockSource = RuntimeI2cClockSource::Pclk;
  static constexpr std::uint8_t kDreqTx = 0u;
  static constexpr std::uint8_t kDreqRx = 0u;
  static constexpr std::array<PinId, 0> kValidSdaPins = {};
  static constexpr std::array<PinId, 0> kValidSclPins = {};
  static constexpr std::uint16_t kInSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kInSclSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSdaSignal = 0xFFFFu;
  static constexpr std::uint16_t kOutSclSignal = 0xFFFFu;
  static constexpr bool kSupportsFastModePlus = true;
  static constexpr bool kPortmuxAlt = false;
};

}
}
}
}
}
}
}
