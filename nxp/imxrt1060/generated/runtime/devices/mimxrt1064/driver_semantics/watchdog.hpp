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
namespace mimxrt1064 {
namespace driver_semantics {
template<PeripheralId Id>
struct WatchdogSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr bool kHasWindow = false;
  static constexpr std::uint32_t kRequiredConfigValue = 0u;
  static constexpr std::uint32_t kStartKeyValue = 0u;
  static constexpr std::uint32_t kRefreshKeyValue = 0u;
  static constexpr std::uint32_t kUnlockKeyValue = 0u;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kConfigRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kReloadRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kWindowRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTimeoutField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kWindowField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kResetEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRequiredConfigField = kInvalidFieldRef;
};

template<>
struct WatchdogSemanticTraits<PeripheralId::RTWDOG> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_nxp_rtwdog;
  static constexpr bool kHasWindow = true;
  static constexpr std::uint32_t kRequiredConfigValue = 0x00000001u;
  static constexpr std::uint32_t kStartKeyValue = 0x00000000u;
  static constexpr std::uint32_t kRefreshKeyValue = 0x0000A602u;
  static constexpr std::uint32_t kUnlockKeyValue = 0x0000C520u;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kReloadRegister = RuntimeRegisterRef{RegisterId::register_rtwdog_toval, 0x400BC000u, 8u, true};
  static constexpr RuntimeRegisterRef kWindowRegister = RuntimeRegisterRef{RegisterId::register_rtwdog_win, 0x400BC000u, 12u, true};
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_rtwdog_cs_en, RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = RuntimeFieldRef{FieldId::field_rtwdog_cnt_cntlow, RuntimeRegisterRef{RegisterId::register_rtwdog_cnt, 0x400BC000u, 4u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kTimeoutField = RuntimeFieldRef{FieldId::field_rtwdog_toval_tovallow, RuntimeRegisterRef{RegisterId::register_rtwdog_toval, 0x400BC000u, 8u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kWindowField = RuntimeFieldRef{FieldId::field_rtwdog_win_winlow, RuntimeRegisterRef{RegisterId::register_rtwdog_win, 0x400BC000u, 12u, true}, 0u, 8u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_rtwdog_cs_pres, RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = RuntimeFieldRef{FieldId::field_rtwdog_cs_int, RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kResetEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = RuntimeFieldRef{FieldId::field_rtwdog_cs_flg, RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true}, 14u, 1u, true};
  static constexpr RuntimeFieldRef kStatusErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRequiredConfigField = RuntimeFieldRef{FieldId::field_rtwdog_cs_update, RuntimeRegisterRef{RegisterId::register_rtwdog_cs, 0x400BC000u, 0u, true}, 5u, 1u, true};
};

template<>
struct WatchdogSemanticTraits<PeripheralId::WDOG1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_nxp_wdog;
  static constexpr bool kHasWindow = true;
  static constexpr std::uint32_t kRequiredConfigValue = 0x00000000u;
  static constexpr std::uint32_t kStartKeyValue = 0x00000000u;
  static constexpr std::uint32_t kRefreshKeyValue = 0x00005555u;
  static constexpr std::uint32_t kUnlockKeyValue = 0x0000C520u;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_wdog1_wrsr, 0x400B8000u, 4u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kReloadRegister = RuntimeRegisterRef{RegisterId::register_wdog1_wsr, 0x400B8000u, 2u, true};
  static constexpr RuntimeRegisterRef kWindowRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_wdog1_wcr_wde, RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = RuntimeFieldRef{FieldId::field_wdog1_wsr_wsr, RuntimeRegisterRef{RegisterId::register_wdog1_wsr, 0x400B8000u, 2u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kTimeoutField = RuntimeFieldRef{FieldId::field_wdog1_wcr_wt, RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true}, 8u, 8u, true};
  static constexpr RuntimeFieldRef kWindowField = RuntimeFieldRef{FieldId::field_wdog1_wcr_wdw, RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = RuntimeFieldRef{FieldId::field_wdog1_wicr_wie, RuntimeRegisterRef{RegisterId::register_wdog1_wicr, 0x400B8000u, 6u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kResetEnableField = RuntimeFieldRef{FieldId::field_wdog1_wcr_srs, RuntimeRegisterRef{RegisterId::register_wdog1_wcr, 0x400B8000u, 0u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = RuntimeFieldRef{FieldId::field_wdog1_wrsr_tout, RuntimeRegisterRef{RegisterId::register_wdog1_wrsr, 0x400B8000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kStatusErrorField = RuntimeFieldRef{FieldId::field_wdog1_wrsr_sftw, RuntimeRegisterRef{RegisterId::register_wdog1_wrsr, 0x400B8000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kRequiredConfigField = kInvalidFieldRef;
};

template<>
struct WatchdogSemanticTraits<PeripheralId::WDOG2> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_nxp_wdog;
  static constexpr bool kHasWindow = true;
  static constexpr std::uint32_t kRequiredConfigValue = 0x00000000u;
  static constexpr std::uint32_t kStartKeyValue = 0x00000000u;
  static constexpr std::uint32_t kRefreshKeyValue = 0x00005555u;
  static constexpr std::uint32_t kUnlockKeyValue = 0x0000C520u;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_wdog2_wrsr, 0x400D0000u, 4u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kReloadRegister = RuntimeRegisterRef{RegisterId::register_wdog2_wsr, 0x400D0000u, 2u, true};
  static constexpr RuntimeRegisterRef kWindowRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_wdog2_wcr_wde, RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = RuntimeFieldRef{FieldId::field_wdog2_wsr_wsr, RuntimeRegisterRef{RegisterId::register_wdog2_wsr, 0x400D0000u, 2u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kTimeoutField = RuntimeFieldRef{FieldId::field_wdog2_wcr_wt, RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true}, 8u, 8u, true};
  static constexpr RuntimeFieldRef kWindowField = RuntimeFieldRef{FieldId::field_wdog2_wcr_wdw, RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPrescalerField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = RuntimeFieldRef{FieldId::field_wdog2_wicr_wie, RuntimeRegisterRef{RegisterId::register_wdog2_wicr, 0x400D0000u, 6u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kResetEnableField = RuntimeFieldRef{FieldId::field_wdog2_wcr_srs, RuntimeRegisterRef{RegisterId::register_wdog2_wcr, 0x400D0000u, 0u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = RuntimeFieldRef{FieldId::field_wdog2_wrsr_tout, RuntimeRegisterRef{RegisterId::register_wdog2_wrsr, 0x400D0000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kStatusErrorField = RuntimeFieldRef{FieldId::field_wdog2_wrsr_sftw, RuntimeRegisterRef{RegisterId::register_wdog2_wrsr, 0x400D0000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kRequiredConfigField = kInvalidFieldRef;
};

inline constexpr std::array<PeripheralId, 3> kWatchdogSemanticPeripherals = {{
  PeripheralId::RTWDOG,
  PeripheralId::WDOG1,
  PeripheralId::WDOG2,
}};
}
}
}
}
}
}
}
