#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"
#include "../pins.hpp"

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1062 {
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 12u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 13u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 14u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B0_15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 15u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 15u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 12u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 13u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 14u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_AD_B1_15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO1;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 15u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_gdir, 0x401B8000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_psr, 0x401B8000u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio1_dr, 0x401B8000u, 0u, true}, 15u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 12u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 13u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 14u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B0_15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 15u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 15u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 12u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 13u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 14u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_B1_15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO2;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 15u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_gdir, 0x401BC000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_psr, 0x401BC000u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio2_dr, 0x401BC000u, 0u, true}, 15u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 12u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 12u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 13u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 13u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 14u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 14u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 15u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 15u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_16> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 16u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 16u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 16u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 16u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_17> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 17u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 17u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 17u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 17u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_18> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 18u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 18u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 18u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 18u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_19> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 19u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 19u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 19u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 19u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_20> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 20u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 20u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 20u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 20u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_21> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 21u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 21u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 21u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_22> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 22u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 22u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 22u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_23> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 23u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 23u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 23u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 23u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_24> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 24u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 24u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 24u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_25> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 25u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 25u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 25u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 25u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_26> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 26u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 26u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 26u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 26u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_27> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 27u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 27u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 27u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 27u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_28> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 28u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 28u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 28u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 28u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_29> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 29u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 29u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 29u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 29u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_30> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 30u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 30u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 30u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 30u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_31> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO4;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 31u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_gdir, 0x401C4000u, 4u, true}, 31u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_psr, 0x401C4000u, 8u, true}, 31u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio4_dr, 0x401C4000u, 0u, true}, 31u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_32> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 32u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 32u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 32u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 32u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_33> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 33u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 33u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 33u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 33u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_34> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 34u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 34u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 34u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 34u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_35> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 35u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 35u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 35u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 35u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_36> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 36u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 36u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 36u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 36u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_37> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 37u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 37u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 37u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 37u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_38> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 38u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 38u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 38u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 38u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_39> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 39u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 39u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 39u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 39u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_40> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 40u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 40u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 40u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 40u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_EMC_41> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 41u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 41u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 41u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 41u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B0_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_00> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 0u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_01> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 1u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 1u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_02> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 2u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 2u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_03> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 3u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 3u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_04> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 4u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 4u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_05> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 5u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 5u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_06> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 6u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 6u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_07> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 7u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 7u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_08> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 8u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 8u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_09> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 9u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 9u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 10u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 10u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::GPIO_SD_B1_11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::GPIO3;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_gpio_nxp_imxrt_gpio_v1;
  static constexpr std::uint32_t kLineIndex = 11u;
  static constexpr RuntimeFieldRef kModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDirectionField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_gdir, 0x401C0000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputTypeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPullField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInputField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_psr, 0x401C0000u, 8u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kOutputValueField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_gpio3_dr, 0x401C0000u, 0u, true}, 11u, 1u, true};
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
  static constexpr std::uint32_t kPortOffset = 0u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

inline constexpr std::array<PinId, 124> kGpioSemanticPins = {{
  PinId::GPIO_AD_B0_00,
  PinId::GPIO_AD_B0_01,
  PinId::GPIO_AD_B0_02,
  PinId::GPIO_AD_B0_03,
  PinId::GPIO_AD_B0_04,
  PinId::GPIO_AD_B0_05,
  PinId::GPIO_AD_B0_06,
  PinId::GPIO_AD_B0_07,
  PinId::GPIO_AD_B0_08,
  PinId::GPIO_AD_B0_09,
  PinId::GPIO_AD_B0_10,
  PinId::GPIO_AD_B0_11,
  PinId::GPIO_AD_B0_12,
  PinId::GPIO_AD_B0_13,
  PinId::GPIO_AD_B0_14,
  PinId::GPIO_AD_B0_15,
  PinId::GPIO_AD_B1_00,
  PinId::GPIO_AD_B1_01,
  PinId::GPIO_AD_B1_02,
  PinId::GPIO_AD_B1_03,
  PinId::GPIO_AD_B1_04,
  PinId::GPIO_AD_B1_05,
  PinId::GPIO_AD_B1_06,
  PinId::GPIO_AD_B1_07,
  PinId::GPIO_AD_B1_08,
  PinId::GPIO_AD_B1_09,
  PinId::GPIO_AD_B1_10,
  PinId::GPIO_AD_B1_11,
  PinId::GPIO_AD_B1_12,
  PinId::GPIO_AD_B1_13,
  PinId::GPIO_AD_B1_14,
  PinId::GPIO_AD_B1_15,
  PinId::GPIO_B0_00,
  PinId::GPIO_B0_01,
  PinId::GPIO_B0_02,
  PinId::GPIO_B0_03,
  PinId::GPIO_B0_04,
  PinId::GPIO_B0_05,
  PinId::GPIO_B0_06,
  PinId::GPIO_B0_07,
  PinId::GPIO_B0_08,
  PinId::GPIO_B0_09,
  PinId::GPIO_B0_10,
  PinId::GPIO_B0_11,
  PinId::GPIO_B0_12,
  PinId::GPIO_B0_13,
  PinId::GPIO_B0_14,
  PinId::GPIO_B0_15,
  PinId::GPIO_B1_00,
  PinId::GPIO_B1_01,
  PinId::GPIO_B1_02,
  PinId::GPIO_B1_03,
  PinId::GPIO_B1_04,
  PinId::GPIO_B1_05,
  PinId::GPIO_B1_06,
  PinId::GPIO_B1_07,
  PinId::GPIO_B1_08,
  PinId::GPIO_B1_09,
  PinId::GPIO_B1_10,
  PinId::GPIO_B1_11,
  PinId::GPIO_B1_12,
  PinId::GPIO_B1_13,
  PinId::GPIO_B1_14,
  PinId::GPIO_B1_15,
  PinId::GPIO_EMC_00,
  PinId::GPIO_EMC_01,
  PinId::GPIO_EMC_02,
  PinId::GPIO_EMC_03,
  PinId::GPIO_EMC_04,
  PinId::GPIO_EMC_05,
  PinId::GPIO_EMC_06,
  PinId::GPIO_EMC_07,
  PinId::GPIO_EMC_08,
  PinId::GPIO_EMC_09,
  PinId::GPIO_EMC_10,
  PinId::GPIO_EMC_11,
  PinId::GPIO_EMC_12,
  PinId::GPIO_EMC_13,
  PinId::GPIO_EMC_14,
  PinId::GPIO_EMC_15,
  PinId::GPIO_EMC_16,
  PinId::GPIO_EMC_17,
  PinId::GPIO_EMC_18,
  PinId::GPIO_EMC_19,
  PinId::GPIO_EMC_20,
  PinId::GPIO_EMC_21,
  PinId::GPIO_EMC_22,
  PinId::GPIO_EMC_23,
  PinId::GPIO_EMC_24,
  PinId::GPIO_EMC_25,
  PinId::GPIO_EMC_26,
  PinId::GPIO_EMC_27,
  PinId::GPIO_EMC_28,
  PinId::GPIO_EMC_29,
  PinId::GPIO_EMC_30,
  PinId::GPIO_EMC_31,
  PinId::GPIO_EMC_32,
  PinId::GPIO_EMC_33,
  PinId::GPIO_EMC_34,
  PinId::GPIO_EMC_35,
  PinId::GPIO_EMC_36,
  PinId::GPIO_EMC_37,
  PinId::GPIO_EMC_38,
  PinId::GPIO_EMC_39,
  PinId::GPIO_EMC_40,
  PinId::GPIO_EMC_41,
  PinId::GPIO_SD_B0_00,
  PinId::GPIO_SD_B0_01,
  PinId::GPIO_SD_B0_02,
  PinId::GPIO_SD_B0_03,
  PinId::GPIO_SD_B0_04,
  PinId::GPIO_SD_B0_05,
  PinId::GPIO_SD_B1_00,
  PinId::GPIO_SD_B1_01,
  PinId::GPIO_SD_B1_02,
  PinId::GPIO_SD_B1_03,
  PinId::GPIO_SD_B1_04,
  PinId::GPIO_SD_B1_05,
  PinId::GPIO_SD_B1_06,
  PinId::GPIO_SD_B1_07,
  PinId::GPIO_SD_B1_08,
  PinId::GPIO_SD_B1_09,
  PinId::GPIO_SD_B1_10,
  PinId::GPIO_SD_B1_11,
}};
}
}
}
}
}
}
}
