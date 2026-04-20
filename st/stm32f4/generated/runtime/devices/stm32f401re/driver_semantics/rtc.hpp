#pragma once

#include <array>
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
struct RtcSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr bool kHasCalendar = false;
  static constexpr bool kHasAlarm = false;
  static constexpr bool kHasWriteProtection = false;
  static constexpr std::uint32_t kWriteProtectDisableKey0 = 0u;
  static constexpr std::uint32_t kWriteProtectDisableKey1 = 0u;
  static constexpr std::uint32_t kWriteProtectEnableKey = 0u;
  static constexpr RuntimeRegisterRef kControlRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kModeRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kStatusRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kTimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kDateRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kAlarmTimeRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kAlarmDateRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kInterruptEnableRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kInterruptDisableRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kInterruptMaskRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kClearRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kWriteProtectRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kPrescalerRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kHourModeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInitField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kInitReadyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kShadowBypassField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateTimeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateCalendarField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateAckField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAlarmEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAlarmInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSecondInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTimeEventInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCalendarEventInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusAlarmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusSecondField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusCalendarEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTamperErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearAlarmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearSecondField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearTimeEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearCalendarEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearTamperErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kWriteProtectKeyField = kInvalidFieldRef;
};

template<>
struct RtcSemanticTraits<PeripheralId::RTC> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_rtc_st_rtc2_v2_3;
  static constexpr bool kHasCalendar = true;
  static constexpr bool kHasAlarm = true;
  static constexpr bool kHasWriteProtection = true;
  static constexpr std::uint32_t kWriteProtectDisableKey0 = 0x000000CAu;
  static constexpr std::uint32_t kWriteProtectDisableKey1 = 0x00000053u;
  static constexpr std::uint32_t kWriteProtectEnableKey = 0x000000FFu;
  static constexpr RuntimeRegisterRef kControlRegister = RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true};
  static constexpr RuntimeRegisterRef kModeRegister = RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true};
  static constexpr RuntimeRegisterRef kStatusRegister = RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true};
  static constexpr RuntimeRegisterRef kTimeRegister = RuntimeRegisterRef{RegisterId::register_rtc_tr, 0x40002800u, 0u, true};
  static constexpr RuntimeRegisterRef kDateRegister = RuntimeRegisterRef{RegisterId::register_rtc_dr, 0x40002800u, 4u, true};
  static constexpr RuntimeRegisterRef kAlarmTimeRegister = RuntimeRegisterRef{RegisterId::register_rtc_alrmar, 0x40002800u, 28u, true};
  static constexpr RuntimeRegisterRef kAlarmDateRegister = RuntimeRegisterRef{RegisterId::register_rtc_alrmbr, 0x40002800u, 32u, true};
  static constexpr RuntimeRegisterRef kInterruptEnableRegister = RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true};
  static constexpr RuntimeRegisterRef kInterruptDisableRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kInterruptMaskRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kClearRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kWriteProtectRegister = RuntimeRegisterRef{RegisterId::register_rtc_wpr, 0x40002800u, 36u, true};
  static constexpr RuntimeRegisterRef kPrescalerRegister = RuntimeRegisterRef{RegisterId::register_rtc_prer, 0x40002800u, 16u, true};
  static constexpr RuntimeFieldRef kHourModeField = RuntimeFieldRef{FieldId::field_rtc_cr_fmt, RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kInitField = RuntimeFieldRef{FieldId::field_rtc_isr_init, RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kInitReadyField = RuntimeFieldRef{FieldId::field_rtc_isr_initf, RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true}, 6u, 1u, true};
  static constexpr RuntimeFieldRef kShadowBypassField = RuntimeFieldRef{FieldId::field_rtc_cr_bypshad, RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true}, 5u, 1u, true};
  static constexpr RuntimeFieldRef kUpdateTimeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateCalendarField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kUpdateAckField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kAlarmEnableField = RuntimeFieldRef{FieldId::field_rtc_cr_alrae, RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kAlarmInterruptEnableField = RuntimeFieldRef{FieldId::field_rtc_cr_alraie, RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true}, 12u, 1u, true};
  static constexpr RuntimeFieldRef kSecondInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTimeEventInterruptEnableField = RuntimeFieldRef{FieldId::field_rtc_cr_tsie, RuntimeRegisterRef{RegisterId::register_rtc_cr, 0x40002800u, 8u, true}, 15u, 1u, true};
  static constexpr RuntimeFieldRef kCalendarEventInterruptEnableField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusAlarmField = RuntimeFieldRef{FieldId::field_rtc_isr_alraf, RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true}, 8u, 1u, true};
  static constexpr RuntimeFieldRef kStatusSecondField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTimeEventField = RuntimeFieldRef{FieldId::field_rtc_isr_tsf, RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true}, 11u, 1u, true};
  static constexpr RuntimeFieldRef kStatusCalendarEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kStatusTamperErrorField = RuntimeFieldRef{FieldId::field_rtc_isr_tamp1f, RuntimeRegisterRef{RegisterId::register_rtc_isr, 0x40002800u, 12u, true}, 13u, 1u, true};
  static constexpr RuntimeFieldRef kClearAlarmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearSecondField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearTimeEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearCalendarEventField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kClearTamperErrorField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kWriteProtectKeyField = RuntimeFieldRef{FieldId::field_rtc_wpr_key, RuntimeRegisterRef{RegisterId::register_rtc_wpr, 0x40002800u, 36u, true}, 0u, 8u, true};
};

inline constexpr std::array<PeripheralId, 1> kRtcSemanticPeripherals = {{
  PeripheralId::RTC,
}};
}
}
}
}
}
}
}
