#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
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
inline constexpr std::array<PeripheralInstanceDescriptor, 32> kPeripheralInstances = {{
  {"ADC1", "adc", "aditf4_v3_0_G0_Cube", 1, 0x40012400u, "RCC_APBENR2.ADCEN", "RCC_APBRSTR2.ADCRST", "gate:adc1", "reset:adc1", nullptr, "ADC", ""},
  {"CRC", "crc", "integtest1_v2_0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, "CEC", ""},
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
  {"I2C1", "i2c1", "i2c2_v1_1_Cube", 0, 0x40005400u, "RCC_APBENR1.I2C1EN", "RCC_APBRSTR1.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, "I2C1", "capability-instance:i2c1:tssop20:sda,capability-instance:i2c1:tssop20:smba"},
  {"I2C2", "i2c2", "i2c2_v1_1_Cube", 0, 0x40005800u, "RCC_APBENR1.I2C2EN", "RCC_APBRSTR1.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, "I2C2", ""},
  {"IWDG", "iwdg", "iwdg1_v2_0", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"PWR", "pwr", nullptr, 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"RCC", "rcc", "STM32G0_64_rcc_v1_0", 0, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, "RCC", ""},
  {"RTC", "rtc", "rtc3_v1_0_Cube", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, "RTC_STAMP", ""},
  {"SPI1", "spi", "spi2s1_v3_5_Cube", 1, 0x40013000u, "RCC_APBENR2.SPI1EN", "RCC_APBRSTR2.SPI1RST", "gate:spi1", "reset:spi1", nullptr, "SPI1", "capability-instance:spi1:tssop20:miso,capability-instance:spi1:tssop20:mosi,capability-instance:spi1:tssop20:nss,capability-instance:spi1:tssop20:sck"},
  {"SPI2", "spi", "spi2s1_v3_5_Cube", 2, 0x40003800u, "RCC_APBENR1.SPI2EN", "RCC_APBRSTR1.SPI2RST", "gate:spi2", "reset:spi2", nullptr, "SPI2", "capability-instance:spi2:tssop20:miso,capability-instance:spi2:tssop20:mosi,capability-instance:spi2:tssop20:sck"},
  {"SYSCFG", "syscfg", nullptr, 0, 0x40010000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TAMP", "tamp", nullptr, 0, 0x4000B000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TIM1", "tim", "gptimer2_v3_x_Cube", 1, 0x40012C00u, "RCC_APBENR2.TIM1EN", "RCC_APBRSTR2.TIM1RST", "gate:tim1", "reset:tim1", nullptr, "TIM1_BRK_UP_TRG_COM,TIM1_CC", "capability-instance:tim1:tssop20:bk,capability-instance:tim1:tssop20:ch1n,capability-instance:tim1:tssop20:ch2,capability-instance:tim1:tssop20:ch2n"},
  {"TIM14", "tim", "gptimer2_v3_x_Cube", 14, 0x40002000u, "RCC_APBENR2.TIM14EN", "RCC_APBRSTR2.TIM14RST", "gate:tim14", "reset:tim14", nullptr, "TIM14", "capability-instance:tim14:tssop20:ch1"},
  {"TIM16", "tim", "gptimer2_v3_x_Cube", 16, 0x40014400u, "RCC_APBENR2.TIM16EN", "RCC_APBRSTR2.TIM16RST", "gate:tim16", "reset:tim16", nullptr, "TIM16", "capability-instance:tim16:tssop20:ch1"},
  {"TIM17", "tim", "gptimer2_v3_x_Cube", 17, 0x40014800u, "RCC_APBENR2.TIM17EN", "RCC_APBRSTR2.TIM17RST", "gate:tim17", "reset:tim17", nullptr, "TIM17", "capability-instance:tim17:tssop20:ch1,capability-instance:tim17:tssop20:ch1n"},
  {"TIM2", "tim", nullptr, 2, 0x40000000u, "RCC_APBENR1.TIM2EN", "RCC_APBRSTR1.TIM2RST", "gate:tim2", "reset:tim2", nullptr, "TIM2,TIM3", ""},
  {"TIM3", "tim", "gptimer2_v3_x_Cube", 3, 0x40000400u, "RCC_APBENR1.TIM3EN", "RCC_APBRSTR1.TIM3RST", "gate:tim3", "reset:tim3", nullptr, "", "capability-instance:tim3:tssop20:ch1,capability-instance:tim3:tssop20:ch2,capability-instance:tim3:tssop20:ch3"},
  {"USART1", "usart", "sci3_v2_1_Cube", 1, 0x40013800u, "RCC_APBENR2.USART1EN", "RCC_APBRSTR2.USART1RST", "gate:usart1", "reset:usart1", "selector:usart1-kernel", "USART1", "capability-instance:usart1:tssop20:ck,capability-instance:usart1:tssop20:de,capability-instance:usart1:tssop20:rts,capability-instance:usart1:tssop20:rx"},
  {"USART2", "usart", "sci3_v2_1_Cube", 2, 0x40004400u, "RCC_APBENR1.USART2EN", "RCC_APBRSTR1.USART2RST", "gate:usart2", "reset:usart2", nullptr, "USART2", "capability-instance:usart2:tssop20:ck,capability-instance:usart2:tssop20:cts,capability-instance:usart2:tssop20:de,capability-instance:usart2:tssop20:nss,capability-instance:usart2:tssop20:rts,capability-instance:usart2:tssop20:rx,capability-instance:usart2:tssop20:tx"},
  {"VREFBUF", "vrefbuf", nullptr, 0, 0x40010030u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"WWDG", "wwdg", "wwdg1_v2_0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, "WWDG", ""},
}};
}
}
}
}
}
