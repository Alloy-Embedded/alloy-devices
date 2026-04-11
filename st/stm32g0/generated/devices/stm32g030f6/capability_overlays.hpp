#pragma once

#include <array>

namespace st {
namespace stm32g0 {
namespace generated {
namespace devices {
namespace stm32g030f6 {
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
inline constexpr std::array<CapabilityOverlayDescriptor, 31> kCapabilityOverlays = {{
  {"capability-instance:i2c1:tssop20:sda", "instance-overlay", "i2c1", "available-signal", "sda", "i2c1", "i2c2_v1_1_Cube", "I2C1", "tssop20"},
  {"capability-instance:i2c1:tssop20:smba", "instance-overlay", "i2c1", "available-signal", "smba", "i2c1", "i2c2_v1_1_Cube", "I2C1", "tssop20"},
  {"capability-instance:spi1:tssop20:miso", "instance-overlay", "spi", "available-signal", "miso", "spi", "spi2s1_v3_5_Cube", "SPI1", "tssop20"},
  {"capability-instance:spi1:tssop20:mosi", "instance-overlay", "spi", "available-signal", "mosi", "spi", "spi2s1_v3_5_Cube", "SPI1", "tssop20"},
  {"capability-instance:spi1:tssop20:nss", "instance-overlay", "spi", "available-signal", "nss", "spi", "spi2s1_v3_5_Cube", "SPI1", "tssop20"},
  {"capability-instance:spi1:tssop20:sck", "instance-overlay", "spi", "available-signal", "sck", "spi", "spi2s1_v3_5_Cube", "SPI1", "tssop20"},
  {"capability-instance:spi2:tssop20:miso", "instance-overlay", "spi", "available-signal", "miso", "spi", "spi2s1_v3_5_Cube", "SPI2", "tssop20"},
  {"capability-instance:spi2:tssop20:mosi", "instance-overlay", "spi", "available-signal", "mosi", "spi", "spi2s1_v3_5_Cube", "SPI2", "tssop20"},
  {"capability-instance:spi2:tssop20:sck", "instance-overlay", "spi", "available-signal", "sck", "spi", "spi2s1_v3_5_Cube", "SPI2", "tssop20"},
  {"capability-instance:tim14:tssop20:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v3_x_Cube", "TIM14", "tssop20"},
  {"capability-instance:tim16:tssop20:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v3_x_Cube", "TIM16", "tssop20"},
  {"capability-instance:tim17:tssop20:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v3_x_Cube", "TIM17", "tssop20"},
  {"capability-instance:tim17:tssop20:ch1n", "instance-overlay", "timer", "available-signal", "ch1n", "tim", "gptimer2_v3_x_Cube", "TIM17", "tssop20"},
  {"capability-instance:tim1:tssop20:bk", "instance-overlay", "timer", "available-signal", "bk", "tim", "gptimer2_v3_x_Cube", "TIM1", "tssop20"},
  {"capability-instance:tim1:tssop20:ch1n", "instance-overlay", "timer", "available-signal", "ch1n", "tim", "gptimer2_v3_x_Cube", "TIM1", "tssop20"},
  {"capability-instance:tim1:tssop20:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v3_x_Cube", "TIM1", "tssop20"},
  {"capability-instance:tim1:tssop20:ch2n", "instance-overlay", "timer", "available-signal", "ch2n", "tim", "gptimer2_v3_x_Cube", "TIM1", "tssop20"},
  {"capability-instance:tim3:tssop20:ch1", "instance-overlay", "timer", "available-signal", "ch1", "tim", "gptimer2_v3_x_Cube", "TIM3", "tssop20"},
  {"capability-instance:tim3:tssop20:ch2", "instance-overlay", "timer", "available-signal", "ch2", "tim", "gptimer2_v3_x_Cube", "TIM3", "tssop20"},
  {"capability-instance:tim3:tssop20:ch3", "instance-overlay", "timer", "available-signal", "ch3", "tim", "gptimer2_v3_x_Cube", "TIM3", "tssop20"},
  {"capability-instance:usart1:tssop20:ck", "instance-overlay", "uart", "available-signal", "ck", "usart", "sci3_v2_1_Cube", "USART1", "tssop20"},
  {"capability-instance:usart1:tssop20:de", "instance-overlay", "uart", "available-signal", "de", "usart", "sci3_v2_1_Cube", "USART1", "tssop20"},
  {"capability-instance:usart1:tssop20:rts", "instance-overlay", "uart", "available-signal", "rts", "usart", "sci3_v2_1_Cube", "USART1", "tssop20"},
  {"capability-instance:usart1:tssop20:rx", "instance-overlay", "uart", "available-signal", "rx", "usart", "sci3_v2_1_Cube", "USART1", "tssop20"},
  {"capability-instance:usart2:tssop20:ck", "instance-overlay", "uart", "available-signal", "ck", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:cts", "instance-overlay", "uart", "available-signal", "cts", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:de", "instance-overlay", "uart", "available-signal", "de", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:nss", "instance-overlay", "uart", "available-signal", "nss", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:rts", "instance-overlay", "uart", "available-signal", "rts", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:rx", "instance-overlay", "uart", "available-signal", "rx", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
  {"capability-instance:usart2:tssop20:tx", "instance-overlay", "uart", "available-signal", "tx", "usart", "sci3_v2_1_Cube", "USART2", "tssop20"},
}};
}
}
}
}
}
