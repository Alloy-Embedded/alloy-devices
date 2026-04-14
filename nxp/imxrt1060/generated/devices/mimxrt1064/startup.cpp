#include <cstdint>

#include "startup_descriptors.hpp"

extern "C" {
#if defined(ALLOY_CODEGEN_HOST_SMOKE)
std::uint32_t __stack_top = 0u;
std::uint32_t _sidata = 0u;
std::uint32_t _sdata = 0u;
std::uint32_t _edata = 0u;
std::uint32_t _sbss = 0u;
std::uint32_t _ebss = 0u;
using InitFn = void (*)();
InitFn __init_array_start[] = {nullptr};
InitFn __init_array_end[] = {nullptr};
#else
extern std::uint32_t __stack_top;
extern std::uint32_t _sidata;
extern std::uint32_t _sdata;
extern std::uint32_t _edata;
extern std::uint32_t _sbss;
extern std::uint32_t _ebss;
extern void (*__init_array_start[])();
extern void (*__init_array_end[])();
#endif
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmain"
#endif
#if defined(ALLOY_CODEGEN_HOST_SMOKE)
int alloy_codegen_host_smoke_entry();
#else
int main();
#endif
#if defined(__clang__)
#pragma clang diagnostic pop
#endif
#if defined(ALLOY_CODEGEN_HOST_SMOKE)
int alloy_codegen_host_smoke_entry() {
    return 0;
}
#endif
void SystemInit() __attribute__((weak));
void SystemInit() {}

__attribute__((noreturn)) void Default_Handler() {
    while (true) {
#if defined(__arm__) || defined(__thumb__)
        __asm__ volatile("wfi");
#endif
    }
}

void ACMP1_IRQHandler() __attribute__((weak));
void ACMP1_IRQHandler() {
    Default_Handler();
}

void ACMP2_IRQHandler() __attribute__((weak));
void ACMP2_IRQHandler() {
    Default_Handler();
}

void ACMP3_IRQHandler() __attribute__((weak));
void ACMP3_IRQHandler() {
    Default_Handler();
}

void ACMP4_IRQHandler() __attribute__((weak));
void ACMP4_IRQHandler() {
    Default_Handler();
}

void ADC1_IRQHandler() __attribute__((weak));
void ADC1_IRQHandler() {
    Default_Handler();
}

void ADC2_IRQHandler() __attribute__((weak));
void ADC2_IRQHandler() {
    Default_Handler();
}

void ADC_ETC_ERROR_IRQ_IRQHandler() __attribute__((weak));
void ADC_ETC_ERROR_IRQ_IRQHandler() {
    Default_Handler();
}

void ADC_ETC_IRQ0_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ0_IRQHandler() {
    Default_Handler();
}

void ADC_ETC_IRQ1_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ1_IRQHandler() {
    Default_Handler();
}

void ADC_ETC_IRQ2_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ2_IRQHandler() {
    Default_Handler();
}

void BEE_IRQHandler() __attribute__((weak));
void BEE_IRQHandler() {
    Default_Handler();
}

void BusFault_Handler() __attribute__((weak));
void BusFault_Handler() {
    Default_Handler();
}

void CAN1_IRQHandler() __attribute__((weak));
void CAN1_IRQHandler() {
    Default_Handler();
}

void CAN2_IRQHandler() __attribute__((weak));
void CAN2_IRQHandler() {
    Default_Handler();
}

void CAN3_IRQHandler() __attribute__((weak));
void CAN3_IRQHandler() {
    Default_Handler();
}

void CCM_1_IRQHandler() __attribute__((weak));
void CCM_1_IRQHandler() {
    Default_Handler();
}

void CCM_2_IRQHandler() __attribute__((weak));
void CCM_2_IRQHandler() {
    Default_Handler();
}

void CORE_IRQHandler() __attribute__((weak));
void CORE_IRQHandler() {
    Default_Handler();
}

void CSI_IRQHandler() __attribute__((weak));
void CSI_IRQHandler() {
    Default_Handler();
}

void CSU_IRQHandler() __attribute__((weak));
void CSU_IRQHandler() {
    Default_Handler();
}

void CTI0_ERROR_IRQHandler() __attribute__((weak));
void CTI0_ERROR_IRQHandler() {
    Default_Handler();
}

void CTI1_ERROR_IRQHandler() __attribute__((weak));
void CTI1_ERROR_IRQHandler() {
    Default_Handler();
}

void DCDC_IRQHandler() __attribute__((weak));
void DCDC_IRQHandler() {
    Default_Handler();
}

void DCP_IRQHandler() __attribute__((weak));
void DCP_IRQHandler() {
    Default_Handler();
}

void DCP_VMI_IRQHandler() __attribute__((weak));
void DCP_VMI_IRQHandler() {
    Default_Handler();
}

void DMA0_DMA16_IRQHandler() __attribute__((weak));
void DMA0_DMA16_IRQHandler() {
    Default_Handler();
}

void DMA10_DMA26_IRQHandler() __attribute__((weak));
void DMA10_DMA26_IRQHandler() {
    Default_Handler();
}

void DMA11_DMA27_IRQHandler() __attribute__((weak));
void DMA11_DMA27_IRQHandler() {
    Default_Handler();
}

void DMA12_DMA28_IRQHandler() __attribute__((weak));
void DMA12_DMA28_IRQHandler() {
    Default_Handler();
}

void DMA13_DMA29_IRQHandler() __attribute__((weak));
void DMA13_DMA29_IRQHandler() {
    Default_Handler();
}

void DMA14_DMA30_IRQHandler() __attribute__((weak));
void DMA14_DMA30_IRQHandler() {
    Default_Handler();
}

void DMA15_DMA31_IRQHandler() __attribute__((weak));
void DMA15_DMA31_IRQHandler() {
    Default_Handler();
}

void DMA1_DMA17_IRQHandler() __attribute__((weak));
void DMA1_DMA17_IRQHandler() {
    Default_Handler();
}

void DMA2_DMA18_IRQHandler() __attribute__((weak));
void DMA2_DMA18_IRQHandler() {
    Default_Handler();
}

void DMA3_DMA19_IRQHandler() __attribute__((weak));
void DMA3_DMA19_IRQHandler() {
    Default_Handler();
}

void DMA4_DMA20_IRQHandler() __attribute__((weak));
void DMA4_DMA20_IRQHandler() {
    Default_Handler();
}

void DMA5_DMA21_IRQHandler() __attribute__((weak));
void DMA5_DMA21_IRQHandler() {
    Default_Handler();
}

void DMA6_DMA22_IRQHandler() __attribute__((weak));
void DMA6_DMA22_IRQHandler() {
    Default_Handler();
}

void DMA7_DMA23_IRQHandler() __attribute__((weak));
void DMA7_DMA23_IRQHandler() {
    Default_Handler();
}

void DMA8_DMA24_IRQHandler() __attribute__((weak));
void DMA8_DMA24_IRQHandler() {
    Default_Handler();
}

void DMA9_DMA25_IRQHandler() __attribute__((weak));
void DMA9_DMA25_IRQHandler() {
    Default_Handler();
}

void DMA_ERROR_IRQHandler() __attribute__((weak));
void DMA_ERROR_IRQHandler() {
    Default_Handler();
}

void DebugMon_Handler() __attribute__((weak));
void DebugMon_Handler() {
    Default_Handler();
}

void ENC1_IRQHandler() __attribute__((weak));
void ENC1_IRQHandler() {
    Default_Handler();
}

void ENC2_IRQHandler() __attribute__((weak));
void ENC2_IRQHandler() {
    Default_Handler();
}

void ENC3_IRQHandler() __attribute__((weak));
void ENC3_IRQHandler() {
    Default_Handler();
}

void ENC4_IRQHandler() __attribute__((weak));
void ENC4_IRQHandler() {
    Default_Handler();
}

void ENET2_1588_Timer_IRQHandler() __attribute__((weak));
void ENET2_1588_Timer_IRQHandler() {
    Default_Handler();
}

void ENET2_IRQHandler() __attribute__((weak));
void ENET2_IRQHandler() {
    Default_Handler();
}

void ENET_1588_Timer_IRQHandler() __attribute__((weak));
void ENET_1588_Timer_IRQHandler() {
    Default_Handler();
}

void ENET_IRQHandler() __attribute__((weak));
void ENET_IRQHandler() {
    Default_Handler();
}

void EWM_IRQHandler() __attribute__((weak));
void EWM_IRQHandler() {
    Default_Handler();
}

void FLEXIO1_IRQHandler() __attribute__((weak));
void FLEXIO1_IRQHandler() {
    Default_Handler();
}

void FLEXIO2_IRQHandler() __attribute__((weak));
void FLEXIO2_IRQHandler() {
    Default_Handler();
}

void FLEXIO3_IRQHandler() __attribute__((weak));
void FLEXIO3_IRQHandler() {
    Default_Handler();
}

void FLEXRAM_IRQHandler() __attribute__((weak));
void FLEXRAM_IRQHandler() {
    Default_Handler();
}

void FLEXSPI2_IRQHandler() __attribute__((weak));
void FLEXSPI2_IRQHandler() {
    Default_Handler();
}

void FLEXSPI_IRQHandler() __attribute__((weak));
void FLEXSPI_IRQHandler() {
    Default_Handler();
}

void GPC_IRQHandler() __attribute__((weak));
void GPC_IRQHandler() {
    Default_Handler();
}

void GPIO10_IRQHandler() __attribute__((weak));
void GPIO10_IRQHandler() {
    Default_Handler();
}

void GPIO1_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO1_Combined_0_15_IRQHandler() {
    Default_Handler();
}

void GPIO1_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO1_Combined_16_31_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT0_IRQHandler() __attribute__((weak));
void GPIO1_INT0_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT1_IRQHandler() __attribute__((weak));
void GPIO1_INT1_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT2_IRQHandler() __attribute__((weak));
void GPIO1_INT2_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT3_IRQHandler() __attribute__((weak));
void GPIO1_INT3_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT4_IRQHandler() __attribute__((weak));
void GPIO1_INT4_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT5_IRQHandler() __attribute__((weak));
void GPIO1_INT5_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT6_IRQHandler() __attribute__((weak));
void GPIO1_INT6_IRQHandler() {
    Default_Handler();
}

void GPIO1_INT7_IRQHandler() __attribute__((weak));
void GPIO1_INT7_IRQHandler() {
    Default_Handler();
}

void GPIO2_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO2_Combined_0_15_IRQHandler() {
    Default_Handler();
}

void GPIO2_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO2_Combined_16_31_IRQHandler() {
    Default_Handler();
}

void GPIO3_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO3_Combined_0_15_IRQHandler() {
    Default_Handler();
}

void GPIO3_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO3_Combined_16_31_IRQHandler() {
    Default_Handler();
}

void GPIO4_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO4_Combined_0_15_IRQHandler() {
    Default_Handler();
}

void GPIO4_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO4_Combined_16_31_IRQHandler() {
    Default_Handler();
}

void GPIO5_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO5_Combined_0_15_IRQHandler() {
    Default_Handler();
}

void GPIO5_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO5_Combined_16_31_IRQHandler() {
    Default_Handler();
}

void GPIO6_7_8_9_IRQHandler() __attribute__((weak));
void GPIO6_7_8_9_IRQHandler() {
    Default_Handler();
}

void GPR_IRQ_IRQHandler() __attribute__((weak));
void GPR_IRQ_IRQHandler() {
    Default_Handler();
}

void GPT1_IRQHandler() __attribute__((weak));
void GPT1_IRQHandler() {
    Default_Handler();
}

void GPT2_IRQHandler() __attribute__((weak));
void GPT2_IRQHandler() {
    Default_Handler();
}

void HardFault_Handler() __attribute__((weak));
void HardFault_Handler() {
    Default_Handler();
}

void KPP_IRQHandler() __attribute__((weak));
void KPP_IRQHandler() {
    Default_Handler();
}

void LCDIF_IRQHandler() __attribute__((weak));
void LCDIF_IRQHandler() {
    Default_Handler();
}

void LPI2C1_IRQHandler() __attribute__((weak));
void LPI2C1_IRQHandler() {
    Default_Handler();
}

void LPI2C2_IRQHandler() __attribute__((weak));
void LPI2C2_IRQHandler() {
    Default_Handler();
}

void LPI2C3_IRQHandler() __attribute__((weak));
void LPI2C3_IRQHandler() {
    Default_Handler();
}

void LPI2C4_IRQHandler() __attribute__((weak));
void LPI2C4_IRQHandler() {
    Default_Handler();
}

void LPSPI1_IRQHandler() __attribute__((weak));
void LPSPI1_IRQHandler() {
    Default_Handler();
}

void LPSPI2_IRQHandler() __attribute__((weak));
void LPSPI2_IRQHandler() {
    Default_Handler();
}

void LPSPI3_IRQHandler() __attribute__((weak));
void LPSPI3_IRQHandler() {
    Default_Handler();
}

void LPSPI4_IRQHandler() __attribute__((weak));
void LPSPI4_IRQHandler() {
    Default_Handler();
}

void LPUART1_IRQHandler() __attribute__((weak));
void LPUART1_IRQHandler() {
    Default_Handler();
}

void LPUART2_IRQHandler() __attribute__((weak));
void LPUART2_IRQHandler() {
    Default_Handler();
}

void LPUART3_IRQHandler() __attribute__((weak));
void LPUART3_IRQHandler() {
    Default_Handler();
}

void LPUART4_IRQHandler() __attribute__((weak));
void LPUART4_IRQHandler() {
    Default_Handler();
}

void LPUART5_IRQHandler() __attribute__((weak));
void LPUART5_IRQHandler() {
    Default_Handler();
}

void LPUART6_IRQHandler() __attribute__((weak));
void LPUART6_IRQHandler() {
    Default_Handler();
}

void LPUART7_IRQHandler() __attribute__((weak));
void LPUART7_IRQHandler() {
    Default_Handler();
}

void LPUART8_IRQHandler() __attribute__((weak));
void LPUART8_IRQHandler() {
    Default_Handler();
}

void MemManage_Handler() __attribute__((weak));
void MemManage_Handler() {
    Default_Handler();
}

void NMI_Handler() __attribute__((weak));
void NMI_Handler() {
    Default_Handler();
}

void PIT_IRQHandler() __attribute__((weak));
void PIT_IRQHandler() {
    Default_Handler();
}

void PMU_EVENT_IRQHandler() __attribute__((weak));
void PMU_EVENT_IRQHandler() {
    Default_Handler();
}

void PWM1_0_IRQHandler() __attribute__((weak));
void PWM1_0_IRQHandler() {
    Default_Handler();
}

void PWM1_1_IRQHandler() __attribute__((weak));
void PWM1_1_IRQHandler() {
    Default_Handler();
}

void PWM1_2_IRQHandler() __attribute__((weak));
void PWM1_2_IRQHandler() {
    Default_Handler();
}

void PWM1_3_IRQHandler() __attribute__((weak));
void PWM1_3_IRQHandler() {
    Default_Handler();
}

void PWM1_FAULT_IRQHandler() __attribute__((weak));
void PWM1_FAULT_IRQHandler() {
    Default_Handler();
}

void PWM2_0_IRQHandler() __attribute__((weak));
void PWM2_0_IRQHandler() {
    Default_Handler();
}

void PWM2_1_IRQHandler() __attribute__((weak));
void PWM2_1_IRQHandler() {
    Default_Handler();
}

void PWM2_2_IRQHandler() __attribute__((weak));
void PWM2_2_IRQHandler() {
    Default_Handler();
}

void PWM2_3_IRQHandler() __attribute__((weak));
void PWM2_3_IRQHandler() {
    Default_Handler();
}

void PWM2_FAULT_IRQHandler() __attribute__((weak));
void PWM2_FAULT_IRQHandler() {
    Default_Handler();
}

void PWM3_0_IRQHandler() __attribute__((weak));
void PWM3_0_IRQHandler() {
    Default_Handler();
}

void PWM3_1_IRQHandler() __attribute__((weak));
void PWM3_1_IRQHandler() {
    Default_Handler();
}

void PWM3_2_IRQHandler() __attribute__((weak));
void PWM3_2_IRQHandler() {
    Default_Handler();
}

void PWM3_3_IRQHandler() __attribute__((weak));
void PWM3_3_IRQHandler() {
    Default_Handler();
}

void PWM3_FAULT_IRQHandler() __attribute__((weak));
void PWM3_FAULT_IRQHandler() {
    Default_Handler();
}

void PWM4_0_IRQHandler() __attribute__((weak));
void PWM4_0_IRQHandler() {
    Default_Handler();
}

void PWM4_1_IRQHandler() __attribute__((weak));
void PWM4_1_IRQHandler() {
    Default_Handler();
}

void PWM4_2_IRQHandler() __attribute__((weak));
void PWM4_2_IRQHandler() {
    Default_Handler();
}

void PWM4_3_IRQHandler() __attribute__((weak));
void PWM4_3_IRQHandler() {
    Default_Handler();
}

void PWM4_FAULT_IRQHandler() __attribute__((weak));
void PWM4_FAULT_IRQHandler() {
    Default_Handler();
}

void PXP_IRQHandler() __attribute__((weak));
void PXP_IRQHandler() {
    Default_Handler();
}

void PendSV_Handler() __attribute__((weak));
void PendSV_Handler() {
    Default_Handler();
}

void RTWDOG_IRQHandler() __attribute__((weak));
void RTWDOG_IRQHandler() {
    Default_Handler();
}

void Reserved115_IRQHandler() __attribute__((weak));
void Reserved115_IRQHandler() {
    Default_Handler();
}

void Reserved143_IRQHandler() __attribute__((weak));
void Reserved143_IRQHandler() {
    Default_Handler();
}

void Reserved144_IRQHandler() __attribute__((weak));
void Reserved144_IRQHandler() {
    Default_Handler();
}

void Reserved171_IRQHandler() __attribute__((weak));
void Reserved171_IRQHandler() {
    Default_Handler();
}

void Reserved68_IRQHandler() __attribute__((weak));
void Reserved68_IRQHandler() {
    Default_Handler();
}

void Reserved78_IRQHandler() __attribute__((weak));
void Reserved78_IRQHandler() {
    Default_Handler();
}

void Reserved86_IRQHandler() __attribute__((weak));
void Reserved86_IRQHandler() {
    Default_Handler();
}

void Reserved_Handler_10() __attribute__((weak));
void Reserved_Handler_10() {
    Default_Handler();
}

void Reserved_Handler_13() __attribute__((weak));
void Reserved_Handler_13() {
    Default_Handler();
}

void Reserved_Handler_7() __attribute__((weak));
void Reserved_Handler_7() {
    Default_Handler();
}

void Reserved_Handler_8() __attribute__((weak));
void Reserved_Handler_8() {
    Default_Handler();
}

void Reserved_Handler_9() __attribute__((weak));
void Reserved_Handler_9() {
    Default_Handler();
}

void SAI1_IRQHandler() __attribute__((weak));
void SAI1_IRQHandler() {
    Default_Handler();
}

void SAI2_IRQHandler() __attribute__((weak));
void SAI2_IRQHandler() {
    Default_Handler();
}

void SAI3_RX_IRQHandler() __attribute__((weak));
void SAI3_RX_IRQHandler() {
    Default_Handler();
}

void SAI3_TX_IRQHandler() __attribute__((weak));
void SAI3_TX_IRQHandler() {
    Default_Handler();
}

void SEMC_IRQHandler() __attribute__((weak));
void SEMC_IRQHandler() {
    Default_Handler();
}

void SJC_IRQHandler() __attribute__((weak));
void SJC_IRQHandler() {
    Default_Handler();
}

void SNVS_HP_WRAPPER_IRQHandler() __attribute__((weak));
void SNVS_HP_WRAPPER_IRQHandler() {
    Default_Handler();
}

void SNVS_HP_WRAPPER_TZ_IRQHandler() __attribute__((weak));
void SNVS_HP_WRAPPER_TZ_IRQHandler() {
    Default_Handler();
}

void SNVS_LP_WRAPPER_IRQHandler() __attribute__((weak));
void SNVS_LP_WRAPPER_IRQHandler() {
    Default_Handler();
}

void SPDIF_IRQHandler() __attribute__((weak));
void SPDIF_IRQHandler() {
    Default_Handler();
}

void SRC_IRQHandler() __attribute__((weak));
void SRC_IRQHandler() {
    Default_Handler();
}

void SVCall_Handler() __attribute__((weak));
void SVCall_Handler() {
    Default_Handler();
}

void SysTick_Handler() __attribute__((weak));
void SysTick_Handler() {
    Default_Handler();
}

void TEMP_LOW_HIGH_IRQHandler() __attribute__((weak));
void TEMP_LOW_HIGH_IRQHandler() {
    Default_Handler();
}

void TEMP_PANIC_IRQHandler() __attribute__((weak));
void TEMP_PANIC_IRQHandler() {
    Default_Handler();
}

void TMR1_IRQHandler() __attribute__((weak));
void TMR1_IRQHandler() {
    Default_Handler();
}

void TMR2_IRQHandler() __attribute__((weak));
void TMR2_IRQHandler() {
    Default_Handler();
}

void TMR3_IRQHandler() __attribute__((weak));
void TMR3_IRQHandler() {
    Default_Handler();
}

void TMR4_IRQHandler() __attribute__((weak));
void TMR4_IRQHandler() {
    Default_Handler();
}

void TRNG_IRQHandler() __attribute__((weak));
void TRNG_IRQHandler() {
    Default_Handler();
}

void TSC_DIG_IRQHandler() __attribute__((weak));
void TSC_DIG_IRQHandler() {
    Default_Handler();
}

void USB_OTG1_IRQHandler() __attribute__((weak));
void USB_OTG1_IRQHandler() {
    Default_Handler();
}

void USB_OTG2_IRQHandler() __attribute__((weak));
void USB_OTG2_IRQHandler() {
    Default_Handler();
}

void USB_PHY1_IRQHandler() __attribute__((weak));
void USB_PHY1_IRQHandler() {
    Default_Handler();
}

void USB_PHY2_IRQHandler() __attribute__((weak));
void USB_PHY2_IRQHandler() {
    Default_Handler();
}

void USDHC1_IRQHandler() __attribute__((weak));
void USDHC1_IRQHandler() {
    Default_Handler();
}

void USDHC2_IRQHandler() __attribute__((weak));
void USDHC2_IRQHandler() {
    Default_Handler();
}

void UsageFault_Handler() __attribute__((weak));
void UsageFault_Handler() {
    Default_Handler();
}

void WDOG1_IRQHandler() __attribute__((weak));
void WDOG1_IRQHandler() {
    Default_Handler();
}

void WDOG2_IRQHandler() __attribute__((weak));
void WDOG2_IRQHandler() {
    Default_Handler();
}

void XBAR1_IRQ_0_1_IRQHandler() __attribute__((weak));
void XBAR1_IRQ_0_1_IRQHandler() {
    Default_Handler();
}

void XBAR1_IRQ_2_3_IRQHandler() __attribute__((weak));
void XBAR1_IRQ_2_3_IRQHandler() {
    Default_Handler();
}

__attribute__((noreturn)) void Reset_Handler() {
    auto* copy_source = &_sidata;
    auto* copy_target = &_sdata;
    while (copy_target < &_edata) {
        *copy_target++ = *copy_source++;
    }
    auto* zero_target = &_sbss;
    while (zero_target < &_ebss) {
        *zero_target++ = 0u;
    }
    SystemInit();
    for (auto ctor = __init_array_start; ctor < __init_array_end; ++ctor) {
        if (*ctor != nullptr) {
            (*ctor)();
        }
    }
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmain"
#endif
#if defined(ALLOY_CODEGEN_HOST_SMOKE)
    static_cast<void>(alloy_codegen_host_smoke_entry());
#else
    static_cast<void>(main());
#endif
#if defined(__clang__)
#pragma clang diagnostic pop
#endif
    Default_Handler();
}

#if defined(ALLOY_CODEGEN_HOST_SMOKE)
__attribute__((used))
#else
__attribute__((section(".isr_vector"), used))
#endif
void (*const _vectors[])() = {
    reinterpret_cast<void (*)()>(&__stack_top),
    Reset_Handler,
    NMI_Handler,
    HardFault_Handler,
    MemManage_Handler,
    BusFault_Handler,
    UsageFault_Handler,
    Reserved_Handler_7,
    Reserved_Handler_8,
    Reserved_Handler_9,
    Reserved_Handler_10,
    SVCall_Handler,
    DebugMon_Handler,
    Reserved_Handler_13,
    PendSV_Handler,
    SysTick_Handler,
    DMA0_DMA16_IRQHandler,
    DMA1_DMA17_IRQHandler,
    DMA2_DMA18_IRQHandler,
    DMA3_DMA19_IRQHandler,
    DMA4_DMA20_IRQHandler,
    DMA5_DMA21_IRQHandler,
    DMA6_DMA22_IRQHandler,
    DMA7_DMA23_IRQHandler,
    DMA8_DMA24_IRQHandler,
    DMA9_DMA25_IRQHandler,
    DMA10_DMA26_IRQHandler,
    DMA11_DMA27_IRQHandler,
    DMA12_DMA28_IRQHandler,
    DMA13_DMA29_IRQHandler,
    DMA14_DMA30_IRQHandler,
    DMA15_DMA31_IRQHandler,
    DMA_ERROR_IRQHandler,
    CTI0_ERROR_IRQHandler,
    CTI1_ERROR_IRQHandler,
    CORE_IRQHandler,
    LPUART1_IRQHandler,
    LPUART2_IRQHandler,
    LPUART3_IRQHandler,
    LPUART4_IRQHandler,
    LPUART5_IRQHandler,
    LPUART6_IRQHandler,
    LPUART7_IRQHandler,
    LPUART8_IRQHandler,
    LPI2C1_IRQHandler,
    LPI2C2_IRQHandler,
    LPI2C3_IRQHandler,
    LPI2C4_IRQHandler,
    LPSPI1_IRQHandler,
    LPSPI2_IRQHandler,
    LPSPI3_IRQHandler,
    LPSPI4_IRQHandler,
    CAN1_IRQHandler,
    CAN2_IRQHandler,
    FLEXRAM_IRQHandler,
    KPP_IRQHandler,
    TSC_DIG_IRQHandler,
    GPR_IRQ_IRQHandler,
    LCDIF_IRQHandler,
    CSI_IRQHandler,
    PXP_IRQHandler,
    WDOG2_IRQHandler,
    SNVS_HP_WRAPPER_IRQHandler,
    SNVS_HP_WRAPPER_TZ_IRQHandler,
    SNVS_LP_WRAPPER_IRQHandler,
    CSU_IRQHandler,
    DCP_IRQHandler,
    DCP_VMI_IRQHandler,
    Reserved68_IRQHandler,
    TRNG_IRQHandler,
    SJC_IRQHandler,
    BEE_IRQHandler,
    SAI1_IRQHandler,
    SAI2_IRQHandler,
    SAI3_RX_IRQHandler,
    SAI3_TX_IRQHandler,
    SPDIF_IRQHandler,
    PMU_EVENT_IRQHandler,
    Reserved78_IRQHandler,
    TEMP_LOW_HIGH_IRQHandler,
    TEMP_PANIC_IRQHandler,
    USB_PHY1_IRQHandler,
    USB_PHY2_IRQHandler,
    ADC1_IRQHandler,
    ADC2_IRQHandler,
    DCDC_IRQHandler,
    Reserved86_IRQHandler,
    GPIO10_IRQHandler,
    GPIO1_INT0_IRQHandler,
    GPIO1_INT1_IRQHandler,
    GPIO1_INT2_IRQHandler,
    GPIO1_INT3_IRQHandler,
    GPIO1_INT4_IRQHandler,
    GPIO1_INT5_IRQHandler,
    GPIO1_INT6_IRQHandler,
    GPIO1_INT7_IRQHandler,
    GPIO1_Combined_0_15_IRQHandler,
    GPIO1_Combined_16_31_IRQHandler,
    GPIO2_Combined_0_15_IRQHandler,
    GPIO2_Combined_16_31_IRQHandler,
    GPIO3_Combined_0_15_IRQHandler,
    GPIO3_Combined_16_31_IRQHandler,
    GPIO4_Combined_0_15_IRQHandler,
    GPIO4_Combined_16_31_IRQHandler,
    GPIO5_Combined_0_15_IRQHandler,
    GPIO5_Combined_16_31_IRQHandler,
    FLEXIO1_IRQHandler,
    FLEXIO2_IRQHandler,
    WDOG1_IRQHandler,
    RTWDOG_IRQHandler,
    EWM_IRQHandler,
    CCM_1_IRQHandler,
    CCM_2_IRQHandler,
    GPC_IRQHandler,
    SRC_IRQHandler,
    Reserved115_IRQHandler,
    GPT1_IRQHandler,
    GPT2_IRQHandler,
    PWM1_0_IRQHandler,
    PWM1_1_IRQHandler,
    PWM1_2_IRQHandler,
    PWM1_3_IRQHandler,
    PWM1_FAULT_IRQHandler,
    FLEXSPI2_IRQHandler,
    FLEXSPI_IRQHandler,
    SEMC_IRQHandler,
    USDHC1_IRQHandler,
    USDHC2_IRQHandler,
    USB_OTG2_IRQHandler,
    USB_OTG1_IRQHandler,
    ENET_IRQHandler,
    ENET_1588_Timer_IRQHandler,
    XBAR1_IRQ_0_1_IRQHandler,
    XBAR1_IRQ_2_3_IRQHandler,
    ADC_ETC_IRQ0_IRQHandler,
    ADC_ETC_IRQ1_IRQHandler,
    ADC_ETC_IRQ2_IRQHandler,
    ADC_ETC_ERROR_IRQ_IRQHandler,
    PIT_IRQHandler,
    ACMP1_IRQHandler,
    ACMP2_IRQHandler,
    ACMP3_IRQHandler,
    ACMP4_IRQHandler,
    Reserved143_IRQHandler,
    Reserved144_IRQHandler,
    ENC1_IRQHandler,
    ENC2_IRQHandler,
    ENC3_IRQHandler,
    ENC4_IRQHandler,
    TMR1_IRQHandler,
    TMR2_IRQHandler,
    TMR3_IRQHandler,
    TMR4_IRQHandler,
    PWM2_0_IRQHandler,
    PWM2_1_IRQHandler,
    PWM2_2_IRQHandler,
    PWM2_3_IRQHandler,
    PWM2_FAULT_IRQHandler,
    PWM3_0_IRQHandler,
    PWM3_1_IRQHandler,
    PWM3_2_IRQHandler,
    PWM3_3_IRQHandler,
    PWM3_FAULT_IRQHandler,
    PWM4_0_IRQHandler,
    PWM4_1_IRQHandler,
    PWM4_2_IRQHandler,
    PWM4_3_IRQHandler,
    PWM4_FAULT_IRQHandler,
    ENET2_IRQHandler,
    ENET2_1588_Timer_IRQHandler,
    CAN3_IRQHandler,
    Reserved171_IRQHandler,
    FLEXIO3_IRQHandler,
    GPIO6_7_8_9_IRQHandler,
};
}
