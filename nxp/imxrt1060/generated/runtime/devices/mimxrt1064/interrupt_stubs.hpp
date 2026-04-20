#pragma once

#include <array>
#include <cstdint>
#include "interrupts.hpp"
#include "startup.hpp"

extern "C" {
void Default_Handler();
void DMA0_DMA16_IRQHandler() __attribute__((weak));
void DMA1_DMA17_IRQHandler() __attribute__((weak));
void DMA2_DMA18_IRQHandler() __attribute__((weak));
void DMA3_DMA19_IRQHandler() __attribute__((weak));
void DMA4_DMA20_IRQHandler() __attribute__((weak));
void DMA5_DMA21_IRQHandler() __attribute__((weak));
void DMA6_DMA22_IRQHandler() __attribute__((weak));
void DMA7_DMA23_IRQHandler() __attribute__((weak));
void DMA8_DMA24_IRQHandler() __attribute__((weak));
void DMA9_DMA25_IRQHandler() __attribute__((weak));
void DMA10_DMA26_IRQHandler() __attribute__((weak));
void DMA11_DMA27_IRQHandler() __attribute__((weak));
void DMA12_DMA28_IRQHandler() __attribute__((weak));
void DMA13_DMA29_IRQHandler() __attribute__((weak));
void DMA14_DMA30_IRQHandler() __attribute__((weak));
void DMA15_DMA31_IRQHandler() __attribute__((weak));
void DMA_ERROR_IRQHandler() __attribute__((weak));
void CTI0_ERROR_IRQHandler() __attribute__((weak));
void CTI1_ERROR_IRQHandler() __attribute__((weak));
void CORE_IRQHandler() __attribute__((weak));
void LPUART1_IRQHandler() __attribute__((weak));
void LPUART2_IRQHandler() __attribute__((weak));
void LPUART3_IRQHandler() __attribute__((weak));
void LPUART4_IRQHandler() __attribute__((weak));
void LPUART5_IRQHandler() __attribute__((weak));
void LPUART6_IRQHandler() __attribute__((weak));
void LPUART7_IRQHandler() __attribute__((weak));
void LPUART8_IRQHandler() __attribute__((weak));
void LPI2C1_IRQHandler() __attribute__((weak));
void LPI2C2_IRQHandler() __attribute__((weak));
void LPI2C3_IRQHandler() __attribute__((weak));
void LPI2C4_IRQHandler() __attribute__((weak));
void LPSPI1_IRQHandler() __attribute__((weak));
void LPSPI2_IRQHandler() __attribute__((weak));
void LPSPI3_IRQHandler() __attribute__((weak));
void LPSPI4_IRQHandler() __attribute__((weak));
void CAN1_IRQHandler() __attribute__((weak));
void CAN2_IRQHandler() __attribute__((weak));
void FLEXRAM_IRQHandler() __attribute__((weak));
void KPP_IRQHandler() __attribute__((weak));
void TSC_DIG_IRQHandler() __attribute__((weak));
void GPR_IRQ_IRQHandler() __attribute__((weak));
void LCDIF_IRQHandler() __attribute__((weak));
void CSI_IRQHandler() __attribute__((weak));
void PXP_IRQHandler() __attribute__((weak));
void WDOG2_IRQHandler() __attribute__((weak));
void SNVS_HP_WRAPPER_IRQHandler() __attribute__((weak));
void SNVS_HP_WRAPPER_TZ_IRQHandler() __attribute__((weak));
void SNVS_LP_WRAPPER_IRQHandler() __attribute__((weak));
void CSU_IRQHandler() __attribute__((weak));
void DCP_IRQHandler() __attribute__((weak));
void DCP_VMI_IRQHandler() __attribute__((weak));
void Reserved68_IRQHandler() __attribute__((weak));
void TRNG_IRQHandler() __attribute__((weak));
void SJC_IRQHandler() __attribute__((weak));
void BEE_IRQHandler() __attribute__((weak));
void SAI1_IRQHandler() __attribute__((weak));
void SAI2_IRQHandler() __attribute__((weak));
void SAI3_RX_IRQHandler() __attribute__((weak));
void SAI3_TX_IRQHandler() __attribute__((weak));
void SPDIF_IRQHandler() __attribute__((weak));
void PMU_EVENT_IRQHandler() __attribute__((weak));
void Reserved78_IRQHandler() __attribute__((weak));
void TEMP_LOW_HIGH_IRQHandler() __attribute__((weak));
void TEMP_PANIC_IRQHandler() __attribute__((weak));
void USB_PHY1_IRQHandler() __attribute__((weak));
void USB_PHY2_IRQHandler() __attribute__((weak));
void ADC1_IRQHandler() __attribute__((weak));
void ADC2_IRQHandler() __attribute__((weak));
void DCDC_IRQHandler() __attribute__((weak));
void Reserved86_IRQHandler() __attribute__((weak));
void GPIO10_IRQHandler() __attribute__((weak));
void GPIO1_INT0_IRQHandler() __attribute__((weak));
void GPIO1_INT1_IRQHandler() __attribute__((weak));
void GPIO1_INT2_IRQHandler() __attribute__((weak));
void GPIO1_INT3_IRQHandler() __attribute__((weak));
void GPIO1_INT4_IRQHandler() __attribute__((weak));
void GPIO1_INT5_IRQHandler() __attribute__((weak));
void GPIO1_INT6_IRQHandler() __attribute__((weak));
void GPIO1_INT7_IRQHandler() __attribute__((weak));
void GPIO1_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO1_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO2_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO2_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO3_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO3_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO4_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO4_Combined_16_31_IRQHandler() __attribute__((weak));
void GPIO5_Combined_0_15_IRQHandler() __attribute__((weak));
void GPIO5_Combined_16_31_IRQHandler() __attribute__((weak));
void FLEXIO1_IRQHandler() __attribute__((weak));
void FLEXIO2_IRQHandler() __attribute__((weak));
void WDOG1_IRQHandler() __attribute__((weak));
void RTWDOG_IRQHandler() __attribute__((weak));
void EWM_IRQHandler() __attribute__((weak));
void CCM_1_IRQHandler() __attribute__((weak));
void CCM_2_IRQHandler() __attribute__((weak));
void GPC_IRQHandler() __attribute__((weak));
void SRC_IRQHandler() __attribute__((weak));
void Reserved115_IRQHandler() __attribute__((weak));
void GPT1_IRQHandler() __attribute__((weak));
void GPT2_IRQHandler() __attribute__((weak));
void PWM1_0_IRQHandler() __attribute__((weak));
void PWM1_1_IRQHandler() __attribute__((weak));
void PWM1_2_IRQHandler() __attribute__((weak));
void PWM1_3_IRQHandler() __attribute__((weak));
void PWM1_FAULT_IRQHandler() __attribute__((weak));
void FLEXSPI2_IRQHandler() __attribute__((weak));
void FLEXSPI_IRQHandler() __attribute__((weak));
void SEMC_IRQHandler() __attribute__((weak));
void USDHC1_IRQHandler() __attribute__((weak));
void USDHC2_IRQHandler() __attribute__((weak));
void USB_OTG2_IRQHandler() __attribute__((weak));
void USB_OTG1_IRQHandler() __attribute__((weak));
void ENET_IRQHandler() __attribute__((weak));
void ENET_1588_Timer_IRQHandler() __attribute__((weak));
void XBAR1_IRQ_0_1_IRQHandler() __attribute__((weak));
void XBAR1_IRQ_2_3_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ0_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ1_IRQHandler() __attribute__((weak));
void ADC_ETC_IRQ2_IRQHandler() __attribute__((weak));
void ADC_ETC_ERROR_IRQ_IRQHandler() __attribute__((weak));
void PIT_IRQHandler() __attribute__((weak));
void ACMP1_IRQHandler() __attribute__((weak));
void ACMP2_IRQHandler() __attribute__((weak));
void ACMP3_IRQHandler() __attribute__((weak));
void ACMP4_IRQHandler() __attribute__((weak));
void Reserved143_IRQHandler() __attribute__((weak));
void Reserved144_IRQHandler() __attribute__((weak));
void ENC1_IRQHandler() __attribute__((weak));
void ENC2_IRQHandler() __attribute__((weak));
void ENC3_IRQHandler() __attribute__((weak));
void ENC4_IRQHandler() __attribute__((weak));
void TMR1_IRQHandler() __attribute__((weak));
void TMR2_IRQHandler() __attribute__((weak));
void TMR3_IRQHandler() __attribute__((weak));
void TMR4_IRQHandler() __attribute__((weak));
void PWM2_0_IRQHandler() __attribute__((weak));
void PWM2_1_IRQHandler() __attribute__((weak));
void PWM2_2_IRQHandler() __attribute__((weak));
void PWM2_3_IRQHandler() __attribute__((weak));
void PWM2_FAULT_IRQHandler() __attribute__((weak));
void PWM3_0_IRQHandler() __attribute__((weak));
void PWM3_1_IRQHandler() __attribute__((weak));
void PWM3_2_IRQHandler() __attribute__((weak));
void PWM3_3_IRQHandler() __attribute__((weak));
void PWM3_FAULT_IRQHandler() __attribute__((weak));
void PWM4_0_IRQHandler() __attribute__((weak));
void PWM4_1_IRQHandler() __attribute__((weak));
void PWM4_2_IRQHandler() __attribute__((weak));
void PWM4_3_IRQHandler() __attribute__((weak));
void PWM4_FAULT_IRQHandler() __attribute__((weak));
void ENET2_IRQHandler() __attribute__((weak));
void ENET2_1588_Timer_IRQHandler() __attribute__((weak));
void CAN3_IRQHandler() __attribute__((weak));
void Reserved171_IRQHandler() __attribute__((weak));
void FLEXIO3_IRQHandler() __attribute__((weak));
void GPIO6_7_8_9_IRQHandler() __attribute__((weak));
}

namespace nxp {
namespace imxrt1060 {
namespace generated {
namespace runtime {
namespace devices {
namespace mimxrt1064 {
struct InterruptStubDescriptor {
  InterruptId interrupt_id;
  StartupSymbolId symbol_id;
  std::uint16_t line;
  std::uint16_t vector_slot;
};
inline constexpr std::array<InterruptStubDescriptor, 158> kInterruptStubs = {{
  {InterruptId::DMA0_DMA16, StartupSymbolId::DMA0_DMA16_IRQHandler, 0u, 16u},
  {InterruptId::DMA1_DMA17, StartupSymbolId::DMA1_DMA17_IRQHandler, 1u, 17u},
  {InterruptId::DMA2_DMA18, StartupSymbolId::DMA2_DMA18_IRQHandler, 2u, 18u},
  {InterruptId::DMA3_DMA19, StartupSymbolId::DMA3_DMA19_IRQHandler, 3u, 19u},
  {InterruptId::DMA4_DMA20, StartupSymbolId::DMA4_DMA20_IRQHandler, 4u, 20u},
  {InterruptId::DMA5_DMA21, StartupSymbolId::DMA5_DMA21_IRQHandler, 5u, 21u},
  {InterruptId::DMA6_DMA22, StartupSymbolId::DMA6_DMA22_IRQHandler, 6u, 22u},
  {InterruptId::DMA7_DMA23, StartupSymbolId::DMA7_DMA23_IRQHandler, 7u, 23u},
  {InterruptId::DMA8_DMA24, StartupSymbolId::DMA8_DMA24_IRQHandler, 8u, 24u},
  {InterruptId::DMA9_DMA25, StartupSymbolId::DMA9_DMA25_IRQHandler, 9u, 25u},
  {InterruptId::DMA10_DMA26, StartupSymbolId::DMA10_DMA26_IRQHandler, 10u, 26u},
  {InterruptId::DMA11_DMA27, StartupSymbolId::DMA11_DMA27_IRQHandler, 11u, 27u},
  {InterruptId::DMA12_DMA28, StartupSymbolId::DMA12_DMA28_IRQHandler, 12u, 28u},
  {InterruptId::DMA13_DMA29, StartupSymbolId::DMA13_DMA29_IRQHandler, 13u, 29u},
  {InterruptId::DMA14_DMA30, StartupSymbolId::DMA14_DMA30_IRQHandler, 14u, 30u},
  {InterruptId::DMA15_DMA31, StartupSymbolId::DMA15_DMA31_IRQHandler, 15u, 31u},
  {InterruptId::DMA_ERROR, StartupSymbolId::DMA_ERROR_IRQHandler, 16u, 32u},
  {InterruptId::CTI0_ERROR, StartupSymbolId::CTI0_ERROR_IRQHandler, 17u, 33u},
  {InterruptId::CTI1_ERROR, StartupSymbolId::CTI1_ERROR_IRQHandler, 18u, 34u},
  {InterruptId::CORE, StartupSymbolId::CORE_IRQHandler, 19u, 35u},
  {InterruptId::LPUART1, StartupSymbolId::LPUART1_IRQHandler, 20u, 36u},
  {InterruptId::LPUART2, StartupSymbolId::LPUART2_IRQHandler, 21u, 37u},
  {InterruptId::LPUART3, StartupSymbolId::LPUART3_IRQHandler, 22u, 38u},
  {InterruptId::LPUART4, StartupSymbolId::LPUART4_IRQHandler, 23u, 39u},
  {InterruptId::LPUART5, StartupSymbolId::LPUART5_IRQHandler, 24u, 40u},
  {InterruptId::LPUART6, StartupSymbolId::LPUART6_IRQHandler, 25u, 41u},
  {InterruptId::LPUART7, StartupSymbolId::LPUART7_IRQHandler, 26u, 42u},
  {InterruptId::LPUART8, StartupSymbolId::LPUART8_IRQHandler, 27u, 43u},
  {InterruptId::LPI2C1, StartupSymbolId::LPI2C1_IRQHandler, 28u, 44u},
  {InterruptId::LPI2C2, StartupSymbolId::LPI2C2_IRQHandler, 29u, 45u},
  {InterruptId::LPI2C3, StartupSymbolId::LPI2C3_IRQHandler, 30u, 46u},
  {InterruptId::LPI2C4, StartupSymbolId::LPI2C4_IRQHandler, 31u, 47u},
  {InterruptId::LPSPI1, StartupSymbolId::LPSPI1_IRQHandler, 32u, 48u},
  {InterruptId::LPSPI2, StartupSymbolId::LPSPI2_IRQHandler, 33u, 49u},
  {InterruptId::LPSPI3, StartupSymbolId::LPSPI3_IRQHandler, 34u, 50u},
  {InterruptId::LPSPI4, StartupSymbolId::LPSPI4_IRQHandler, 35u, 51u},
  {InterruptId::CAN1, StartupSymbolId::CAN1_IRQHandler, 36u, 52u},
  {InterruptId::CAN2, StartupSymbolId::CAN2_IRQHandler, 37u, 53u},
  {InterruptId::FLEXRAM, StartupSymbolId::FLEXRAM_IRQHandler, 38u, 54u},
  {InterruptId::KPP, StartupSymbolId::KPP_IRQHandler, 39u, 55u},
  {InterruptId::TSC_DIG, StartupSymbolId::TSC_DIG_IRQHandler, 40u, 56u},
  {InterruptId::GPR_IRQ, StartupSymbolId::GPR_IRQ_IRQHandler, 41u, 57u},
  {InterruptId::LCDIF, StartupSymbolId::LCDIF_IRQHandler, 42u, 58u},
  {InterruptId::CSI, StartupSymbolId::CSI_IRQHandler, 43u, 59u},
  {InterruptId::PXP, StartupSymbolId::PXP_IRQHandler, 44u, 60u},
  {InterruptId::WDOG2, StartupSymbolId::WDOG2_IRQHandler, 45u, 61u},
  {InterruptId::SNVS_HP_WRAPPER, StartupSymbolId::SNVS_HP_WRAPPER_IRQHandler, 46u, 62u},
  {InterruptId::SNVS_HP_WRAPPER_TZ, StartupSymbolId::SNVS_HP_WRAPPER_TZ_IRQHandler, 47u, 63u},
  {InterruptId::SNVS_LP_WRAPPER, StartupSymbolId::SNVS_LP_WRAPPER_IRQHandler, 48u, 64u},
  {InterruptId::CSU, StartupSymbolId::CSU_IRQHandler, 49u, 65u},
  {InterruptId::DCP, StartupSymbolId::DCP_IRQHandler, 50u, 66u},
  {InterruptId::DCP_VMI, StartupSymbolId::DCP_VMI_IRQHandler, 51u, 67u},
  {InterruptId::Reserved68, StartupSymbolId::Reserved68_IRQHandler, 52u, 68u},
  {InterruptId::TRNG, StartupSymbolId::TRNG_IRQHandler, 53u, 69u},
  {InterruptId::SJC, StartupSymbolId::SJC_IRQHandler, 54u, 70u},
  {InterruptId::BEE, StartupSymbolId::BEE_IRQHandler, 55u, 71u},
  {InterruptId::SAI1, StartupSymbolId::SAI1_IRQHandler, 56u, 72u},
  {InterruptId::SAI2, StartupSymbolId::SAI2_IRQHandler, 57u, 73u},
  {InterruptId::SAI3_RX, StartupSymbolId::SAI3_RX_IRQHandler, 58u, 74u},
  {InterruptId::SAI3_TX, StartupSymbolId::SAI3_TX_IRQHandler, 59u, 75u},
  {InterruptId::SPDIF, StartupSymbolId::SPDIF_IRQHandler, 60u, 76u},
  {InterruptId::PMU_EVENT, StartupSymbolId::PMU_EVENT_IRQHandler, 61u, 77u},
  {InterruptId::Reserved78, StartupSymbolId::Reserved78_IRQHandler, 62u, 78u},
  {InterruptId::TEMP_LOW_HIGH, StartupSymbolId::TEMP_LOW_HIGH_IRQHandler, 63u, 79u},
  {InterruptId::TEMP_PANIC, StartupSymbolId::TEMP_PANIC_IRQHandler, 64u, 80u},
  {InterruptId::USB_PHY1, StartupSymbolId::USB_PHY1_IRQHandler, 65u, 81u},
  {InterruptId::USB_PHY2, StartupSymbolId::USB_PHY2_IRQHandler, 66u, 82u},
  {InterruptId::ADC1, StartupSymbolId::ADC1_IRQHandler, 67u, 83u},
  {InterruptId::ADC2, StartupSymbolId::ADC2_IRQHandler, 68u, 84u},
  {InterruptId::DCDC, StartupSymbolId::DCDC_IRQHandler, 69u, 85u},
  {InterruptId::Reserved86, StartupSymbolId::Reserved86_IRQHandler, 70u, 86u},
  {InterruptId::GPIO10, StartupSymbolId::GPIO10_IRQHandler, 71u, 87u},
  {InterruptId::GPIO1_INT0, StartupSymbolId::GPIO1_INT0_IRQHandler, 72u, 88u},
  {InterruptId::GPIO1_INT1, StartupSymbolId::GPIO1_INT1_IRQHandler, 73u, 89u},
  {InterruptId::GPIO1_INT2, StartupSymbolId::GPIO1_INT2_IRQHandler, 74u, 90u},
  {InterruptId::GPIO1_INT3, StartupSymbolId::GPIO1_INT3_IRQHandler, 75u, 91u},
  {InterruptId::GPIO1_INT4, StartupSymbolId::GPIO1_INT4_IRQHandler, 76u, 92u},
  {InterruptId::GPIO1_INT5, StartupSymbolId::GPIO1_INT5_IRQHandler, 77u, 93u},
  {InterruptId::GPIO1_INT6, StartupSymbolId::GPIO1_INT6_IRQHandler, 78u, 94u},
  {InterruptId::GPIO1_INT7, StartupSymbolId::GPIO1_INT7_IRQHandler, 79u, 95u},
  {InterruptId::GPIO1_Combined_0_15, StartupSymbolId::GPIO1_Combined_0_15_IRQHandler, 80u, 96u},
  {InterruptId::GPIO1_Combined_16_31, StartupSymbolId::GPIO1_Combined_16_31_IRQHandler, 81u, 97u},
  {InterruptId::GPIO2_Combined_0_15, StartupSymbolId::GPIO2_Combined_0_15_IRQHandler, 82u, 98u},
  {InterruptId::GPIO2_Combined_16_31, StartupSymbolId::GPIO2_Combined_16_31_IRQHandler, 83u, 99u},
  {InterruptId::GPIO3_Combined_0_15, StartupSymbolId::GPIO3_Combined_0_15_IRQHandler, 84u, 100u},
  {InterruptId::GPIO3_Combined_16_31, StartupSymbolId::GPIO3_Combined_16_31_IRQHandler, 85u, 101u},
  {InterruptId::GPIO4_Combined_0_15, StartupSymbolId::GPIO4_Combined_0_15_IRQHandler, 86u, 102u},
  {InterruptId::GPIO4_Combined_16_31, StartupSymbolId::GPIO4_Combined_16_31_IRQHandler, 87u, 103u},
  {InterruptId::GPIO5_Combined_0_15, StartupSymbolId::GPIO5_Combined_0_15_IRQHandler, 88u, 104u},
  {InterruptId::GPIO5_Combined_16_31, StartupSymbolId::GPIO5_Combined_16_31_IRQHandler, 89u, 105u},
  {InterruptId::FLEXIO1, StartupSymbolId::FLEXIO1_IRQHandler, 90u, 106u},
  {InterruptId::FLEXIO2, StartupSymbolId::FLEXIO2_IRQHandler, 91u, 107u},
  {InterruptId::WDOG1, StartupSymbolId::WDOG1_IRQHandler, 92u, 108u},
  {InterruptId::RTWDOG, StartupSymbolId::RTWDOG_IRQHandler, 93u, 109u},
  {InterruptId::EWM, StartupSymbolId::EWM_IRQHandler, 94u, 110u},
  {InterruptId::CCM_1, StartupSymbolId::CCM_1_IRQHandler, 95u, 111u},
  {InterruptId::CCM_2, StartupSymbolId::CCM_2_IRQHandler, 96u, 112u},
  {InterruptId::GPC, StartupSymbolId::GPC_IRQHandler, 97u, 113u},
  {InterruptId::SRC, StartupSymbolId::SRC_IRQHandler, 98u, 114u},
  {InterruptId::Reserved115, StartupSymbolId::Reserved115_IRQHandler, 99u, 115u},
  {InterruptId::GPT1, StartupSymbolId::GPT1_IRQHandler, 100u, 116u},
  {InterruptId::GPT2, StartupSymbolId::GPT2_IRQHandler, 101u, 117u},
  {InterruptId::PWM1_0, StartupSymbolId::PWM1_0_IRQHandler, 102u, 118u},
  {InterruptId::PWM1_1, StartupSymbolId::PWM1_1_IRQHandler, 103u, 119u},
  {InterruptId::PWM1_2, StartupSymbolId::PWM1_2_IRQHandler, 104u, 120u},
  {InterruptId::PWM1_3, StartupSymbolId::PWM1_3_IRQHandler, 105u, 121u},
  {InterruptId::PWM1_FAULT, StartupSymbolId::PWM1_FAULT_IRQHandler, 106u, 122u},
  {InterruptId::FLEXSPI2, StartupSymbolId::FLEXSPI2_IRQHandler, 107u, 123u},
  {InterruptId::FLEXSPI, StartupSymbolId::FLEXSPI_IRQHandler, 108u, 124u},
  {InterruptId::SEMC, StartupSymbolId::SEMC_IRQHandler, 109u, 125u},
  {InterruptId::USDHC1, StartupSymbolId::USDHC1_IRQHandler, 110u, 126u},
  {InterruptId::USDHC2, StartupSymbolId::USDHC2_IRQHandler, 111u, 127u},
  {InterruptId::USB_OTG2, StartupSymbolId::USB_OTG2_IRQHandler, 112u, 128u},
  {InterruptId::USB_OTG1, StartupSymbolId::USB_OTG1_IRQHandler, 113u, 129u},
  {InterruptId::ENET, StartupSymbolId::ENET_IRQHandler, 114u, 130u},
  {InterruptId::ENET_1588_Timer, StartupSymbolId::ENET_1588_Timer_IRQHandler, 115u, 131u},
  {InterruptId::XBAR1_IRQ_0_1, StartupSymbolId::XBAR1_IRQ_0_1_IRQHandler, 116u, 132u},
  {InterruptId::XBAR1_IRQ_2_3, StartupSymbolId::XBAR1_IRQ_2_3_IRQHandler, 117u, 133u},
  {InterruptId::ADC_ETC_IRQ0, StartupSymbolId::ADC_ETC_IRQ0_IRQHandler, 118u, 134u},
  {InterruptId::ADC_ETC_IRQ1, StartupSymbolId::ADC_ETC_IRQ1_IRQHandler, 119u, 135u},
  {InterruptId::ADC_ETC_IRQ2, StartupSymbolId::ADC_ETC_IRQ2_IRQHandler, 120u, 136u},
  {InterruptId::ADC_ETC_ERROR_IRQ, StartupSymbolId::ADC_ETC_ERROR_IRQ_IRQHandler, 121u, 137u},
  {InterruptId::PIT, StartupSymbolId::PIT_IRQHandler, 122u, 138u},
  {InterruptId::ACMP1, StartupSymbolId::ACMP1_IRQHandler, 123u, 139u},
  {InterruptId::ACMP2, StartupSymbolId::ACMP2_IRQHandler, 124u, 140u},
  {InterruptId::ACMP3, StartupSymbolId::ACMP3_IRQHandler, 125u, 141u},
  {InterruptId::ACMP4, StartupSymbolId::ACMP4_IRQHandler, 126u, 142u},
  {InterruptId::Reserved143, StartupSymbolId::Reserved143_IRQHandler, 127u, 143u},
  {InterruptId::Reserved144, StartupSymbolId::Reserved144_IRQHandler, 128u, 144u},
  {InterruptId::ENC1, StartupSymbolId::ENC1_IRQHandler, 129u, 145u},
  {InterruptId::ENC2, StartupSymbolId::ENC2_IRQHandler, 130u, 146u},
  {InterruptId::ENC3, StartupSymbolId::ENC3_IRQHandler, 131u, 147u},
  {InterruptId::ENC4, StartupSymbolId::ENC4_IRQHandler, 132u, 148u},
  {InterruptId::TMR1, StartupSymbolId::TMR1_IRQHandler, 133u, 149u},
  {InterruptId::TMR2, StartupSymbolId::TMR2_IRQHandler, 134u, 150u},
  {InterruptId::TMR3, StartupSymbolId::TMR3_IRQHandler, 135u, 151u},
  {InterruptId::TMR4, StartupSymbolId::TMR4_IRQHandler, 136u, 152u},
  {InterruptId::PWM2_0, StartupSymbolId::PWM2_0_IRQHandler, 137u, 153u},
  {InterruptId::PWM2_1, StartupSymbolId::PWM2_1_IRQHandler, 138u, 154u},
  {InterruptId::PWM2_2, StartupSymbolId::PWM2_2_IRQHandler, 139u, 155u},
  {InterruptId::PWM2_3, StartupSymbolId::PWM2_3_IRQHandler, 140u, 156u},
  {InterruptId::PWM2_FAULT, StartupSymbolId::PWM2_FAULT_IRQHandler, 141u, 157u},
  {InterruptId::PWM3_0, StartupSymbolId::PWM3_0_IRQHandler, 142u, 158u},
  {InterruptId::PWM3_1, StartupSymbolId::PWM3_1_IRQHandler, 143u, 159u},
  {InterruptId::PWM3_2, StartupSymbolId::PWM3_2_IRQHandler, 144u, 160u},
  {InterruptId::PWM3_3, StartupSymbolId::PWM3_3_IRQHandler, 145u, 161u},
  {InterruptId::PWM3_FAULT, StartupSymbolId::PWM3_FAULT_IRQHandler, 146u, 162u},
  {InterruptId::PWM4_0, StartupSymbolId::PWM4_0_IRQHandler, 147u, 163u},
  {InterruptId::PWM4_1, StartupSymbolId::PWM4_1_IRQHandler, 148u, 164u},
  {InterruptId::PWM4_2, StartupSymbolId::PWM4_2_IRQHandler, 149u, 165u},
  {InterruptId::PWM4_3, StartupSymbolId::PWM4_3_IRQHandler, 150u, 166u},
  {InterruptId::PWM4_FAULT, StartupSymbolId::PWM4_FAULT_IRQHandler, 151u, 167u},
  {InterruptId::ENET2, StartupSymbolId::ENET2_IRQHandler, 152u, 168u},
  {InterruptId::ENET2_1588_Timer, StartupSymbolId::ENET2_1588_Timer_IRQHandler, 153u, 169u},
  {InterruptId::CAN3, StartupSymbolId::CAN3_IRQHandler, 154u, 170u},
  {InterruptId::Reserved171, StartupSymbolId::Reserved171_IRQHandler, 155u, 171u},
  {InterruptId::FLEXIO3, StartupSymbolId::FLEXIO3_IRQHandler, 156u, 172u},
  {InterruptId::GPIO6_7_8_9, StartupSymbolId::GPIO6_7_8_9_IRQHandler, 157u, 173u},
}};

template<InterruptId Id>
struct InterruptStubTraits {
  static constexpr bool kPresent = false;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::none;
  static constexpr std::uint16_t kLine = 0xFFFFu;
  static constexpr std::uint16_t kVectorSlot = 0xFFFFu;
};

template<>
struct InterruptStubTraits<InterruptId::DMA0_DMA16> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA0_DMA16_IRQHandler;
  static constexpr std::uint16_t kLine = 0u;
  static constexpr std::uint16_t kVectorSlot = 16u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA1_DMA17> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA1_DMA17_IRQHandler;
  static constexpr std::uint16_t kLine = 1u;
  static constexpr std::uint16_t kVectorSlot = 17u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA2_DMA18> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA2_DMA18_IRQHandler;
  static constexpr std::uint16_t kLine = 2u;
  static constexpr std::uint16_t kVectorSlot = 18u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA3_DMA19> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA3_DMA19_IRQHandler;
  static constexpr std::uint16_t kLine = 3u;
  static constexpr std::uint16_t kVectorSlot = 19u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA4_DMA20> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA4_DMA20_IRQHandler;
  static constexpr std::uint16_t kLine = 4u;
  static constexpr std::uint16_t kVectorSlot = 20u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA5_DMA21> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA5_DMA21_IRQHandler;
  static constexpr std::uint16_t kLine = 5u;
  static constexpr std::uint16_t kVectorSlot = 21u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA6_DMA22> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA6_DMA22_IRQHandler;
  static constexpr std::uint16_t kLine = 6u;
  static constexpr std::uint16_t kVectorSlot = 22u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA7_DMA23> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA7_DMA23_IRQHandler;
  static constexpr std::uint16_t kLine = 7u;
  static constexpr std::uint16_t kVectorSlot = 23u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA8_DMA24> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA8_DMA24_IRQHandler;
  static constexpr std::uint16_t kLine = 8u;
  static constexpr std::uint16_t kVectorSlot = 24u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA9_DMA25> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA9_DMA25_IRQHandler;
  static constexpr std::uint16_t kLine = 9u;
  static constexpr std::uint16_t kVectorSlot = 25u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA10_DMA26> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA10_DMA26_IRQHandler;
  static constexpr std::uint16_t kLine = 10u;
  static constexpr std::uint16_t kVectorSlot = 26u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA11_DMA27> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA11_DMA27_IRQHandler;
  static constexpr std::uint16_t kLine = 11u;
  static constexpr std::uint16_t kVectorSlot = 27u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA12_DMA28> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA12_DMA28_IRQHandler;
  static constexpr std::uint16_t kLine = 12u;
  static constexpr std::uint16_t kVectorSlot = 28u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA13_DMA29> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA13_DMA29_IRQHandler;
  static constexpr std::uint16_t kLine = 13u;
  static constexpr std::uint16_t kVectorSlot = 29u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA14_DMA30> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA14_DMA30_IRQHandler;
  static constexpr std::uint16_t kLine = 14u;
  static constexpr std::uint16_t kVectorSlot = 30u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA15_DMA31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA15_DMA31_IRQHandler;
  static constexpr std::uint16_t kLine = 15u;
  static constexpr std::uint16_t kVectorSlot = 31u;
};

template<>
struct InterruptStubTraits<InterruptId::DMA_ERROR> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DMA_ERROR_IRQHandler;
  static constexpr std::uint16_t kLine = 16u;
  static constexpr std::uint16_t kVectorSlot = 32u;
};

template<>
struct InterruptStubTraits<InterruptId::CTI0_ERROR> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CTI0_ERROR_IRQHandler;
  static constexpr std::uint16_t kLine = 17u;
  static constexpr std::uint16_t kVectorSlot = 33u;
};

template<>
struct InterruptStubTraits<InterruptId::CTI1_ERROR> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CTI1_ERROR_IRQHandler;
  static constexpr std::uint16_t kLine = 18u;
  static constexpr std::uint16_t kVectorSlot = 34u;
};

template<>
struct InterruptStubTraits<InterruptId::CORE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CORE_IRQHandler;
  static constexpr std::uint16_t kLine = 19u;
  static constexpr std::uint16_t kVectorSlot = 35u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART1_IRQHandler;
  static constexpr std::uint16_t kLine = 20u;
  static constexpr std::uint16_t kVectorSlot = 36u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART2_IRQHandler;
  static constexpr std::uint16_t kLine = 21u;
  static constexpr std::uint16_t kVectorSlot = 37u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART3_IRQHandler;
  static constexpr std::uint16_t kLine = 22u;
  static constexpr std::uint16_t kVectorSlot = 38u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART4_IRQHandler;
  static constexpr std::uint16_t kLine = 23u;
  static constexpr std::uint16_t kVectorSlot = 39u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART5_IRQHandler;
  static constexpr std::uint16_t kLine = 24u;
  static constexpr std::uint16_t kVectorSlot = 40u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART6> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART6_IRQHandler;
  static constexpr std::uint16_t kLine = 25u;
  static constexpr std::uint16_t kVectorSlot = 41u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART7_IRQHandler;
  static constexpr std::uint16_t kLine = 26u;
  static constexpr std::uint16_t kVectorSlot = 42u;
};

template<>
struct InterruptStubTraits<InterruptId::LPUART8> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPUART8_IRQHandler;
  static constexpr std::uint16_t kLine = 27u;
  static constexpr std::uint16_t kVectorSlot = 43u;
};

template<>
struct InterruptStubTraits<InterruptId::LPI2C1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPI2C1_IRQHandler;
  static constexpr std::uint16_t kLine = 28u;
  static constexpr std::uint16_t kVectorSlot = 44u;
};

template<>
struct InterruptStubTraits<InterruptId::LPI2C2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPI2C2_IRQHandler;
  static constexpr std::uint16_t kLine = 29u;
  static constexpr std::uint16_t kVectorSlot = 45u;
};

template<>
struct InterruptStubTraits<InterruptId::LPI2C3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPI2C3_IRQHandler;
  static constexpr std::uint16_t kLine = 30u;
  static constexpr std::uint16_t kVectorSlot = 46u;
};

template<>
struct InterruptStubTraits<InterruptId::LPI2C4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPI2C4_IRQHandler;
  static constexpr std::uint16_t kLine = 31u;
  static constexpr std::uint16_t kVectorSlot = 47u;
};

template<>
struct InterruptStubTraits<InterruptId::LPSPI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPSPI1_IRQHandler;
  static constexpr std::uint16_t kLine = 32u;
  static constexpr std::uint16_t kVectorSlot = 48u;
};

template<>
struct InterruptStubTraits<InterruptId::LPSPI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPSPI2_IRQHandler;
  static constexpr std::uint16_t kLine = 33u;
  static constexpr std::uint16_t kVectorSlot = 49u;
};

template<>
struct InterruptStubTraits<InterruptId::LPSPI3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPSPI3_IRQHandler;
  static constexpr std::uint16_t kLine = 34u;
  static constexpr std::uint16_t kVectorSlot = 50u;
};

template<>
struct InterruptStubTraits<InterruptId::LPSPI4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LPSPI4_IRQHandler;
  static constexpr std::uint16_t kLine = 35u;
  static constexpr std::uint16_t kVectorSlot = 51u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN1_IRQHandler;
  static constexpr std::uint16_t kLine = 36u;
  static constexpr std::uint16_t kVectorSlot = 52u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN2_IRQHandler;
  static constexpr std::uint16_t kLine = 37u;
  static constexpr std::uint16_t kVectorSlot = 53u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXRAM> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXRAM_IRQHandler;
  static constexpr std::uint16_t kLine = 38u;
  static constexpr std::uint16_t kVectorSlot = 54u;
};

template<>
struct InterruptStubTraits<InterruptId::KPP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::KPP_IRQHandler;
  static constexpr std::uint16_t kLine = 39u;
  static constexpr std::uint16_t kVectorSlot = 55u;
};

template<>
struct InterruptStubTraits<InterruptId::TSC_DIG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TSC_DIG_IRQHandler;
  static constexpr std::uint16_t kLine = 40u;
  static constexpr std::uint16_t kVectorSlot = 56u;
};

template<>
struct InterruptStubTraits<InterruptId::GPR_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPR_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 41u;
  static constexpr std::uint16_t kVectorSlot = 57u;
};

template<>
struct InterruptStubTraits<InterruptId::LCDIF> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::LCDIF_IRQHandler;
  static constexpr std::uint16_t kLine = 42u;
  static constexpr std::uint16_t kVectorSlot = 58u;
};

template<>
struct InterruptStubTraits<InterruptId::CSI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CSI_IRQHandler;
  static constexpr std::uint16_t kLine = 43u;
  static constexpr std::uint16_t kVectorSlot = 59u;
};

template<>
struct InterruptStubTraits<InterruptId::PXP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PXP_IRQHandler;
  static constexpr std::uint16_t kLine = 44u;
  static constexpr std::uint16_t kVectorSlot = 60u;
};

template<>
struct InterruptStubTraits<InterruptId::WDOG2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::WDOG2_IRQHandler;
  static constexpr std::uint16_t kLine = 45u;
  static constexpr std::uint16_t kVectorSlot = 61u;
};

template<>
struct InterruptStubTraits<InterruptId::SNVS_HP_WRAPPER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SNVS_HP_WRAPPER_IRQHandler;
  static constexpr std::uint16_t kLine = 46u;
  static constexpr std::uint16_t kVectorSlot = 62u;
};

template<>
struct InterruptStubTraits<InterruptId::SNVS_HP_WRAPPER_TZ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SNVS_HP_WRAPPER_TZ_IRQHandler;
  static constexpr std::uint16_t kLine = 47u;
  static constexpr std::uint16_t kVectorSlot = 63u;
};

template<>
struct InterruptStubTraits<InterruptId::SNVS_LP_WRAPPER> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SNVS_LP_WRAPPER_IRQHandler;
  static constexpr std::uint16_t kLine = 48u;
  static constexpr std::uint16_t kVectorSlot = 64u;
};

template<>
struct InterruptStubTraits<InterruptId::CSU> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CSU_IRQHandler;
  static constexpr std::uint16_t kLine = 49u;
  static constexpr std::uint16_t kVectorSlot = 65u;
};

template<>
struct InterruptStubTraits<InterruptId::DCP> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DCP_IRQHandler;
  static constexpr std::uint16_t kLine = 50u;
  static constexpr std::uint16_t kVectorSlot = 66u;
};

template<>
struct InterruptStubTraits<InterruptId::DCP_VMI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DCP_VMI_IRQHandler;
  static constexpr std::uint16_t kLine = 51u;
  static constexpr std::uint16_t kVectorSlot = 67u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved68> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved68_IRQHandler;
  static constexpr std::uint16_t kLine = 52u;
  static constexpr std::uint16_t kVectorSlot = 68u;
};

template<>
struct InterruptStubTraits<InterruptId::TRNG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TRNG_IRQHandler;
  static constexpr std::uint16_t kLine = 53u;
  static constexpr std::uint16_t kVectorSlot = 69u;
};

template<>
struct InterruptStubTraits<InterruptId::SJC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SJC_IRQHandler;
  static constexpr std::uint16_t kLine = 54u;
  static constexpr std::uint16_t kVectorSlot = 70u;
};

template<>
struct InterruptStubTraits<InterruptId::BEE> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::BEE_IRQHandler;
  static constexpr std::uint16_t kLine = 55u;
  static constexpr std::uint16_t kVectorSlot = 71u;
};

template<>
struct InterruptStubTraits<InterruptId::SAI1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SAI1_IRQHandler;
  static constexpr std::uint16_t kLine = 56u;
  static constexpr std::uint16_t kVectorSlot = 72u;
};

template<>
struct InterruptStubTraits<InterruptId::SAI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SAI2_IRQHandler;
  static constexpr std::uint16_t kLine = 57u;
  static constexpr std::uint16_t kVectorSlot = 73u;
};

template<>
struct InterruptStubTraits<InterruptId::SAI3_RX> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SAI3_RX_IRQHandler;
  static constexpr std::uint16_t kLine = 58u;
  static constexpr std::uint16_t kVectorSlot = 74u;
};

template<>
struct InterruptStubTraits<InterruptId::SAI3_TX> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SAI3_TX_IRQHandler;
  static constexpr std::uint16_t kLine = 59u;
  static constexpr std::uint16_t kVectorSlot = 75u;
};

template<>
struct InterruptStubTraits<InterruptId::SPDIF> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SPDIF_IRQHandler;
  static constexpr std::uint16_t kLine = 60u;
  static constexpr std::uint16_t kVectorSlot = 76u;
};

template<>
struct InterruptStubTraits<InterruptId::PMU_EVENT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PMU_EVENT_IRQHandler;
  static constexpr std::uint16_t kLine = 61u;
  static constexpr std::uint16_t kVectorSlot = 77u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved78> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved78_IRQHandler;
  static constexpr std::uint16_t kLine = 62u;
  static constexpr std::uint16_t kVectorSlot = 78u;
};

template<>
struct InterruptStubTraits<InterruptId::TEMP_LOW_HIGH> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TEMP_LOW_HIGH_IRQHandler;
  static constexpr std::uint16_t kLine = 63u;
  static constexpr std::uint16_t kVectorSlot = 79u;
};

template<>
struct InterruptStubTraits<InterruptId::TEMP_PANIC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TEMP_PANIC_IRQHandler;
  static constexpr std::uint16_t kLine = 64u;
  static constexpr std::uint16_t kVectorSlot = 80u;
};

template<>
struct InterruptStubTraits<InterruptId::USB_PHY1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USB_PHY1_IRQHandler;
  static constexpr std::uint16_t kLine = 65u;
  static constexpr std::uint16_t kVectorSlot = 81u;
};

template<>
struct InterruptStubTraits<InterruptId::USB_PHY2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USB_PHY2_IRQHandler;
  static constexpr std::uint16_t kLine = 66u;
  static constexpr std::uint16_t kVectorSlot = 82u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC1_IRQHandler;
  static constexpr std::uint16_t kLine = 67u;
  static constexpr std::uint16_t kVectorSlot = 83u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC2_IRQHandler;
  static constexpr std::uint16_t kLine = 68u;
  static constexpr std::uint16_t kVectorSlot = 84u;
};

template<>
struct InterruptStubTraits<InterruptId::DCDC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::DCDC_IRQHandler;
  static constexpr std::uint16_t kLine = 69u;
  static constexpr std::uint16_t kVectorSlot = 85u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved86> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved86_IRQHandler;
  static constexpr std::uint16_t kLine = 70u;
  static constexpr std::uint16_t kVectorSlot = 86u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO10> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO10_IRQHandler;
  static constexpr std::uint16_t kLine = 71u;
  static constexpr std::uint16_t kVectorSlot = 87u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT0_IRQHandler;
  static constexpr std::uint16_t kLine = 72u;
  static constexpr std::uint16_t kVectorSlot = 88u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT1_IRQHandler;
  static constexpr std::uint16_t kLine = 73u;
  static constexpr std::uint16_t kVectorSlot = 89u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT2_IRQHandler;
  static constexpr std::uint16_t kLine = 74u;
  static constexpr std::uint16_t kVectorSlot = 90u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT3_IRQHandler;
  static constexpr std::uint16_t kLine = 75u;
  static constexpr std::uint16_t kVectorSlot = 91u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT4_IRQHandler;
  static constexpr std::uint16_t kLine = 76u;
  static constexpr std::uint16_t kVectorSlot = 92u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT5> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT5_IRQHandler;
  static constexpr std::uint16_t kLine = 77u;
  static constexpr std::uint16_t kVectorSlot = 93u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT6> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT6_IRQHandler;
  static constexpr std::uint16_t kLine = 78u;
  static constexpr std::uint16_t kVectorSlot = 94u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_INT7> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_INT7_IRQHandler;
  static constexpr std::uint16_t kLine = 79u;
  static constexpr std::uint16_t kVectorSlot = 95u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_Combined_0_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_Combined_0_15_IRQHandler;
  static constexpr std::uint16_t kLine = 80u;
  static constexpr std::uint16_t kVectorSlot = 96u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO1_Combined_16_31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO1_Combined_16_31_IRQHandler;
  static constexpr std::uint16_t kLine = 81u;
  static constexpr std::uint16_t kVectorSlot = 97u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO2_Combined_0_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO2_Combined_0_15_IRQHandler;
  static constexpr std::uint16_t kLine = 82u;
  static constexpr std::uint16_t kVectorSlot = 98u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO2_Combined_16_31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO2_Combined_16_31_IRQHandler;
  static constexpr std::uint16_t kLine = 83u;
  static constexpr std::uint16_t kVectorSlot = 99u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO3_Combined_0_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO3_Combined_0_15_IRQHandler;
  static constexpr std::uint16_t kLine = 84u;
  static constexpr std::uint16_t kVectorSlot = 100u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO3_Combined_16_31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO3_Combined_16_31_IRQHandler;
  static constexpr std::uint16_t kLine = 85u;
  static constexpr std::uint16_t kVectorSlot = 101u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO4_Combined_0_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO4_Combined_0_15_IRQHandler;
  static constexpr std::uint16_t kLine = 86u;
  static constexpr std::uint16_t kVectorSlot = 102u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO4_Combined_16_31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO4_Combined_16_31_IRQHandler;
  static constexpr std::uint16_t kLine = 87u;
  static constexpr std::uint16_t kVectorSlot = 103u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO5_Combined_0_15> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO5_Combined_0_15_IRQHandler;
  static constexpr std::uint16_t kLine = 88u;
  static constexpr std::uint16_t kVectorSlot = 104u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO5_Combined_16_31> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO5_Combined_16_31_IRQHandler;
  static constexpr std::uint16_t kLine = 89u;
  static constexpr std::uint16_t kVectorSlot = 105u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXIO1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXIO1_IRQHandler;
  static constexpr std::uint16_t kLine = 90u;
  static constexpr std::uint16_t kVectorSlot = 106u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXIO2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXIO2_IRQHandler;
  static constexpr std::uint16_t kLine = 91u;
  static constexpr std::uint16_t kVectorSlot = 107u;
};

template<>
struct InterruptStubTraits<InterruptId::WDOG1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::WDOG1_IRQHandler;
  static constexpr std::uint16_t kLine = 92u;
  static constexpr std::uint16_t kVectorSlot = 108u;
};

template<>
struct InterruptStubTraits<InterruptId::RTWDOG> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::RTWDOG_IRQHandler;
  static constexpr std::uint16_t kLine = 93u;
  static constexpr std::uint16_t kVectorSlot = 109u;
};

template<>
struct InterruptStubTraits<InterruptId::EWM> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::EWM_IRQHandler;
  static constexpr std::uint16_t kLine = 94u;
  static constexpr std::uint16_t kVectorSlot = 110u;
};

template<>
struct InterruptStubTraits<InterruptId::CCM_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CCM_1_IRQHandler;
  static constexpr std::uint16_t kLine = 95u;
  static constexpr std::uint16_t kVectorSlot = 111u;
};

template<>
struct InterruptStubTraits<InterruptId::CCM_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CCM_2_IRQHandler;
  static constexpr std::uint16_t kLine = 96u;
  static constexpr std::uint16_t kVectorSlot = 112u;
};

template<>
struct InterruptStubTraits<InterruptId::GPC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPC_IRQHandler;
  static constexpr std::uint16_t kLine = 97u;
  static constexpr std::uint16_t kVectorSlot = 113u;
};

template<>
struct InterruptStubTraits<InterruptId::SRC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SRC_IRQHandler;
  static constexpr std::uint16_t kLine = 98u;
  static constexpr std::uint16_t kVectorSlot = 114u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved115> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved115_IRQHandler;
  static constexpr std::uint16_t kLine = 99u;
  static constexpr std::uint16_t kVectorSlot = 115u;
};

template<>
struct InterruptStubTraits<InterruptId::GPT1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPT1_IRQHandler;
  static constexpr std::uint16_t kLine = 100u;
  static constexpr std::uint16_t kVectorSlot = 116u;
};

template<>
struct InterruptStubTraits<InterruptId::GPT2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPT2_IRQHandler;
  static constexpr std::uint16_t kLine = 101u;
  static constexpr std::uint16_t kVectorSlot = 117u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM1_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM1_0_IRQHandler;
  static constexpr std::uint16_t kLine = 102u;
  static constexpr std::uint16_t kVectorSlot = 118u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM1_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM1_1_IRQHandler;
  static constexpr std::uint16_t kLine = 103u;
  static constexpr std::uint16_t kVectorSlot = 119u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM1_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM1_2_IRQHandler;
  static constexpr std::uint16_t kLine = 104u;
  static constexpr std::uint16_t kVectorSlot = 120u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM1_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM1_3_IRQHandler;
  static constexpr std::uint16_t kLine = 105u;
  static constexpr std::uint16_t kVectorSlot = 121u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM1_FAULT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM1_FAULT_IRQHandler;
  static constexpr std::uint16_t kLine = 106u;
  static constexpr std::uint16_t kVectorSlot = 122u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXSPI2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXSPI2_IRQHandler;
  static constexpr std::uint16_t kLine = 107u;
  static constexpr std::uint16_t kVectorSlot = 123u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXSPI> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXSPI_IRQHandler;
  static constexpr std::uint16_t kLine = 108u;
  static constexpr std::uint16_t kVectorSlot = 124u;
};

template<>
struct InterruptStubTraits<InterruptId::SEMC> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::SEMC_IRQHandler;
  static constexpr std::uint16_t kLine = 109u;
  static constexpr std::uint16_t kVectorSlot = 125u;
};

template<>
struct InterruptStubTraits<InterruptId::USDHC1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USDHC1_IRQHandler;
  static constexpr std::uint16_t kLine = 110u;
  static constexpr std::uint16_t kVectorSlot = 126u;
};

template<>
struct InterruptStubTraits<InterruptId::USDHC2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USDHC2_IRQHandler;
  static constexpr std::uint16_t kLine = 111u;
  static constexpr std::uint16_t kVectorSlot = 127u;
};

template<>
struct InterruptStubTraits<InterruptId::USB_OTG2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USB_OTG2_IRQHandler;
  static constexpr std::uint16_t kLine = 112u;
  static constexpr std::uint16_t kVectorSlot = 128u;
};

template<>
struct InterruptStubTraits<InterruptId::USB_OTG1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::USB_OTG1_IRQHandler;
  static constexpr std::uint16_t kLine = 113u;
  static constexpr std::uint16_t kVectorSlot = 129u;
};

template<>
struct InterruptStubTraits<InterruptId::ENET> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENET_IRQHandler;
  static constexpr std::uint16_t kLine = 114u;
  static constexpr std::uint16_t kVectorSlot = 130u;
};

template<>
struct InterruptStubTraits<InterruptId::ENET_1588_Timer> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENET_1588_Timer_IRQHandler;
  static constexpr std::uint16_t kLine = 115u;
  static constexpr std::uint16_t kVectorSlot = 131u;
};

template<>
struct InterruptStubTraits<InterruptId::XBAR1_IRQ_0_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::XBAR1_IRQ_0_1_IRQHandler;
  static constexpr std::uint16_t kLine = 116u;
  static constexpr std::uint16_t kVectorSlot = 132u;
};

template<>
struct InterruptStubTraits<InterruptId::XBAR1_IRQ_2_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::XBAR1_IRQ_2_3_IRQHandler;
  static constexpr std::uint16_t kLine = 117u;
  static constexpr std::uint16_t kVectorSlot = 133u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_ETC_IRQ0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_ETC_IRQ0_IRQHandler;
  static constexpr std::uint16_t kLine = 118u;
  static constexpr std::uint16_t kVectorSlot = 134u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_ETC_IRQ1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_ETC_IRQ1_IRQHandler;
  static constexpr std::uint16_t kLine = 119u;
  static constexpr std::uint16_t kVectorSlot = 135u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_ETC_IRQ2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_ETC_IRQ2_IRQHandler;
  static constexpr std::uint16_t kLine = 120u;
  static constexpr std::uint16_t kVectorSlot = 136u;
};

template<>
struct InterruptStubTraits<InterruptId::ADC_ETC_ERROR_IRQ> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ADC_ETC_ERROR_IRQ_IRQHandler;
  static constexpr std::uint16_t kLine = 121u;
  static constexpr std::uint16_t kVectorSlot = 137u;
};

template<>
struct InterruptStubTraits<InterruptId::PIT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PIT_IRQHandler;
  static constexpr std::uint16_t kLine = 122u;
  static constexpr std::uint16_t kVectorSlot = 138u;
};

template<>
struct InterruptStubTraits<InterruptId::ACMP1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ACMP1_IRQHandler;
  static constexpr std::uint16_t kLine = 123u;
  static constexpr std::uint16_t kVectorSlot = 139u;
};

template<>
struct InterruptStubTraits<InterruptId::ACMP2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ACMP2_IRQHandler;
  static constexpr std::uint16_t kLine = 124u;
  static constexpr std::uint16_t kVectorSlot = 140u;
};

template<>
struct InterruptStubTraits<InterruptId::ACMP3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ACMP3_IRQHandler;
  static constexpr std::uint16_t kLine = 125u;
  static constexpr std::uint16_t kVectorSlot = 141u;
};

template<>
struct InterruptStubTraits<InterruptId::ACMP4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ACMP4_IRQHandler;
  static constexpr std::uint16_t kLine = 126u;
  static constexpr std::uint16_t kVectorSlot = 142u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved143> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved143_IRQHandler;
  static constexpr std::uint16_t kLine = 127u;
  static constexpr std::uint16_t kVectorSlot = 143u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved144> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved144_IRQHandler;
  static constexpr std::uint16_t kLine = 128u;
  static constexpr std::uint16_t kVectorSlot = 144u;
};

template<>
struct InterruptStubTraits<InterruptId::ENC1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENC1_IRQHandler;
  static constexpr std::uint16_t kLine = 129u;
  static constexpr std::uint16_t kVectorSlot = 145u;
};

template<>
struct InterruptStubTraits<InterruptId::ENC2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENC2_IRQHandler;
  static constexpr std::uint16_t kLine = 130u;
  static constexpr std::uint16_t kVectorSlot = 146u;
};

template<>
struct InterruptStubTraits<InterruptId::ENC3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENC3_IRQHandler;
  static constexpr std::uint16_t kLine = 131u;
  static constexpr std::uint16_t kVectorSlot = 147u;
};

template<>
struct InterruptStubTraits<InterruptId::ENC4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENC4_IRQHandler;
  static constexpr std::uint16_t kLine = 132u;
  static constexpr std::uint16_t kVectorSlot = 148u;
};

template<>
struct InterruptStubTraits<InterruptId::TMR1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TMR1_IRQHandler;
  static constexpr std::uint16_t kLine = 133u;
  static constexpr std::uint16_t kVectorSlot = 149u;
};

template<>
struct InterruptStubTraits<InterruptId::TMR2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TMR2_IRQHandler;
  static constexpr std::uint16_t kLine = 134u;
  static constexpr std::uint16_t kVectorSlot = 150u;
};

template<>
struct InterruptStubTraits<InterruptId::TMR3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TMR3_IRQHandler;
  static constexpr std::uint16_t kLine = 135u;
  static constexpr std::uint16_t kVectorSlot = 151u;
};

template<>
struct InterruptStubTraits<InterruptId::TMR4> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::TMR4_IRQHandler;
  static constexpr std::uint16_t kLine = 136u;
  static constexpr std::uint16_t kVectorSlot = 152u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM2_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM2_0_IRQHandler;
  static constexpr std::uint16_t kLine = 137u;
  static constexpr std::uint16_t kVectorSlot = 153u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM2_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM2_1_IRQHandler;
  static constexpr std::uint16_t kLine = 138u;
  static constexpr std::uint16_t kVectorSlot = 154u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM2_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM2_2_IRQHandler;
  static constexpr std::uint16_t kLine = 139u;
  static constexpr std::uint16_t kVectorSlot = 155u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM2_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM2_3_IRQHandler;
  static constexpr std::uint16_t kLine = 140u;
  static constexpr std::uint16_t kVectorSlot = 156u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM2_FAULT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM2_FAULT_IRQHandler;
  static constexpr std::uint16_t kLine = 141u;
  static constexpr std::uint16_t kVectorSlot = 157u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM3_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM3_0_IRQHandler;
  static constexpr std::uint16_t kLine = 142u;
  static constexpr std::uint16_t kVectorSlot = 158u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM3_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM3_1_IRQHandler;
  static constexpr std::uint16_t kLine = 143u;
  static constexpr std::uint16_t kVectorSlot = 159u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM3_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM3_2_IRQHandler;
  static constexpr std::uint16_t kLine = 144u;
  static constexpr std::uint16_t kVectorSlot = 160u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM3_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM3_3_IRQHandler;
  static constexpr std::uint16_t kLine = 145u;
  static constexpr std::uint16_t kVectorSlot = 161u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM3_FAULT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM3_FAULT_IRQHandler;
  static constexpr std::uint16_t kLine = 146u;
  static constexpr std::uint16_t kVectorSlot = 162u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM4_0> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM4_0_IRQHandler;
  static constexpr std::uint16_t kLine = 147u;
  static constexpr std::uint16_t kVectorSlot = 163u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM4_1> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM4_1_IRQHandler;
  static constexpr std::uint16_t kLine = 148u;
  static constexpr std::uint16_t kVectorSlot = 164u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM4_2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM4_2_IRQHandler;
  static constexpr std::uint16_t kLine = 149u;
  static constexpr std::uint16_t kVectorSlot = 165u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM4_3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM4_3_IRQHandler;
  static constexpr std::uint16_t kLine = 150u;
  static constexpr std::uint16_t kVectorSlot = 166u;
};

template<>
struct InterruptStubTraits<InterruptId::PWM4_FAULT> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::PWM4_FAULT_IRQHandler;
  static constexpr std::uint16_t kLine = 151u;
  static constexpr std::uint16_t kVectorSlot = 167u;
};

template<>
struct InterruptStubTraits<InterruptId::ENET2> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENET2_IRQHandler;
  static constexpr std::uint16_t kLine = 152u;
  static constexpr std::uint16_t kVectorSlot = 168u;
};

template<>
struct InterruptStubTraits<InterruptId::ENET2_1588_Timer> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::ENET2_1588_Timer_IRQHandler;
  static constexpr std::uint16_t kLine = 153u;
  static constexpr std::uint16_t kVectorSlot = 169u;
};

template<>
struct InterruptStubTraits<InterruptId::CAN3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::CAN3_IRQHandler;
  static constexpr std::uint16_t kLine = 154u;
  static constexpr std::uint16_t kVectorSlot = 170u;
};

template<>
struct InterruptStubTraits<InterruptId::Reserved171> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::Reserved171_IRQHandler;
  static constexpr std::uint16_t kLine = 155u;
  static constexpr std::uint16_t kVectorSlot = 171u;
};

template<>
struct InterruptStubTraits<InterruptId::FLEXIO3> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::FLEXIO3_IRQHandler;
  static constexpr std::uint16_t kLine = 156u;
  static constexpr std::uint16_t kVectorSlot = 172u;
};

template<>
struct InterruptStubTraits<InterruptId::GPIO6_7_8_9> {
  static constexpr bool kPresent = true;
  static constexpr StartupSymbolId kSymbolId = StartupSymbolId::GPIO6_7_8_9_IRQHandler;
  static constexpr std::uint16_t kLine = 157u;
  static constexpr std::uint16_t kVectorSlot = 173u;
};

}
}
}
}
}
}
