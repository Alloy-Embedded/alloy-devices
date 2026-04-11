#pragma once

#include <array>
#include <cstdint>

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace devices {
namespace mimxrt1064 {
struct PeripheralInstanceDescriptor {
  const char* name;
  const char* ip_name;
  const char* ip_version;
  int instance;
  std::uintptr_t base_address;
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
  const char* interrupt_names;
  const char* capability_overlay_ids;
};
inline constexpr std::array<PeripheralInstanceDescriptor, 110> kPeripheralInstances = {{
  {"ADC1", "adc", nullptr, 1, 0x400C4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ADC1", ""},
  {"ADC2", "adc", nullptr, 2, 0x400C8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ADC2", ""},
  {"ADC_ETC", "adc_etc", nullptr, 0, 0x403B0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ADC_ETC_IRQ0,ADC_ETC_IRQ1,ADC_ETC_IRQ2,ADC_ETC_ERROR_IRQ", ""},
  {"AIPSTZ1", "aipstz", nullptr, 1, 0x4007C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"AIPSTZ2", "aipstz", nullptr, 2, 0x4017C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"AIPSTZ3", "aipstz", nullptr, 3, 0x4027C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"AIPSTZ4", "aipstz", nullptr, 4, 0x4037C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"AOI1", "aoi", nullptr, 1, 0x403B4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"AOI2", "aoi", nullptr, 2, 0x403B8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"BEE", "bee", nullptr, 0, 0x403EC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "BEE", ""},
  {"CAN1", "can", nullptr, 1, 0x401D0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CAN1", ""},
  {"CAN2", "can", nullptr, 2, 0x401D4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CAN2", ""},
  {"CAN3", "can", nullptr, 3, 0x401D8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CAN3", ""},
  {"CCM", "ccm", nullptr, 0, 0x400FC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CCM_1,CCM_2", ""},
  {"CM7_MCM", "cm7_mcm", nullptr, 0, 0xE0080000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"CMP1", "cmp", nullptr, 1, 0x40094000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ACMP1", ""},
  {"CMP2", "cmp", nullptr, 2, 0x40094008u, nullptr, nullptr, nullptr, nullptr, nullptr, "ACMP2", ""},
  {"CMP3", "cmp", nullptr, 3, 0x40094010u, nullptr, nullptr, nullptr, nullptr, nullptr, "ACMP3", ""},
  {"CMP4", "cmp", nullptr, 4, 0x40094018u, nullptr, nullptr, nullptr, nullptr, nullptr, "ACMP4", ""},
  {"CSI", "csi", nullptr, 0, 0x402BC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CSI", ""},
  {"CSU", "csu", nullptr, 0, 0x400DC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CSU", ""},
  {"DCDC", "dcdc", nullptr, 0, 0x40080000u, nullptr, nullptr, nullptr, nullptr, nullptr, "DCDC", ""},
  {"DCP", "dcp", nullptr, 0, 0x402FC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "DCP,DCP_VMI", ""},
  {"DMA0", "dma", nullptr, 0, 0x400E8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "DMA0_DMA16,DMA1_DMA17,DMA2_DMA18,DMA3_DMA19,DMA4_DMA20,DMA5_DMA21,DMA6_DMA22,DMA7_DMA23,DMA8_DMA24,DMA9_DMA25,DMA10_DMA26,DMA11_DMA27,DMA12_DMA28,DMA13_DMA29,DMA14_DMA30,DMA15_DMA31,DMA_ERROR", ""},
  {"DMAMUX1", "dmamux", nullptr, 1, 0x400EC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"ENC1", "enc", nullptr, 1, 0x403C8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENC1", ""},
  {"ENC2", "enc", nullptr, 2, 0x403CC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENC2", ""},
  {"ENC3", "enc", nullptr, 3, 0x403D0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENC3", ""},
  {"ENC4", "enc", nullptr, 4, 0x403D4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENC4", ""},
  {"ENET", "enet", nullptr, 0, 0x402D8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENET,ENET_1588_Timer", ""},
  {"ENET2", "enet", nullptr, 2, 0x402D4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ENET2,ENET2_1588_Timer", ""},
  {"EWM", "ewm", nullptr, 0, 0x400B4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "EWM", ""},
  {"FLEXIO1", "flexio", nullptr, 1, 0x401AC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FLEXIO1", ""},
  {"FLEXIO2", "flexio", nullptr, 2, 0x401B0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FLEXIO2", ""},
  {"FLEXIO3", "flexio", nullptr, 3, 0x42020000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FLEXIO3", ""},
  {"FLEXRAM", "flexram", nullptr, 0, 0x400B0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FLEXRAM", ""},
  {"FLEXSPI", "flexspi", "flexspi-v1", 0, 0x402A8000u, "CCM_CCGR6.CG5", nullptr, "gate:flexspi", nullptr, nullptr, "FLEXSPI", ""},
  {"FLEXSPI2", "flexspi", "flexspi-v1", 2, 0x402A4000u, "CCM_CCGR7.CG3", nullptr, "gate:flexspi2", nullptr, nullptr, "FLEXSPI2", ""},
  {"GPC", "gpc", nullptr, 0, 0x400F4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "GPC", ""},
  {"GPIO1", "gpio", "imxrt-gpio-v1", 1, 0x401B8000u, "CCM_CCGR1.CG13", nullptr, "gate:gpio1", nullptr, nullptr, "GPIO1_INT0,GPIO1_INT1,GPIO1_INT2,GPIO1_INT3,GPIO1_INT4,GPIO1_INT5,GPIO1_INT6,GPIO1_INT7,GPIO1_Combined_0_15,GPIO1_Combined_16_31", "capability-instance:gpio1:bga196:io00,capability-instance:gpio1:bga196:io01,capability-instance:gpio1:bga196:io02,capability-instance:gpio1:bga196:io03,capability-instance:gpio1:bga196:io04,capability-instance:gpio1:bga196:io05,capability-instance:gpio1:bga196:io06,capability-instance:gpio1:bga196:io07,capability-instance:gpio1:bga196:io08,capability-instance:gpio1:bga196:io09,capability-instance:gpio1:bga196:io10,capability-instance:gpio1:bga196:io11,capability-instance:gpio1:bga196:io12,capability-instance:gpio1:bga196:io13,capability-instance:gpio1:bga196:io14,capability-instance:gpio1:bga196:io15,capability-instance:gpio1:bga196:io16,capability-instance:gpio1:bga196:io17,capability-instance:gpio1:bga196:io18,capability-instance:gpio1:bga196:io19,capability-instance:gpio1:bga196:io20,capability-instance:gpio1:bga196:io21,capability-instance:gpio1:bga196:io22,capability-instance:gpio1:bga196:io23,capability-instance:gpio1:bga196:io24,capability-instance:gpio1:bga196:io25,capability-instance:gpio1:bga196:io26,capability-instance:gpio1:bga196:io27,capability-instance:gpio1:bga196:io28,capability-instance:gpio1:bga196:io29,capability-instance:gpio1:bga196:io30,capability-instance:gpio1:bga196:io31"},
  {"GPIO10", "gpio", nullptr, 10, 0x401C8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "GPIO10", ""},
  {"GPIO2", "gpio", "imxrt-gpio-v1", 2, 0x401BC000u, "CCM_CCGR0.CG15", nullptr, "gate:gpio2", nullptr, nullptr, "GPIO2_Combined_0_15,GPIO2_Combined_16_31", "capability-instance:gpio2:bga196:io00,capability-instance:gpio2:bga196:io01,capability-instance:gpio2:bga196:io02,capability-instance:gpio2:bga196:io03,capability-instance:gpio2:bga196:io04,capability-instance:gpio2:bga196:io05,capability-instance:gpio2:bga196:io06,capability-instance:gpio2:bga196:io07,capability-instance:gpio2:bga196:io08,capability-instance:gpio2:bga196:io09,capability-instance:gpio2:bga196:io10,capability-instance:gpio2:bga196:io11,capability-instance:gpio2:bga196:io12,capability-instance:gpio2:bga196:io13,capability-instance:gpio2:bga196:io14,capability-instance:gpio2:bga196:io15,capability-instance:gpio2:bga196:io16,capability-instance:gpio2:bga196:io17,capability-instance:gpio2:bga196:io18,capability-instance:gpio2:bga196:io19,capability-instance:gpio2:bga196:io20,capability-instance:gpio2:bga196:io21,capability-instance:gpio2:bga196:io22,capability-instance:gpio2:bga196:io23,capability-instance:gpio2:bga196:io24,capability-instance:gpio2:bga196:io25,capability-instance:gpio2:bga196:io26,capability-instance:gpio2:bga196:io27,capability-instance:gpio2:bga196:io28,capability-instance:gpio2:bga196:io29,capability-instance:gpio2:bga196:io30,capability-instance:gpio2:bga196:io31"},
  {"GPIO3", "gpio", "imxrt-gpio-v1", 3, 0x401C0000u, "CCM_CCGR2.CG13", nullptr, "gate:gpio3", nullptr, nullptr, "GPIO3_Combined_0_15,GPIO3_Combined_16_31", "capability-instance:gpio3:bga196:io00,capability-instance:gpio3:bga196:io01,capability-instance:gpio3:bga196:io02,capability-instance:gpio3:bga196:io03,capability-instance:gpio3:bga196:io04,capability-instance:gpio3:bga196:io05,capability-instance:gpio3:bga196:io06,capability-instance:gpio3:bga196:io07,capability-instance:gpio3:bga196:io08,capability-instance:gpio3:bga196:io09,capability-instance:gpio3:bga196:io10,capability-instance:gpio3:bga196:io11,capability-instance:gpio3:bga196:io12,capability-instance:gpio3:bga196:io13,capability-instance:gpio3:bga196:io14,capability-instance:gpio3:bga196:io15,capability-instance:gpio3:bga196:io16,capability-instance:gpio3:bga196:io17,capability-instance:gpio3:bga196:io18,capability-instance:gpio3:bga196:io19,capability-instance:gpio3:bga196:io20,capability-instance:gpio3:bga196:io21,capability-instance:gpio3:bga196:io22,capability-instance:gpio3:bga196:io23,capability-instance:gpio3:bga196:io24,capability-instance:gpio3:bga196:io25,capability-instance:gpio3:bga196:io26,capability-instance:gpio3:bga196:io27"},
  {"GPIO4", "gpio", "imxrt-gpio-v1", 4, 0x401C4000u, "CCM_CCGR3.CG13", nullptr, "gate:gpio4", nullptr, nullptr, "GPIO4_Combined_0_15,GPIO4_Combined_16_31", "capability-instance:gpio4:bga196:io00,capability-instance:gpio4:bga196:io01,capability-instance:gpio4:bga196:io02,capability-instance:gpio4:bga196:io03,capability-instance:gpio4:bga196:io04,capability-instance:gpio4:bga196:io05,capability-instance:gpio4:bga196:io06,capability-instance:gpio4:bga196:io07,capability-instance:gpio4:bga196:io08,capability-instance:gpio4:bga196:io09,capability-instance:gpio4:bga196:io10,capability-instance:gpio4:bga196:io11,capability-instance:gpio4:bga196:io12,capability-instance:gpio4:bga196:io13,capability-instance:gpio4:bga196:io14,capability-instance:gpio4:bga196:io15,capability-instance:gpio4:bga196:io16,capability-instance:gpio4:bga196:io17,capability-instance:gpio4:bga196:io18,capability-instance:gpio4:bga196:io19,capability-instance:gpio4:bga196:io20,capability-instance:gpio4:bga196:io21,capability-instance:gpio4:bga196:io22,capability-instance:gpio4:bga196:io23,capability-instance:gpio4:bga196:io24,capability-instance:gpio4:bga196:io25,capability-instance:gpio4:bga196:io26,capability-instance:gpio4:bga196:io27,capability-instance:gpio4:bga196:io28,capability-instance:gpio4:bga196:io29,capability-instance:gpio4:bga196:io30,capability-instance:gpio4:bga196:io31"},
  {"GPIO5", "gpio", "imxrt-gpio-v1", 5, 0x400C0000u, "CCM_CCGR1.CG15", nullptr, "gate:gpio5", nullptr, nullptr, "GPIO5_Combined_0_15,GPIO5_Combined_16_31", ""},
  {"GPIO6", "gpio", nullptr, 6, 0x42000000u, nullptr, nullptr, nullptr, nullptr, nullptr, "GPIO6_7_8_9", ""},
  {"GPIO7", "gpio", nullptr, 7, 0x42004000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIO8", "gpio", nullptr, 8, 0x42008000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIO9", "gpio", nullptr, 9, 0x4200C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPT1", "gpt", nullptr, 1, 0x401EC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "GPT1", ""},
  {"GPT2", "gpt", nullptr, 2, 0x401F0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "GPT2", ""},
  {"IOMUXC", "iomuxc", nullptr, 0, 0x401F8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"IOMUXC_GPR", "iomuxc_gpr", nullptr, 0, 0x400AC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"IOMUXC_SNVS", "iomuxc_snvs", nullptr, 0, 0x400A8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"IOMUXC_SNVS_GPR", "iomuxc_snvs_gpr", nullptr, 0, 0x400A4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"KPP", "kpp", nullptr, 0, 0x401FC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "KPP", ""},
  {"LCDIF", "lcdif", nullptr, 0, 0x402B8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "LCDIF", ""},
  {"LPI2C1", "lpi2c1", "lpi2c-v1", 0, 0x403F0000u, "CCM_CCGR2.CG2", nullptr, "gate:lpi2c1", nullptr, "selector:lpi2c-root", "LPI2C1", "capability-instance:lpi2c1:bga196:hreq,capability-instance:lpi2c1:bga196:scl,capability-instance:lpi2c1:bga196:scls,capability-instance:lpi2c1:bga196:sda,capability-instance:lpi2c1:bga196:sdas"},
  {"LPI2C2", "lpi2c2", "lpi2c-v1", 0, 0x403F4000u, "CCM_CCGR2.CG3", nullptr, "gate:lpi2c2", nullptr, nullptr, "LPI2C2", "capability-instance:lpi2c2:bga196:scl,capability-instance:lpi2c2:bga196:sda"},
  {"LPI2C3", "lpi2c3", "lpi2c-v1", 0, 0x403F8000u, "CCM_CCGR2.CG4", nullptr, "gate:lpi2c3", nullptr, nullptr, "LPI2C3", "capability-instance:lpi2c3:bga196:scl,capability-instance:lpi2c3:bga196:sda"},
  {"LPI2C4", "lpi2c4", "lpi2c-v1", 0, 0x403FC000u, "CCM_CCGR6.CG12", nullptr, "gate:lpi2c4", nullptr, nullptr, "LPI2C4", "capability-instance:lpi2c4:bga196:scl,capability-instance:lpi2c4:bga196:sda"},
  {"LPSPI1", "lpspi", "lpspi-v1", 1, 0x40394000u, "CCM_CCGR1.CG0", nullptr, "gate:lpspi1", nullptr, "selector:lpspi-root", "LPSPI1", "capability-instance:lpspi1:bga196:cs,capability-instance:lpspi1:bga196:sck,capability-instance:lpspi1:bga196:sdi,capability-instance:lpspi1:bga196:sdo"},
  {"LPSPI2", "lpspi", "lpspi-v1", 2, 0x40398000u, "CCM_CCGR1.CG1", nullptr, "gate:lpspi2", nullptr, nullptr, "LPSPI2", "capability-instance:lpspi2:bga196:cs,capability-instance:lpspi2:bga196:sck,capability-instance:lpspi2:bga196:sd0,capability-instance:lpspi2:bga196:sdi,capability-instance:lpspi2:bga196:sdo"},
  {"LPSPI3", "lpspi", "lpspi-v1", 3, 0x4039C000u, "CCM_CCGR1.CG2", nullptr, "gate:lpspi3", nullptr, nullptr, "LPSPI3", "capability-instance:lpspi3:bga196:cs,capability-instance:lpspi3:bga196:sck,capability-instance:lpspi3:bga196:sdi,capability-instance:lpspi3:bga196:sdo"},
  {"LPSPI4", "lpspi", "lpspi-v1", 4, 0x403A0000u, "CCM_CCGR1.CG3", nullptr, "gate:lpspi4", nullptr, nullptr, "LPSPI4", "capability-instance:lpspi4:bga196:cs,capability-instance:lpspi4:bga196:sck,capability-instance:lpspi4:bga196:sdi,capability-instance:lpspi4:bga196:sdo"},
  {"LPUART1", "lpuart", "lpuart-v1", 1, 0x40184000u, "CCM_CCGR5.CG12", nullptr, "gate:lpuart1", nullptr, "selector:lpuart-root", "LPUART1", "capability-instance:lpuart1:bga196:cts,capability-instance:lpuart1:bga196:rts,capability-instance:lpuart1:bga196:rx,capability-instance:lpuart1:bga196:tx"},
  {"LPUART2", "lpuart", "lpuart-v1", 2, 0x40188000u, "CCM_CCGR0.CG14", nullptr, "gate:lpuart2", nullptr, nullptr, "LPUART2", "capability-instance:lpuart2:bga196:cts,capability-instance:lpuart2:bga196:rts,capability-instance:lpuart2:bga196:rx,capability-instance:lpuart2:bga196:tx"},
  {"LPUART3", "lpuart", "lpuart-v1", 3, 0x4018C000u, "CCM_CCGR0.CG6", nullptr, "gate:lpuart3", nullptr, nullptr, "LPUART3", "capability-instance:lpuart3:bga196:cts,capability-instance:lpuart3:bga196:rts,capability-instance:lpuart3:bga196:rx,capability-instance:lpuart3:bga196:tx"},
  {"LPUART4", "lpuart", "lpuart-v1", 4, 0x40190000u, "CCM_CCGR1.CG12", nullptr, "gate:lpuart4", nullptr, nullptr, "LPUART4", "capability-instance:lpuart4:bga196:cts,capability-instance:lpuart4:bga196:rts,capability-instance:lpuart4:bga196:rx,capability-instance:lpuart4:bga196:tx"},
  {"LPUART5", "lpuart", "lpuart-v1", 5, 0x40194000u, "CCM_CCGR3.CG1", nullptr, "gate:lpuart5", nullptr, nullptr, "LPUART5", "capability-instance:lpuart5:bga196:cts,capability-instance:lpuart5:bga196:rts,capability-instance:lpuart5:bga196:rx,capability-instance:lpuart5:bga196:tx"},
  {"LPUART6", "lpuart", "lpuart-v1", 6, 0x40198000u, "CCM_CCGR3.CG3", nullptr, "gate:lpuart6", nullptr, nullptr, "LPUART6", "capability-instance:lpuart6:bga196:cts,capability-instance:lpuart6:bga196:rts,capability-instance:lpuart6:bga196:rx,capability-instance:lpuart6:bga196:tx"},
  {"LPUART7", "lpuart", "lpuart-v1", 7, 0x4019C000u, "CCM_CCGR5.CG13", nullptr, "gate:lpuart7", nullptr, nullptr, "LPUART7", "capability-instance:lpuart7:bga196:cts,capability-instance:lpuart7:bga196:rts,capability-instance:lpuart7:bga196:rx,capability-instance:lpuart7:bga196:tx"},
  {"LPUART8", "lpuart", "lpuart-v1", 8, 0x401A0000u, "CCM_CCGR6.CG7", nullptr, "gate:lpuart8", nullptr, nullptr, "LPUART8", "capability-instance:lpuart8:bga196:cts,capability-instance:lpuart8:bga196:rts,capability-instance:lpuart8:bga196:rx,capability-instance:lpuart8:bga196:tx"},
  {"NVIC", "nvic", nullptr, 0, 0xE000E100u, nullptr, nullptr, nullptr, nullptr, nullptr, "CTI0_ERROR,CTI1_ERROR,CORE,GPR_IRQ,Reserved68,SJC,Reserved78,Reserved86,Reserved115,XBAR1_IRQ_0_1,XBAR1_IRQ_2_3,Reserved143,Reserved144,Reserved171", ""},
  {"OCOTP", "ocotp", nullptr, 0, 0x401F4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"PIT", "pit", nullptr, 0, 0x40084000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PIT", ""},
  {"PMU", "pmu", nullptr, 0, 0x400D8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PMU_EVENT,TEMP_LOW_HIGH,TEMP_PANIC", ""},
  {"PWM1", "pwm", nullptr, 1, 0x403DC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PWM1_0,PWM1_1,PWM1_2,PWM1_3,PWM1_FAULT", ""},
  {"PWM2", "pwm", nullptr, 2, 0x403E0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PWM2_0,PWM2_1,PWM2_2,PWM2_3,PWM2_FAULT", ""},
  {"PWM3", "pwm", nullptr, 3, 0x403E4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PWM3_0,PWM3_1,PWM3_2,PWM3_3,PWM3_FAULT", ""},
  {"PWM4", "pwm", nullptr, 4, 0x403E8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PWM4_0,PWM4_1,PWM4_2,PWM4_3,PWM4_FAULT", ""},
  {"PXP", "pxp", nullptr, 0, 0x402B4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PXP", ""},
  {"ROMC", "romc", nullptr, 0, 0x40180000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"RTWDOG", "rtwdog", nullptr, 0, 0x400BC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "RTWDOG", ""},
  {"SAI1", "sai", nullptr, 1, 0x40384000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SAI1", ""},
  {"SAI2", "sai", nullptr, 2, 0x40388000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SAI2", ""},
  {"SAI3", "sai", nullptr, 3, 0x4038C000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SAI3_RX,SAI3_TX", ""},
  {"SEMC", "semc", nullptr, 0, 0x402F0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SEMC", ""},
  {"SNVS", "snvs", nullptr, 0, 0x400D4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SNVS_HP_WRAPPER,SNVS_HP_WRAPPER_TZ,SNVS_LP_WRAPPER", ""},
  {"SPDIF", "spdif", nullptr, 0, 0x40380000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SPDIF", ""},
  {"SRC", "src", nullptr, 0, 0x400F8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "SRC", ""},
  {"SystemControl", "systemcontrol", nullptr, 0, 0xE000E000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TMR1", "tmr", nullptr, 1, 0x401DC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TMR1", ""},
  {"TMR2", "tmr", nullptr, 2, 0x401E0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TMR2", ""},
  {"TMR3", "tmr", nullptr, 3, 0x401E4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TMR3", ""},
  {"TMR4", "tmr", nullptr, 4, 0x401E8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TMR4", ""},
  {"TRNG", "trng", nullptr, 0, 0x400CC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TRNG", ""},
  {"TSC", "tsc", nullptr, 0, 0x400E0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "TSC_DIG", ""},
  {"USB1", "usb", nullptr, 1, 0x402E0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "USB_OTG1", ""},
  {"USB2", "usb", nullptr, 2, 0x402E0200u, nullptr, nullptr, nullptr, nullptr, nullptr, "USB_OTG2", ""},
  {"USBNC2", "usbnc", nullptr, 2, 0x402E0004u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"USBPHY1", "usbphy", nullptr, 1, 0x400D9000u, nullptr, nullptr, nullptr, nullptr, nullptr, "USB_PHY1", ""},
  {"USBPHY2", "usbphy", nullptr, 2, 0x400DA000u, nullptr, nullptr, nullptr, nullptr, nullptr, "USB_PHY2", ""},
  {"USDHC1", "usdhc", nullptr, 1, 0x402C0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "USDHC1", ""},
  {"USDHC2", "usdhc", nullptr, 2, 0x402C4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "USDHC2", ""},
  {"WDOG1", "wdog", nullptr, 1, 0x400B8000u, nullptr, nullptr, nullptr, nullptr, nullptr, "WDOG1", ""},
  {"WDOG2", "wdog", nullptr, 2, 0x400D0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "WDOG2", ""},
  {"XBARA1", "xbara", nullptr, 1, 0x403BC000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"XBARB2", "xbarb", nullptr, 2, 0x403C0000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"XBARB3", "xbarb", nullptr, 3, 0x403C4000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
}};
}
}
}
}
}
