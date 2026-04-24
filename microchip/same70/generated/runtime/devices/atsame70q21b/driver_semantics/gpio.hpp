#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"
#include "../pins.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70q21b {
namespace driver_semantics {
template<PinId Id>
struct GpioSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioOutputEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioOutputDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioClearField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioInputStateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioDriveEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioDriveDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioPullUpEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioPullUpDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioPullDownEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioPullDownDisableField = kInvalidFieldRef;
};

template<>
struct GpioSemanticTraits<PinId::PA10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p10, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p10, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p10, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p10, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p10, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p10, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 10u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p11, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p11, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p11, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p11, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p11, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p11, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 11u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p12, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p12, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p12, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p12, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p12, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p12, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 12u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p13, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p13, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p13, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p13, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p13, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p13, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 13u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p14, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p14, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p14, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p14, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p14, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p14, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 14u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA21> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 21u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p21, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p21, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p21, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p21, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p21, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p21, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 21u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA22> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 22u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p22, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p22, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p22, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p22, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p22, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p22, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 22u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p3, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p3, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p3, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p3, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p3, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p3, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 3u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p4, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p4, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p4, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p4, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p4, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p4, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 4u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p5, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p5, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p5, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p5, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p5, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p5, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 5u, 1u, true};
};

template<>
struct GpioSemanticTraits<PinId::PA9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIOA;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_microchip_pio_v;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputValueField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputSetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputResetField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPioEnableField = RuntimeFieldRef{FieldId::field_gpioa_per_p9, RuntimeRegisterRef{RegisterId::register_gpioa_per, 0x400E0E00u, 0u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputEnableField = RuntimeFieldRef{FieldId::field_gpioa_oer_p9, RuntimeRegisterRef{RegisterId::register_gpioa_oer, 0x400E0E00u, 16u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioOutputDisableField = RuntimeFieldRef{FieldId::field_gpioa_odr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_odr, 0x400E0E00u, 20u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioSetField = RuntimeFieldRef{FieldId::field_gpioa_sodr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_sodr, 0x400E0E00u, 48u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioClearField = RuntimeFieldRef{FieldId::field_gpioa_codr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_codr, 0x400E0E00u, 52u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioInputStateField = RuntimeFieldRef{FieldId::field_gpioa_pdsr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_pdsr, 0x400E0E00u, 60u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveEnableField = RuntimeFieldRef{FieldId::field_gpioa_mder_p9, RuntimeRegisterRef{RegisterId::register_gpioa_mder, 0x400E0E00u, 80u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioDriveDisableField = RuntimeFieldRef{FieldId::field_gpioa_mddr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_mddr, 0x400E0E00u, 84u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpEnableField = RuntimeFieldRef{FieldId::field_gpioa_puer_p9, RuntimeRegisterRef{RegisterId::register_gpioa_puer, 0x400E0E00u, 100u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullUpDisableField = RuntimeFieldRef{FieldId::field_gpioa_pudr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_pudr, 0x400E0E00u, 96u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownEnableField = RuntimeFieldRef{FieldId::field_gpioa_ppder_p9, RuntimeRegisterRef{RegisterId::register_gpioa_ppder, 0x400E0E00u, 148u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPioPullDownDisableField = RuntimeFieldRef{FieldId::field_gpioa_ppddr_p9, RuntimeRegisterRef{RegisterId::register_gpioa_ppddr, 0x400E0E00u, 144u, true}, 9u, 1u, true};
};

inline constexpr std::array<PinId, 11> kGpioSemanticPins = {{
  PinId::PA10,
  PinId::PA11,
  PinId::PA12,
  PinId::PA13,
  PinId::PA14,
  PinId::PA21,
  PinId::PA22,
  PinId::PA3,
  PinId::PA4,
  PinId::PA5,
  PinId::PA9,
}};
}
}
}
}
}
}
}
