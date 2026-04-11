#pragma once

namespace nxp {
namespace imxrt1060 {
namespace generated {
struct RccDescriptor {
  const char* peripheral;
  const char* enable_signal;
  const char* reset_signal;
};
inline constexpr RccDescriptor kRccMap[] = {
  {"FLEXSPI", "CCM_CCGR6.CG5", ""},
  {"FLEXSPI2", "CCM_CCGR7.CG3", ""},
  {"GPIO1", "CCM_CCGR1.CG13", ""},
  {"GPIO2", "CCM_CCGR0.CG15", ""},
  {"GPIO3", "CCM_CCGR2.CG13", ""},
  {"GPIO4", "CCM_CCGR3.CG13", ""},
  {"GPIO5", "CCM_CCGR1.CG15", ""},
  {"LPI2C1", "CCM_CCGR2.CG2", ""},
  {"LPI2C2", "CCM_CCGR2.CG3", ""},
  {"LPI2C3", "CCM_CCGR2.CG4", ""},
  {"LPI2C4", "CCM_CCGR6.CG12", ""},
  {"LPSPI1", "CCM_CCGR1.CG0", ""},
  {"LPSPI2", "CCM_CCGR1.CG1", ""},
  {"LPSPI3", "CCM_CCGR1.CG2", ""},
  {"LPSPI4", "CCM_CCGR1.CG3", ""},
  {"LPUART1", "CCM_CCGR5.CG12", ""},
  {"LPUART2", "CCM_CCGR0.CG14", ""},
  {"LPUART3", "CCM_CCGR0.CG6", ""},
  {"LPUART4", "CCM_CCGR1.CG12", ""},
  {"LPUART5", "CCM_CCGR3.CG1", ""},
  {"LPUART6", "CCM_CCGR3.CG3", ""},
  {"LPUART7", "CCM_CCGR5.CG13", ""},
  {"LPUART8", "CCM_CCGR6.CG7", ""},
};
}
}
}
