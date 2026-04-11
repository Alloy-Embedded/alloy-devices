#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g071rb {
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
inline constexpr std::array<PeripheralInstanceDescriptor, 45> kPeripheralInstances = {{
  {"ADC1", "adc", "aditf4_v3_0_G0_Cube", 1, 0x40012400u, "RCC_APBENR2.ADCEN", "RCC_APBRSTR2.ADCRST", "gate:adc1", "reset:adc1", nullptr, "ADC_COMP", ""},
  {"COMP", "comp", nullptr, 0, 0x40010200u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"CRC", "crc", "integtest1_v2_0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CEC", ""},
  {"DAC", "dac", nullptr, 0, 0x40007400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"DBG", "dbg", nullptr, 0, 0x40015800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"DMA1", "dma", nullptr, 1, 0x40020000u, "RCC_AHBENR.DMA1EN", "RCC_AHBRSTR.DMA1RST", "gate:dma1", "reset:dma1", nullptr, "DMA_Channel1,DMA_Channel2_3", ""},
  {"DMAMUX1", "dmamux", nullptr, 1, 0x40020800u, "RCC_AHBENR.DMAMUX1EN", "RCC_AHBRSTR.DMAMUX1RST", "gate:dmamux1", "reset:dmamux1", nullptr, "DMA_Channel4_5_6_7", ""},
  {"EXTI", "exti", nullptr, 0, 0x40021800u, nullptr, nullptr, nullptr, nullptr, nullptr, "EXTI0_1,EXTI2_3,EXTI4_15", ""},
  {"FLASH", "flash", nullptr, 0, 0x40022000u, nullptr, nullptr, nullptr, nullptr, nullptr, "FLASH", ""},
  {"GPIOA", "gpio", nullptr, 0, 0x50000000u, "RCC_IOPENR.GPIOAEN", "RCC_IOPRSTR.GPIOARST", "gate:gpioa", "reset:gpioa", nullptr, "", ""},
  {"GPIOB", "gpio", nullptr, 1, 0x50000400u, "RCC_IOPENR.GPIOBEN", "RCC_IOPRSTR.GPIOBRST", "gate:gpiob", "reset:gpiob", nullptr, "", ""},
  {"GPIOC", "gpio", nullptr, 2, 0x50000800u, "RCC_IOPENR.GPIOCEN", "RCC_IOPRSTR.GPIOCRST", "gate:gpioc", "reset:gpioc", nullptr, "", ""},
  {"GPIOD", "gpio", nullptr, 3, 0x50000C00u, "RCC_IOPENR.GPIODEN", "RCC_IOPRSTR.GPIODRST", "gate:gpiod", "reset:gpiod", nullptr, "", ""},
  {"GPIOF", "gpio", nullptr, 5, 0x50001400u, "RCC_IOPENR.GPIOFEN", "RCC_IOPRSTR.GPIOFRST", "gate:gpiof", "reset:gpiof", nullptr, "", ""},
  {"HDMI_CEC", "hdmi_cec", "hdmi_cec_v2_0_Cube", 0, 0x40007800u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"I2C1", "i2c1", "i2c2_v1_1_Cube", 0, 0x40005400u, "RCC_APBENR1.I2C1EN", "RCC_APBRSTR1.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, "I2C1", "capability-instance:i2c1:lqfp64:scl,capability-instance:i2c1:lqfp64:sda,capability-instance:i2c1:lqfp64:smba"},
  {"I2C2", "i2c2", "i2c2_v1_1_Cube", 0, 0x40005800u, "RCC_APBENR1.I2C2EN", "RCC_APBRSTR1.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, "I2C2", "capability-instance:i2c2:lqfp64:scl,capability-instance:i2c2:lqfp64:sda"},
  {"IWDG", "iwdg", "iwdg1_v2_0", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"LPTIM1", "lptim", "G0xx_lptimer1_v1_4_Cube", 1, 0x40007C00u, "RCC_APBENR1.LPTIM1EN", "RCC_APBRSTR1.LPTIM1RST", "gate:lptim1", "reset:lptim1", nullptr, "", "capability-instance:lptim1:lqfp64:etr,capability-instance:lptim1:lqfp64:in1,capability-instance:lptim1:lqfp64:in2,capability-instance:lptim1:lqfp64:out"},
  {"LPTIM2", "lptim", "G0xx_lptimer1_v1_4_Cube", 2, 0x40009400u, "RCC_APBENR1.LPTIM2EN", "RCC_APBRSTR1.LPTIM2RST", "gate:lptim2", "reset:lptim2", nullptr, "", "capability-instance:lptim2:lqfp64:etr,capability-instance:lptim2:lqfp64:in1,capability-instance:lptim2:lqfp64:out"},
  {"LPUART1", "lpuart", "sci3_v1_2_Cube", 1, 0x40008000u, "RCC_APBENR1.LPUART1EN", "RCC_APBRSTR1.LPUART1RST", "gate:lpuart1", "reset:lpuart1", "selector:lpuart1-kernel", "", "capability-instance:lpuart1:lqfp64:cts,capability-instance:lpuart1:lqfp64:de,capability-instance:lpuart1:lqfp64:rts,capability-instance:lpuart1:lqfp64:rx,capability-instance:lpuart1:lqfp64:tx"},
  {"PWR", "pwr", nullptr, 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, "PVD", ""},
  {"RCC", "rcc", "STM32G05_rcc_v1_0", 0, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, "RCC", ""},
  {"RNG", "rng", nullptr, 0, 0x40025000u, nullptr, nullptr, nullptr, nullptr, nullptr, "RNG", ""},
  {"RTC", "rtc", "rtc3_v1_0_Cube", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, "RTC_STAMP", ""},
  {"SPI1", "spi", "spi2s1_v3_3_Cube", 1, 0x40013000u, "RCC_APBENR2.SPI1EN", "RCC_APBRSTR2.SPI1RST", "gate:spi1", "reset:spi1", nullptr, "SPI1", "capability-instance:spi1:lqfp64:miso,capability-instance:spi1:lqfp64:mosi,capability-instance:spi1:lqfp64:nss,capability-instance:spi1:lqfp64:sck"},
  {"SPI2", "spi", "spi2s1_v3_3_Cube", 2, 0x40003800u, "RCC_APBENR1.SPI2EN", "RCC_APBRSTR1.SPI2RST", "gate:spi2", "reset:spi2", nullptr, "SPI2", "capability-instance:spi2:lqfp64:miso,capability-instance:spi2:lqfp64:mosi,capability-instance:spi2:lqfp64:nss,capability-instance:spi2:lqfp64:sck"},
  {"SYSCFG_VREFBUF", "syscfg_vrefbuf", nullptr, 0, 0x40010000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TAMP", "tamp", nullptr, 0, 0x4000B000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM1", "tim", "gptimer2_v3_x_Cube", 1, 0x40012C00u, "RCC_APBENR2.TIM1EN", "RCC_APBRSTR2.TIM1RST", "gate:tim1", "reset:tim1", nullptr, "TIM1_BRK_UP_TRG_COMP,TIM1_CC", "capability-instance:tim1:lqfp64:bk,capability-instance:tim1:lqfp64:bk2,capability-instance:tim1:lqfp64:ch1,capability-instance:tim1:lqfp64:ch1n,capability-instance:tim1:lqfp64:ch2,capability-instance:tim1:lqfp64:ch2n,capability-instance:tim1:lqfp64:ch3,capability-instance:tim1:lqfp64:ch3n,capability-instance:tim1:lqfp64:ch4"},
  {"TIM14", "tim", "gptimer2_v3_x_Cube", 14, 0x40002000u, "RCC_APBENR2.TIM14EN", "RCC_APBRSTR2.TIM14RST", "gate:tim14", "reset:tim14", nullptr, "TIM14", "capability-instance:tim14:lqfp64:ch1"},
  {"TIM15", "tim", "gptimer2_v3_x_Cube", 15, 0x40014000u, "RCC_APBENR2.TIM15EN", "RCC_APBRSTR2.TIM15RST", "gate:tim15", "reset:tim15", nullptr, "TIM15", "capability-instance:tim15:lqfp64:bk,capability-instance:tim15:lqfp64:ch1,capability-instance:tim15:lqfp64:ch1n,capability-instance:tim15:lqfp64:ch2"},
  {"TIM16", "tim", "gptimer2_v3_x_Cube", 16, 0x40014400u, "RCC_APBENR2.TIM16EN", "RCC_APBRSTR2.TIM16RST", "gate:tim16", "reset:tim16", nullptr, "TIM16", "capability-instance:tim16:lqfp64:bk,capability-instance:tim16:lqfp64:ch1,capability-instance:tim16:lqfp64:ch1n"},
  {"TIM17", "tim", "gptimer2_v3_x_Cube", 17, 0x40014800u, "RCC_APBENR2.TIM17EN", "RCC_APBRSTR2.TIM17RST", "gate:tim17", "reset:tim17", nullptr, "TIM17", "capability-instance:tim17:lqfp64:bk,capability-instance:tim17:lqfp64:ch1,capability-instance:tim17:lqfp64:ch1n"},
  {"TIM2", "tim", "gptimer2_v3_x_Cube", 2, 0x40000000u, "RCC_APBENR1.TIM2EN", "RCC_APBRSTR1.TIM2RST", "gate:tim2", "reset:tim2", nullptr, "TIM2,TIM3", "capability-instance:tim2:lqfp64:ch1,capability-instance:tim2:lqfp64:ch2,capability-instance:tim2:lqfp64:ch3,capability-instance:tim2:lqfp64:ch4,capability-instance:tim2:lqfp64:etr"},
  {"TIM3", "tim", "gptimer2_v3_x_Cube", 3, 0x40000400u, "RCC_APBENR1.TIM3EN", "RCC_APBRSTR1.TIM3RST", "gate:tim3", "reset:tim3", nullptr, "", "capability-instance:tim3:lqfp64:ch1,capability-instance:tim3:lqfp64:ch2,capability-instance:tim3:lqfp64:ch3,capability-instance:tim3:lqfp64:ch4,capability-instance:tim3:lqfp64:etr"},
  {"TIM6", "tim", "gptimer2_v3_x_Cube", 6, 0x40001000u, "RCC_APBENR1.TIM6EN", "RCC_APBRSTR1.TIM6RST", "gate:tim6", "reset:tim6", nullptr, "TIM6_DAC_LPTIM1", ""},
  {"TIM7", "tim", "gptimer2_v3_x_Cube", 7, 0x40001400u, "RCC_APBENR1.TIM7EN", "RCC_APBRSTR1.TIM7RST", "gate:tim7", "reset:tim7", nullptr, "TIM7_LPTIM2", ""},
  {"UCPD1", "ucpd", "ucpd_v1_0_Cube", 1, 0x4000A000u, "RCC_APBENR1.UCPD1EN", "RCC_APBRSTR1.UCPD1RST", "gate:ucpd1", "reset:ucpd1", nullptr, "UCPD1_UCPD2", "capability-instance:ucpd1:lqfp64:frstx1,capability-instance:ucpd1:lqfp64:frstx2"},
  {"UCPD2", "ucpd", "ucpd_v1_0_Cube", 2, 0x4000A400u, "RCC_APBENR1.UCPD2EN", "RCC_APBRSTR1.UCPD2RST", "gate:ucpd2", "reset:ucpd2", nullptr, "", "capability-instance:ucpd2:lqfp64:frstx1,capability-instance:ucpd2:lqfp64:frstx2"},
  {"USART1", "usart", "sci3_v2_1_Cube", 1, 0x40013800u, "RCC_APBENR2.USART1EN", "RCC_APBRSTR2.USART1RST", "gate:usart1", "reset:usart1", "selector:usart1-kernel", "USART1", "capability-instance:usart1:lqfp64:ck,capability-instance:usart1:lqfp64:cts,capability-instance:usart1:lqfp64:de,capability-instance:usart1:lqfp64:nss,capability-instance:usart1:lqfp64:rts,capability-instance:usart1:lqfp64:rx,capability-instance:usart1:lqfp64:tx"},
  {"USART2", "usart", "sci3_v2_1_Cube", 2, 0x40004400u, "RCC_APBENR1.USART2EN", "RCC_APBRSTR1.USART2RST", "gate:usart2", "reset:usart2", nullptr, "USART2", "capability-instance:usart2:lqfp64:ck,capability-instance:usart2:lqfp64:cts,capability-instance:usart2:lqfp64:de,capability-instance:usart2:lqfp64:nss,capability-instance:usart2:lqfp64:rts,capability-instance:usart2:lqfp64:rx,capability-instance:usart2:lqfp64:tx"},
  {"USART3", "usart", "sci3_v2_1_Cube", 3, 0x40004800u, "RCC_APBENR1.USART3EN", "RCC_APBRSTR1.USART3RST", "gate:usart3", "reset:usart3", nullptr, "USART3_USART4_LPUART1", "capability-instance:usart3:lqfp64:ck,capability-instance:usart3:lqfp64:cts,capability-instance:usart3:lqfp64:de,capability-instance:usart3:lqfp64:nss,capability-instance:usart3:lqfp64:rts,capability-instance:usart3:lqfp64:rx,capability-instance:usart3:lqfp64:tx"},
  {"USART4", "usart", "sci3_v2_1_Cube", 4, 0x40004C00u, "RCC_APBENR1.USART4EN", "RCC_APBRSTR1.USART4RST", "gate:usart4", "reset:usart4", nullptr, "", "capability-instance:usart4:lqfp64:ck,capability-instance:usart4:lqfp64:cts,capability-instance:usart4:lqfp64:de,capability-instance:usart4:lqfp64:nss,capability-instance:usart4:lqfp64:rts,capability-instance:usart4:lqfp64:rx,capability-instance:usart4:lqfp64:tx"},
  {"WWDG", "wwdg", "wwdg1_v2_0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "WWDG", ""},
}};
}
}
}
}
}
