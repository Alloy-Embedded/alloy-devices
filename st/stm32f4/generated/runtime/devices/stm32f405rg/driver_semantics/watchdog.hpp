#pragma once

#include <array>
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
struct WatchdogSemanticTraits<PeripheralId::IWDG> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_st_iwdg1_v1_1;
  static constexpr bool kHasWindow = false;
  static constexpr std::uint32_t kRequiredConfigValue = 0x00000000u;
  static constexpr std::uint32_t kStartKeyValue = 0x0000CCCCu;
  static constexpr std::uint32_t kRefreshKeyValue = 0x0000AAAAu;
  static constexpr std::uint32_t kUnlockKeyValue = 0x00005555u;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_iwdg_kr, 0x40003000u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_iwdg_sr, 0x40003000u, 12u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_iwdg_pr, 0x40003000u, 4u, true};
  static constexpr RuntimeRegisterRef kReloadRegister = RuntimeRegisterRef{RegisterId::register_iwdg_rlr, 0x40003000u, 8u, true};
  static constexpr RuntimeRegisterRef kWindowRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = RuntimeFieldRef{FieldId::field_iwdg_kr_key, RuntimeRegisterRef{RegisterId::register_iwdg_kr, 0x40003000u, 0u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kTimeoutField = RuntimeFieldRef{FieldId::field_iwdg_rlr_rl, RuntimeRegisterRef{RegisterId::register_iwdg_rlr, 0x40003000u, 8u, true}, 0u, 12u, true};
  static constexpr RuntimeFieldRef kWindowField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::field_iwdg_pr_pr, RuntimeRegisterRef{RegisterId::register_iwdg_pr, 0x40003000u, 4u, true}, 0u, 3u, true};
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kResetEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = RuntimeFieldRef{FieldId::field_iwdg_sr_pvu, RuntimeRegisterRef{RegisterId::register_iwdg_sr, 0x40003000u, 12u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = RuntimeFieldRef{FieldId::field_iwdg_sr_rvu, RuntimeRegisterRef{RegisterId::register_iwdg_sr, 0x40003000u, 12u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRequiredConfigField = kInvalidFieldRef;
};

template<>
struct WatchdogSemanticTraits<PeripheralId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_watchdog_st_wwdg1_v1_0;
  static constexpr bool kHasWindow = true;
  static constexpr std::uint32_t kRequiredConfigValue = 0x00000000u;
  static constexpr std::uint32_t kStartKeyValue = 0x00000000u;
  static constexpr std::uint32_t kRefreshKeyValue = 0x00000000u;
  static constexpr std::uint32_t kUnlockKeyValue = 0x00000000u;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_wwdg_cr, 0x40002C00u, 0u, true};
  static constexpr RuntimeRegisterRef kConfigRegister = RuntimeRegisterRef{RegisterId::register_wwdg_cfr, 0x40002C00u, 4u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_wwdg_sr, 0x40002C00u, 8u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kReloadRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kWindowRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kEnableField = RuntimeFieldRef{FieldId::field_wwdg_cr_wdga, RuntimeRegisterRef{RegisterId::register_wwdg_cr, 0x40002C00u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kDisableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRestartField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kKeyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTimeoutField = RuntimeFieldRef{FieldId::field_wwdg_cr_t, RuntimeRegisterRef{RegisterId::register_wwdg_cr, 0x40002C00u, 0u, true}, 0u, 7u, true};
  static constexpr RuntimeFieldRef kWindowField = RuntimeFieldRef{FieldId::field_wwdg_cfr_w, RuntimeRegisterRef{RegisterId::register_wwdg_cfr, 0x40002C00u, 4u, true}, 0u, 7u, true};
  static constexpr RuntimeFieldRef kPrescalerField = RuntimeFieldRef{FieldId::none, RuntimeRegisterRef{RegisterId::register_wwdg_cfr, 0x40002C00u, 4u, true}, 7u, 2u, true};
  static constexpr RuntimeFieldRef kEarlyWarningInterruptEnableField = RuntimeFieldRef{FieldId::field_wwdg_cfr_ewi, RuntimeRegisterRef{RegisterId::register_wwdg_cfr, 0x40002C00u, 4u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kResetEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusPrescalerUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusReloadUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusWindowUpdateField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeoutField = RuntimeFieldRef{FieldId::field_wwdg_sr_ewif, RuntimeRegisterRef{RegisterId::register_wwdg_sr, 0x40002C00u, 8u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kStatusErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRequiredConfigField = kInvalidFieldRef;
};

inline constexpr std::array<PeripheralId, 2> kWatchdogSemanticPeripherals = {{
  PeripheralId::IWDG,
  PeripheralId::WWDG,
}};
}
}
}
}
}
}
}
