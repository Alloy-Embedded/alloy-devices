#pragma once

#include <array>
#include <cstdint>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
enum class PeripheralId : std::uint16_t {
  ADC1,
  CRC,
  DBG,
  DMA1,
  DMAMUX1,
  EXTI,
  FLASH,
  GPIOA,
  GPIOB,
  GPIOC,
  GPIOD,
  GPIOF,
  I2C1,
  I2C2,
  IWDG,
  PWR,
  RCC,
  RTC,
  SPI1,
  SPI2,
  SYSCFG,
  TAMP,
  TIM1,
  TIM14,
  TIM16,
  TIM17,
  TIM2,
  TIM3,
  USART1,
  USART2,
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
inline constexpr std::array<PeripheralInstanceDescriptor, 32> kPeripheralInstances = {{
  {PeripheralId::ADC1, "ADC1", "adc", "aditf4_v3_0_G0_Cube", "alloy.adc.st-aditf4-v3-0-g0-cube", 1, 0x40012400u, "RCC_APBENR2.ADCEN", "RCC_APBRSTR2.ADCRST", "gate:adc1", "reset:adc1", nullptr, 0u, 1u, 0u, 0u, 0u, 0u, "ADC", "", 15},
  {PeripheralId::CRC, "CRC", "crc", "integtest1_v2_0", "alloy.crc.st-integtest1-v2-0", 0, 0x40023000u, nullptr, nullptr, nullptr, nullptr, nullptr, 1u, 1u, 0u, 0u, 0u, 0u, "CEC", "", 5},
  {PeripheralId::DBG, "DBG", "dbg", nullptr, "alloy.dbg.st-dbg", 0, 0x40015800u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 4},
  {PeripheralId::DMA1, "DMA1", "dma", nullptr, "alloy.dma.st-dma", 1, 0x40020000u, "RCC_AHBENR.DMA1EN", "RCC_AHBRSTR.DMA1RST", "gate:dma1", "reset:dma1", nullptr, 2u, 2u, 0u, 0u, 0u, 0u, "DMA_Channel1,DMA_Channel2_3", "", 30},
  {PeripheralId::DMAMUX1, "DMAMUX1", "dmamux", nullptr, "alloy.dma-router.st-dmamux", 1, 0x40020800u, "RCC_AHBENR.DMAMUX1EN", "RCC_AHBRSTR.DMAMUX1RST", "gate:dmamux1", "reset:dmamux1", nullptr, 4u, 1u, 0u, 0u, 0u, 0u, "DMA_Channel4_5_6_7", "", 13},
  {PeripheralId::EXTI, "EXTI", "exti", nullptr, "alloy.exti.st-exti", 0, 0x40021800u, nullptr, nullptr, nullptr, nullptr, nullptr, 5u, 3u, 0u, 0u, 0u, 0u, "EXTI0_1,EXTI2_3,EXTI4_15", "", 11},
  {PeripheralId::FLASH, "FLASH", "flash", nullptr, "alloy.flash.st-flash", 0, 0x40022000u, nullptr, nullptr, nullptr, nullptr, nullptr, 8u, 1u, 0u, 0u, 0u, 0u, "FLASH", "", 11},
  {PeripheralId::GPIOA, "GPIOA", "gpio", nullptr, "alloy.gpio.st-gpio", 0, 0x50000000u, "RCC_IOPENR.GPIOAEN", "RCC_IOPRSTR.GPIOARST", "gate:gpioa", "reset:gpioa", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOB, "GPIOB", "gpio", nullptr, "alloy.gpio.st-gpio", 1, 0x50000400u, "RCC_IOPENR.GPIOBEN", "RCC_IOPRSTR.GPIOBRST", "gate:gpiob", "reset:gpiob", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOC, "GPIOC", "gpio", nullptr, "alloy.gpio.st-gpio", 2, 0x50000800u, "RCC_IOPENR.GPIOCEN", "RCC_IOPRSTR.GPIOCRST", "gate:gpioc", "reset:gpioc", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOD, "GPIOD", "gpio", nullptr, "alloy.gpio.st-gpio", 3, 0x50000C00u, "RCC_IOPENR.GPIODEN", "RCC_IOPRSTR.GPIODRST", "gate:gpiod", "reset:gpiod", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::GPIOF, "GPIOF", "gpio", nullptr, "alloy.gpio.st-gpio", 5, 0x50001400u, "RCC_IOPENR.GPIOFEN", "RCC_IOPRSTR.GPIOFRST", "gate:gpiof", "reset:gpiof", nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 11},
  {PeripheralId::I2C1, "I2C1", "i2c1", "i2c2_v1_1_Cube", "alloy.i2c1.st-i2c2-v1-1-cube", 0, 0x40005400u, "RCC_APBENR1.I2C1EN", "RCC_APBRSTR1.I2C1RST", "gate:i2c1", "reset:i2c1", nullptr, 9u, 1u, 0u, 0u, 0u, 2u, "I2C1", "capability-instance:i2c1:tssop20:sda,capability-instance:i2c1:tssop20:smba", 11},
  {PeripheralId::I2C2, "I2C2", "i2c2", "i2c2_v1_1_Cube", "alloy.i2c2.st-i2c2-v1-1-cube", 0, 0x40005800u, "RCC_APBENR1.I2C2EN", "RCC_APBRSTR1.I2C2RST", "gate:i2c2", "reset:i2c2", nullptr, 10u, 1u, 0u, 0u, 0u, 0u, "I2C2", "", 11},
  {PeripheralId::IWDG, "IWDG", "iwdg", "iwdg1_v2_0", "alloy.iwdg.st-iwdg1-v2-0", 0, 0x40003000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 5},
  {PeripheralId::PWR, "PWR", "pwr", nullptr, "alloy.pwr.st-pwr", 0, 0x40007000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 19},
  {PeripheralId::RCC, "RCC", "rcc", "STM32G0_64_rcc_v1_0", "alloy.rcc.st-stm32g0-64-rcc-v1-0", 0, 0x40021000u, nullptr, nullptr, nullptr, nullptr, nullptr, 11u, 1u, 0u, 0u, 0u, 0u, "RCC", "", 23},
  {PeripheralId::RTC, "RTC", "rtc", "rtc3_v1_0_Cube", "alloy.rtc.st-rtc3-v1-0-cube", 0, 0x40002800u, nullptr, nullptr, nullptr, nullptr, nullptr, 12u, 1u, 0u, 0u, 0u, 0u, "RTC_STAMP", "", 20},
  {PeripheralId::SPI1, "SPI1", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 1, 0x40013000u, "RCC_APBENR2.SPI1EN", "RCC_APBRSTR2.SPI1RST", "gate:spi1", "reset:spi1", nullptr, 13u, 1u, 0u, 0u, 2u, 4u, "SPI1", "capability-instance:spi1:tssop20:miso,capability-instance:spi1:tssop20:mosi,capability-instance:spi1:tssop20:nss,capability-instance:spi1:tssop20:sck", 9},
  {PeripheralId::SPI2, "SPI2", "spi", "spi2s1_v3_5_Cube", "alloy.spi.st-spi2s1-v3-5-cube", 2, 0x40003800u, "RCC_APBENR1.SPI2EN", "RCC_APBRSTR1.SPI2RST", "gate:spi2", "reset:spi2", nullptr, 14u, 1u, 0u, 0u, 6u, 3u, "SPI2", "capability-instance:spi2:tssop20:miso,capability-instance:spi2:tssop20:mosi,capability-instance:spi2:tssop20:sck", 9},
  {PeripheralId::SYSCFG, "SYSCFG", "syscfg", nullptr, "alloy.syscfg.st-syscfg", 0, 0x40010000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 30},
  {PeripheralId::TAMP, "TAMP", "tamp", nullptr, "alloy.tamp.st-tamp", 0, 0x4000B000u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 12},
  {PeripheralId::TIM1, "TIM1", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 1, 0x40012C00u, "RCC_APBENR2.TIM1EN", "RCC_APBRSTR2.TIM1RST", "gate:tim1", "reset:tim1", nullptr, 15u, 2u, 0u, 0u, 9u, 4u, "TIM1_BRK_UP_TRG_COM,TIM1_CC", "capability-instance:tim1:tssop20:bk,capability-instance:tim1:tssop20:ch1n,capability-instance:tim1:tssop20:ch2,capability-instance:tim1:tssop20:ch2n", 27},
  {PeripheralId::TIM14, "TIM14", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 14, 0x40002000u, "RCC_APBENR2.TIM14EN", "RCC_APBRSTR2.TIM14RST", "gate:tim14", "reset:tim14", nullptr, 17u, 1u, 0u, 0u, 13u, 1u, "TIM14", "capability-instance:tim14:tssop20:ch1", 11},
  {PeripheralId::TIM16, "TIM16", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 16, 0x40014400u, "RCC_APBENR2.TIM16EN", "RCC_APBRSTR2.TIM16RST", "gate:tim16", "reset:tim16", nullptr, 18u, 1u, 0u, 0u, 14u, 1u, "TIM16", "capability-instance:tim16:tssop20:ch1", 17},
  {PeripheralId::TIM17, "TIM17", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 17, 0x40014800u, "RCC_APBENR2.TIM17EN", "RCC_APBRSTR2.TIM17RST", "gate:tim17", "reset:tim17", nullptr, 19u, 1u, 0u, 0u, 15u, 2u, "TIM17", "capability-instance:tim17:tssop20:ch1,capability-instance:tim17:tssop20:ch1n", 17},
  {PeripheralId::TIM2, "TIM2", "tim", nullptr, "alloy.timer.st-tim", 2, 0x40000000u, "RCC_APBENR1.TIM2EN", "RCC_APBRSTR1.TIM2RST", "gate:tim2", "reset:tim2", nullptr, 20u, 2u, 0u, 0u, 0u, 0u, "TIM2,TIM3", "", 21},
  {PeripheralId::TIM3, "TIM3", "tim", "gptimer2_v3_x_Cube", "alloy.timer.st-gptimer2-v3-x-cube", 3, 0x40000400u, "RCC_APBENR1.TIM3EN", "RCC_APBRSTR1.TIM3RST", "gate:tim3", "reset:tim3", nullptr, 0u, 0u, 0u, 0u, 17u, 3u, "", "capability-instance:tim3:tssop20:ch1,capability-instance:tim3:tssop20:ch2,capability-instance:tim3:tssop20:ch3", 21},
  {PeripheralId::USART1, "USART1", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 1, 0x40013800u, "RCC_APBENR2.USART1EN", "RCC_APBRSTR2.USART1RST", "gate:usart1", "reset:usart1", "selector:usart1-kernel", 22u, 1u, 0u, 0u, 20u, 4u, "USART1", "capability-instance:usart1:tssop20:ck,capability-instance:usart1:tssop20:de,capability-instance:usart1:tssop20:rts,capability-instance:usart1:tssop20:rx", 12},
  {PeripheralId::USART2, "USART2", "usart", "sci3_v2_1_Cube", "alloy.uart.st-sci3-v2-1-cube", 2, 0x40004400u, "RCC_APBENR1.USART2EN", "RCC_APBRSTR1.USART2RST", "gate:usart2", "reset:usart2", nullptr, 23u, 1u, 0u, 2u, 24u, 7u, "USART2", "capability-instance:usart2:tssop20:ck,capability-instance:usart2:tssop20:cts,capability-instance:usart2:tssop20:de,capability-instance:usart2:tssop20:nss,capability-instance:usart2:tssop20:rts,capability-instance:usart2:tssop20:rx,capability-instance:usart2:tssop20:tx", 12},
  {PeripheralId::VREFBUF, "VREFBUF", "vrefbuf", nullptr, "alloy.vrefbuf.st-vrefbuf", 0, 0x40010030u, nullptr, nullptr, nullptr, nullptr, nullptr, 0u, 0u, 0u, 0u, 0u, 0u, "", "", 2},
  {PeripheralId::WWDG, "WWDG", "wwdg", "wwdg1_v2_0", "alloy.wwdg.st-wwdg1-v2-0", 0, 0x40002C00u, nullptr, nullptr, nullptr, nullptr, nullptr, 24u, 1u, 0u, 0u, 0u, 0u, "WWDG", "", 3},
}};
}
}
}
}
}
