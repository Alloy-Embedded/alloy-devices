#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g0b1re {
enum class PeripheralId : std::uint16_t {
  ADC1,
  COMP,
  CRC,
  DAC,
  DBG,
  DMA1,
  DMA2,
  DMAMUX1,
  EXTI,
  FDCAN1,
  FDCAN2,
  FLASH,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOE,
  GPIOF,
  HDMI_CEC,
  I2C1,
  I2C2,
  I2C3,
  IWDG,
  LPTIM1,
  LPTIM2,
  LPUART1,
  LPUART2,
  PWR,
  RCC,
  RTC,
  SPI1,
  SPI2,
  SPI3,
  TAMP,
  TIM1,
  TIM14,
  TIM15,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  TIM4,
  TIM6,
  TIM7,
  UCPD1,
  UCPD2,
  USART1,
  USART2,
  USART3,
  USART4,
  USART5,
  USART6,
  USB,
  VREFBUF,
  WWDG,
};

struct PeripheralInstanceDescriptor {
  PeripheralId peripheral_id;
  const char* name;
  const char* ip_name;
  const char* ip_version;
  const char* backend_schema_id;
  int instance;
  std::uintptr_t base_address;
  const char* rcc_enable_signal;
  const char* rcc_reset_signal;
  const char* clock_gate_id;
  const char* reset_id;
  const char* selector_id;
  std::uint16_t interrupt_binding_offset;
  std::uint16_t interrupt_binding_count;
  std::uint16_t dma_binding_offset;
  std::uint16_t dma_binding_count;
  std::uint16_t capability_overlay_offset;
  std::uint16_t capability_overlay_count;
  const char* interrupt_names;
  const char* capability_overlay_ids;
  int register_count;
};
inline constexpr std::array<PeripheralInstanceDescriptor, 55> kPeripheralInstances = {{
  {PeripheralId::ADC1, "ADC1", "adc", "aditf4_v3_0_G0_Cube", "alloy.adc.st-aditf4-v3-0-g0-cube", 1, 0x40012400u, "RCC_APBENR2.ADCEN", "RCC_APBRSTR2.ADCRST", "gate:adc1", "reset:adc1", nullptr, 0u, 1u, 0u, 0u, 0u, 0u, "ADC_COMP", "", 15},
  {PeripheralId::COMP, "COMP", "comp", nullptr, "alloy.comp.st-comp", 0, 0x40010200u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 3},
  {PeripheralId::CRC, "CRC", "crc", "integtest1_v2_0", "alloy.crc.st-integtest1-v2-0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 5},
  {PeripheralId::DAC, "DAC", "dac", nullptr, "alloy.dac.st-dac", 0, 0x40007400u, nullptr, nullptr, nullptr, nullptr, nullptr, 1u, 1u, 0u, 0u, 0u, 0u, "TIM6_DAC_LPTIM1", "", 20},
  {PeripheralId::DBG, "DBG", "dbg", nullptr, "alloy.dbg.st-dbg", 0, 0x40015800u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::DMA1, "DMA1", "dma", nullptr, "alloy.dma.st-dma", 1, 0x40020000u, "RCC_AHBENR.DMA1EN", "RCC_AHBRSTR.DMA1RST", "gate:dma1", "reset:dma1", nullptr, 2u, 3u, 0u, 0u, 0u, 0u, "DMA1_Channel1,DMA1_Channel2_3,DMA1_Channel4_5_6_7_DMAMUX_DMA2_Channel1_2_3_4_5", "", 30},
  {PeripheralId::DMA2, "DMA2", "dma", nullptr, "alloy.dma.st-dma", 2, 0x40020400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 30},
  {PeripheralId::DMAMUX1, "DMAMUX1", "dmamux", nullptr, "alloy.dma-router.st-dmamux", 1, 0x40020800u, "RCC_AHBENR.DMAMUX1EN", "RCC_AHBRSTR.DMAMUX1RST", "gate:dmamux1", "reset:dmamux1", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 15},
  {PeripheralId::EXTI, "EXTI", "exti", nullptr, "alloy.exti.st-exti", 0, 0x40021800u, nullptr, nullptr, nullptr, nullptr, nullptr, 5u, 3u, 0u, 0u, 0u, 0u, "EXTI0_1,EXTI2_3,EXTI4_15", "", 18},
  {PeripheralId::FDCAN1, "FDCAN1", "fdcan", "fdcan1_v1_0_Cube", "alloy.fdcan.st-fdcan1-v1-0-cube", 1, 0x40006400u, "RCC_APBENR1.FDCANEN", "RCC_APBRSTR1.FDCANRST", "gate:fdcan1", "reset:fdcan1", nullptr, 0u, 0u, 0u, 0u, 0u, 2u, "", "capability-instance:fdcan1:lqfp64:rx,capability-instance:fdcan1:lqfp64:tx", 37},
  {PeripheralId::FDCAN2, "FDCAN2", "fdcan", "fdcan1_v1_0_Cube", "alloy.fdcan.st-fdcan1-v1-0-cube", 2, 0x40006800u, "RCC_APBENR1.FDCANEN", "RCC_APBRSTR1.FDCANRST", "gate:fdcan2", "reset:fdcan2", nullptr, 0u, 0u, 0u, 0u, 2u, 2u, "", "capability-instance:fdcan2:lqfp64:rx,capability-instance:fdcan2:lqfp64:tx", 37},
  {PeripheralId::FLASH, "FLASH", "flash", nullptr, "alloy.flash.st-flash", 0, 0x40022000u, nullptr, nullptr, nullptr, nullptr, nullptr, 8u, 1u, 0u, 0u, 0u, 0u, "FLASH", "", 20},
  {PeripheralId::GPIOA, "GPIOA", "gpio", nullptr, "alloy.gpio.st-gpio", 0, 0x50000000u, "RCC_IOPENR.GPIOAEN", "RCC_IOPRSTR.GPIOARST", "gate:gpioa", "reset:gpioa", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOB, "GPIOB", "gpio", nullptr, "alloy.gpio.st-gpio", 1, 0x50000400u, "RCC_IOPENR.GPIOBEN", "RCC_IOPRSTR.GPIOBRST", "gate:gpiob", "reset:gpiob", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOC, "GPIOC", "gpio", nullptr, "alloy.gpio.st-gpio", 2, 0x50000800u, "RCC_IOPENR.GPIOCEN", "RCC_IOPRSTR.GPIOCRST", "gate:gpioc", "reset:gpioc", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOD, "GPIOD", "gpio", nullptr, "alloy.gpio.st-gpio", 3, 0x50000C00u, "RCC_IOPENR.GPIODEN", "RCC_IOPRSTR.GPIODRST", "gate:gpiod", "reset:gpiod", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOE, "GPIOE", "gpio", nullptr, "alloy.gpio.st-gpio", 4, 0x50001000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOF, "GPIOF", "gpio", nullptr, "alloy.gpio.st-gpio", 5, 0x50001400u, "RCC_IOPENR.GPIOFEN", "RCC_IOPRSTR.GPIOFRST", "gate:gpiof", "reset:gpiof", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::HDMI_CEC, "HDMI_CEC", "hdmi_cec", "hdmi_cec_v2_0_Cube", "alloy.hdmi_cec.st-hdmi-cec-v2-0-cube", 0, 0x40007800u, nullptr, nullptr, nullptr, nullptr, nullptr, 9u, 1u, 0u, 0u, 0u, 0u, "CEC", "", 6},
  {PeripheralId::I2C1, "I2C1", "i2c1", "i2c2_v1_1_Cube", "alloy.i2c1.st-i2c2-v1-1-cube", 0, 0x40005400u, "RCC_APBENR1.I2C1EN", "RCC_APBRSTR1.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, 10u, 1u, 0u, 0u, 4u, 3u, "I2C1", "capability-instance:i2c1:lqfp64:scl,capability-instance:i2c1:lqfp64:sda,capability-instance:i2c1:lqfp64:smba", 11},
  {PeripheralId::I2C2, "I2C2", "i2c2", "i2c2_v1_1_Cube", "alloy.i2c2.st-i2c2-v1-1-cube", 0, 0x40005800u, "RCC_APBENR1.I2C2EN", "RCC_APBRSTR1.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, 11u, 1u, 0u, 0u, 7u, 3u, "I2C2_I2C3", "capability-instance:i2c2:lqfp64:scl,capability-instance:i2c2:lqfp64:sda,capability-instance:i2c2:lqfp64:smba", 11},
  {PeripheralId::I2C3, "I2C3", "i2c3", "i2c2_v1_1_Cube", "alloy.i2c3.st-i2c2-v1-1-cube", 0, 0x40008800u, "RCC_APBENR1.I2C3EN", "RCC_APBRSTR1.I2C3RST", "gate:i2c3", "reset:i2c3", nullptr, 0u, 0u, 0u, 0u, 10u, 2u, "", "capability-instance:i2c3:lqfp64:scl,capability-instance:i2c3:lqfp64:sda", 11},
  {PeripheralId::IWDG, "IWDG", "iwdg", "iwdg1_v2_0", "alloy.iwdg.st-iwdg1-v2-0", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 5},
  {PeripheralId::LPTIM1, "LPTIM1", "lptim", "G0xx_lptimer1_v1_4_Cube", "alloy.lptim.st-g0xx-lptimer1-v1-4-cube", 1, 0x40007C00u, "RCC_APBENR1.LPTIM1EN", "RCC_APBRSTR1.LPTIM1RST", "gate:lptim1", "reset:lptim1", nullptr, 0u, 0u, 0u, 0u, 12u, 4u, "", "capability-instance:lptim1:lqfp64:etr,capability-instance:lptim1:lqfp64:in1,capability-instance:lptim1:lqfp64:in2,capability-instance:lptim1:lqfp64:out", 9},
  {PeripheralId::LPTIM2, "LPTIM2", "lptim", "G0xx_lptimer1_v1_4_Cube", "alloy.lptim.st-g0xx-lptimer1-v1-4-cube", 2, 0x40009400u, "RCC_APBENR1.LPTIM2EN", "RCC_APBRSTR1.LPTIM2RST", "gate:lptim2", "reset:lptim2", nullptr, 0u, 0u, 0u, 0u, 16u, 3u, "", "capability-instance:lptim2:lqfp64:etr,capability-instance:lptim2:lqfp64:in1,capability-instance:lptim2:lqfp64:out", 9},
  {PeripheralId::LPUART1, "LPUART1", "lpuart", "sci3_v1_4_Cube", "alloy.uart.st-sci3-v1-4-cube", 1, 0x40008000u, "RCC_APBENR1.LPUART1EN", "RCC_APBRSTR1.LPUART1RST", "gate:lpuart1", "reset:lpuart1", "selector:lpuart1-kernel", 0u, 0u, 0u, 0u, 19u, 5u, "", "capability-instance:lpuart1:lqfp64:cts,capability-instance:lpuart1:lqfp64:de,capability-instance:lpuart1:lqfp64:rts,capability-instance:lpuart1:lqfp64:rx,capability-instance:lpuart1:lqfp64:tx", 10},
  {PeripheralId::LPUART2, "LPUART2", "lpuart", "sci3_v1_4_Cube", "alloy.uart.st-sci3-v1-4-cube", 2, 0x40008400u, "RCC_APBENR1.LPUART2EN", "RCC_APBRSTR1.LPUART2RST", "gate:lpuart2", "reset:lpuart2", nullptr, 0u, 0u, 0u, 0u, 24u, 5u, "", "capability-instance:lpuart2:lqfp64:cts,capability-instance:lpuart2:lqfp64:de,capability-instance:lpuart2:lqfp64:rts,capability-instance:lpuart2:lqfp64:rx,capability-instance:lpuart2:lqfp64:tx", 10},
  {PeripheralId::PWR, "PWR", "pwr", nullptr, "alloy.pwr.st-pwr", 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, 12u, 1u, 0u, 0u, 0u, 0u, "PVD", "", 19},
  {PeripheralId::RCC, "RCC", "rcc", "STM32G0-512_rcc_v1_0", "alloy.rcc.st-stm32g0-512-rcc-v1-0", 0, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, 13u, 1u, 0u, 0u, 0u, 0u, "RCC_CRS", "", 24},
  {PeripheralId::RTC, "RTC", "rtc", "rtc3_v1_0_Cube", "alloy.rtc.st-rtc3-v1-0-cube", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, 14u, 1u, 0u, 0u, 0u, 0u, "RTC_TAMP", "", 20},
  {PeripheralId::SPI1, "SPI1", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 1, 0x40013000u, "RCC_APBENR2.SPI1EN", "RCC_APBRSTR2.SPI1RST", "gate:spi1", "reset:spi1", nullptr, 15u, 1u, 0u, 0u, 29u, 4u, "SPI1", "capability-instance:spi1:lqfp64:miso,capability-instance:spi1:lqfp64:mosi,capability-instance:spi1:lqfp64:nss,capability-instance:spi1:lqfp64:sck", 9},
  {PeripheralId::SPI2, "SPI2", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 2, 0x40003800u, "RCC_APBENR1.SPI2EN", "RCC_APBRSTR1.SPI2RST", "gate:spi2", "reset:spi2", nullptr, 16u, 1u, 0u, 0u, 33u, 4u, "SPI2_SPI3", "capability-instance:spi2:lqfp64:miso,capability-instance:spi2:lqfp64:mosi,capability-instance:spi2:lqfp64:nss,capability-instance:spi2:lqfp64:sck", 9},
  {PeripheralId::SPI3, "SPI3", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 3, 0x40003C00u, "RCC_APBENR1.SPI3EN", "RCC_APBRSTR1.SPI3RST", "gate:spi3", "reset:spi3", nullptr, 0u, 0u, 0u, 0u, 37u, 4u, "", "capability-instance:spi3:lqfp64:miso,capability-instance:spi3:lqfp64:mosi,capability-instance:spi3:lqfp64:nss,capability-instance:spi3:lqfp64:sck", 9},
  {PeripheralId::TAMP, "TAMP", "tamp", nullptr, "alloy.tamp.st-tamp", 0, 0x4000B000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 12},
  {PeripheralId::TIM1, "TIM1", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 1, 0x40012C00u, "RCC_APBENR2.TIM1EN", "RCC_APBRSTR2.TIM1RST", "gate:tim1", "reset:tim1", nullptr, 17u, 2u, 0u, 0u, 41u, 9u, "TIM1_BRK_UP_TRG_COM,TIM1_CC", "capability-instance:tim1:lqfp64:bk,capability-instance:tim1:lqfp64:bk2,capability-instance:tim1:lqfp64:ch1,capability-instance:tim1:lqfp64:ch1n,capability-instance:tim1:lqfp64:ch2,capability-instance:tim1:lqfp64:ch2n,capability-instance:tim1:lqfp64:ch3,capability-instance:tim1:lqfp64:ch3n,capability-instance:tim1:lqfp64:ch4", 27},
  {PeripheralId::TIM14, "TIM14", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 14, 0x40002000u, "RCC_APBENR2.TIM14EN", "RCC_APBRSTR2.TIM14RST", "gate:tim14", "reset:tim14", nullptr, 19u, 1u, 0u, 0u, 50u, 1u, "TIM14", "capability-instance:tim14:lqfp64:ch1", 11},
  {PeripheralId::TIM15, "TIM15", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 15, 0x40014000u, "RCC_APBENR2.TIM15EN", "RCC_APBRSTR2.TIM15RST", "gate:tim15", "reset:tim15", nullptr, 20u, 1u, 0u, 0u, 51u, 4u, "TIM15", "capability-instance:tim15:lqfp64:bk,capability-instance:tim15:lqfp64:ch1,capability-instance:tim15:lqfp64:ch1n,capability-instance:tim15:lqfp64:ch2", 19},
  {PeripheralId::TIM16, "TIM16", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 16, 0x40014400u, "RCC_APBENR2.TIM16EN", "RCC_APBRSTR2.TIM16RST", "gate:tim16", "reset:tim16", nullptr, 21u, 1u, 0u, 0u, 55u, 3u, "TIM16", "capability-instance:tim16:lqfp64:bk,capability-instance:tim16:lqfp64:ch1,capability-instance:tim16:lqfp64:ch1n", 17},
  {PeripheralId::TIM17, "TIM17", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 17, 0x40014800u, "RCC_APBENR2.TIM17EN", "RCC_APBRSTR2.TIM17RST", "gate:tim17", "reset:tim17", nullptr, 22u, 1u, 0u, 0u, 58u, 3u, "TIM17", "capability-instance:tim17:lqfp64:bk,capability-instance:tim17:lqfp64:ch1,capability-instance:tim17:lqfp64:ch1n", 17},
  {PeripheralId::TIM2, "TIM2", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 2, 0x40000000u, "RCC_APBENR1.TIM2EN", "RCC_APBRSTR1.TIM2RST", "gate:tim2", "reset:tim2", nullptr, 23u, 1u, 0u, 0u, 61u, 5u, "TIM2", "capability-instance:tim2:lqfp64:ch1,capability-instance:tim2:lqfp64:ch2,capability-instance:tim2:lqfp64:ch3,capability-instance:tim2:lqfp64:ch4,capability-instance:tim2:lqfp64:etr", 21},
  {PeripheralId::TIM3, "TIM3", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 3, 0x40000400u, "RCC_APBENR1.TIM3EN", "RCC_APBRSTR1.TIM3RST", "gate:tim3", "reset:tim3", nullptr, 24u, 1u, 0u, 0u, 66u, 5u, "TIM3_TIM4", "capability-instance:tim3:lqfp64:ch1,capability-instance:tim3:lqfp64:ch2,capability-instance:tim3:lqfp64:ch3,capability-instance:tim3:lqfp64:ch4,capability-instance:tim3:lqfp64:etr", 21},
  {PeripheralId::TIM4, "TIM4", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 4, 0x40000800u, "RCC_APBENR1.TIM4EN", "RCC_APBRSTR1.TIM4RST", "gate:tim4", "reset:tim4", nullptr, 0u, 0u, 0u, 0u, 71u, 4u, "", "capability-instance:tim4:lqfp64:ch1,capability-instance:tim4:lqfp64:ch2,capability-instance:tim4:lqfp64:ch3,capability-instance:tim4:lqfp64:ch4", 21},
  {PeripheralId::TIM6, "TIM6", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 6, 0x40001000u, "RCC_APBENR1.TIM6EN", "RCC_APBRSTR1.TIM6RST", "gate:tim6", "reset:tim6", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 8},
  {PeripheralId::TIM7, "TIM7", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 7, 0x40001400u, "RCC_APBENR1.TIM7EN", "RCC_APBRSTR1.TIM7RST", "gate:tim7", "reset:tim7", nullptr, 25u, 1u, 0u, 0u, 0u, 0u, "TIM7", "", 8},
  {PeripheralId::UCPD1, "UCPD1", "ucpd", "ucpd_v1_0_Cube", "alloy.ucpd.st-ucpd-v1-0-cube", 1, 0x4000A000u, "RCC_APBENR1.UCPD1EN", "RCC_APBRSTR1.UCPD1RST", "gate:ucpd1", "reset:ucpd1", nullptr, 26u, 1u, 0u, 0u, 75u, 2u, "UCPD1_UCPD2_USB", "capability-instance:ucpd1:lqfp64:frstx1,capability-instance:ucpd1:lqfp64:frstx2", 15},
  {PeripheralId::UCPD2, "UCPD2", "ucpd", "ucpd_v1_0_Cube", "alloy.ucpd.st-ucpd-v1-0-cube", 2, 0x4000A400u, "RCC_APBENR1.UCPD2EN", "RCC_APBRSTR1.UCPD2RST", "gate:ucpd2", "reset:ucpd2", nullptr, 0u, 0u, 0u, 0u, 77u, 2u, "", "capability-instance:ucpd2:lqfp64:frstx1,capability-instance:ucpd2:lqfp64:frstx2", 15},
  {PeripheralId::USART1, "USART1", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 1, 0x40013800u, "RCC_APBENR2.USART1EN", "RCC_APBRSTR2.USART1RST", "gate:usart1", "reset:usart1", "selector:usart1-kernel", 27u, 1u, 0u, 2u, 79u, 7u, "USART1", "capability-instance:usart1:lqfp64:ck,capability-instance:usart1:lqfp64:cts,capability-instance:usart1:lqfp64:de,capability-instance:usart1:lqfp64:nss,capability-instance:usart1:lqfp64:rts,capability-instance:usart1:lqfp64:rx,capability-instance:usart1:lqfp64:tx", 12},
  {PeripheralId::USART2, "USART2", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 2, 0x40004400u, "RCC_APBENR1.USART2EN", "RCC_APBRSTR1.USART2RST", "gate:usart2", "reset:usart2", nullptr, 28u, 1u, 0u, 0u, 86u, 7u, "USART2_LPUART2", "capability-instance:usart2:lqfp64:ck,capability-instance:usart2:lqfp64:cts,capability-instance:usart2:lqfp64:de,capability-instance:usart2:lqfp64:nss,capability-instance:usart2:lqfp64:rts,capability-instance:usart2:lqfp64:rx,capability-instance:usart2:lqfp64:tx", 12},
  {PeripheralId::USART3, "USART3", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 3, 0x40004800u, "RCC_APBENR1.USART3EN", "RCC_APBRSTR1.USART3RST", "gate:usart3", "reset:usart3", nullptr, 29u, 1u, 0u, 0u, 93u, 7u, "USART3_USART4_USART5_USART6_LPUART1", "capability-instance:usart3:lqfp64:ck,capability-instance:usart3:lqfp64:cts,capability-instance:usart3:lqfp64:de,capability-instance:usart3:lqfp64:nss,capability-instance:usart3:lqfp64:rts,capability-instance:usart3:lqfp64:rx,capability-instance:usart3:lqfp64:tx", 12},
  {PeripheralId::USART4, "USART4", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 4, 0x40004C00u, "RCC_APBENR1.USART4EN", "RCC_APBRSTR1.USART4RST", "gate:usart4", "reset:usart4", nullptr, 0u, 0u, 0u, 0u, 100u, 7u, "", "capability-instance:usart4:lqfp64:ck,capability-instance:usart4:lqfp64:cts,capability-instance:usart4:lqfp64:de,capability-instance:usart4:lqfp64:nss,capability-instance:usart4:lqfp64:rts,capability-instance:usart4:lqfp64:rx,capability-instance:usart4:lqfp64:tx", 12},
  {PeripheralId::USART5, "USART5", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 5, 0x40005000u, "RCC_APBENR1.USART5EN", "RCC_APBRSTR1.USART5RST", "gate:usart5", "reset:usart5", nullptr, 0u, 0u, 0u, 0u, 107u, 7u, "", "capability-instance:usart5:lqfp64:ck,capability-instance:usart5:lqfp64:cts,capability-instance:usart5:lqfp64:de,capability-instance:usart5:lqfp64:nss,capability-instance:usart5:lqfp64:rts,capability-instance:usart5:lqfp64:rx,capability-instance:usart5:lqfp64:tx", 12},
  {PeripheralId::USART6, "USART6", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 6, 0x40013C00u, "RCC_APBENR1.USART6EN", "RCC_APBRSTR1.USART6RST", "gate:usart6", "reset:usart6", nullptr, 0u, 0u, 0u, 0u, 114u, 7u, "", "capability-instance:usart6:lqfp64:ck,capability-instance:usart6:lqfp64:cts,capability-instance:usart6:lqfp64:de,capability-instance:usart6:lqfp64:nss,capability-instance:usart6:lqfp64:rts,capability-instance:usart6:lqfp64:rx,capability-instance:usart6:lqfp64:tx", 12},
  {PeripheralId::USB, "USB", "usb", nullptr, "alloy.usb.st-usb", 0, 0x40005C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 14},
  {PeripheralId::VREFBUF, "VREFBUF", "vrefbuf", nullptr, "alloy.vrefbuf.st-vrefbuf", 0, 0x40010030u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::WWDG, "WWDG", "wwdg", "wwdg1_v2_0", "alloy.wwdg.st-wwdg1-v2-0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 30u, 1u, 0u, 0u, 0u, 0u, "WWDG", "", 3},
}};
}
}
}
}
}
