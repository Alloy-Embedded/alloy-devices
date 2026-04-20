#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void WWDG_IRQHandler() __attribute__((weak));
void PVD_IRQHandler() __attribute__((weak));
void TAMP_STAMP_IRQHandler() __attribute__((weak));
void RTC_WKUP_IRQHandler() __attribute__((weak));
void RCC_IRQHandler() __attribute__((weak));
void EXTI0_IRQHandler() __attribute__((weak));
void EXTI1_IRQHandler() __attribute__((weak));
void EXTI2_IRQHandler() __attribute__((weak));
void EXTI3_IRQHandler() __attribute__((weak));
void EXTI4_IRQHandler() __attribute__((weak));
void DMA1_Stream0_IRQHandler() __attribute__((weak));
void DMA1_Stream1_IRQHandler() __attribute__((weak));
void DMA1_Stream2_IRQHandler() __attribute__((weak));
void DMA1_Stream3_IRQHandler() __attribute__((weak));
void DMA1_Stream4_IRQHandler() __attribute__((weak));
void DMA1_Stream5_IRQHandler() __attribute__((weak));
void DMA1_Stream6_IRQHandler() __attribute__((weak));
void ADC_IRQHandler() __attribute__((weak));
void CAN1_TX_IRQHandler() __attribute__((weak));
void CAN1_RX0_IRQHandler() __attribute__((weak));
void CAN1_RX1_IRQHandler() __attribute__((weak));
void CAN1_SCE_IRQHandler() __attribute__((weak));
void EXTI9_5_IRQHandler() __attribute__((weak));
void TIM1_BRK_TIM9_IRQHandler() __attribute__((weak));
void TIM1_UP_TIM10_IRQHandler() __attribute__((weak));
void TIM1_TRG_COM_TIM11_IRQHandler() __attribute__((weak));
void TIM1_CC_IRQHandler() __attribute__((weak));
void TIM2_IRQHandler() __attribute__((weak));
void TIM3_IRQHandler() __attribute__((weak));
void TIM4_IRQHandler() __attribute__((weak));
void I2C1_EV_IRQHandler() __attribute__((weak));
void I2C1_ER_IRQHandler() __attribute__((weak));
void I2C2_EV_IRQHandler() __attribute__((weak));
void I2C2_ER_IRQHandler() __attribute__((weak));
void SPI1_IRQHandler() __attribute__((weak));
void SPI2_IRQHandler() __attribute__((weak));
void USART1_IRQHandler() __attribute__((weak));
void USART2_IRQHandler() __attribute__((weak));
void USART3_IRQHandler() __attribute__((weak));
void EXTI15_10_IRQHandler() __attribute__((weak));
void RTC_Alarm_IRQHandler() __attribute__((weak));
void OTG_FS_WKUP_IRQHandler() __attribute__((weak));
void TIM8_BRK_TIM12_IRQHandler() __attribute__((weak));
void TIM8_UP_TIM13_IRQHandler() __attribute__((weak));
void TIM8_TRG_COM_TIM14_IRQHandler() __attribute__((weak));
void TIM8_CC_IRQHandler() __attribute__((weak));
void DMA1_Stream7_IRQHandler() __attribute__((weak));
void FSMC_IRQHandler() __attribute__((weak));
void SDIO_IRQHandler() __attribute__((weak));
void TIM5_IRQHandler() __attribute__((weak));
void SPI3_IRQHandler() __attribute__((weak));
void UART4_IRQHandler() __attribute__((weak));
void UART5_IRQHandler() __attribute__((weak));
void TIM6_DAC_IRQHandler() __attribute__((weak));
void TIM7_IRQHandler() __attribute__((weak));
void DMA2_Stream0_IRQHandler() __attribute__((weak));
void DMA2_Stream1_IRQHandler() __attribute__((weak));
void DMA2_Stream2_IRQHandler() __attribute__((weak));
void DMA2_Stream3_IRQHandler() __attribute__((weak));
void DMA2_Stream4_IRQHandler() __attribute__((weak));
void ETH_IRQHandler() __attribute__((weak));
void ETH_WKUP_IRQHandler() __attribute__((weak));
void CAN2_TX_IRQHandler() __attribute__((weak));
void CAN2_RX0_IRQHandler() __attribute__((weak));
void CAN2_RX1_IRQHandler() __attribute__((weak));
void CAN2_SCE_IRQHandler() __attribute__((weak));
void OTG_FS_IRQHandler() __attribute__((weak));
void DMA2_Stream5_IRQHandler() __attribute__((weak));
void DMA2_Stream6_IRQHandler() __attribute__((weak));
void DMA2_Stream7_IRQHandler() __attribute__((weak));
void USART6_IRQHandler() __attribute__((weak));
void I2C3_EV_IRQHandler() __attribute__((weak));
void I2C3_ER_IRQHandler() __attribute__((weak));
void OTG_HS_EP1_OUT_IRQHandler() __attribute__((weak));
void OTG_HS_EP1_IN_IRQHandler() __attribute__((weak));
void OTG_HS_WKUP_IRQHandler() __attribute__((weak));
void OTG_HS_IRQHandler() __attribute__((weak));
void DCMI_IRQHandler() __attribute__((weak));
void CRYP_IRQHandler() __attribute__((weak));
void HASH_RNG_IRQHandler() __attribute__((weak));
void FPU_IRQHandler() __attribute__((weak));
void LCD_TFT_IRQHandler() __attribute__((weak));
void LCD_TFT_1_IRQHandler() __attribute__((weak));
}

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f405rg {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 83> kInterruptStubs = {{
  {InterruptId::WWDG, StartupSymbolId::WWDG_IRQHandler, 0u, 16u},
  {InterruptId::PVD, StartupSymbolId::PVD_IRQHandler, 1u, 17u},
  {InterruptId::TAMP_STAMP, StartupSymbolId::TAMP_STAMP_IRQHandler, 2u, 18u},
  {InterruptId::RTC_WKUP, StartupSymbolId::RTC_WKUP_IRQHandler, 3u, 19u},
  {InterruptId::RCC, StartupSymbolId::RCC_IRQHandler, 5u, 21u},
  {InterruptId::EXTI0, StartupSymbolId::EXTI0_IRQHandler, 6u, 22u},
  {InterruptId::EXTI1, StartupSymbolId::EXTI1_IRQHandler, 7u, 23u},
  {InterruptId::EXTI2, StartupSymbolId::EXTI2_IRQHandler, 8u, 24u},
  {InterruptId::EXTI3, StartupSymbolId::EXTI3_IRQHandler, 9u, 25u},
  {InterruptId::EXTI4, StartupSymbolId::EXTI4_IRQHandler, 10u, 26u},
  {InterruptId::DMA1_Stream0, StartupSymbolId::DMA1_Stream0_IRQHandler, 11u, 27u},
  {InterruptId::DMA1_Stream1, StartupSymbolId::DMA1_Stream1_IRQHandler, 12u, 28u},
  {InterruptId::DMA1_Stream2, StartupSymbolId::DMA1_Stream2_IRQHandler, 13u, 29u},
  {InterruptId::DMA1_Stream3, StartupSymbolId::DMA1_Stream3_IRQHandler, 14u, 30u},
  {InterruptId::DMA1_Stream4, StartupSymbolId::DMA1_Stream4_IRQHandler, 15u, 31u},
  {InterruptId::DMA1_Stream5, StartupSymbolId::DMA1_Stream5_IRQHandler, 16u, 32u},
  {InterruptId::DMA1_Stream6, StartupSymbolId::DMA1_Stream6_IRQHandler, 17u, 33u},
  {InterruptId::ADC, StartupSymbolId::ADC_IRQHandler, 18u, 34u},
  {InterruptId::CAN1_TX, StartupSymbolId::CAN1_TX_IRQHandler, 19u, 35u},
  {InterruptId::CAN1_RX0, StartupSymbolId::CAN1_RX0_IRQHandler, 20u, 36u},
  {InterruptId::CAN1_RX1, StartupSymbolId::CAN1_RX1_IRQHandler, 21u, 37u},
  {InterruptId::CAN1_SCE, StartupSymbolId::CAN1_SCE_IRQHandler, 22u, 38u},
  {InterruptId::EXTI9_5, StartupSymbolId::EXTI9_5_IRQHandler, 23u, 39u},
  {InterruptId::TIM1_BRK_TIM9, StartupSymbolId::TIM1_BRK_TIM9_IRQHandler, 24u, 40u},
  {InterruptId::TIM1_UP_TIM10, StartupSymbolId::TIM1_UP_TIM10_IRQHandler, 25u, 41u},
  {InterruptId::TIM1_TRG_COM_TIM11, StartupSymbolId::TIM1_TRG_COM_TIM11_IRQHandler, 26u, 42u},
  {InterruptId::TIM1_CC, StartupSymbolId::TIM1_CC_IRQHandler, 27u, 43u},
  {InterruptId::TIM2, StartupSymbolId::TIM2_IRQHandler, 28u, 44u},
  {InterruptId::TIM3, StartupSymbolId::TIM3_IRQHandler, 29u, 45u},
  {InterruptId::TIM4, StartupSymbolId::TIM4_IRQHandler, 30u, 46u},
  {InterruptId::I2C1_EV, StartupSymbolId::I2C1_EV_IRQHandler, 31u, 47u},
  {InterruptId::I2C1_ER, StartupSymbolId::I2C1_ER_IRQHandler, 32u, 48u},
  {InterruptId::I2C2_EV, StartupSymbolId::I2C2_EV_IRQHandler, 33u, 49u},
  {InterruptId::I2C2_ER, StartupSymbolId::I2C2_ER_IRQHandler, 34u, 50u},
  {InterruptId::SPI1, StartupSymbolId::SPI1_IRQHandler, 35u, 51u},
  {InterruptId::SPI2, StartupSymbolId::SPI2_IRQHandler, 36u, 52u},
  {InterruptId::USART1, StartupSymbolId::USART1_IRQHandler, 37u, 53u},
  {InterruptId::USART2, StartupSymbolId::USART2_IRQHandler, 38u, 54u},
  {InterruptId::USART3, StartupSymbolId::USART3_IRQHandler, 39u, 55u},
  {InterruptId::EXTI15_10, StartupSymbolId::EXTI15_10_IRQHandler, 40u, 56u},
  {InterruptId::RTC_Alarm, StartupSymbolId::RTC_Alarm_IRQHandler, 41u, 57u},
  {InterruptId::OTG_FS_WKUP, StartupSymbolId::OTG_FS_WKUP_IRQHandler, 42u, 58u},
  {InterruptId::TIM8_BRK_TIM12, StartupSymbolId::TIM8_BRK_TIM12_IRQHandler, 43u, 59u},
  {InterruptId::TIM8_UP_TIM13, StartupSymbolId::TIM8_UP_TIM13_IRQHandler, 44u, 60u},
  {InterruptId::TIM8_TRG_COM_TIM14, StartupSymbolId::TIM8_TRG_COM_TIM14_IRQHandler, 45u, 61u},
  {InterruptId::TIM8_CC, StartupSymbolId::TIM8_CC_IRQHandler, 46u, 62u},
  {InterruptId::DMA1_Stream7, StartupSymbolId::DMA1_Stream7_IRQHandler, 47u, 63u},
  {InterruptId::FSMC, StartupSymbolId::FSMC_IRQHandler, 48u, 64u},
  {InterruptId::SDIO, StartupSymbolId::SDIO_IRQHandler, 49u, 65u},
  {InterruptId::TIM5, StartupSymbolId::TIM5_IRQHandler, 50u, 66u},
  {InterruptId::SPI3, StartupSymbolId::SPI3_IRQHandler, 51u, 67u},
  {InterruptId::UART4, StartupSymbolId::UART4_IRQHandler, 52u, 68u},
  {InterruptId::UART5, StartupSymbolId::UART5_IRQHandler, 53u, 69u},
  {InterruptId::TIM6_DAC, StartupSymbolId::TIM6_DAC_IRQHandler, 54u, 70u},
  {InterruptId::TIM7, StartupSymbolId::TIM7_IRQHandler, 55u, 71u},
  {InterruptId::DMA2_Stream0, StartupSymbolId::DMA2_Stream0_IRQHandler, 56u, 72u},
  {InterruptId::DMA2_Stream1, StartupSymbolId::DMA2_Stream1_IRQHandler, 57u, 73u},
  {InterruptId::DMA2_Stream2, StartupSymbolId::DMA2_Stream2_IRQHandler, 58u, 74u},
  {InterruptId::DMA2_Stream3, StartupSymbolId::DMA2_Stream3_IRQHandler, 59u, 75u},
  {InterruptId::DMA2_Stream4, StartupSymbolId::DMA2_Stream4_IRQHandler, 60u, 76u},
  {InterruptId::ETH, StartupSymbolId::ETH_IRQHandler, 61u, 77u},
  {InterruptId::ETH_WKUP, StartupSymbolId::ETH_WKUP_IRQHandler, 62u, 78u},
  {InterruptId::CAN2_TX, StartupSymbolId::CAN2_TX_IRQHandler, 63u, 79u},
  {InterruptId::CAN2_RX0, StartupSymbolId::CAN2_RX0_IRQHandler, 64u, 80u},
  {InterruptId::CAN2_RX1, StartupSymbolId::CAN2_RX1_IRQHandler, 65u, 81u},
  {InterruptId::CAN2_SCE, StartupSymbolId::CAN2_SCE_IRQHandler, 66u, 82u},
  {InterruptId::OTG_FS, StartupSymbolId::OTG_FS_IRQHandler, 67u, 83u},
  {InterruptId::DMA2_Stream5, StartupSymbolId::DMA2_Stream5_IRQHandler, 68u, 84u},
  {InterruptId::DMA2_Stream6, StartupSymbolId::DMA2_Stream6_IRQHandler, 69u, 85u},
  {InterruptId::DMA2_Stream7, StartupSymbolId::DMA2_Stream7_IRQHandler, 70u, 86u},
  {InterruptId::USART6, StartupSymbolId::USART6_IRQHandler, 71u, 87u},
  {InterruptId::I2C3_EV, StartupSymbolId::I2C3_EV_IRQHandler, 72u, 88u},
  {InterruptId::I2C3_ER, StartupSymbolId::I2C3_ER_IRQHandler, 73u, 89u},
  {InterruptId::OTG_HS_EP1_OUT, StartupSymbolId::OTG_HS_EP1_OUT_IRQHandler, 74u, 90u},
  {InterruptId::OTG_HS_EP1_IN, StartupSymbolId::OTG_HS_EP1_IN_IRQHandler, 75u, 91u},
  {InterruptId::OTG_HS_WKUP, StartupSymbolId::OTG_HS_WKUP_IRQHandler, 76u, 92u},
  {InterruptId::OTG_HS, StartupSymbolId::OTG_HS_IRQHandler, 77u, 93u},
  {InterruptId::DCMI, StartupSymbolId::DCMI_IRQHandler, 78u, 94u},
  {InterruptId::CRYP, StartupSymbolId::CRYP_IRQHandler, 79u, 95u},
  {InterruptId::HASH_RNG, StartupSymbolId::HASH_RNG_IRQHandler, 80u, 96u},
  {InterruptId::FPU, StartupSymbolId::FPU_IRQHandler, 81u, 97u},
  {InterruptId::LCD_TFT, StartupSymbolId::LCD_TFT_IRQHandler, 88u, 104u},
  {InterruptId::LCD_TFT_1, StartupSymbolId::LCD_TFT_1_IRQHandler, 89u, 105u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::WWDG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::WWDG_IRQHandler;
  static constexpr std::uint16_t kLine = 0u;
  static constexpr std::uint16_t kVectorSlot = 16u;
};

template<>
struct InterruptStubTraits<InterruptId::PVD> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PVD_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::TAMP_STAMP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TAMP_STAMP_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::RCC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RCC_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI0_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI1_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI2_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI3_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI4_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream0_IRQHandler;
  static constexpr std::uint16_t kLine = 11u;
  static constexpr std::uint16_t kVectorSlot = 27u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream1_IRQHandler;
  static constexpr std::uint16_t kLine = 12u;
  static constexpr std::uint16_t kVectorSlot = 28u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream2_IRQHandler;
  static constexpr std::uint16_t kLine = 13u;
  static constexpr std::uint16_t kVectorSlot = 29u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream3_IRQHandler;
  static constexpr std::uint16_t kLine = 14u;
  static constexpr std::uint16_t kVectorSlot = 30u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream4_IRQHandler;
  static constexpr std::uint16_t kLine = 15u;
  static constexpr std::uint16_t kVectorSlot = 31u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream5_IRQHandler;
  static constexpr std::uint16_t kLine = 16u;
  static constexpr std::uint16_t kVectorSlot = 32u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream6> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream6_IRQHandler;
  static constexpr std::uint16_t kLine = 17u;
  static constexpr std::uint16_t kVectorSlot = 33u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN1_TX> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN1_TX_IRQHandler;
  static constexpr std::uint16_t kLine = 19u;
  static constexpr std::uint16_t kVectorSlot = 35u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN1_RX0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN1_RX0_IRQHandler;
  static constexpr std::uint16_t kLine = 20u;
  static constexpr std::uint16_t kVectorSlot = 36u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN1_RX1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN1_RX1_IRQHandler;
  static constexpr std::uint16_t kLine = 21u;
  static constexpr std::uint16_t kVectorSlot = 37u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN1_SCE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN1_SCE_IRQHandler;
  static constexpr std::uint16_t kLine = 22u;
  static constexpr std::uint16_t kVectorSlot = 38u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI9_5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI9_5_IRQHandler;
  static constexpr std::uint16_t kLine = 23u;
  static constexpr std::uint16_t kVectorSlot = 39u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_BRK_TIM9> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_BRK_TIM9_IRQHandler;
  static constexpr std::uint16_t kLine = 24u;
  static constexpr std::uint16_t kVectorSlot = 40u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_UP_TIM10> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_UP_TIM10_IRQHandler;
  static constexpr std::uint16_t kLine = 25u;
  static constexpr std::uint16_t kVectorSlot = 41u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_TRG_COM_TIM11> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_TRG_COM_TIM11_IRQHandler;
  static constexpr std::uint16_t kLine = 26u;
  static constexpr std::uint16_t kVectorSlot = 42u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM1_CC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM1_CC_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM2_IRQHandler;
  static constexpr std::uint16_t kLine = 28u;
  static constexpr std::uint16_t kVectorSlot = 44u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM3_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM4_IRQHandler;
  static constexpr std::uint16_t kLine = 30u;
  static constexpr std::uint16_t kVectorSlot = 46u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C1_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C1_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 32u;
  static constexpr std::uint16_t kVectorSlot = 48u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C2_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C2_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 33u;
  static constexpr std::uint16_t kVectorSlot = 49u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C2_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C2_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 34u;
  static constexpr std::uint16_t kVectorSlot = 50u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI1_IRQHandler;
  static constexpr std::uint16_t kLine = 35u;
  static constexpr std::uint16_t kVectorSlot = 51u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI2_IRQHandler;
  static constexpr std::uint16_t kLine = 36u;
  static constexpr std::uint16_t kVectorSlot = 52u;
};

template<>
struct InterruptStubTraits<InterruptId::USART1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART1_IRQHandler;
  static constexpr std::uint16_t kLine = 37u;
  static constexpr std::uint16_t kVectorSlot = 53u;
};

template<>
struct InterruptStubTraits<InterruptId::USART2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART2_IRQHandler;
  static constexpr std::uint16_t kLine = 38u;
  static constexpr std::uint16_t kVectorSlot = 54u;
};

template<>
struct InterruptStubTraits<InterruptId::USART3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART3_IRQHandler;
  static constexpr std::uint16_t kLine = 39u;
  static constexpr std::uint16_t kVectorSlot = 55u;
};

template<>
struct InterruptStubTraits<InterruptId::EXTI15_10> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EXTI15_10_IRQHandler;
  static constexpr std::uint16_t kLine = 40u;
  static constexpr std::uint16_t kVectorSlot = 56u;
};

template<>
struct InterruptStubTraits<InterruptId::RTC_Alarm> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTC_Alarm_IRQHandler;
  static constexpr std::uint16_t kLine = 41u;
  static constexpr std::uint16_t kVectorSlot = 57u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_FS_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_FS_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 42u;
  static constexpr std::uint16_t kVectorSlot = 58u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM8_BRK_TIM12> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM8_BRK_TIM12_IRQHandler;
  static constexpr std::uint16_t kLine = 43u;
  static constexpr std::uint16_t kVectorSlot = 59u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM8_UP_TIM13> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM8_UP_TIM13_IRQHandler;
  static constexpr std::uint16_t kLine = 44u;
  static constexpr std::uint16_t kVectorSlot = 60u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM8_TRG_COM_TIM14> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM8_TRG_COM_TIM14_IRQHandler;
  static constexpr std::uint16_t kLine = 45u;
  static constexpr std::uint16_t kVectorSlot = 61u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM8_CC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM8_CC_IRQHandler;
  static constexpr std::uint16_t kLine = 46u;
  static constexpr std::uint16_t kVectorSlot = 62u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_Stream7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_Stream7_IRQHandler;
  static constexpr std::uint16_t kLine = 47u;
  static constexpr std::uint16_t kVectorSlot = 63u;
};

template<>
struct InterruptStubTraits<InterruptId::FSMC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FSMC_IRQHandler;
  static constexpr std::uint16_t kLine = 48u;
  static constexpr std::uint16_t kVectorSlot = 64u;
};

template<>
struct InterruptStubTraits<InterruptId::SDIO> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SDIO_IRQHandler;
  static constexpr std::uint16_t kLine = 49u;
  static constexpr std::uint16_t kVectorSlot = 65u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM5_IRQHandler;
  static constexpr std::uint16_t kLine = 50u;
  static constexpr std::uint16_t kVectorSlot = 66u;
};

template<>
struct InterruptStubTraits<InterruptId::SPI3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPI3_IRQHandler;
  static constexpr std::uint16_t kLine = 51u;
  static constexpr std::uint16_t kVectorSlot = 67u;
};

template<>
struct InterruptStubTraits<InterruptId::UART4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::UART4_IRQHandler;
  static constexpr std::uint16_t kLine = 52u;
  static constexpr std::uint16_t kVectorSlot = 68u;
};

template<>
struct InterruptStubTraits<InterruptId::UART5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::UART5_IRQHandler;
  static constexpr std::uint16_t kLine = 53u;
  static constexpr std::uint16_t kVectorSlot = 69u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM6_DAC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM6_DAC_IRQHandler;
  static constexpr std::uint16_t kLine = 54u;
  static constexpr std::uint16_t kVectorSlot = 70u;
};

template<>
struct InterruptStubTraits<InterruptId::TIM7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TIM7_IRQHandler;
  static constexpr std::uint16_t kLine = 55u;
  static constexpr std::uint16_t kVectorSlot = 71u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream0_IRQHandler;
  static constexpr std::uint16_t kLine = 56u;
  static constexpr std::uint16_t kVectorSlot = 72u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream1_IRQHandler;
  static constexpr std::uint16_t kLine = 57u;
  static constexpr std::uint16_t kVectorSlot = 73u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream2_IRQHandler;
  static constexpr std::uint16_t kLine = 58u;
  static constexpr std::uint16_t kVectorSlot = 74u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream3_IRQHandler;
  static constexpr std::uint16_t kLine = 59u;
  static constexpr std::uint16_t kVectorSlot = 75u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream4_IRQHandler;
  static constexpr std::uint16_t kLine = 60u;
  static constexpr std::uint16_t kVectorSlot = 76u;
};

template<>
struct InterruptStubTraits<InterruptId::ETH> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ETH_IRQHandler;
  static constexpr std::uint16_t kLine = 61u;
  static constexpr std::uint16_t kVectorSlot = 77u;
};

template<>
struct InterruptStubTraits<InterruptId::ETH_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ETH_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 62u;
  static constexpr std::uint16_t kVectorSlot = 78u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN2_TX> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN2_TX_IRQHandler;
  static constexpr std::uint16_t kLine = 63u;
  static constexpr std::uint16_t kVectorSlot = 79u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN2_RX0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN2_RX0_IRQHandler;
  static constexpr std::uint16_t kLine = 64u;
  static constexpr std::uint16_t kVectorSlot = 80u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN2_RX1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN2_RX1_IRQHandler;
  static constexpr std::uint16_t kLine = 65u;
  static constexpr std::uint16_t kVectorSlot = 81u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN2_SCE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN2_SCE_IRQHandler;
  static constexpr std::uint16_t kLine = 66u;
  static constexpr std::uint16_t kVectorSlot = 82u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_FS> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_FS_IRQHandler;
  static constexpr std::uint16_t kLine = 67u;
  static constexpr std::uint16_t kVectorSlot = 83u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream5_IRQHandler;
  static constexpr std::uint16_t kLine = 68u;
  static constexpr std::uint16_t kVectorSlot = 84u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream6> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream6_IRQHandler;
  static constexpr std::uint16_t kLine = 69u;
  static constexpr std::uint16_t kVectorSlot = 85u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_Stream7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_Stream7_IRQHandler;
  static constexpr std::uint16_t kLine = 70u;
  static constexpr std::uint16_t kVectorSlot = 86u;
};

template<>
struct InterruptStubTraits<InterruptId::USART6> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USART6_IRQHandler;
  static constexpr std::uint16_t kLine = 71u;
  static constexpr std::uint16_t kVectorSlot = 87u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C3_EV> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C3_EV_IRQHandler;
  static constexpr std::uint16_t kLine = 72u;
  static constexpr std::uint16_t kVectorSlot = 88u;
};

template<>
struct InterruptStubTraits<InterruptId::I2C3_ER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::I2C3_ER_IRQHandler;
  static constexpr std::uint16_t kLine = 73u;
  static constexpr std::uint16_t kVectorSlot = 89u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_HS_EP1_OUT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_HS_EP1_OUT_IRQHandler;
  static constexpr std::uint16_t kLine = 74u;
  static constexpr std::uint16_t kVectorSlot = 90u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_HS_EP1_IN> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_HS_EP1_IN_IRQHandler;
  static constexpr std::uint16_t kLine = 75u;
  static constexpr std::uint16_t kVectorSlot = 91u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_HS_WKUP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_HS_WKUP_IRQHandler;
  static constexpr std::uint16_t kLine = 76u;
  static constexpr std::uint16_t kVectorSlot = 92u;
};

template<>
struct InterruptStubTraits<InterruptId::OTG_HS> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::OTG_HS_IRQHandler;
  static constexpr std::uint16_t kLine = 77u;
  static constexpr std::uint16_t kVectorSlot = 93u;
};

template<>
struct InterruptStubTraits<InterruptId::DCMI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DCMI_IRQHandler;
  static constexpr std::uint16_t kLine = 78u;
  static constexpr std::uint16_t kVectorSlot = 94u;
};

template<>
struct InterruptStubTraits<InterruptId::CRYP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CRYP_IRQHandler;
  static constexpr std::uint16_t kLine = 79u;
  static constexpr std::uint16_t kVectorSlot = 95u;
};

template<>
struct InterruptStubTraits<InterruptId::HASH_RNG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::HASH_RNG_IRQHandler;
  static constexpr std::uint16_t kLine = 80u;
  static constexpr std::uint16_t kVectorSlot = 96u;
};

template<>
struct InterruptStubTraits<InterruptId::FPU> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FPU_IRQHandler;
  static constexpr std::uint16_t kLine = 81u;
  static constexpr std::uint16_t kVectorSlot = 97u;
};

template<>
struct InterruptStubTraits<InterruptId::LCD_TFT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LCD_TFT_IRQHandler;
  static constexpr std::uint16_t kLine = 88u;
  static constexpr std::uint16_t kVectorSlot = 104u;
};

template<>
struct InterruptStubTraits<InterruptId::LCD_TFT_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LCD_TFT_1_IRQHandler;
  static constexpr std::uint16_t kLine = 89u;
  static constexpr std::uint16_t kVectorSlot = 105u;
};

}
}
}
}
}
}
