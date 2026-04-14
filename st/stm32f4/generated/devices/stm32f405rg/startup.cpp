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

void ADC_IRQHandler() __attribute__((weak));
void ADC_IRQHandler() {
    Default_Handler();
}

void BusFault_Handler() __attribute__((weak));
void BusFault_Handler() {
    Default_Handler();
}

void CAN1_RX0_IRQHandler() __attribute__((weak));
void CAN1_RX0_IRQHandler() {
    Default_Handler();
}

void CAN1_RX1_IRQHandler() __attribute__((weak));
void CAN1_RX1_IRQHandler() {
    Default_Handler();
}

void CAN1_SCE_IRQHandler() __attribute__((weak));
void CAN1_SCE_IRQHandler() {
    Default_Handler();
}

void CAN1_TX_IRQHandler() __attribute__((weak));
void CAN1_TX_IRQHandler() {
    Default_Handler();
}

void CAN2_RX0_IRQHandler() __attribute__((weak));
void CAN2_RX0_IRQHandler() {
    Default_Handler();
}

void CAN2_RX1_IRQHandler() __attribute__((weak));
void CAN2_RX1_IRQHandler() {
    Default_Handler();
}

void CAN2_SCE_IRQHandler() __attribute__((weak));
void CAN2_SCE_IRQHandler() {
    Default_Handler();
}

void CAN2_TX_IRQHandler() __attribute__((weak));
void CAN2_TX_IRQHandler() {
    Default_Handler();
}

void CRYP_IRQHandler() __attribute__((weak));
void CRYP_IRQHandler() {
    Default_Handler();
}

void DCMI_IRQHandler() __attribute__((weak));
void DCMI_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream0_IRQHandler() __attribute__((weak));
void DMA1_Stream0_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream1_IRQHandler() __attribute__((weak));
void DMA1_Stream1_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream2_IRQHandler() __attribute__((weak));
void DMA1_Stream2_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream3_IRQHandler() __attribute__((weak));
void DMA1_Stream3_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream4_IRQHandler() __attribute__((weak));
void DMA1_Stream4_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream5_IRQHandler() __attribute__((weak));
void DMA1_Stream5_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream6_IRQHandler() __attribute__((weak));
void DMA1_Stream6_IRQHandler() {
    Default_Handler();
}

void DMA1_Stream7_IRQHandler() __attribute__((weak));
void DMA1_Stream7_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream0_IRQHandler() __attribute__((weak));
void DMA2_Stream0_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream1_IRQHandler() __attribute__((weak));
void DMA2_Stream1_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream2_IRQHandler() __attribute__((weak));
void DMA2_Stream2_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream3_IRQHandler() __attribute__((weak));
void DMA2_Stream3_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream4_IRQHandler() __attribute__((weak));
void DMA2_Stream4_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream5_IRQHandler() __attribute__((weak));
void DMA2_Stream5_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream6_IRQHandler() __attribute__((weak));
void DMA2_Stream6_IRQHandler() {
    Default_Handler();
}

void DMA2_Stream7_IRQHandler() __attribute__((weak));
void DMA2_Stream7_IRQHandler() {
    Default_Handler();
}

void DebugMon_Handler() __attribute__((weak));
void DebugMon_Handler() {
    Default_Handler();
}

void ETH_IRQHandler() __attribute__((weak));
void ETH_IRQHandler() {
    Default_Handler();
}

void ETH_WKUP_IRQHandler() __attribute__((weak));
void ETH_WKUP_IRQHandler() {
    Default_Handler();
}

void EXTI0_IRQHandler() __attribute__((weak));
void EXTI0_IRQHandler() {
    Default_Handler();
}

void EXTI15_10_IRQHandler() __attribute__((weak));
void EXTI15_10_IRQHandler() {
    Default_Handler();
}

void EXTI1_IRQHandler() __attribute__((weak));
void EXTI1_IRQHandler() {
    Default_Handler();
}

void EXTI2_IRQHandler() __attribute__((weak));
void EXTI2_IRQHandler() {
    Default_Handler();
}

void EXTI3_IRQHandler() __attribute__((weak));
void EXTI3_IRQHandler() {
    Default_Handler();
}

void EXTI4_IRQHandler() __attribute__((weak));
void EXTI4_IRQHandler() {
    Default_Handler();
}

void EXTI9_5_IRQHandler() __attribute__((weak));
void EXTI9_5_IRQHandler() {
    Default_Handler();
}

void FPU_IRQHandler() __attribute__((weak));
void FPU_IRQHandler() {
    Default_Handler();
}

void FSMC_IRQHandler() __attribute__((weak));
void FSMC_IRQHandler() {
    Default_Handler();
}

void HASH_RNG_IRQHandler() __attribute__((weak));
void HASH_RNG_IRQHandler() {
    Default_Handler();
}

void HardFault_Handler() __attribute__((weak));
void HardFault_Handler() {
    Default_Handler();
}

void I2C1_ER_IRQHandler() __attribute__((weak));
void I2C1_ER_IRQHandler() {
    Default_Handler();
}

void I2C1_EV_IRQHandler() __attribute__((weak));
void I2C1_EV_IRQHandler() {
    Default_Handler();
}

void I2C2_ER_IRQHandler() __attribute__((weak));
void I2C2_ER_IRQHandler() {
    Default_Handler();
}

void I2C2_EV_IRQHandler() __attribute__((weak));
void I2C2_EV_IRQHandler() {
    Default_Handler();
}

void I2C3_ER_IRQHandler() __attribute__((weak));
void I2C3_ER_IRQHandler() {
    Default_Handler();
}

void I2C3_EV_IRQHandler() __attribute__((weak));
void I2C3_EV_IRQHandler() {
    Default_Handler();
}

void LCD_TFT_1_IRQHandler() __attribute__((weak));
void LCD_TFT_1_IRQHandler() {
    Default_Handler();
}

void LCD_TFT_IRQHandler() __attribute__((weak));
void LCD_TFT_IRQHandler() {
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

void OTG_FS_IRQHandler() __attribute__((weak));
void OTG_FS_IRQHandler() {
    Default_Handler();
}

void OTG_FS_WKUP_IRQHandler() __attribute__((weak));
void OTG_FS_WKUP_IRQHandler() {
    Default_Handler();
}

void OTG_HS_EP1_IN_IRQHandler() __attribute__((weak));
void OTG_HS_EP1_IN_IRQHandler() {
    Default_Handler();
}

void OTG_HS_EP1_OUT_IRQHandler() __attribute__((weak));
void OTG_HS_EP1_OUT_IRQHandler() {
    Default_Handler();
}

void OTG_HS_IRQHandler() __attribute__((weak));
void OTG_HS_IRQHandler() {
    Default_Handler();
}

void OTG_HS_WKUP_IRQHandler() __attribute__((weak));
void OTG_HS_WKUP_IRQHandler() {
    Default_Handler();
}

void PVD_IRQHandler() __attribute__((weak));
void PVD_IRQHandler() {
    Default_Handler();
}

void PendSV_Handler() __attribute__((weak));
void PendSV_Handler() {
    Default_Handler();
}

void RCC_IRQHandler() __attribute__((weak));
void RCC_IRQHandler() {
    Default_Handler();
}

void RTC_Alarm_IRQHandler() __attribute__((weak));
void RTC_Alarm_IRQHandler() {
    Default_Handler();
}

void RTC_WKUP_IRQHandler() __attribute__((weak));
void RTC_WKUP_IRQHandler() {
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

void SDIO_IRQHandler() __attribute__((weak));
void SDIO_IRQHandler() {
    Default_Handler();
}

void SPI1_IRQHandler() __attribute__((weak));
void SPI1_IRQHandler() {
    Default_Handler();
}

void SPI2_IRQHandler() __attribute__((weak));
void SPI2_IRQHandler() {
    Default_Handler();
}

void SPI3_IRQHandler() __attribute__((weak));
void SPI3_IRQHandler() {
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

void TAMP_STAMP_IRQHandler() __attribute__((weak));
void TAMP_STAMP_IRQHandler() {
    Default_Handler();
}

void TIM1_BRK_TIM9_IRQHandler() __attribute__((weak));
void TIM1_BRK_TIM9_IRQHandler() {
    Default_Handler();
}

void TIM1_CC_IRQHandler() __attribute__((weak));
void TIM1_CC_IRQHandler() {
    Default_Handler();
}

void TIM1_TRG_COM_TIM11_IRQHandler() __attribute__((weak));
void TIM1_TRG_COM_TIM11_IRQHandler() {
    Default_Handler();
}

void TIM1_UP_TIM10_IRQHandler() __attribute__((weak));
void TIM1_UP_TIM10_IRQHandler() {
    Default_Handler();
}

void TIM2_IRQHandler() __attribute__((weak));
void TIM2_IRQHandler() {
    Default_Handler();
}

void TIM3_IRQHandler() __attribute__((weak));
void TIM3_IRQHandler() {
    Default_Handler();
}

void TIM4_IRQHandler() __attribute__((weak));
void TIM4_IRQHandler() {
    Default_Handler();
}

void TIM5_IRQHandler() __attribute__((weak));
void TIM5_IRQHandler() {
    Default_Handler();
}

void TIM6_DAC_IRQHandler() __attribute__((weak));
void TIM6_DAC_IRQHandler() {
    Default_Handler();
}

void TIM7_IRQHandler() __attribute__((weak));
void TIM7_IRQHandler() {
    Default_Handler();
}

void TIM8_BRK_TIM12_IRQHandler() __attribute__((weak));
void TIM8_BRK_TIM12_IRQHandler() {
    Default_Handler();
}

void TIM8_CC_IRQHandler() __attribute__((weak));
void TIM8_CC_IRQHandler() {
    Default_Handler();
}

void TIM8_TRG_COM_TIM14_IRQHandler() __attribute__((weak));
void TIM8_TRG_COM_TIM14_IRQHandler() {
    Default_Handler();
}

void TIM8_UP_TIM13_IRQHandler() __attribute__((weak));
void TIM8_UP_TIM13_IRQHandler() {
    Default_Handler();
}

void UART4_IRQHandler() __attribute__((weak));
void UART4_IRQHandler() {
    Default_Handler();
}

void UART5_IRQHandler() __attribute__((weak));
void UART5_IRQHandler() {
    Default_Handler();
}

void USART1_IRQHandler() __attribute__((weak));
void USART1_IRQHandler() {
    Default_Handler();
}

void USART2_IRQHandler() __attribute__((weak));
void USART2_IRQHandler() {
    Default_Handler();
}

void USART3_IRQHandler() __attribute__((weak));
void USART3_IRQHandler() {
    Default_Handler();
}

void USART6_IRQHandler() __attribute__((weak));
void USART6_IRQHandler() {
    Default_Handler();
}

void UsageFault_Handler() __attribute__((weak));
void UsageFault_Handler() {
    Default_Handler();
}

void WWDG_IRQHandler() __attribute__((weak));
void WWDG_IRQHandler() {
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
    WWDG_IRQHandler,
    PVD_IRQHandler,
    TAMP_STAMP_IRQHandler,
    RTC_WKUP_IRQHandler,
    nullptr,
    RCC_IRQHandler,
    EXTI0_IRQHandler,
    EXTI1_IRQHandler,
    EXTI2_IRQHandler,
    EXTI3_IRQHandler,
    EXTI4_IRQHandler,
    DMA1_Stream0_IRQHandler,
    DMA1_Stream1_IRQHandler,
    DMA1_Stream2_IRQHandler,
    DMA1_Stream3_IRQHandler,
    DMA1_Stream4_IRQHandler,
    DMA1_Stream5_IRQHandler,
    DMA1_Stream6_IRQHandler,
    ADC_IRQHandler,
    CAN1_TX_IRQHandler,
    CAN1_RX0_IRQHandler,
    CAN1_RX1_IRQHandler,
    CAN1_SCE_IRQHandler,
    EXTI9_5_IRQHandler,
    TIM1_BRK_TIM9_IRQHandler,
    TIM1_UP_TIM10_IRQHandler,
    TIM1_TRG_COM_TIM11_IRQHandler,
    TIM1_CC_IRQHandler,
    TIM2_IRQHandler,
    TIM3_IRQHandler,
    TIM4_IRQHandler,
    I2C1_EV_IRQHandler,
    I2C1_ER_IRQHandler,
    I2C2_EV_IRQHandler,
    I2C2_ER_IRQHandler,
    SPI1_IRQHandler,
    SPI2_IRQHandler,
    USART1_IRQHandler,
    USART2_IRQHandler,
    USART3_IRQHandler,
    EXTI15_10_IRQHandler,
    RTC_Alarm_IRQHandler,
    OTG_FS_WKUP_IRQHandler,
    TIM8_BRK_TIM12_IRQHandler,
    TIM8_UP_TIM13_IRQHandler,
    TIM8_TRG_COM_TIM14_IRQHandler,
    TIM8_CC_IRQHandler,
    DMA1_Stream7_IRQHandler,
    FSMC_IRQHandler,
    SDIO_IRQHandler,
    TIM5_IRQHandler,
    SPI3_IRQHandler,
    UART4_IRQHandler,
    UART5_IRQHandler,
    TIM6_DAC_IRQHandler,
    TIM7_IRQHandler,
    DMA2_Stream0_IRQHandler,
    DMA2_Stream1_IRQHandler,
    DMA2_Stream2_IRQHandler,
    DMA2_Stream3_IRQHandler,
    DMA2_Stream4_IRQHandler,
    ETH_IRQHandler,
    ETH_WKUP_IRQHandler,
    CAN2_TX_IRQHandler,
    CAN2_RX0_IRQHandler,
    CAN2_RX1_IRQHandler,
    CAN2_SCE_IRQHandler,
    OTG_FS_IRQHandler,
    DMA2_Stream5_IRQHandler,
    DMA2_Stream6_IRQHandler,
    DMA2_Stream7_IRQHandler,
    USART6_IRQHandler,
    I2C3_EV_IRQHandler,
    I2C3_ER_IRQHandler,
    OTG_HS_EP1_OUT_IRQHandler,
    OTG_HS_EP1_IN_IRQHandler,
    OTG_HS_WKUP_IRQHandler,
    OTG_HS_IRQHandler,
    DCMI_IRQHandler,
    CRYP_IRQHandler,
    HASH_RNG_IRQHandler,
    FPU_IRQHandler,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    LCD_TFT_IRQHandler,
    LCD_TFT_1_IRQHandler,
};
}
