#pragma once

#include <array>

namespace st {
namespace stm32f4 {
namespace generated {
namespace devices {
namespace stm32f405rg {
struct CapabilityOverlayDescriptor {
  const char* capability_id;
  const char* scope;
  const char* peripheral_class;
  const char* name;
  const char* value;
  const char* ip_name;
  const char* ip_version;
  const char* peripheral;
  const char* package_name;
};
inline constexpr std::array<CapabilityOverlayDescriptor, 49> kCapabilityOverlays = {{
  {"capability-instance:i2c1:lqfp64:scl", "instance-overlay", "i2c1", "available-signal", "scl", "i2c1", "i2c1_v1_5_Cube", "I2C1", "lqfp64"},
  {"capability-instance:i2c1:lqfp64:sda", "instance-overlay", "i2c1", "available-signal", "sda", "i2c1", "i2c1_v1_5_Cube", "I2C1", "lqfp64"},
  {"capability-instance:i2c1:lqfp64:smba", "instance-overlay", "i2c1", "available-signal", "smba", "i2c1", "i2c1_v1_5_Cube", "I2C1", "lqfp64"},
  {"capability-instance:i2c2:lqfp64:scl", "instance-overlay", "i2c2", "available-signal", "scl", "i2c2", "i2c1_v1_5_Cube", "I2C2", "lqfp64"},
  {"capability-instance:i2c2:lqfp64:sda", "instance-overlay", "i2c2", "available-signal", "sda", "i2c2", "i2c1_v1_5_Cube", "I2C2", "lqfp64"},
  {"capability-instance:i2c2:lqfp64:smba", "instance-overlay", "i2c2", "available-signal", "smba", "i2c2", "i2c1_v1_5_Cube", "I2C2", "lqfp64"},
  {"capability-instance:spi1:lqfp64:miso", "instance-overlay", "spi", "available-signal", "miso", "spi", "spi2s1_v2_2_Cube", "SPI1", "lqfp64"},
  {"capability-instance:spi1:lqfp64:mosi", "instance-overlay", "spi", "available-signal", "mosi", "spi", "spi2s1_v2_2_Cube", "SPI1", "lqfp64"},
  {"capability-instance:spi1:lqfp64:nss", "instance-overlay", "spi", "available-signal", "nss", "spi", "spi2s1_v2_2_Cube", "SPI1", "lqfp64"},
  {"capability-instance:spi1:lqfp64:sck", "instance-overlay", "spi", "available-signal", "sck", "spi", "spi2s1_v2_2_Cube", "SPI1", "lqfp64"},
  {"capability-instance:spi2:lqfp64:miso", "instance-overlay", "spi", "available-signal", "miso", "spi", "spi2s1_v2_2_Cube", "SPI2", "lqfp64"},
  {"capability-instance:spi2:lqfp64:mosi", "instance-overlay", "spi", "available-signal", "mosi", "spi", "spi2s1_v2_2_Cube", "SPI2", "lqfp64"},
  {"capability-instance:spi2:lqfp64:nss", "instance-overlay", "spi", "available-signal", "nss", "spi", "spi2s1_v2_2_Cube", "SPI2", "lqfp64"},
  {"capability-instance:spi2:lqfp64:sck", "instance-overlay", "spi", "available-signal", "sck", "spi", "spi2s1_v2_2_Cube", "SPI2", "lqfp64"},
  {"capability-instance:tim1:lqfp64:bkin", "instance-overlay", "timer", "available-signal", "bkin", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch1n", "instance-overlay", "timer", "available-signal", "ch1n", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch2n", "instance-overlay", "timer", "available-signal", "ch2n", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch3n", "instance-overlay", "timer", "available-signal", "ch3n", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:ch4", "instance-overlay", "timer", "available-signal", "ch4", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim1:lqfp64:etr", "instance-overlay", "timer", "available-signal", "etr", "tim", "gptimer2_v2_x_Cube", "TIM1", "lqfp64"},
  {"capability-instance:tim2:lqfp64:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v2_x_Cube", "TIM2", "lqfp64"},
  {"capability-instance:tim2:lqfp64:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v2_x_Cube", "TIM2", "lqfp64"},
  {"capability-instance:tim2:lqfp64:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v2_x_Cube", "TIM2", "lqfp64"},
  {"capability-instance:tim2:lqfp64:ch4", "instance-overlay", "timer", "available-signal", "ch4", "tim", "gptimer2_v2_x_Cube", "TIM2", "lqfp64"},
  {"capability-instance:tim2:lqfp64:etr", "instance-overlay", "timer", "available-signal", "etr", "tim", "gptimer2_v2_x_Cube", "TIM2", "lqfp64"},
  {"capability-instance:tim3:lqfp64:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v2_x_Cube", "TIM3", "lqfp64"},
  {"capability-instance:tim3:lqfp64:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v2_x_Cube", "TIM3", "lqfp64"},
  {"capability-instance:tim3:lqfp64:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v2_x_Cube", "TIM3", "lqfp64"},
  {"capability-instance:tim3:lqfp64:ch4", "instance-overlay", "timer", "available-signal", "ch4", "tim", "gptimer2_v2_x_Cube", "TIM3", "lqfp64"},
  {"capability-instance:tim3:lqfp64:etr", "instance-overlay", "timer", "available-signal", "etr", "tim", "gptimer2_v2_x_Cube", "TIM3", "lqfp64"},
  {"capability-instance:tim4:lqfp64:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v2_x_Cube", "TIM4", "lqfp64"},
  {"capability-instance:tim4:lqfp64:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v2_x_Cube", "TIM4", "lqfp64"},
  {"capability-instance:tim4:lqfp64:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v2_x_Cube", "TIM4", "lqfp64"},
  {"capability-instance:tim4:lqfp64:ch4", "instance-overlay", "timer", "available-signal", "ch4", "tim", "gptimer2_v2_x_Cube", "TIM4", "lqfp64"},
  {"capability-instance:tim5:lqfp64:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v2_x_Cube", "TIM5", "lqfp64"},
  {"capability-instance:tim5:lqfp64:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v2_x_Cube", "TIM5", "lqfp64"},
  {"capability-instance:tim5:lqfp64:ch4", "instance-overlay", "timer", "available-signal", "ch4", "tim", "gptimer2_v2_x_Cube", "TIM5", "lqfp64"},
  {"capability-instance:usart1:lqfp64:ck", "instance-overlay", "uart", "available-signal", "ck", "usart", "sci2_v1_2_Cube", "USART1", "lqfp64"},
  {"capability-instance:usart1:lqfp64:cts", "instance-overlay", "uart", "available-signal", "cts", "usart", "sci2_v1_2_Cube", "USART1", "lqfp64"},
  {"capability-instance:usart1:lqfp64:rts", "instance-overlay", "uart", "available-signal", "rts", "usart", "sci2_v1_2_Cube", "USART1", "lqfp64"},
  {"capability-instance:usart1:lqfp64:rx", "instance-overlay", "uart", "available-signal", "rx", "usart", "sci2_v1_2_Cube", "USART1", "lqfp64"},
  {"capability-instance:usart1:lqfp64:tx", "instance-overlay", "uart", "available-signal", "tx", "usart", "sci2_v1_2_Cube", "USART1", "lqfp64"},
  {"capability-instance:usart2:lqfp64:ck", "instance-overlay", "uart", "available-signal", "ck", "usart", "sci2_v1_2_Cube", "USART2", "lqfp64"},
  {"capability-instance:usart2:lqfp64:rts", "instance-overlay", "uart", "available-signal", "rts", "usart", "sci2_v1_2_Cube", "USART2", "lqfp64"},
  {"capability-instance:usart2:lqfp64:rx", "instance-overlay", "uart", "available-signal", "rx", "usart", "sci2_v1_2_Cube", "USART2", "lqfp64"},
  {"capability-instance:usart2:lqfp64:tx", "instance-overlay", "uart", "available-signal", "tx", "usart", "sci2_v1_2_Cube", "USART2", "lqfp64"},
}};
}
}
}
}
}
