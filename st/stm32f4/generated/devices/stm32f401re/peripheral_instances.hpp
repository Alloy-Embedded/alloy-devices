#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f401re {
enum class PeripheralId : std::uint16_t {
  ADC1,
  ADC_Common,
  CRC,
  DBG,
  DMA1,
  DMA2,
  EXTI,
  FLASH,
  FPU,
  FPU_CPACR,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOE,
  GPIOH,
  I2C1,
  I2C2,
  I2C3,
  I2S2ext,
  I2S3ext,
  IWDG,
  MPU,
  NVIC,
  NVIC_STIR,
  OTG_FS_DEVICE,
  OTG_FS_GLOBAL,
  OTG_FS_HOST,
  OTG_FS_PWRCLK,
  PWR,
  RCC,
  RTC,
  SCB,
  SCB_ACTRL,
  SDIO,
  SPI1,
  SPI2,
  SPI3,
  SPI4,
  STK,
  SYSCFG,
  TIM1,
  TIM10,
  TIM11,
  TIM2,
  TIM3,
  TIM4,
  TIM5,
  TIM8,
  TIM9,
  USART1,
  USART2,
  USART6,
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
inline constexpr std::array<PeripheralInstanceDescriptor, 54> kPeripheralInstances = {{
  {PeripheralId::ADC1, "ADC1", "adc", "aditf2_v1_1_Cube", "alloy.adc.st-aditf2-v1-1-cube", 1, 0x40012000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 1u, 0u, 0u, 0u, 0u, "ADC", "", 20},
  {PeripheralId::ADC_Common, "ADC_Common", "adc_common", nullptr, "alloy.adc_common.st-adc-common", 0, 0x40012300u, nullptr, nullptr, nullptr, nullptr, nullptr, 1u, 1u, 0u, 0u, 0u, 0u, "FPU", "", 2},
  {PeripheralId::CRC, "CRC", "crc", "integtest1_v1_0", "alloy.crc.st-integtest1-v1-0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 3},
  {PeripheralId::DBG, "DBG", "dbg", nullptr, "alloy.dbg.st-dbg", 0, 0xE0042000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::DMA1, "DMA1", "dma", nullptr, "alloy.dma.st-dma", 1, 0x40026000u, "RCC_AHB1ENR.DMA1EN", "RCC_AHB1RSTR.DMA1RST", "gate:dma1", "reset:dma1", nullptr, 2u, 2u, 0u, 0u, 0u, 0u, "RTC_WKUP,RTC_Alarm", "", 52},
  {PeripheralId::DMA2, "DMA2", "dma", nullptr, "alloy.dma.st-dma", 2, 0x40026400u, "RCC_AHB1ENR.DMA2EN", "RCC_AHB1RSTR.DMA2RST", "gate:dma2", "reset:dma2", nullptr, 4u, 1u, 0u, 0u, 0u, 0u, "RCC", "", 52},
  {PeripheralId::EXTI, "EXTI", "exti", nullptr, "alloy.exti.st-exti", 0, 0x40013C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 5u, 8u, 0u, 0u, 0u, 0u, "TAMP_STAMP,EXTI0,EXTI1,EXTI2,EXTI3,EXTI4,EXTI9_5,EXTI15_10", "", 6},
  {PeripheralId::FLASH, "FLASH", "flash", nullptr, "alloy.flash.st-flash", 0, 0x40023C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 13u, 1u, 0u, 0u, 0u, 0u, "FLASH", "", 6},
  {PeripheralId::FPU, "FPU", "fpu", nullptr, "alloy.fpu.st-fpu", 0, 0xE000EF34u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 3},
  {PeripheralId::FPU_CPACR, "FPU_CPACR", "fpu_cpacr", nullptr, "alloy.fpu_cpacr.st-fpu-cpacr", 0, 0xE000ED88u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 1},
  {PeripheralId::GPIOA, "GPIOA", "gpio", nullptr, "alloy.gpio.st-gpio", 0, 0x40020000u, "RCC_AHB1ENR.GPIOAEN", "RCC_AHB1RSTR.GPIOARST", "gate:gpioa", "reset:gpioa", nullptr, 14u, 1u, 0u, 0u, 0u, 0u, "TIM2", "", 10},
  {PeripheralId::GPIOB, "GPIOB", "gpio", nullptr, "alloy.gpio.st-gpio", 1, 0x40020400u, "RCC_AHB1ENR.GPIOBEN", "RCC_AHB1RSTR.GPIOBRST", "gate:gpiob", "reset:gpiob", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 10},
  {PeripheralId::GPIOC, "GPIOC", "gpio", nullptr, "alloy.gpio.st-gpio", 2, 0x40020800u, "RCC_AHB1ENR.GPIOCEN", "RCC_AHB1RSTR.GPIOCRST", "gate:gpioc", "reset:gpioc", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 10},
  {PeripheralId::GPIOD, "GPIOD", "gpio", nullptr, "alloy.gpio.st-gpio", 3, 0x40020C00u, "RCC_AHB1ENR.GPIODEN", "RCC_AHB1RSTR.GPIODRST", "gate:gpiod", "reset:gpiod", nullptr, 15u, 4u, 0u, 0u, 0u, 0u, "TIM1_BRK_TIM9,TIM1_UP_TIM10,TIM1_TRG_COM_TIM11,TIM1_CC", "", 10},
  {PeripheralId::GPIOE, "GPIOE", "gpio", nullptr, "alloy.gpio.st-gpio", 4, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 10},
  {PeripheralId::GPIOH, "GPIOH", "gpio", nullptr, "alloy.gpio.st-gpio", 7, 0x40021C00u, "RCC_AHB1ENR.GPIOHEN", "RCC_AHB1RSTR.GPIOHRST", "gate:gpioh", "reset:gpioh", nullptr, 19u, 1u, 0u, 0u, 0u, 0u, "SDIO", "", 10},
  {PeripheralId::I2C1, "I2C1", "i2c1", "i2c1_v1_5_Cube", "alloy.i2c1.st-i2c1-v1-5-cube", 0, 0x40005400u, "RCC_APB1ENR.I2C1EN", "RCC_APB1RSTR.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, 0u, 0u, 0u, 0u, 0u, 3u, "", "capability-instance:i2c1:lqfp64:scl,capability-instance:i2c1:lqfp64:sda,capability-instance:i2c1:lqfp64:smba", 9},
  {PeripheralId::I2C2, "I2C2", "i2c2", "i2c1_v1_5_Cube", "alloy.i2c2.st-i2c1-v1-5-cube", 0, 0x40005800u, "RCC_APB1ENR.I2C2EN", "RCC_APB1RSTR.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, 0u, 0u, 0u, 0u, 3u, 3u, "", "capability-instance:i2c2:lqfp64:scl,capability-instance:i2c2:lqfp64:sda,capability-instance:i2c2:lqfp64:smba", 9},
  {PeripheralId::I2C3, "I2C3", "i2c3", "i2c1_v1_5_Cube", "alloy.i2c3.st-i2c1-v1-5-cube", 0, 0x40005C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 20u, 1u, 0u, 0u, 0u, 0u, "TIM3", "", 9},
  {PeripheralId::I2S2ext, "I2S2ext", "i2s2ext", nullptr, "alloy.i2s2ext.st-i2s2ext", 0, 0x40003400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 9},
  {PeripheralId::I2S3ext, "I2S3ext", "i2s3ext", nullptr, "alloy.i2s3ext.st-i2s3ext", 0, 0x40004000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 9},
  {PeripheralId::IWDG, "IWDG", "iwdg", "iwdg1_v1_1", "alloy.iwdg.st-iwdg1-v1-1", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::MPU, "MPU", "mpu", nullptr, "alloy.mpu.st-mpu", 0, 0xE000ED90u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 5},
  {PeripheralId::NVIC, "NVIC", "nvic", "STM32F401", "alloy.nvic.st-stm32f401", 0, 0xE000E100u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 35},
  {PeripheralId::NVIC_STIR, "NVIC_STIR", "nvic_stir", nullptr, "alloy.nvic_stir.st-nvic-stir", 0, 0xE000EF00u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 1},
  {PeripheralId::OTG_FS_DEVICE, "OTG_FS_DEVICE", "otg_fs_device", nullptr, "alloy.otg_fs_device.st-otg-fs-device", 0, 0x50000800u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 38},
  {PeripheralId::OTG_FS_GLOBAL, "OTG_FS_GLOBAL", "otg_fs_global", nullptr, "alloy.otg_fs_global.st-otg-fs-global", 0, 0x50000000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 17},
  {PeripheralId::OTG_FS_HOST, "OTG_FS_HOST", "otg_fs_host", nullptr, "alloy.otg_fs_host.st-otg-fs-host", 0, 0x50000400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 39},
  {PeripheralId::OTG_FS_PWRCLK, "OTG_FS_PWRCLK", "otg_fs_pwrclk", nullptr, "alloy.otg_fs_pwrclk.st-otg-fs-pwrclk", 0, 0x50000E00u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 1},
  {PeripheralId::PWR, "PWR", "pwr", nullptr, "alloy.pwr.st-pwr", 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::RCC, "RCC", "rcc", "STM32F417-rcc_v1_0", "alloy.rcc.st-stm32f417-rcc-v1-0", 0, 0x40023800u, nullptr, nullptr, nullptr, nullptr, nullptr, 21u, 2u, 0u, 0u, 0u, 0u, "I2C1_EV,I2C1_ER", "", 20},
  {PeripheralId::RTC, "RTC", "rtc", "rtc2_v2_3", "alloy.rtc.st-rtc2-v2-3", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, 23u, 2u, 0u, 0u, 0u, 0u, "I2C2_EV,I2C2_ER", "", 39},
  {PeripheralId::SCB, "SCB", "scb", nullptr, "alloy.scb.st-scb", 0, 0xE000ED00u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 15},
  {PeripheralId::SCB_ACTRL, "SCB_ACTRL", "scb_actrl", nullptr, "alloy.scb_actrl.st-scb-actrl", 0, 0xE000E008u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 1},
  {PeripheralId::SDIO, "SDIO", "sdio", "sdmmc_v1_2_Cube", "alloy.sdio.st-sdmmc-v1-2-cube", 0, 0x40012C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 25u, 2u, 0u, 0u, 0u, 0u, "I2C3_EV,I2C3_ER", "", 18},
  {PeripheralId::SPI1, "SPI1", "spi", "spi2s1_v2_2_Cube", "alloy.spi.st-spi2s1-v2-2-cube", 1, 0x40013000u, "RCC_APB2ENR.SPI1EN", "RCC_APB2RSTR.SPI1RST", "gate:spi1", "reset:spi1", nullptr, 0u, 0u, 0u, 0u, 6u, 4u, "", "capability-instance:spi1:lqfp64:miso,capability-instance:spi1:lqfp64:mosi,capability-instance:spi1:lqfp64:nss,capability-instance:spi1:lqfp64:sck", 9},
  {PeripheralId::SPI2, "SPI2", "spi", "spi2s1_v2_2_Cube", "alloy.spi.st-spi2s1-v2-2-cube", 2, 0x40003800u, "RCC_APB1ENR.SPI2EN", "RCC_APB1RSTR.SPI2RST", "gate:spi2", "reset:spi2", nullptr, 0u, 0u, 0u, 0u, 10u, 4u, "", "capability-instance:spi2:lqfp64:miso,capability-instance:spi2:lqfp64:mosi,capability-instance:spi2:lqfp64:nss,capability-instance:spi2:lqfp64:sck", 9},
  {PeripheralId::SPI3, "SPI3", "spi", "spi2s1_v2_2_Cube", "alloy.spi.st-spi2s1-v2-2-cube", 3, 0x40003C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 9},
  {PeripheralId::SPI4, "SPI4", "spi", nullptr, "alloy.spi.st-spi", 4, 0x40013400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 9},
  {PeripheralId::STK, "STK", "stk", nullptr, "alloy.stk.st-stk", 0, 0xE000E010u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::SYSCFG, "SYSCFG", "syscfg", nullptr, "alloy.syscfg.st-syscfg", 0, 0x40013800u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 7},
  {PeripheralId::TIM1, "TIM1", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 1, 0x40010000u, "RCC_APB2ENR.TIM1EN", "RCC_APB2RSTR.TIM1RST", "gate:tim1", "reset:tim1", nullptr, 0u, 0u, 0u, 0u, 14u, 9u, "", "capability-instance:tim1:lqfp64:bkin,capability-instance:tim1:lqfp64:ch1,capability-instance:tim1:lqfp64:ch1n,capability-instance:tim1:lqfp64:ch2,capability-instance:tim1:lqfp64:ch2n,capability-instance:tim1:lqfp64:ch3,capability-instance:tim1:lqfp64:ch3n,capability-instance:tim1:lqfp64:ch4,capability-instance:tim1:lqfp64:etr", 20},
  {PeripheralId::TIM10, "TIM10", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 10, 0x40014400u, nullptr, nullptr, nullptr, nullptr, nullptr, 27u, 1u, 0u, 0u, 0u, 0u, "SPI1", "", 10},
  {PeripheralId::TIM11, "TIM11", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 11, 0x40014800u, nullptr, nullptr, nullptr, nullptr, nullptr, 28u, 1u, 0u, 0u, 0u, 0u, "SPI2", "", 11},
  {PeripheralId::TIM2, "TIM2", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 2, 0x40000000u, "RCC_APB1ENR.TIM2EN", "RCC_APB1RSTR.TIM2RST", "gate:tim2", "reset:tim2", nullptr, 29u, 1u, 0u, 0u, 23u, 5u, "SPI3", "capability-instance:tim2:lqfp64:ch1,capability-instance:tim2:lqfp64:ch2,capability-instance:tim2:lqfp64:ch3,capability-instance:tim2:lqfp64:ch4,capability-instance:tim2:lqfp64:etr", 19},
  {PeripheralId::TIM3, "TIM3", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 3, 0x40000400u, "RCC_APB1ENR.TIM3EN", "RCC_APB1RSTR.TIM3RST", "gate:tim3", "reset:tim3", nullptr, 30u, 1u, 0u, 0u, 28u, 5u, "SPI4", "capability-instance:tim3:lqfp64:ch1,capability-instance:tim3:lqfp64:ch2,capability-instance:tim3:lqfp64:ch3,capability-instance:tim3:lqfp64:ch4,capability-instance:tim3:lqfp64:etr", 18},
  {PeripheralId::TIM4, "TIM4", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 4, 0x40000800u, "RCC_APB1ENR.TIM4EN", "RCC_APB1RSTR.TIM4RST", "gate:tim4", "reset:tim4", nullptr, 0u, 0u, 0u, 0u, 33u, 4u, "", "capability-instance:tim4:lqfp64:ch1,capability-instance:tim4:lqfp64:ch2,capability-instance:tim4:lqfp64:ch3,capability-instance:tim4:lqfp64:ch4", 18},
  {PeripheralId::TIM5, "TIM5", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 5, 0x40000C00u, "RCC_APB1ENR.TIM5EN", "RCC_APB1RSTR.TIM5RST", "gate:tim5", "reset:tim5", nullptr, 0u, 0u, 0u, 0u, 37u, 3u, "", "capability-instance:tim5:lqfp64:ch2,capability-instance:tim5:lqfp64:ch3,capability-instance:tim5:lqfp64:ch4", 19},
  {PeripheralId::TIM8, "TIM8", "tim", nullptr, "alloy.timer.st-tim", 8, 0x40010400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 20},
  {PeripheralId::TIM9, "TIM9", "tim", "gptimer2_v2_x_Cube", "alloy.timer.st-gptimer2-v2-x-cube", 9, 0x40014000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 13},
  {PeripheralId::USART1, "USART1", "usart", "sci2_v1_2_Cube", "alloy.uart.st-sci2-v1-2-cube", 1, 0x40011000u, "RCC_APB2ENR.USART1EN", "RCC_APB2RSTR.USART1RST", "gate:usart1", "reset:usart1", nullptr, 31u, 2u, 0u, 0u, 40u, 5u, "OTG_FS_WKUP,OTG_FS", "capability-instance:usart1:lqfp64:ck,capability-instance:usart1:lqfp64:cts,capability-instance:usart1:lqfp64:rts,capability-instance:usart1:lqfp64:rx,capability-instance:usart1:lqfp64:tx", 7},
  {PeripheralId::USART2, "USART2", "usart", "sci2_v1_2_Cube", "alloy.uart.st-sci2-v1-2-cube", 2, 0x40004400u, "RCC_APB1ENR.USART2EN", "RCC_APB1RSTR.USART2RST", "gate:usart2", "reset:usart2", nullptr, 0u, 0u, 0u, 2u, 45u, 4u, "", "capability-instance:usart2:lqfp64:ck,capability-instance:usart2:lqfp64:rts,capability-instance:usart2:lqfp64:rx,capability-instance:usart2:lqfp64:tx", 7},
  {PeripheralId::USART6, "USART6", "usart", "sci2_v1_2_Cube", "alloy.uart.st-sci2-v1-2-cube", 6, 0x40011400u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 7},
  {PeripheralId::WWDG, "WWDG", "wwdg", "wwdg1_v1_0", "alloy.wwdg.st-wwdg1-v1-0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 33u, 1u, 0u, 0u, 0u, 0u, "PVD", "", 3},
}};
}
}
}
}
}
