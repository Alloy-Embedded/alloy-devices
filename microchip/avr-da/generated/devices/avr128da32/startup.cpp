#include <cstdint>

#include "../../runtime/devices/avr128da32/startup.hpp"

// AVR startup contract:
//   * avr-libc's crt<chip>.o owns the reset vector (__vector_0) and the
//     .vectors section; this file supplies only the weak peripheral
//     handlers so unhandled interrupts trap cleanly.
//   * Each entry is also aliased to the IR's canonical
//     <NAME>_IRQHandler symbol so application code that references
//     either convention resolves without link errors.

#if defined(ALLOY_CODEGEN_HOST_SMOKE)
// Host smoke build: provide stubs for the symbols the rest of the
// runtime headers expect, but do not emit AVR-specific attributes.
extern "C" {
int alloy_codegen_host_smoke_entry();
int alloy_codegen_host_smoke_entry() {
    return 0;
}
}
#elif defined(__AVR__)
extern "C" {

// Default trap — avr-libc supplies __bad_interrupt but we keep a local
// symbol so the weak aliases below have a single target to point at.
[[noreturn]] void Default_Handler() {
    while (true) {}
}

void __vector_7() __attribute__((weak, alias("Default_Handler")));
void TCA0_LUNF_IRQHandler() __attribute__((weak, alias("__vector_7")));
void __vector_8() __attribute__((weak, alias("Default_Handler")));
void TCA0_HUNF_IRQHandler() __attribute__((weak, alias("__vector_8")));
void __vector_9() __attribute__((weak, alias("Default_Handler")));
void TCA0_CMP0_IRQHandler() __attribute__((weak, alias("__vector_9")));
void __vector_10() __attribute__((weak, alias("Default_Handler")));
void TCA0_CMP1_IRQHandler() __attribute__((weak, alias("__vector_10")));
void __vector_11() __attribute__((weak, alias("Default_Handler")));
void TCA0_CMP2_IRQHandler() __attribute__((weak, alias("__vector_11")));
void __vector_16() __attribute__((weak, alias("Default_Handler")));
void TWI0_TWIS_IRQHandler() __attribute__((weak, alias("__vector_16")));
void __vector_17() __attribute__((weak, alias("Default_Handler")));
void TWI0_TWIM_IRQHandler() __attribute__((weak, alias("__vector_17")));
void __vector_18() __attribute__((weak, alias("Default_Handler")));
void SPI0_INT_IRQHandler() __attribute__((weak, alias("__vector_18")));
void __vector_19() __attribute__((weak, alias("Default_Handler")));
void USART0_RXC_IRQHandler() __attribute__((weak, alias("__vector_19")));
void __vector_20() __attribute__((weak, alias("Default_Handler")));
void USART0_DRE_IRQHandler() __attribute__((weak, alias("__vector_20")));
void __vector_21() __attribute__((weak, alias("Default_Handler")));
void USART0_TXC_IRQHandler() __attribute__((weak, alias("__vector_21")));
void __vector_24() __attribute__((weak, alias("Default_Handler")));
void ADC0_RESRDY_IRQHandler() __attribute__((weak, alias("__vector_24")));
void __vector_25() __attribute__((weak, alias("Default_Handler")));
void ADC0_WCMP_IRQHandler() __attribute__((weak, alias("__vector_25")));
void __vector_31() __attribute__((weak, alias("Default_Handler")));
void USART1_RXC_IRQHandler() __attribute__((weak, alias("__vector_31")));
void __vector_32() __attribute__((weak, alias("Default_Handler")));
void USART1_DRE_IRQHandler() __attribute__((weak, alias("__vector_32")));
void __vector_33() __attribute__((weak, alias("Default_Handler")));
void USART1_TXC_IRQHandler() __attribute__((weak, alias("__vector_33")));

}  // extern "C"
#else
// Non-AVR target build: nothing to emit — avr-libc's crt0 is
// AVR-specific and irrelevant when cross-compiling on the host.
#endif
