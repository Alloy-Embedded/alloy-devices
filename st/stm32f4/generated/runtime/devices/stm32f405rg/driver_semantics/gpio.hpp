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
  static constexpr RuntimeFieldRef kSpeedField = kInvalidFieldRef;
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
struct GpioSemanticTraits<PinId::PA0> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder0, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot0, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr0, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr0, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 0u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder1, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot1, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr1, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr1, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 2u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 1u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 2u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder10, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot10, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr10, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr10, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 20u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 10u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder11, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot11, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr11, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr11, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 22u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 11u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder12, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot12, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr12, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr12, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 24u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 12u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder13, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot13, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr13, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr13, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 26u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 13u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder14, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot14, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr14, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr14, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 28u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 14u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder15, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot15, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr15, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr15, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 30u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 15u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder2, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot2, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr2, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr2, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 4u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 2u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 2u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder3, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot3, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr3, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr3, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 6u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 3u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 2u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder4, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot4, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr4, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr4, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 8u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 4u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{5u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder5, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot5, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr5, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr5, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 10u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 5u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder6, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot6, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr6, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr6, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 12u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 6u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 2u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder7, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot7, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr7, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr7, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 14u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 7u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 2u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder8, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot8, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr8, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr8, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 16u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 8u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PA9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioa_moder_moder9, RuntimeRegisterRef{RegisterId::register_gpioa_moder, 0x40020000u, 0u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioa_otyper_ot9, RuntimeRegisterRef{RegisterId::register_gpioa_otyper, 0x40020000u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioa_pupdr_pupdr9, RuntimeRegisterRef{RegisterId::register_gpioa_pupdr, 0x40020000u, 12u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioa_ospeedr_ospeedr9, RuntimeRegisterRef{RegisterId::register_gpioa_ospeedr, 0x40020000u, 8u, true}, 18u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000000u;
  static constexpr std::uint32_t kPinIndex = 9u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB0> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder0, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot0, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr0, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr0, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 0u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder1, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot1, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr1, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr1, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 2u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 1u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder10, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot10, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr10, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr10, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 20u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 10u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 4u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder11, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot11, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr11, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr11, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 22u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 11u;
  static constexpr std::uint8_t kMaxAltFunction = 4u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 4u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder12, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot12, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr12, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr12, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 24u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 12u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{1u, 4u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder13, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot13, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr13, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr13, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 26u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 13u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder14, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot14, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr14, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr14, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 28u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 14u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder15, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot15, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr15, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr15, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 30u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 15u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder2, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot2, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr2, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr2, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 4u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 2u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder3, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot3, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr3, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr3, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 6u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 3u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{1u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder4, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot4, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr4, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr4, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 8u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 4u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{2u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder5, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot5, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr5, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr5, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 10u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 5u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{2u, 4u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder6, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot6, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr6, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr6, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 12u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 6u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{2u, 4u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder7, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot7, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr7, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr7, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 14u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 7u;
  static constexpr std::uint8_t kMaxAltFunction = 7u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{2u, 4u, 7u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder8, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot8, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr8, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr8, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 16u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 8u;
  static constexpr std::uint8_t kMaxAltFunction = 4u;
  static constexpr std::array<std::uint8_t, 2> kValidAltFunctions = {{2u, 4u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PB9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiob_moder_moder9, RuntimeRegisterRef{RegisterId::register_gpiob_moder, 0x40020400u, 0u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiob_otyper_ot9, RuntimeRegisterRef{RegisterId::register_gpiob_otyper, 0x40020400u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiob_pupdr_pupdr9, RuntimeRegisterRef{RegisterId::register_gpiob_pupdr, 0x40020400u, 12u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiob_ospeedr_ospeedr9, RuntimeRegisterRef{RegisterId::register_gpiob_ospeedr, 0x40020400u, 8u, true}, 18u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000400u;
  static constexpr std::uint32_t kPinIndex = 9u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 3> kValidAltFunctions = {{2u, 4u, 5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC0> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder0, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot0, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr0, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr0, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 0u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder1, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot1, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr1, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr1, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 2u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 1u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC10> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder10, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot10, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 10u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr10, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 20u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr10, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 20u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 10u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC11> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder11, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot11, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr11, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 22u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr11, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 22u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 11u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC12> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder12, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot12, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr12, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 24u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr12, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 24u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 12u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC13> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder13, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot13, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr13, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 26u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr13, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 26u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 13u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC14> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder14, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot14, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr14, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 28u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr14, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 28u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 14u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC15> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder15, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot15, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr15, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 30u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr15, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 30u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 15u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder2, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot2, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr2, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr2, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 4u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 2u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC3> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder3, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot3, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 3u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr3, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 6u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr3, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 6u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 3u;
  static constexpr std::uint8_t kMaxAltFunction = 5u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{5u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC4> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder4, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot4, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr4, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 8u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr4, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 8u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 4u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC5> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder5, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot5, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr5, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 10u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr5, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 10u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 5u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC6> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder6, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot6, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr6, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 12u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr6, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 12u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 6u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC7> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder7, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot7, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr7, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 14u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr7, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 14u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 7u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC8> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder8, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot8, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr8, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 16u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr8, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 16u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 8u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PC9> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioc_moder_moder9, RuntimeRegisterRef{RegisterId::register_gpioc_moder, 0x40020800u, 0u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioc_otyper_ot9, RuntimeRegisterRef{RegisterId::register_gpioc_otyper, 0x40020800u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioc_pupdr_pupdr9, RuntimeRegisterRef{RegisterId::register_gpioc_pupdr, 0x40020800u, 12u, true}, 18u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioc_ospeedr_ospeedr9, RuntimeRegisterRef{RegisterId::register_gpioc_ospeedr, 0x40020800u, 8u, true}, 18u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000800u;
  static constexpr std::uint32_t kPinIndex = 9u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PD2> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpiod_moder_moder2, RuntimeRegisterRef{RegisterId::register_gpiod_moder, 0x40020C00u, 0u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpiod_otyper_ot2, RuntimeRegisterRef{RegisterId::register_gpiod_otyper, 0x40020C00u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpiod_pupdr_pupdr2, RuntimeRegisterRef{RegisterId::register_gpiod_pupdr, 0x40020C00u, 12u, true}, 4u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpiod_ospeedr_ospeedr2, RuntimeRegisterRef{RegisterId::register_gpiod_ospeedr, 0x40020C00u, 8u, true}, 4u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00000c00u;
  static constexpr std::uint32_t kPinIndex = 2u;
  static constexpr std::uint8_t kMaxAltFunction = 2u;
  static constexpr std::array<std::uint8_t, 1> kValidAltFunctions = {{2u}};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PH0> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioh_moder_moder0, RuntimeRegisterRef{RegisterId::register_gpioh_moder, 0x40021C00u, 0u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioh_otyper_ot0, RuntimeRegisterRef{RegisterId::register_gpioh_otyper, 0x40021C00u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioh_pupdr_pupdr0, RuntimeRegisterRef{RegisterId::register_gpioh_pupdr, 0x40021C00u, 12u, true}, 0u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioh_ospeedr_ospeedr0, RuntimeRegisterRef{RegisterId::register_gpioh_ospeedr, 0x40021C00u, 8u, true}, 0u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00001c00u;
  static constexpr std::uint32_t kPinIndex = 0u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

template<>
struct GpioSemanticTraits<PinId::PH1> {
  static constexpr bool kPresent = true;
  static constexpr PeripheralId kPeripheralId = PeripheralId::none;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr std::uint32_t kLineIndex = 0u;
  static constexpr RuntimeFieldRef kModeField = RuntimeFieldRef{FieldId::field_gpioh_moder_moder1, RuntimeRegisterRef{RegisterId::register_gpioh_moder, 0x40021C00u, 0u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kDirectionField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kOutputTypeField = RuntimeFieldRef{FieldId::field_gpioh_otyper_ot1, RuntimeRegisterRef{RegisterId::register_gpioh_otyper, 0x40021C00u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPullField = RuntimeFieldRef{FieldId::field_gpioh_pupdr_pupdr1, RuntimeRegisterRef{RegisterId::register_gpioh_pupdr, 0x40021C00u, 12u, true}, 2u, 2u, true};
  static constexpr RuntimeFieldRef kSpeedField = RuntimeFieldRef{FieldId::field_gpioh_ospeedr_ospeedr1, RuntimeRegisterRef{RegisterId::register_gpioh_ospeedr, 0x40021C00u, 8u, true}, 2u, 2u, true};
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
  static constexpr std::uint32_t kPortOffset = 0x00001c00u;
  static constexpr std::uint32_t kPinIndex = 1u;
  static constexpr std::uint8_t kMaxAltFunction = 0u;
  static constexpr std::array<std::uint8_t, 0> kValidAltFunctions = {};
  static constexpr bool kIsInputOnly = false;
};

inline constexpr std::array<PinId, 51> kGpioSemanticPins = {{
  PinId::PA0,
  PinId::PA1,
  PinId::PA10,
  PinId::PA11,
  PinId::PA12,
  PinId::PA13,
  PinId::PA14,
  PinId::PA15,
  PinId::PA2,
  PinId::PA3,
  PinId::PA4,
  PinId::PA5,
  PinId::PA6,
  PinId::PA7,
  PinId::PA8,
  PinId::PA9,
  PinId::PB0,
  PinId::PB1,
  PinId::PB10,
  PinId::PB11,
  PinId::PB12,
  PinId::PB13,
  PinId::PB14,
  PinId::PB15,
  PinId::PB2,
  PinId::PB3,
  PinId::PB4,
  PinId::PB5,
  PinId::PB6,
  PinId::PB7,
  PinId::PB8,
  PinId::PB9,
  PinId::PC0,
  PinId::PC1,
  PinId::PC10,
  PinId::PC11,
  PinId::PC12,
  PinId::PC13,
  PinId::PC14,
  PinId::PC15,
  PinId::PC2,
  PinId::PC3,
  PinId::PC4,
  PinId::PC5,
  PinId::PC6,
  PinId::PC7,
  PinId::PC8,
  PinId::PC9,
  PinId::PD2,
  PinId::PH0,
  PinId::PH1,
}};
}
}
}
}
}
}
}
