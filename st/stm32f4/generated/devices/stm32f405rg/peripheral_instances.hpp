#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
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
inline constexpr std::array<PeripheralInstanceDescriptor, 91> kPeripheralInstances = {{
  {"ADC1", "adc", "aditf2_v1_1_Cube", 1, 0x40012000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ADC", ""},
  {"ADC2", "adc", "aditf2_v1_1_Cube", 2, 0x40012100u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"ADC3", "adc", "aditf2_v1_1_Cube", 3, 0x40012200u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"CAN1", "can", "bxcan1_v1_1_Cube", 1, 0x40006400u, nullptr, nullptr, nullptr, nullptr, nullptr, "CAN1_TX,CAN1_RX0,CAN1_RX1,CAN1_SCE", ""},
  {"CAN2", "can", "bxcan1_v1_1_Cube", 2, 0x40006800u, nullptr, nullptr, nullptr, nullptr, nullptr, "CAN2_TX,CAN2_RX0,CAN2_RX1,CAN2_SCE", ""},
  {"CRC", "crc", "integtest1_v1_0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"CRYP", "cryp", nullptr, 0, 0x50060000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CRYP", ""},
  {"C_ADC", "c_adc", nullptr, 0, 0x40012300u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"DAC", "dac", "dacif_v1_1_Cube", 0, 0x40007400u, nullptr, nullptr, nullptr, nullptr, nullptr, "TIM6_DAC", ""},
  {"DBG", "dbg", nullptr, 0, 0xE0042000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"DCMI", "dcmi", nullptr, 0, 0x50050000u, nullptr, nullptr, nullptr, nullptr, nullptr, "DCMI", ""},
  {"DMA1", "dma", nullptr, 1, 0x40026000u, "RCC_AHB1ENR.DMA1EN", "RCC_AHB1RSTR.DMA1RST", "gate:dma1", "reset:dma1", nullptr, "DMA1_Stream0,DMA1_Stream1,DMA1_Stream2,DMA1_Stream3,DMA1_Stream4,DMA1_Stream5,DMA1_Stream6,DMA1_Stream7", ""},
  {"DMA2", "dma", nullptr, 2, 0x40026400u, "RCC_AHB1ENR.DMA2EN", "RCC_AHB1RSTR.DMA2RST", "gate:dma2", "reset:dma2", nullptr, "DMA2_Stream0,DMA2_Stream1,DMA2_Stream2,DMA2_Stream3,DMA2_Stream4,DMA2_Stream5,DMA2_Stream6,DMA2_Stream7", ""},
  {"EXTI", "exti", nullptr, 0, 0x40013C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "TAMP_STAMP,EXTI0,EXTI1,EXTI2,EXTI3,EXTI4,EXTI9_5,EXTI15_10", ""},
  {"Ethernet_DMA", "ethernet_dma", nullptr, 0, 0x40029000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"Ethernet_MAC", "ethernet_mac", nullptr, 0, 0x40028000u, nullptr, nullptr, nullptr, nullptr, nullptr, "ETH,ETH_WKUP", ""},
  {"Ethernet_MMC", "ethernet_mmc", nullptr, 0, 0x40028100u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"Ethernet_PTP", "ethernet_ptp", nullptr, 0, 0x40028700u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FLASH", "flash", nullptr, 0, 0x40023C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FPU", "fpu", nullptr, 0, 0xE000EF34u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FPU_CPACR", "fpu_cpacr", nullptr, 0, 0xE000ED88u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FSMC", "fsmc", nullptr, 0, 0xA0000000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FSMC", ""},
  {"GPIOA", "gpio", nullptr, 0, 0x40020000u, "RCC_AHB1ENR.GPIOAEN", "RCC_AHB1RSTR.GPIOARST", "gate:gpioa", "reset:gpioa", nullptr, "", ""},
  {"GPIOB", "gpio", nullptr, 1, 0x40020400u, "RCC_AHB1ENR.GPIOBEN", "RCC_AHB1RSTR.GPIOBRST", "gate:gpiob", "reset:gpiob", nullptr, "", ""},
  {"GPIOC", "gpio", nullptr, 2, 0x40020800u, "RCC_AHB1ENR.GPIOCEN", "RCC_AHB1RSTR.GPIOCRST", "gate:gpioc", "reset:gpioc", nullptr, "", ""},
  {"GPIOD", "gpio", nullptr, 3, 0x40020C00u, "RCC_AHB1ENR.GPIODEN", "RCC_AHB1RSTR.GPIODRST", "gate:gpiod", "reset:gpiod", nullptr, "", ""},
  {"GPIOE", "gpio", nullptr, 4, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOF", "gpio", nullptr, 5, 0x40021400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOG", "gpio", nullptr, 6, 0x40021800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOH", "gpio", nullptr, 7, 0x40021C00u, "RCC_AHB1ENR.GPIOHEN", "RCC_AHB1RSTR.GPIOHRST", "gate:gpioh", "reset:gpioh", nullptr, "", ""},
  {"GPIOI", "gpio", nullptr, 8, 0x40022000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOJ", "gpio", nullptr, 9, 0x40022400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOK", "gpio", nullptr, 10, 0x40022800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"HASH", "hash", nullptr, 0, 0x50060400u, nullptr, nullptr, nullptr, nullptr, nullptr, "HASH_RNG", ""},
  {"I2C1", "i2c1", "i2c1_v1_5_Cube", 0, 0x40005400u, "RCC_APB1ENR.I2C1EN", "RCC_APB1RSTR.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, "I2C1_EV,I2C1_ER", "capability-instance:i2c1:lqfp64:scl,capability-instance:i2c1:lqfp64:sda,capability-instance:i2c1:lqfp64:smba"},
  {"I2C2", "i2c2", "i2c1_v1_5_Cube", 0, 0x40005800u, "RCC_APB1ENR.I2C2EN", "RCC_APB1RSTR.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, "I2C2_EV,I2C2_ER", "capability-instance:i2c2:lqfp64:scl,capability-instance:i2c2:lqfp64:sda,capability-instance:i2c2:lqfp64:smba"},
  {"I2C3", "i2c3", "i2c1_v1_5_Cube", 0, 0x40005C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "I2C3_EV,I2C3_ER", ""},
  {"I2S2ext", "i2s2ext", nullptr, 0, 0x40003400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"I2S3ext", "i2s3ext", nullptr, 0, 0x40004000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"IWDG", "iwdg", "iwdg1_v1_1", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"LTDC", "ltdc", nullptr, 0, 0x40016800u, nullptr, nullptr, nullptr, nullptr, nullptr, "LCD_TFT,LCD_TFT_1", ""},
  {"MPU", "mpu", nullptr, 0, 0xE000ED90u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"NVIC", "nvic", "STM32F417", 0, 0xE000E100u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"NVIC_STIR", "nvic_stir", nullptr, 0, 0xE000EF00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_FS_DEVICE", "otg_fs_device", nullptr, 0, 0x50000800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_FS_GLOBAL", "otg_fs_global", nullptr, 0, 0x50000000u, nullptr, nullptr, nullptr, nullptr, nullptr, "OTG_FS_WKUP,OTG_FS", ""},
  {"OTG_FS_HOST", "otg_fs_host", nullptr, 0, 0x50000400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_FS_PWRCLK", "otg_fs_pwrclk", nullptr, 0, 0x50000E00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_HS_DEVICE", "otg_hs_device", nullptr, 0, 0x40040800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_HS_GLOBAL", "otg_hs_global", nullptr, 0, 0x40040000u, nullptr, nullptr, nullptr, nullptr, nullptr, "OTG_HS_EP1_OUT,OTG_HS_EP1_IN,OTG_HS_WKUP,OTG_HS", ""},
  {"OTG_HS_HOST", "otg_hs_host", nullptr, 0, 0x40040400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"OTG_HS_PWRCLK", "otg_hs_pwrclk", nullptr, 0, 0x40040E00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"PWR", "pwr", nullptr, 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PVD", ""},
  {"RCC", "rcc", "STM32F417-rcc_v1_0", 0, 0x40023800u, nullptr, nullptr, nullptr, nullptr, nullptr, "RCC", ""},
  {"RNG", "rng", "rng1_v1_1", 0, 0x50060800u, nullptr, nullptr, nullptr, nullptr, nullptr, "FPU", ""},
  {"RTC", "rtc", "rtc2_v2_3", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, "RTC_WKUP,RTC_Alarm", ""},
  {"SAI1", "sai", nullptr, 1, 0x40015800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SCB", "scb", nullptr, 0, 0xE000ED00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SCB_ACTRL", "scb_actrl", nullptr, 0, 0xE000E008u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SDIO", "sdio", "sdmmc_v1_2_Cube", 0, 0x40012C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "SDIO", ""},
  {"SPI1", "spi", "spi2s1_v2_2_Cube", 1, 0x40013000u, "RCC_APB2ENR.SPI1EN", "RCC_APB2RSTR.SPI1RST", "gate:spi1", "reset:spi1", nullptr, "SPI1", "capability-instance:spi1:lqfp64:miso,capability-instance:spi1:lqfp64:mosi,capability-instance:spi1:lqfp64:nss,capability-instance:spi1:lqfp64:sck"},
  {"SPI2", "spi", "spi2s1_v2_2_Cube", 2, 0x40003800u, "RCC_APB1ENR.SPI2EN", "RCC_APB1RSTR.SPI2RST", "gate:spi2", "reset:spi2", nullptr, "SPI2", "capability-instance:spi2:lqfp64:miso,capability-instance:spi2:lqfp64:mosi,capability-instance:spi2:lqfp64:nss,capability-instance:spi2:lqfp64:sck"},
  {"SPI3", "spi", "spi2s1_v2_2_Cube", 3, 0x40003C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "SPI3", ""},
  {"SPI4", "spi", nullptr, 4, 0x40013400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SPI5", "spi", nullptr, 5, 0x40015000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SPI6", "spi", nullptr, 6, 0x40015400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"STK", "stk", nullptr, 0, 0xE000E010u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SYSCFG", "syscfg", nullptr, 0, 0x40013800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM1", "tim", "gptimer2_v2_x_Cube", 1, 0x40010000u, "RCC_APB2ENR.TIM1EN", "RCC_APB2RSTR.TIM1RST", "gate:tim1", "reset:tim1", nullptr, "TIM1_BRK_TIM9,TIM1_UP_TIM10,TIM1_TRG_COM_TIM11,TIM1_CC", "capability-instance:tim1:lqfp64:bkin,capability-instance:tim1:lqfp64:ch1,capability-instance:tim1:lqfp64:ch1n,capability-instance:tim1:lqfp64:ch2,capability-instance:tim1:lqfp64:ch2n,capability-instance:tim1:lqfp64:ch3,capability-instance:tim1:lqfp64:ch3n,capability-instance:tim1:lqfp64:ch4,capability-instance:tim1:lqfp64:etr"},
  {"TIM10", "tim", "gptimer2_v2_x_Cube", 10, 0x40014400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM11", "tim", "gptimer2_v2_x_Cube", 11, 0x40014800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM12", "tim", "gptimer2_v2_x_Cube", 12, 0x40001800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM13", "tim", "gptimer2_v2_x_Cube", 13, 0x40001C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM14", "tim", "gptimer2_v2_x_Cube", 14, 0x40002000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM2", "tim", "gptimer2_v2_x_Cube", 2, 0x40000000u, "RCC_APB1ENR.TIM2EN", "RCC_APB1RSTR.TIM2RST", "gate:tim2", "reset:tim2", nullptr, "TIM2", "capability-instance:tim2:lqfp64:ch1,capability-instance:tim2:lqfp64:ch2,capability-instance:tim2:lqfp64:ch3,capability-instance:tim2:lqfp64:ch4,capability-instance:tim2:lqfp64:etr"},
  {"TIM3", "tim", "gptimer2_v2_x_Cube", 3, 0x40000400u, "RCC_APB1ENR.TIM3EN", "RCC_APB1RSTR.TIM3RST", "gate:tim3", "reset:tim3", nullptr, "TIM3", "capability-instance:tim3:lqfp64:ch1,capability-instance:tim3:lqfp64:ch2,capability-instance:tim3:lqfp64:ch3,capability-instance:tim3:lqfp64:ch4,capability-instance:tim3:lqfp64:etr"},
  {"TIM4", "tim", "gptimer2_v2_x_Cube", 4, 0x40000800u, "RCC_APB1ENR.TIM4EN", "RCC_APB1RSTR.TIM4RST", "gate:tim4", "reset:tim4", nullptr, "TIM4", "capability-instance:tim4:lqfp64:ch1,capability-instance:tim4:lqfp64:ch2,capability-instance:tim4:lqfp64:ch3,capability-instance:tim4:lqfp64:ch4"},
  {"TIM5", "tim", "gptimer2_v2_x_Cube", 5, 0x40000C00u, "RCC_APB1ENR.TIM5EN", "RCC_APB1RSTR.TIM5RST", "gate:tim5", "reset:tim5", nullptr, "TIM5", "capability-instance:tim5:lqfp64:ch2,capability-instance:tim5:lqfp64:ch3,capability-instance:tim5:lqfp64:ch4"},
  {"TIM6", "tim", "gptimer2_v2_x_Cube", 6, 0x40001000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM7", "tim", "gptimer2_v2_x_Cube", 7, 0x40001400u, nullptr, nullptr, nullptr, nullptr, nullptr, "TIM7", ""},
  {"TIM8", "tim", "gptimer2_v2_x_Cube", 8, 0x40010400u, nullptr, nullptr, nullptr, nullptr, nullptr, "TIM8_BRK_TIM12,TIM8_UP_TIM13,TIM8_TRG_COM_TIM14,TIM8_CC", ""},
  {"TIM9", "tim", "gptimer2_v2_x_Cube", 9, 0x40014000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"UART4", "uart", "sci2_v1_2_F4_Cube", 4, 0x40004C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "UART4", ""},
  {"UART5", "uart", "sci2_v1_2_F4_Cube", 5, 0x40005000u, nullptr, nullptr, nullptr, nullptr, nullptr, "UART5", ""},
  {"UART7", "uart", nullptr, 7, 0x40007800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"UART8", "uart", nullptr, 8, 0x40007C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"USART1", "usart", "sci2_v1_2_Cube", 1, 0x40011000u, "RCC_APB2ENR.USART1EN", "RCC_APB2RSTR.USART1RST", "gate:usart1", "reset:usart1", nullptr, "USART1", "capability-instance:usart1:lqfp64:ck,capability-instance:usart1:lqfp64:cts,capability-instance:usart1:lqfp64:rts,capability-instance:usart1:lqfp64:rx,capability-instance:usart1:lqfp64:tx"},
  {"USART2", "usart", "sci2_v1_2_Cube", 2, 0x40004400u, "RCC_APB1ENR.USART2EN", "RCC_APB1RSTR.USART2RST", "gate:usart2", "reset:usart2", nullptr, "USART2", "capability-instance:usart2:lqfp64:ck,capability-instance:usart2:lqfp64:rts,capability-instance:usart2:lqfp64:rx,capability-instance:usart2:lqfp64:tx"},
  {"USART3", "usart", "sci2_v1_2_Cube", 3, 0x40004800u, nullptr, nullptr, nullptr, nullptr, nullptr, "USART3", ""},
  {"USART6", "usart", "sci2_v1_2_Cube", 6, 0x40011400u, nullptr, nullptr, nullptr, nullptr, nullptr, "USART6", ""},
  {"WWDG", "wwdg", "wwdg1_v1_0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "WWDG", ""},
}};
}
}
}
}
}
