#pragma once

#include <array>
#include <cstdint>

namespace microchip {
namespace same70 {
namespace generated {
namespace devices {
namespace atsame70q21b {
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
inline constexpr std::array<PeripheralInstanceDescriptor, 68> kPeripheralInstances = {{
  {"ACC", "acc", "acc_j", 0, 0x40044000u, "PMC.PID33", nullptr, "gate:acc", nullptr, nullptr, "ACC", ""},
  {"AES", "aes", "aes_w", 0, 0x4006C000u, "PMC.PID56", nullptr, "gate:aes", nullptr, nullptr, "AES", ""},
  {"AFEC0", "afec", "afec_s", 0, 0x4003C000u, "PMC.PID29", nullptr, "gate:afec0", nullptr, nullptr, "AFEC0", "capability-instance:afec0:lqfp144:ad0,capability-instance:afec0:lqfp144:ad1,capability-instance:afec0:lqfp144:ad10,capability-instance:afec0:lqfp144:ad2,capability-instance:afec0:lqfp144:ad3,capability-instance:afec0:lqfp144:ad4,capability-instance:afec0:lqfp144:ad5,capability-instance:afec0:lqfp144:ad6,capability-instance:afec0:lqfp144:ad7,capability-instance:afec0:lqfp144:ad8,capability-instance:afec0:lqfp144:ad9,capability-instance:afec0:lqfp144:adtrg"},
  {"AFEC1", "afec", "afec_s", 1, 0x40064000u, "PMC.PID40", nullptr, "gate:afec1", nullptr, nullptr, "AFEC1", "capability-instance:afec1:lqfp144:ad0,capability-instance:afec1:lqfp144:ad1,capability-instance:afec1:lqfp144:ad10,capability-instance:afec1:lqfp144:ad11,capability-instance:afec1:lqfp144:ad2,capability-instance:afec1:lqfp144:ad3,capability-instance:afec1:lqfp144:ad4,capability-instance:afec1:lqfp144:ad5,capability-instance:afec1:lqfp144:ad6,capability-instance:afec1:lqfp144:ad7,capability-instance:afec1:lqfp144:ad8,capability-instance:afec1:lqfp144:ad9,capability-instance:afec1:lqfp144:adtrg"},
  {"CHIPID", "chipid", "chipid_zk", 0, 0x400E0940u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"CoreDebug", "coredebug", nullptr, 0, 0xE000EDF0u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"DACC", "dacc", "dacc_e", 0, 0x40040000u, "PMC.PID30", nullptr, "gate:dacc", nullptr, nullptr, "DACC", "capability-instance:dacc:lqfp144:dac0,capability-instance:dacc:lqfp144:dac1,capability-instance:dacc:lqfp144:datrg"},
  {"DWT", "dwt", "dwt", 0, 0xE0001000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"EFC", "efc", "efc_y", 0, 0x400E0C00u, "PMC.PID6", nullptr, "gate:efc", nullptr, nullptr, "EFC", "capability-instance:efc:lqfp144:erase"},
  {"ETM", "etm", "etm", 0, 0xE0041000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FPB", "fpb", "fpb", 0, 0xE0002000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"FPU", "fpu", "fpu", 0, 0xE000EF30u, nullptr, nullptr, nullptr, nullptr, nullptr, "FPU,IXC", ""},
  {"GMAC", "gmac", "gmac_s", 0, 0x40050000u, "PMC.PID39", nullptr, "gate:gmac", nullptr, nullptr, "GMAC,GMAC_Q1,GMAC_Q2,GMAC_Q3,GMAC_Q4,GMAC_Q5", "capability-instance:gmac:lqfp144:gcol,capability-instance:gmac:lqfp144:gcrs,capability-instance:gmac:lqfp144:gmdc,capability-instance:gmac:lqfp144:gmdio,capability-instance:gmac:lqfp144:grx0,capability-instance:gmac:lqfp144:grx1,capability-instance:gmac:lqfp144:grx2,capability-instance:gmac:lqfp144:grx3,capability-instance:gmac:lqfp144:grxck,capability-instance:gmac:lqfp144:grxdv,capability-instance:gmac:lqfp144:grxer,capability-instance:gmac:lqfp144:gtsucomp,capability-instance:gmac:lqfp144:gtx0,capability-instance:gmac:lqfp144:gtx1,capability-instance:gmac:lqfp144:gtx2,capability-instance:gmac:lqfp144:gtx3,capability-instance:gmac:lqfp144:gtxck,capability-instance:gmac:lqfp144:gtxen,capability-instance:gmac:lqfp144:gtxer"},
  {"GPBR", "gpbr", "gpbr_j", 0, 0x400E1890u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"GPIOA", "gpio", "pio_v", 0, 0x400E0E00u, "PMC.PID10", nullptr, "gate:gpioa", nullptr, nullptr, "PIOA", "capability-instance:gpioa:lqfp144:piodc0,capability-instance:gpioa:lqfp144:piodc1,capability-instance:gpioa:lqfp144:piodc2,capability-instance:gpioa:lqfp144:piodc3,capability-instance:gpioa:lqfp144:piodc4,capability-instance:gpioa:lqfp144:piodc5,capability-instance:gpioa:lqfp144:piodc6,capability-instance:gpioa:lqfp144:piodc7,capability-instance:gpioa:lqfp144:piodcclk,capability-instance:gpioa:lqfp144:piodcen1,capability-instance:gpioa:lqfp144:piodcen2"},
  {"GPIOB", "gpio", "pio_v", 1, 0x400E1000u, "PMC.PID11", nullptr, "gate:gpiob", nullptr, nullptr, "PIOB", ""},
  {"GPIOC", "gpio", "pio_v", 2, 0x400E1200u, "PMC.PID12", nullptr, "gate:gpioc", nullptr, nullptr, "PIOC", ""},
  {"GPIOD", "gpio", "pio_v", 3, 0x400E1400u, "PMC.PID16", nullptr, "gate:gpiod", nullptr, nullptr, "PIOD", ""},
  {"GPIOE", "gpio", "pio_v", 4, 0x400E1600u, "PMC.PID17", nullptr, "gate:gpioe", nullptr, nullptr, "PIOE", ""},
  {"HSMCI", "hsmci", "hsmci_r", 0, 0x40000000u, "PMC.PID18", nullptr, "gate:hsmci", nullptr, nullptr, "HSMCI", "capability-instance:hsmci:lqfp144:mccda,capability-instance:hsmci:lqfp144:mcck,capability-instance:hsmci:lqfp144:mcda0,capability-instance:hsmci:lqfp144:mcda1,capability-instance:hsmci:lqfp144:mcda2,capability-instance:hsmci:lqfp144:mcda3"},
  {"I2SC0", "i2sc0", "i2sc_n", 0, 0x4008C000u, "PMC.PID69", nullptr, "gate:i2sc0", nullptr, nullptr, "I2SC0", "capability-instance:i2sc0:lqfp144:ck,capability-instance:i2sc0:lqfp144:di0,capability-instance:i2sc0:lqfp144:do0,capability-instance:i2sc0:lqfp144:mck,capability-instance:i2sc0:lqfp144:ws"},
  {"I2SC1", "i2sc1", "i2sc_n", 0, 0x40090000u, "PMC.PID70", nullptr, "gate:i2sc1", nullptr, nullptr, "I2SC1", "capability-instance:i2sc1:lqfp144:ck,capability-instance:i2sc1:lqfp144:di0,capability-instance:i2sc1:lqfp144:do0,capability-instance:i2sc1:lqfp144:mck,capability-instance:i2sc1:lqfp144:ws"},
  {"ICM", "icm", "icm_h", 0, 0x40048000u, "PMC.PID32", nullptr, "gate:icm", nullptr, nullptr, "ICM", ""},
  {"ISI", "isi", "isi_k", 0, 0x4004C000u, "PMC.PID59", nullptr, "gate:isi", nullptr, nullptr, "ISI", "capability-instance:isi:lqfp144:d0,capability-instance:isi:lqfp144:d1,capability-instance:isi:lqfp144:d10,capability-instance:isi:lqfp144:d11,capability-instance:isi:lqfp144:d2,capability-instance:isi:lqfp144:d3,capability-instance:isi:lqfp144:d4,capability-instance:isi:lqfp144:d5,capability-instance:isi:lqfp144:d6,capability-instance:isi:lqfp144:d7,capability-instance:isi:lqfp144:d8,capability-instance:isi:lqfp144:d9,capability-instance:isi:lqfp144:hsync,capability-instance:isi:lqfp144:pck,capability-instance:isi:lqfp144:vsync"},
  {"ITM", "itm", "itm", 0, 0xE0000000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"LOCKBIT", "lockbit", "lockbit_1", 0, 0x00000000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"MATRIX", "matrix", "matrix_l", 0, 0x40088000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"MCAN0", "mcan", "mcan_n", 0, 0x40030000u, "PMC.PID35", nullptr, "gate:mcan0", nullptr, nullptr, "MCAN0_INT0,MCAN0_INT1", "capability-instance:mcan0:lqfp144:rx,capability-instance:mcan0:lqfp144:tx"},
  {"MCAN1", "mcan", "mcan_n", 1, 0x40034000u, "PMC.PID37", nullptr, "gate:mcan1", nullptr, nullptr, "MCAN1_INT0,MCAN1_INT1", "capability-instance:mcan1:lqfp144:rx,capability-instance:mcan1:lqfp144:tx"},
  {"MPU", "mpu", "mpu", 0, 0xE000ED90u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"NVIC", "nvic", "nvic", 0, 0xE000E100u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"PMC", "pmc", "pmc_p", 0, 0x400E0600u, "PMC.PID5", nullptr, "gate:pmc", nullptr, nullptr, "PMC", "capability-instance:pmc:lqfp144:pck0,capability-instance:pmc:lqfp144:pck1,capability-instance:pmc:lqfp144:pck2,capability-instance:pmc:lqfp144:xin,capability-instance:pmc:lqfp144:xin32,capability-instance:pmc:lqfp144:xout,capability-instance:pmc:lqfp144:xout32"},
  {"PWM0", "pwm", "pwm_y", 0, 0x40020000u, "PMC.PID31", nullptr, "gate:pwm0", nullptr, nullptr, "PWM0", "capability-instance:pwm0:lqfp144:pwmextrg0,capability-instance:pwm0:lqfp144:pwmextrg1,capability-instance:pwm0:lqfp144:pwmfi0,capability-instance:pwm0:lqfp144:pwmfi1,capability-instance:pwm0:lqfp144:pwmfi2,capability-instance:pwm0:lqfp144:pwmh0,capability-instance:pwm0:lqfp144:pwmh1,capability-instance:pwm0:lqfp144:pwmh2,capability-instance:pwm0:lqfp144:pwmh3,capability-instance:pwm0:lqfp144:pwml0,capability-instance:pwm0:lqfp144:pwml1,capability-instance:pwm0:lqfp144:pwml2,capability-instance:pwm0:lqfp144:pwml3"},
  {"PWM1", "pwm", "pwm_y", 1, 0x4005C000u, "PMC.PID60", nullptr, "gate:pwm1", nullptr, nullptr, "PWM1", "capability-instance:pwm1:lqfp144:pwmextrg0,capability-instance:pwm1:lqfp144:pwmextrg1,capability-instance:pwm1:lqfp144:pwmfi0,capability-instance:pwm1:lqfp144:pwmfi1,capability-instance:pwm1:lqfp144:pwmfi2,capability-instance:pwm1:lqfp144:pwmh0,capability-instance:pwm1:lqfp144:pwmh1,capability-instance:pwm1:lqfp144:pwmh2,capability-instance:pwm1:lqfp144:pwmh3,capability-instance:pwm1:lqfp144:pwml0,capability-instance:pwm1:lqfp144:pwml1,capability-instance:pwm1:lqfp144:pwml2,capability-instance:pwm1:lqfp144:pwml3"},
  {"QSPI", "qspi", "qspi_j", 0, 0x4007C000u, "PMC.PID43", nullptr, "gate:qspi", nullptr, nullptr, "QSPI", "capability-instance:qspi:lqfp144:qcs,capability-instance:qspi:lqfp144:qio0,capability-instance:qspi:lqfp144:qio1,capability-instance:qspi:lqfp144:qio2,capability-instance:qspi:lqfp144:qio3,capability-instance:qspi:lqfp144:qsck"},
  {"RSTC", "rstc", "rstc_n", 0, 0x400E1800u, "PMC.PID1", nullptr, "gate:rstc", nullptr, nullptr, "RSTC", ""},
  {"RSWDT", "rswdt", "rswdt_g", 0, 0x400E1900u, "PMC.PID63", nullptr, "gate:rswdt", nullptr, nullptr, "RSWDT", ""},
  {"RTC", "rtc", "rtc_zb", 0, 0x400E1860u, "PMC.PID2", nullptr, "gate:rtc", nullptr, nullptr, "RTC", "capability-instance:rtc:lqfp144:rtcout0,capability-instance:rtc:lqfp144:rtcout1"},
  {"RTT", "rtt", "rtt_m", 0, 0x400E1830u, "PMC.PID3", nullptr, "gate:rtt", nullptr, nullptr, "RTT", ""},
  {"SCB", "scb", "scb", 0, 0xE000ED00u, nullptr, nullptr, nullptr, nullptr, nullptr, "CCW,CCF", ""},
  {"SCnSCB", "scnscb", nullptr, 0, 0xE000E000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"SMC", "smc", "smc_j", 0, 0x40080000u, "PMC.PID9", nullptr, "gate:smc", nullptr, nullptr, "", ""},
  {"SPI0", "spi", "spi_zm", 0, 0x40008000u, "PMC.PID21", nullptr, "gate:spi0", nullptr, nullptr, "SPI0", "capability-instance:spi0:lqfp144:cs,capability-instance:spi0:lqfp144:miso,capability-instance:spi0:lqfp144:mosi,capability-instance:spi0:lqfp144:sck"},
  {"SPI1", "spi", "spi_zm", 1, 0x40058000u, "PMC.PID42", nullptr, "gate:spi1", nullptr, nullptr, "SPI1", "capability-instance:spi1:lqfp144:cs,capability-instance:spi1:lqfp144:miso,capability-instance:spi1:lqfp144:mosi,capability-instance:spi1:lqfp144:sck"},
  {"SSC", "ssc", "ssc_q", 0, 0x40004000u, "PMC.PID22", nullptr, "gate:ssc", nullptr, nullptr, "SSC", "capability-instance:ssc:lqfp144:rd,capability-instance:ssc:lqfp144:rf,capability-instance:ssc:lqfp144:rk,capability-instance:ssc:lqfp144:td,capability-instance:ssc:lqfp144:tf,capability-instance:ssc:lqfp144:tk"},
  {"SUPC", "supc", "supc_ze", 0, 0x400E1810u, "PMC.PID0", nullptr, "gate:supc", nullptr, nullptr, "SUPC", "capability-instance:supc:lqfp144:wkup0,capability-instance:supc:lqfp144:wkup1,capability-instance:supc:lqfp144:wkup10,capability-instance:supc:lqfp144:wkup11,capability-instance:supc:lqfp144:wkup12,capability-instance:supc:lqfp144:wkup13,capability-instance:supc:lqfp144:wkup2,capability-instance:supc:lqfp144:wkup3,capability-instance:supc:lqfp144:wkup4,capability-instance:supc:lqfp144:wkup5,capability-instance:supc:lqfp144:wkup6,capability-instance:supc:lqfp144:wkup7,capability-instance:supc:lqfp144:wkup8,capability-instance:supc:lqfp144:wkup9"},
  {"SysTick", "systick", nullptr, 0, 0xE000E010u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TC0", "tc", "tc_zl", 0, 0x4000C000u, "PMC.PID23", nullptr, "gate:tc0", nullptr, nullptr, "TC0,TC1,TC2", "capability-instance:tc0:lqfp144:tclk0,capability-instance:tc0:lqfp144:tclk1,capability-instance:tc0:lqfp144:tclk2,capability-instance:tc0:lqfp144:tioa0,capability-instance:tc0:lqfp144:tioa1,capability-instance:tc0:lqfp144:tioa2,capability-instance:tc0:lqfp144:tiob0,capability-instance:tc0:lqfp144:tiob1,capability-instance:tc0:lqfp144:tiob2"},
  {"TC1", "tc", "tc_zl", 1, 0x40010000u, "PMC.PID26", nullptr, "gate:tc1", nullptr, nullptr, "TC3,TC4,TC5", "capability-instance:tc1:lqfp144:tclk3,capability-instance:tc1:lqfp144:tclk4,capability-instance:tc1:lqfp144:tclk5,capability-instance:tc1:lqfp144:tioa3,capability-instance:tc1:lqfp144:tioa4,capability-instance:tc1:lqfp144:tioa5,capability-instance:tc1:lqfp144:tiob3,capability-instance:tc1:lqfp144:tiob4,capability-instance:tc1:lqfp144:tiob5"},
  {"TC2", "tc", "tc_zl", 2, 0x40014000u, "PMC.PID47", nullptr, "gate:tc2", nullptr, nullptr, "TC6,TC7,TC8", "capability-instance:tc2:lqfp144:tclk6,capability-instance:tc2:lqfp144:tclk7,capability-instance:tc2:lqfp144:tclk8,capability-instance:tc2:lqfp144:tioa6,capability-instance:tc2:lqfp144:tioa7,capability-instance:tc2:lqfp144:tioa8,capability-instance:tc2:lqfp144:tiob6,capability-instance:tc2:lqfp144:tiob7,capability-instance:tc2:lqfp144:tiob8"},
  {"TC3", "tc", "tc_zl", 3, 0x40054000u, "PMC.PID50", nullptr, "gate:tc3", nullptr, nullptr, "TC9,TC10,TC11", "capability-instance:tc3:lqfp144:tclk10,capability-instance:tc3:lqfp144:tclk11,capability-instance:tc3:lqfp144:tclk9,capability-instance:tc3:lqfp144:tioa10,capability-instance:tc3:lqfp144:tioa11,capability-instance:tc3:lqfp144:tioa9,capability-instance:tc3:lqfp144:tiob10,capability-instance:tc3:lqfp144:tiob11,capability-instance:tc3:lqfp144:tiob9"},
  {"TPIU", "tpiu", "tpiu", 0, 0xE0040000u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"TRNG", "trng", "trng_g", 0, 0x40070000u, "PMC.PID57", nullptr, "gate:trng", nullptr, nullptr, "TRNG", ""},
  {"TWIHS0", "twihs", "twihs_z", 0, 0x40018000u, "PMC.PID19", nullptr, "gate:twihs0", nullptr, nullptr, "TWIHS0", "capability-instance:twihs0:lqfp144:scl,capability-instance:twihs0:lqfp144:sda"},
  {"TWIHS1", "twihs", "twihs_z", 1, 0x4001C000u, "PMC.PID20", nullptr, "gate:twihs1", nullptr, nullptr, "TWIHS1", "capability-instance:twihs1:lqfp144:scl,capability-instance:twihs1:lqfp144:sda"},
  {"TWIHS2", "twihs", "twihs_z", 2, 0x40060000u, "PMC.PID41", nullptr, "gate:twihs2", nullptr, nullptr, "TWIHS2", "capability-instance:twihs2:lqfp144:scl,capability-instance:twihs2:lqfp144:sda"},
  {"UART0", "uart", "uart_r", 0, 0x400E0800u, "PMC.PID7", nullptr, "gate:uart0", nullptr, nullptr, "UART0", "capability-instance:uart0:lqfp144:urxd0,capability-instance:uart0:lqfp144:utxd0"},
  {"UART1", "uart", "uart_r", 1, 0x400E0A00u, "PMC.PID8", nullptr, "gate:uart1", nullptr, nullptr, "UART1", "capability-instance:uart1:lqfp144:urxd1,capability-instance:uart1:lqfp144:utxd1"},
  {"UART2", "uart", "uart_r", 2, 0x400E1A00u, "PMC.PID44", nullptr, "gate:uart2", nullptr, nullptr, "UART2", "capability-instance:uart2:lqfp144:urxd2,capability-instance:uart2:lqfp144:utxd2"},
  {"UART3", "uart", "uart_r", 3, 0x400E1C00u, "PMC.PID45", nullptr, "gate:uart3", nullptr, nullptr, "UART3", "capability-instance:uart3:lqfp144:urxd3,capability-instance:uart3:lqfp144:utxd3"},
  {"UART4", "uart", "uart_r", 4, 0x400E1E00u, "PMC.PID46", nullptr, "gate:uart4", nullptr, nullptr, "UART4", "capability-instance:uart4:lqfp144:urxd4,capability-instance:uart4:lqfp144:utxd4"},
  {"USART0", "usart", "usart_zw", 0, 0x40024000u, "PMC.PID13", nullptr, "gate:usart0", nullptr, nullptr, "USART0", "capability-instance:usart0:lqfp144:cts,capability-instance:usart0:lqfp144:dcd0,capability-instance:usart0:lqfp144:dsr0,capability-instance:usart0:lqfp144:dtr0,capability-instance:usart0:lqfp144:ri0,capability-instance:usart0:lqfp144:rts,capability-instance:usart0:lqfp144:rx,capability-instance:usart0:lqfp144:sck0,capability-instance:usart0:lqfp144:tx"},
  {"USART1", "usart", "usart_zw", 1, 0x40028000u, "PMC.PID14", nullptr, "gate:usart1", nullptr, nullptr, "USART1", "capability-instance:usart1:lqfp144:cts,capability-instance:usart1:lqfp144:dcd1,capability-instance:usart1:lqfp144:dsr1,capability-instance:usart1:lqfp144:dtr1,capability-instance:usart1:lqfp144:loncol1,capability-instance:usart1:lqfp144:ri1,capability-instance:usart1:lqfp144:rts,capability-instance:usart1:lqfp144:rx,capability-instance:usart1:lqfp144:sck1,capability-instance:usart1:lqfp144:tx"},
  {"USART2", "usart", "usart_zw", 2, 0x4002C000u, "PMC.PID15", nullptr, "gate:usart2", nullptr, nullptr, "USART2", "capability-instance:usart2:lqfp144:cts,capability-instance:usart2:lqfp144:dcd2,capability-instance:usart2:lqfp144:dsr2,capability-instance:usart2:lqfp144:dtr2,capability-instance:usart2:lqfp144:ri2,capability-instance:usart2:lqfp144:rts,capability-instance:usart2:lqfp144:rx,capability-instance:usart2:lqfp144:sck2,capability-instance:usart2:lqfp144:tx"},
  {"USBHS", "usbhs", "usbhs_g", 0, 0x40038000u, "PMC.PID34", nullptr, "gate:usbhs", nullptr, nullptr, "USBHS", ""},
  {"UTMI", "utmi", "utmi_a", 0, 0x400E0400u, nullptr, nullptr, nullptr, nullptr, nullptr, "", ""},
  {"WDT", "wdt", "wdt_n", 0, 0x400E1850u, "PMC.PID4", nullptr, "gate:wdt", nullptr, nullptr, "WDT", ""},
  {"XDMAC", "xdmac", "xdmac_k", 0, 0x40078000u, "PMC.PID58", nullptr, "gate:xdmac", nullptr, nullptr, "XDMAC", ""},
}};
}
}
}
}
}
