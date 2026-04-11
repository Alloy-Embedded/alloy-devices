#pragma once

#include <array>

namespace nxp {
namespace imxrt1060 {
namespace generated {
struct ClockNodeDescriptor {
  const char* device;
  const char* node_id;
  const char* kind;
  const char* parent;
  const char* selector;
};
inline constexpr std::array<ClockNodeDescriptor, 26> kClockNodes = {{
  {"mimxrt1062", "clock-node:ccm-ccgr0", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr1", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr2", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr3", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr5", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr6", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:ccm-ccgr7", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:lpi2c-root", "peripheral-root", "clock-root", "selector:lpi2c-root"},
  {"mimxrt1062", "clock-node:lpspi-root", "peripheral-root", "clock-root", "selector:lpspi-root"},
  {"mimxrt1062", "clock-node:lpuart-root", "peripheral-root", "clock-root", "selector:lpuart-root"},
  {"mimxrt1062", "clock-node:osc24m", "clock-source", "clock-root", nullptr},
  {"mimxrt1062", "clock-node:pll3-sw-clk", "pll-source", "clock-root", nullptr},
  {"mimxrt1062", "clock-root", "root", nullptr, nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr0", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr1", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr2", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr3", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr5", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr6", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:ccm-ccgr7", "ccm-domain", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:lpi2c-root", "peripheral-root", "clock-root", "selector:lpi2c-root"},
  {"mimxrt1064", "clock-node:lpspi-root", "peripheral-root", "clock-root", "selector:lpspi-root"},
  {"mimxrt1064", "clock-node:lpuart-root", "peripheral-root", "clock-root", "selector:lpuart-root"},
  {"mimxrt1064", "clock-node:osc24m", "clock-source", "clock-root", nullptr},
  {"mimxrt1064", "clock-node:pll3-sw-clk", "pll-source", "clock-root", nullptr},
  {"mimxrt1064", "clock-root", "root", nullptr, nullptr},
}};

struct ClockSelectorDescriptor {
  const char* device;
  const char* selector_id;
  const char* parent_options;
  const char* register_target;
};
inline constexpr std::array<ClockSelectorDescriptor, 6> kClockSelectors = {{
  {"mimxrt1062", "selector:lpi2c-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CSCDR2.LPI2C_CLK_SEL"},
  {"mimxrt1062", "selector:lpspi-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CBCMR.LPSPI_CLK_SEL"},
  {"mimxrt1062", "selector:lpuart-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CSCDR1.UART_CLK_SEL"},
  {"mimxrt1064", "selector:lpi2c-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CSCDR2.LPI2C_CLK_SEL"},
  {"mimxrt1064", "selector:lpspi-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CBCMR.LPSPI_CLK_SEL"},
  {"mimxrt1064", "selector:lpuart-root", "clock-node:pll3-sw-clk,clock-node:osc24m", "CCM_CSCDR1.UART_CLK_SEL"},
}};

struct ClockGateDescriptor {
  const char* device;
  const char* gate_id;
  const char* peripheral;
  const char* enable_signal;
  const char* parent_node;
};
inline constexpr std::array<ClockGateDescriptor, 46> kClockGates = {{
  {"mimxrt1062", "gate:flexspi", "FLEXSPI", "CCM_CCGR6.CG5", "clock-node:ccm-ccgr6"},
  {"mimxrt1062", "gate:flexspi2", "FLEXSPI2", "CCM_CCGR7.CG3", "clock-node:ccm-ccgr7"},
  {"mimxrt1062", "gate:gpio1", "GPIO1", "CCM_CCGR1.CG13", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:gpio2", "GPIO2", "CCM_CCGR0.CG15", "clock-node:ccm-ccgr0"},
  {"mimxrt1062", "gate:gpio3", "GPIO3", "CCM_CCGR2.CG13", "clock-node:ccm-ccgr2"},
  {"mimxrt1062", "gate:gpio4", "GPIO4", "CCM_CCGR3.CG13", "clock-node:ccm-ccgr3"},
  {"mimxrt1062", "gate:gpio5", "GPIO5", "CCM_CCGR1.CG15", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:lpi2c1", "LPI2C1", "CCM_CCGR2.CG2", "clock-node:lpi2c-root"},
  {"mimxrt1062", "gate:lpi2c2", "LPI2C2", "CCM_CCGR2.CG3", "clock-node:ccm-ccgr2"},
  {"mimxrt1062", "gate:lpi2c3", "LPI2C3", "CCM_CCGR2.CG4", "clock-node:ccm-ccgr2"},
  {"mimxrt1062", "gate:lpi2c4", "LPI2C4", "CCM_CCGR6.CG12", "clock-node:ccm-ccgr6"},
  {"mimxrt1062", "gate:lpspi1", "LPSPI1", "CCM_CCGR1.CG0", "clock-node:lpspi-root"},
  {"mimxrt1062", "gate:lpspi2", "LPSPI2", "CCM_CCGR1.CG1", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:lpspi3", "LPSPI3", "CCM_CCGR1.CG2", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:lpspi4", "LPSPI4", "CCM_CCGR1.CG3", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:lpuart1", "LPUART1", "CCM_CCGR5.CG12", "clock-node:lpuart-root"},
  {"mimxrt1062", "gate:lpuart2", "LPUART2", "CCM_CCGR0.CG14", "clock-node:ccm-ccgr0"},
  {"mimxrt1062", "gate:lpuart3", "LPUART3", "CCM_CCGR0.CG6", "clock-node:ccm-ccgr0"},
  {"mimxrt1062", "gate:lpuart4", "LPUART4", "CCM_CCGR1.CG12", "clock-node:ccm-ccgr1"},
  {"mimxrt1062", "gate:lpuart5", "LPUART5", "CCM_CCGR3.CG1", "clock-node:ccm-ccgr3"},
  {"mimxrt1062", "gate:lpuart6", "LPUART6", "CCM_CCGR3.CG3", "clock-node:ccm-ccgr3"},
  {"mimxrt1062", "gate:lpuart7", "LPUART7", "CCM_CCGR5.CG13", "clock-node:ccm-ccgr5"},
  {"mimxrt1062", "gate:lpuart8", "LPUART8", "CCM_CCGR6.CG7", "clock-node:ccm-ccgr6"},
  {"mimxrt1064", "gate:flexspi", "FLEXSPI", "CCM_CCGR6.CG5", "clock-node:ccm-ccgr6"},
  {"mimxrt1064", "gate:flexspi2", "FLEXSPI2", "CCM_CCGR7.CG3", "clock-node:ccm-ccgr7"},
  {"mimxrt1064", "gate:gpio1", "GPIO1", "CCM_CCGR1.CG13", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:gpio2", "GPIO2", "CCM_CCGR0.CG15", "clock-node:ccm-ccgr0"},
  {"mimxrt1064", "gate:gpio3", "GPIO3", "CCM_CCGR2.CG13", "clock-node:ccm-ccgr2"},
  {"mimxrt1064", "gate:gpio4", "GPIO4", "CCM_CCGR3.CG13", "clock-node:ccm-ccgr3"},
  {"mimxrt1064", "gate:gpio5", "GPIO5", "CCM_CCGR1.CG15", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:lpi2c1", "LPI2C1", "CCM_CCGR2.CG2", "clock-node:lpi2c-root"},
  {"mimxrt1064", "gate:lpi2c2", "LPI2C2", "CCM_CCGR2.CG3", "clock-node:ccm-ccgr2"},
  {"mimxrt1064", "gate:lpi2c3", "LPI2C3", "CCM_CCGR2.CG4", "clock-node:ccm-ccgr2"},
  {"mimxrt1064", "gate:lpi2c4", "LPI2C4", "CCM_CCGR6.CG12", "clock-node:ccm-ccgr6"},
  {"mimxrt1064", "gate:lpspi1", "LPSPI1", "CCM_CCGR1.CG0", "clock-node:lpspi-root"},
  {"mimxrt1064", "gate:lpspi2", "LPSPI2", "CCM_CCGR1.CG1", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:lpspi3", "LPSPI3", "CCM_CCGR1.CG2", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:lpspi4", "LPSPI4", "CCM_CCGR1.CG3", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:lpuart1", "LPUART1", "CCM_CCGR5.CG12", "clock-node:lpuart-root"},
  {"mimxrt1064", "gate:lpuart2", "LPUART2", "CCM_CCGR0.CG14", "clock-node:ccm-ccgr0"},
  {"mimxrt1064", "gate:lpuart3", "LPUART3", "CCM_CCGR0.CG6", "clock-node:ccm-ccgr0"},
  {"mimxrt1064", "gate:lpuart4", "LPUART4", "CCM_CCGR1.CG12", "clock-node:ccm-ccgr1"},
  {"mimxrt1064", "gate:lpuart5", "LPUART5", "CCM_CCGR3.CG1", "clock-node:ccm-ccgr3"},
  {"mimxrt1064", "gate:lpuart6", "LPUART6", "CCM_CCGR3.CG3", "clock-node:ccm-ccgr3"},
  {"mimxrt1064", "gate:lpuart7", "LPUART7", "CCM_CCGR5.CG13", "clock-node:ccm-ccgr5"},
  {"mimxrt1064", "gate:lpuart8", "LPUART8", "CCM_CCGR6.CG7", "clock-node:ccm-ccgr6"},
}};

struct ResetDescriptor {
  const char* device;
  const char* reset_id;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 46> kPeripheralClockBindings = {{
  {"mimxrt1062", "FLEXSPI", "gate:flexspi", nullptr, nullptr},
  {"mimxrt1062", "FLEXSPI2", "gate:flexspi2", nullptr, nullptr},
  {"mimxrt1062", "GPIO1", "gate:gpio1", nullptr, nullptr},
  {"mimxrt1062", "GPIO2", "gate:gpio2", nullptr, nullptr},
  {"mimxrt1062", "GPIO3", "gate:gpio3", nullptr, nullptr},
  {"mimxrt1062", "GPIO4", "gate:gpio4", nullptr, nullptr},
  {"mimxrt1062", "GPIO5", "gate:gpio5", nullptr, nullptr},
  {"mimxrt1062", "LPI2C1", "gate:lpi2c1", nullptr, "selector:lpi2c-root"},
  {"mimxrt1062", "LPI2C2", "gate:lpi2c2", nullptr, nullptr},
  {"mimxrt1062", "LPI2C3", "gate:lpi2c3", nullptr, nullptr},
  {"mimxrt1062", "LPI2C4", "gate:lpi2c4", nullptr, nullptr},
  {"mimxrt1062", "LPSPI1", "gate:lpspi1", nullptr, "selector:lpspi-root"},
  {"mimxrt1062", "LPSPI2", "gate:lpspi2", nullptr, nullptr},
  {"mimxrt1062", "LPSPI3", "gate:lpspi3", nullptr, nullptr},
  {"mimxrt1062", "LPSPI4", "gate:lpspi4", nullptr, nullptr},
  {"mimxrt1062", "LPUART1", "gate:lpuart1", nullptr, "selector:lpuart-root"},
  {"mimxrt1062", "LPUART2", "gate:lpuart2", nullptr, nullptr},
  {"mimxrt1062", "LPUART3", "gate:lpuart3", nullptr, nullptr},
  {"mimxrt1062", "LPUART4", "gate:lpuart4", nullptr, nullptr},
  {"mimxrt1062", "LPUART5", "gate:lpuart5", nullptr, nullptr},
  {"mimxrt1062", "LPUART6", "gate:lpuart6", nullptr, nullptr},
  {"mimxrt1062", "LPUART7", "gate:lpuart7", nullptr, nullptr},
  {"mimxrt1062", "LPUART8", "gate:lpuart8", nullptr, nullptr},
  {"mimxrt1064", "FLEXSPI", "gate:flexspi", nullptr, nullptr},
  {"mimxrt1064", "FLEXSPI2", "gate:flexspi2", nullptr, nullptr},
  {"mimxrt1064", "GPIO1", "gate:gpio1", nullptr, nullptr},
  {"mimxrt1064", "GPIO2", "gate:gpio2", nullptr, nullptr},
  {"mimxrt1064", "GPIO3", "gate:gpio3", nullptr, nullptr},
  {"mimxrt1064", "GPIO4", "gate:gpio4", nullptr, nullptr},
  {"mimxrt1064", "GPIO5", "gate:gpio5", nullptr, nullptr},
  {"mimxrt1064", "LPI2C1", "gate:lpi2c1", nullptr, "selector:lpi2c-root"},
  {"mimxrt1064", "LPI2C2", "gate:lpi2c2", nullptr, nullptr},
  {"mimxrt1064", "LPI2C3", "gate:lpi2c3", nullptr, nullptr},
  {"mimxrt1064", "LPI2C4", "gate:lpi2c4", nullptr, nullptr},
  {"mimxrt1064", "LPSPI1", "gate:lpspi1", nullptr, "selector:lpspi-root"},
  {"mimxrt1064", "LPSPI2", "gate:lpspi2", nullptr, nullptr},
  {"mimxrt1064", "LPSPI3", "gate:lpspi3", nullptr, nullptr},
  {"mimxrt1064", "LPSPI4", "gate:lpspi4", nullptr, nullptr},
  {"mimxrt1064", "LPUART1", "gate:lpuart1", nullptr, "selector:lpuart-root"},
  {"mimxrt1064", "LPUART2", "gate:lpuart2", nullptr, nullptr},
  {"mimxrt1064", "LPUART3", "gate:lpuart3", nullptr, nullptr},
  {"mimxrt1064", "LPUART4", "gate:lpuart4", nullptr, nullptr},
  {"mimxrt1064", "LPUART5", "gate:lpuart5", nullptr, nullptr},
  {"mimxrt1064", "LPUART6", "gate:lpuart6", nullptr, nullptr},
  {"mimxrt1064", "LPUART7", "gate:lpuart7", nullptr, nullptr},
  {"mimxrt1064", "LPUART8", "gate:lpuart8", nullptr, nullptr},
}};
}
}
}
