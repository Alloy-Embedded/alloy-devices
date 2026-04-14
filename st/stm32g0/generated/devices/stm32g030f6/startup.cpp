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

void CEC_IRQHandler() __attribute__((weak));
void CEC_IRQHandler() {
    Default_Handler();
}

void DMA_Channel1_IRQHandler() __attribute__((weak));
void DMA_Channel1_IRQHandler() {
    Default_Handler();
}

void DMA_Channel2_3_IRQHandler() __attribute__((weak));
void DMA_Channel2_3_IRQHandler() {
    Default_Handler();
}

void DMA_Channel4_5_6_7_IRQHandler() __attribute__((weak));
void DMA_Channel4_5_6_7_IRQHandler() {
    Default_Handler();
}

void EXTI0_1_IRQHandler() __attribute__((weak));
void EXTI0_1_IRQHandler() {
    Default_Handler();
}

void EXTI2_3_IRQHandler() __attribute__((weak));
void EXTI2_3_IRQHandler() {
    Default_Handler();
}

void EXTI4_15_IRQHandler() __attribute__((weak));
void EXTI4_15_IRQHandler() {
    Default_Handler();
}

void FLASH_IRQHandler() __attribute__((weak));
void FLASH_IRQHandler() {
    Default_Handler();
}

void HardFault_Handler() __attribute__((weak));
void HardFault_Handler() {
    Default_Handler();
}

void I2C1_IRQHandler() __attribute__((weak));
void I2C1_IRQHandler() {
    Default_Handler();
}

void I2C2_IRQHandler() __attribute__((weak));
void I2C2_IRQHandler() {
    Default_Handler();
}

void NMI_Handler() __attribute__((weak));
void NMI_Handler() {
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

void RTC_STAMP_IRQHandler() __attribute__((weak));
void RTC_STAMP_IRQHandler() {
    Default_Handler();
}

void Reserved_Handler_10() __attribute__((weak));
void Reserved_Handler_10() {
    Default_Handler();
}

void Reserved_Handler_12() __attribute__((weak));
void Reserved_Handler_12() {
    Default_Handler();
}

void Reserved_Handler_13() __attribute__((weak));
void Reserved_Handler_13() {
    Default_Handler();
}

void Reserved_Handler_4() __attribute__((weak));
void Reserved_Handler_4() {
    Default_Handler();
}

void Reserved_Handler_5() __attribute__((weak));
void Reserved_Handler_5() {
    Default_Handler();
}

void Reserved_Handler_6() __attribute__((weak));
void Reserved_Handler_6() {
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

void SPI1_IRQHandler() __attribute__((weak));
void SPI1_IRQHandler() {
    Default_Handler();
}

void SPI2_IRQHandler() __attribute__((weak));
void SPI2_IRQHandler() {
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

void TIM14_IRQHandler() __attribute__((weak));
void TIM14_IRQHandler() {
    Default_Handler();
}

void TIM16_IRQHandler() __attribute__((weak));
void TIM16_IRQHandler() {
    Default_Handler();
}

void TIM17_IRQHandler() __attribute__((weak));
void TIM17_IRQHandler() {
    Default_Handler();
}

void TIM1_BRK_UP_TRG_COM_IRQHandler() __attribute__((weak));
void TIM1_BRK_UP_TRG_COM_IRQHandler() {
    Default_Handler();
}

void TIM1_CC_IRQHandler() __attribute__((weak));
void TIM1_CC_IRQHandler() {
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

void USART1_IRQHandler() __attribute__((weak));
void USART1_IRQHandler() {
    Default_Handler();
}

void USART2_IRQHandler() __attribute__((weak));
void USART2_IRQHandler() {
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
    Reserved_Handler_4,
    Reserved_Handler_5,
    Reserved_Handler_6,
    Reserved_Handler_7,
    Reserved_Handler_8,
    Reserved_Handler_9,
    Reserved_Handler_10,
    SVCall_Handler,
    Reserved_Handler_12,
    Reserved_Handler_13,
    PendSV_Handler,
    SysTick_Handler,
    WWDG_IRQHandler,
    nullptr,
    RTC_STAMP_IRQHandler,
    FLASH_IRQHandler,
    RCC_IRQHandler,
    EXTI0_1_IRQHandler,
    EXTI2_3_IRQHandler,
    EXTI4_15_IRQHandler,
    nullptr,
    DMA_Channel1_IRQHandler,
    DMA_Channel2_3_IRQHandler,
    DMA_Channel4_5_6_7_IRQHandler,
    ADC_IRQHandler,
    TIM1_BRK_UP_TRG_COM_IRQHandler,
    TIM1_CC_IRQHandler,
    TIM2_IRQHandler,
    TIM3_IRQHandler,
    nullptr,
    nullptr,
    TIM14_IRQHandler,
    nullptr,
    TIM16_IRQHandler,
    TIM17_IRQHandler,
    I2C1_IRQHandler,
    I2C2_IRQHandler,
    SPI1_IRQHandler,
    SPI2_IRQHandler,
    USART1_IRQHandler,
    USART2_IRQHandler,
    nullptr,
    CEC_IRQHandler,
};
}
