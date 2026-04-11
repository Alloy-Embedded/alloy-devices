#pragma once

#include <array>

namespace nxp {
namespace imxrt1060 {
namespace generated {
enum class ClockNodeId : std::uint16_t {
  mimxrt1062_clock_node_ccm_ccgr0,
  mimxrt1062_clock_node_ccm_ccgr1,
  mimxrt1062_clock_node_ccm_ccgr2,
  mimxrt1062_clock_node_ccm_ccgr3,
  mimxrt1062_clock_node_ccm_ccgr5,
  mimxrt1062_clock_node_ccm_ccgr6,
  mimxrt1062_clock_node_ccm_ccgr7,
  mimxrt1062_clock_node_lpi2c_root,
  mimxrt1062_clock_node_lpspi_root,
  mimxrt1062_clock_node_lpuart_root,
  mimxrt1062_clock_node_osc24m,
  mimxrt1062_clock_node_pll3_sw_clk,
  mimxrt1062_clock_root,
  mimxrt1064_clock_node_ccm_ccgr0,
  mimxrt1064_clock_node_ccm_ccgr1,
  mimxrt1064_clock_node_ccm_ccgr2,
  mimxrt1064_clock_node_ccm_ccgr3,
  mimxrt1064_clock_node_ccm_ccgr5,
  mimxrt1064_clock_node_ccm_ccgr6,
  mimxrt1064_clock_node_ccm_ccgr7,
  mimxrt1064_clock_node_lpi2c_root,
  mimxrt1064_clock_node_lpspi_root,
  mimxrt1064_clock_node_lpuart_root,
  mimxrt1064_clock_node_osc24m,
  mimxrt1064_clock_node_pll3_sw_clk,
  mimxrt1064_clock_root,
};

enum class ClockSelectorId : std::uint16_t {
  mimxrt1062_selector_lpi2c_root,
  mimxrt1062_selector_lpspi_root,
  mimxrt1062_selector_lpuart_root,
  mimxrt1064_selector_lpi2c_root,
  mimxrt1064_selector_lpspi_root,
  mimxrt1064_selector_lpuart_root,
};

enum class ClockGateId : std::uint16_t {
  mimxrt1062_gate_flexspi,
  mimxrt1062_gate_flexspi2,
  mimxrt1062_gate_gpio1,
  mimxrt1062_gate_gpio2,
  mimxrt1062_gate_gpio3,
  mimxrt1062_gate_gpio4,
  mimxrt1062_gate_gpio5,
  mimxrt1062_gate_lpi2c1,
  mimxrt1062_gate_lpi2c2,
  mimxrt1062_gate_lpi2c3,
  mimxrt1062_gate_lpi2c4,
  mimxrt1062_gate_lpspi1,
  mimxrt1062_gate_lpspi2,
  mimxrt1062_gate_lpspi3,
  mimxrt1062_gate_lpspi4,
  mimxrt1062_gate_lpuart1,
  mimxrt1062_gate_lpuart2,
  mimxrt1062_gate_lpuart3,
  mimxrt1062_gate_lpuart4,
  mimxrt1062_gate_lpuart5,
  mimxrt1062_gate_lpuart6,
  mimxrt1062_gate_lpuart7,
  mimxrt1062_gate_lpuart8,
  mimxrt1064_gate_flexspi,
  mimxrt1064_gate_flexspi2,
  mimxrt1064_gate_gpio1,
  mimxrt1064_gate_gpio2,
  mimxrt1064_gate_gpio3,
  mimxrt1064_gate_gpio4,
  mimxrt1064_gate_gpio5,
  mimxrt1064_gate_lpi2c1,
  mimxrt1064_gate_lpi2c2,
  mimxrt1064_gate_lpi2c3,
  mimxrt1064_gate_lpi2c4,
  mimxrt1064_gate_lpspi1,
  mimxrt1064_gate_lpspi2,
  mimxrt1064_gate_lpspi3,
  mimxrt1064_gate_lpspi4,
  mimxrt1064_gate_lpuart1,
  mimxrt1064_gate_lpuart2,
  mimxrt1064_gate_lpuart3,
  mimxrt1064_gate_lpuart4,
  mimxrt1064_gate_lpuart5,
  mimxrt1064_gate_lpuart6,
  mimxrt1064_gate_lpuart7,
  mimxrt1064_gate_lpuart8,
};

enum class ResetId : std::uint16_t {
  none,
};

struct ClockNodeDescriptor {
  const char* device;
  ClockNodeId node_id;
  const char* node_name;
  const char* kind;
  int parent_index;
  int selector_index;
};
inline constexpr std::array<ClockNodeDescriptor, 26> kClockNodes = {{
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr0, "clock-node:ccm-ccgr0", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr1, "clock-node:ccm-ccgr1", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr2, "clock-node:ccm-ccgr2", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr3, "clock-node:ccm-ccgr3", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr5, "clock-node:ccm-ccgr5", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr6, "clock-node:ccm-ccgr6", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_ccm_ccgr7, "clock-node:ccm-ccgr7", "ccm-domain", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_lpi2c_root, "clock-node:lpi2c-root", "peripheral-root", 12, 0},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_lpspi_root, "clock-node:lpspi-root", "peripheral-root", 12, 1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_lpuart_root, "clock-node:lpuart-root", "peripheral-root", 12, 2},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_osc24m, "clock-node:osc24m", "clock-source", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_node_pll3_sw_clk, "clock-node:pll3-sw-clk", "pll-source", 12, -1},
  {"mimxrt1062", ClockNodeId::mimxrt1062_clock_root, "clock-root", "root", -1, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr0, "clock-node:ccm-ccgr0", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr1, "clock-node:ccm-ccgr1", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr2, "clock-node:ccm-ccgr2", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr3, "clock-node:ccm-ccgr3", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr5, "clock-node:ccm-ccgr5", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr6, "clock-node:ccm-ccgr6", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_ccm_ccgr7, "clock-node:ccm-ccgr7", "ccm-domain", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_lpi2c_root, "clock-node:lpi2c-root", "peripheral-root", 25, 3},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_lpspi_root, "clock-node:lpspi-root", "peripheral-root", 25, 4},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_lpuart_root, "clock-node:lpuart-root", "peripheral-root", 25, 5},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_osc24m, "clock-node:osc24m", "clock-source", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_node_pll3_sw_clk, "clock-node:pll3-sw-clk", "pll-source", 25, -1},
  {"mimxrt1064", ClockNodeId::mimxrt1064_clock_root, "clock-root", "root", -1, -1},
}};

struct ClockSelectorDescriptor {
  const char* device;
  ClockSelectorId selector_id;
  const char* selector_name;
  std::uint16_t parent_option_offset;
  std::uint16_t parent_option_count;
  const char* register_target;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockSelectorDescriptor, 6> kClockSelectors = {{
  {"mimxrt1062", ClockSelectorId::mimxrt1062_selector_lpi2c_root, "selector:lpi2c-root", 0u, 2u, "CCM_CSCDR2.LPI2C_CLK_SEL", "CCM", "CSCDR2", 56, "register:ccm:cscdr2", "field:ccm:cscdr2:lpi2c-clk-sel"},
  {"mimxrt1062", ClockSelectorId::mimxrt1062_selector_lpspi_root, "selector:lpspi-root", 2u, 2u, "CCM_CBCMR.LPSPI_CLK_SEL", "CCM", "CBCMR", 24, "register:ccm:cbcmr", "field:ccm:cbcmr:lpspi-clk-sel"},
  {"mimxrt1062", ClockSelectorId::mimxrt1062_selector_lpuart_root, "selector:lpuart-root", 4u, 2u, "CCM_CSCDR1.UART_CLK_SEL", "CCM", "CSCDR1", 36, "register:ccm:cscdr1", "field:ccm:cscdr1:uart-clk-sel"},
  {"mimxrt1064", ClockSelectorId::mimxrt1064_selector_lpi2c_root, "selector:lpi2c-root", 6u, 2u, "CCM_CSCDR2.LPI2C_CLK_SEL", "CCM", "CSCDR2", 56, "register:ccm:cscdr2", "field:ccm:cscdr2:lpi2c-clk-sel"},
  {"mimxrt1064", ClockSelectorId::mimxrt1064_selector_lpspi_root, "selector:lpspi-root", 8u, 2u, "CCM_CBCMR.LPSPI_CLK_SEL", "CCM", "CBCMR", 24, "register:ccm:cbcmr", "field:ccm:cbcmr:lpspi-clk-sel"},
  {"mimxrt1064", ClockSelectorId::mimxrt1064_selector_lpuart_root, "selector:lpuart-root", 10u, 2u, "CCM_CSCDR1.UART_CLK_SEL", "CCM", "CSCDR1", 36, "register:ccm:cscdr1", "field:ccm:cscdr1:uart-clk-sel"},
}};

struct ClockSelectorParentOption {
  ClockSelectorId selector_id;
  ClockNodeId parent_node_id;
};
inline constexpr std::array<ClockSelectorParentOption, 12> kClockSelectorParentOptions = {{
  {ClockSelectorId::mimxrt1062_selector_lpi2c_root, ClockNodeId::mimxrt1062_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1062_selector_lpi2c_root, ClockNodeId::mimxrt1062_clock_node_osc24m},
  {ClockSelectorId::mimxrt1062_selector_lpspi_root, ClockNodeId::mimxrt1062_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1062_selector_lpspi_root, ClockNodeId::mimxrt1062_clock_node_osc24m},
  {ClockSelectorId::mimxrt1062_selector_lpuart_root, ClockNodeId::mimxrt1062_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1062_selector_lpuart_root, ClockNodeId::mimxrt1062_clock_node_osc24m},
  {ClockSelectorId::mimxrt1064_selector_lpi2c_root, ClockNodeId::mimxrt1064_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1064_selector_lpi2c_root, ClockNodeId::mimxrt1064_clock_node_osc24m},
  {ClockSelectorId::mimxrt1064_selector_lpspi_root, ClockNodeId::mimxrt1064_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1064_selector_lpspi_root, ClockNodeId::mimxrt1064_clock_node_osc24m},
  {ClockSelectorId::mimxrt1064_selector_lpuart_root, ClockNodeId::mimxrt1064_clock_node_pll3_sw_clk},
  {ClockSelectorId::mimxrt1064_selector_lpuart_root, ClockNodeId::mimxrt1064_clock_node_osc24m},
}};

struct ClockGateDescriptor {
  const char* device;
  ClockGateId gate_id;
  const char* gate_name;
  const char* peripheral;
  int parent_node_index;
  const char* enable_signal;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ClockGateDescriptor, 46> kClockGates = {{
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_flexspi, "gate:flexspi", "FLEXSPI", 5, "CCM_CCGR6.CG5", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg5"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_flexspi2, "gate:flexspi2", "FLEXSPI2", 6, "CCM_CCGR7.CG3", "CCM", "CCGR7", 132, "register:ccm:ccgr7", "field:ccm:ccgr7:cg3"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_gpio1, "gate:gpio1", "GPIO1", 1, "CCM_CCGR1.CG13", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg13"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_gpio2, "gate:gpio2", "GPIO2", 0, "CCM_CCGR0.CG15", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg15"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_gpio3, "gate:gpio3", "GPIO3", 2, "CCM_CCGR2.CG13", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg13"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_gpio4, "gate:gpio4", "GPIO4", 3, "CCM_CCGR3.CG13", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg13"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_gpio5, "gate:gpio5", "GPIO5", 1, "CCM_CCGR1.CG15", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg15"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpi2c1, "gate:lpi2c1", "LPI2C1", 7, "CCM_CCGR2.CG2", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg2"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpi2c2, "gate:lpi2c2", "LPI2C2", 2, "CCM_CCGR2.CG3", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg3"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpi2c3, "gate:lpi2c3", "LPI2C3", 2, "CCM_CCGR2.CG4", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg4"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpi2c4, "gate:lpi2c4", "LPI2C4", 5, "CCM_CCGR6.CG12", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg12"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpspi1, "gate:lpspi1", "LPSPI1", 8, "CCM_CCGR1.CG0", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg0"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpspi2, "gate:lpspi2", "LPSPI2", 1, "CCM_CCGR1.CG1", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg1"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpspi3, "gate:lpspi3", "LPSPI3", 1, "CCM_CCGR1.CG2", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg2"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpspi4, "gate:lpspi4", "LPSPI4", 1, "CCM_CCGR1.CG3", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg3"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart1, "gate:lpuart1", "LPUART1", 9, "CCM_CCGR5.CG12", "CCM", "CCGR5", 124, "register:ccm:ccgr5", "field:ccm:ccgr5:cg12"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart2, "gate:lpuart2", "LPUART2", 0, "CCM_CCGR0.CG14", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg14"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart3, "gate:lpuart3", "LPUART3", 0, "CCM_CCGR0.CG6", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg6"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart4, "gate:lpuart4", "LPUART4", 1, "CCM_CCGR1.CG12", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg12"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart5, "gate:lpuart5", "LPUART5", 3, "CCM_CCGR3.CG1", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg1"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart6, "gate:lpuart6", "LPUART6", 3, "CCM_CCGR3.CG3", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg3"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart7, "gate:lpuart7", "LPUART7", 4, "CCM_CCGR5.CG13", "CCM", "CCGR5", 124, "register:ccm:ccgr5", "field:ccm:ccgr5:cg13"},
  {"mimxrt1062", ClockGateId::mimxrt1062_gate_lpuart8, "gate:lpuart8", "LPUART8", 5, "CCM_CCGR6.CG7", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg7"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_flexspi, "gate:flexspi", "FLEXSPI", 18, "CCM_CCGR6.CG5", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg5"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_flexspi2, "gate:flexspi2", "FLEXSPI2", 19, "CCM_CCGR7.CG3", "CCM", "CCGR7", 132, "register:ccm:ccgr7", "field:ccm:ccgr7:cg3"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_gpio1, "gate:gpio1", "GPIO1", 14, "CCM_CCGR1.CG13", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg13"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_gpio2, "gate:gpio2", "GPIO2", 13, "CCM_CCGR0.CG15", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg15"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_gpio3, "gate:gpio3", "GPIO3", 15, "CCM_CCGR2.CG13", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg13"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_gpio4, "gate:gpio4", "GPIO4", 16, "CCM_CCGR3.CG13", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg13"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_gpio5, "gate:gpio5", "GPIO5", 14, "CCM_CCGR1.CG15", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg15"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpi2c1, "gate:lpi2c1", "LPI2C1", 20, "CCM_CCGR2.CG2", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg2"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpi2c2, "gate:lpi2c2", "LPI2C2", 15, "CCM_CCGR2.CG3", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg3"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpi2c3, "gate:lpi2c3", "LPI2C3", 15, "CCM_CCGR2.CG4", "CCM", "CCGR2", 112, "register:ccm:ccgr2", "field:ccm:ccgr2:cg4"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpi2c4, "gate:lpi2c4", "LPI2C4", 18, "CCM_CCGR6.CG12", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg12"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpspi1, "gate:lpspi1", "LPSPI1", 21, "CCM_CCGR1.CG0", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg0"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpspi2, "gate:lpspi2", "LPSPI2", 14, "CCM_CCGR1.CG1", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg1"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpspi3, "gate:lpspi3", "LPSPI3", 14, "CCM_CCGR1.CG2", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg2"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpspi4, "gate:lpspi4", "LPSPI4", 14, "CCM_CCGR1.CG3", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg3"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart1, "gate:lpuart1", "LPUART1", 22, "CCM_CCGR5.CG12", "CCM", "CCGR5", 124, "register:ccm:ccgr5", "field:ccm:ccgr5:cg12"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart2, "gate:lpuart2", "LPUART2", 13, "CCM_CCGR0.CG14", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg14"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart3, "gate:lpuart3", "LPUART3", 13, "CCM_CCGR0.CG6", "CCM", "CCGR0", 104, "register:ccm:ccgr0", "field:ccm:ccgr0:cg6"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart4, "gate:lpuart4", "LPUART4", 14, "CCM_CCGR1.CG12", "CCM", "CCGR1", 108, "register:ccm:ccgr1", "field:ccm:ccgr1:cg12"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart5, "gate:lpuart5", "LPUART5", 16, "CCM_CCGR3.CG1", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg1"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart6, "gate:lpuart6", "LPUART6", 16, "CCM_CCGR3.CG3", "CCM", "CCGR3", 116, "register:ccm:ccgr3", "field:ccm:ccgr3:cg3"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart7, "gate:lpuart7", "LPUART7", 17, "CCM_CCGR5.CG13", "CCM", "CCGR5", 124, "register:ccm:ccgr5", "field:ccm:ccgr5:cg13"},
  {"mimxrt1064", ClockGateId::mimxrt1064_gate_lpuart8, "gate:lpuart8", "LPUART8", 18, "CCM_CCGR6.CG7", "CCM", "CCGR6", 128, "register:ccm:ccgr6", "field:ccm:ccgr6:cg7"},
}};

struct ResetDescriptor {
  const char* device;
  ResetId reset_id;
  const char* reset_name;
  const char* peripheral;
  const char* reset_signal;
  const char* active_level;
  const char* register_peripheral;
  const char* register_name;
  int register_offset;
  const char* register_id;
  const char* register_field_id;
};
inline constexpr std::array<ResetDescriptor, 0> kResets = {};

struct PeripheralClockBindingDescriptor {
  const char* device;
  const char* peripheral;
  int clock_gate_index;
  int reset_index;
  int selector_index;
};
inline constexpr std::array<PeripheralClockBindingDescriptor, 46> kPeripheralClockBindings = {{
  {"mimxrt1062", "FLEXSPI", 0, -1, -1},
  {"mimxrt1062", "FLEXSPI2", 1, -1, -1},
  {"mimxrt1062", "GPIO1", 2, -1, -1},
  {"mimxrt1062", "GPIO2", 3, -1, -1},
  {"mimxrt1062", "GPIO3", 4, -1, -1},
  {"mimxrt1062", "GPIO4", 5, -1, -1},
  {"mimxrt1062", "GPIO5", 6, -1, -1},
  {"mimxrt1062", "LPI2C1", 7, -1, 0},
  {"mimxrt1062", "LPI2C2", 8, -1, -1},
  {"mimxrt1062", "LPI2C3", 9, -1, -1},
  {"mimxrt1062", "LPI2C4", 10, -1, -1},
  {"mimxrt1062", "LPSPI1", 11, -1, 1},
  {"mimxrt1062", "LPSPI2", 12, -1, -1},
  {"mimxrt1062", "LPSPI3", 13, -1, -1},
  {"mimxrt1062", "LPSPI4", 14, -1, -1},
  {"mimxrt1062", "LPUART1", 15, -1, 2},
  {"mimxrt1062", "LPUART2", 16, -1, -1},
  {"mimxrt1062", "LPUART3", 17, -1, -1},
  {"mimxrt1062", "LPUART4", 18, -1, -1},
  {"mimxrt1062", "LPUART5", 19, -1, -1},
  {"mimxrt1062", "LPUART6", 20, -1, -1},
  {"mimxrt1062", "LPUART7", 21, -1, -1},
  {"mimxrt1062", "LPUART8", 22, -1, -1},
  {"mimxrt1064", "FLEXSPI", 23, -1, -1},
  {"mimxrt1064", "FLEXSPI2", 24, -1, -1},
  {"mimxrt1064", "GPIO1", 25, -1, -1},
  {"mimxrt1064", "GPIO2", 26, -1, -1},
  {"mimxrt1064", "GPIO3", 27, -1, -1},
  {"mimxrt1064", "GPIO4", 28, -1, -1},
  {"mimxrt1064", "GPIO5", 29, -1, -1},
  {"mimxrt1064", "LPI2C1", 30, -1, 3},
  {"mimxrt1064", "LPI2C2", 31, -1, -1},
  {"mimxrt1064", "LPI2C3", 32, -1, -1},
  {"mimxrt1064", "LPI2C4", 33, -1, -1},
  {"mimxrt1064", "LPSPI1", 34, -1, 4},
  {"mimxrt1064", "LPSPI2", 35, -1, -1},
  {"mimxrt1064", "LPSPI3", 36, -1, -1},
  {"mimxrt1064", "LPSPI4", 37, -1, -1},
  {"mimxrt1064", "LPUART1", 38, -1, 5},
  {"mimxrt1064", "LPUART2", 39, -1, -1},
  {"mimxrt1064", "LPUART3", 40, -1, -1},
  {"mimxrt1064", "LPUART4", 41, -1, -1},
  {"mimxrt1064", "LPUART5", 42, -1, -1},
  {"mimxrt1064", "LPUART6", 43, -1, -1},
  {"mimxrt1064", "LPUART7", 44, -1, -1},
  {"mimxrt1064", "LPUART8", 45, -1, -1},
}};
}
}
}
