#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class LowPowerModeId : std::uint16_t {
  none,
  sleep,
  deep_sleep,
};

struct LowPowerModeDescriptor {
  LowPowerModeId mode_id;
  bool uses_sleepdeep;
};

template<LowPowerModeId Id>
struct LowPowerModeTraits {
  static constexpr bool kPresent = false;
  static constexpr bool kUsesSleepdeep = false;
};

template<>
struct LowPowerModeTraits<LowPowerModeId::sleep> {
  static constexpr bool kPresent = true;
  static constexpr bool kUsesSleepdeep = false;
};

template<>
struct LowPowerModeTraits<LowPowerModeId::deep_sleep> {
  static constexpr bool kPresent = true;
  static constexpr bool kUsesSleepdeep = true;
};

inline constexpr std::array<LowPowerModeDescriptor, 2> kLowPowerModes = {{
  {LowPowerModeId::sleep, false},
  {LowPowerModeId::deep_sleep, true},
}};

enum class WakeupTagId : std::uint16_t {
  none,
};

enum class WakeupSourceId : std::uint16_t {
  none,
};

struct WakeupSourceDescriptor {
  WakeupSourceId wakeup_source_id;
  PinId pin_id;
  WakeupTagId tag_id;
};

template<WakeupSourceId Id>
struct WakeupSourceTraits {
  static constexpr bool kPresent = false;
  static constexpr PinId kPinId = PinId::none;
  static constexpr WakeupTagId kTagId = WakeupTagId::none;
};

template<PinId Pin>
struct WakeupPinTraits {
  static constexpr bool kPresent = false;
  static constexpr WakeupSourceId kWakeupSourceId = WakeupSourceId::none;
  static constexpr WakeupTagId kTagId = WakeupTagId::none;
};

inline constexpr std::array<WakeupSourceDescriptor, 0> kWakeupSources = {};
}
}
}
}
}
}
