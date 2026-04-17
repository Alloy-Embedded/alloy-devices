#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32f4 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32f401re {
enum class StartupMemoryRegionId : std::uint16_t {
  none,
  flash,
  sram,
};

enum class StartupSymbolId : std::uint16_t {
  none,
  ADC_IRQHandler,
  BusFault_Handler,
  DebugMon_Handler,
  EXTI0_IRQHandler,
  EXTI15_10_IRQHandler,
  EXTI1_IRQHandler,
  EXTI2_IRQHandler,
  EXTI3_IRQHandler,
  EXTI4_IRQHandler,
  EXTI9_5_IRQHandler,
  FLASH_IRQHandler,
  FPU_IRQHandler,
  HardFault_Handler,
  I2C1_ER_IRQHandler,
  I2C1_EV_IRQHandler,
  I2C2_ER_IRQHandler,
  I2C2_EV_IRQHandler,
  I2C3_ER_IRQHandler,
  I2C3_EV_IRQHandler,
  MemManage_Handler,
  NMI_Handler,
  OTG_FS_IRQHandler,
  OTG_FS_WKUP_IRQHandler,
  PVD_IRQHandler,
  PendSV_Handler,
  RCC_IRQHandler,
  RTC_Alarm_IRQHandler,
  RTC_WKUP_IRQHandler,
  Reserved_Handler_10,
  Reserved_Handler_13,
  Reserved_Handler_7,
  Reserved_Handler_8,
  Reserved_Handler_9,
  Reset_Handler,
  SDIO_IRQHandler,
  SPI1_IRQHandler,
  SPI2_IRQHandler,
  SPI3_IRQHandler,
  SPI4_IRQHandler,
  SVCall_Handler,
  SysTick_Handler,
  TAMP_STAMP_IRQHandler,
  TIM1_BRK_TIM9_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM1_TRG_COM_TIM11_IRQHandler,
  TIM1_UP_TIM10_IRQHandler,
  TIM2_IRQHandler,
  TIM3_IRQHandler,
  UsageFault_Handler,
  __stack_top,
  _vectors,
};

enum class StartupDescriptorId : std::uint16_t {
  none,
  startup_copy_source_flash,
  startup_copy_target_sram,
  startup_stack_top,
  startup_vector_source_flash,
  startup_vectors,
  startup_zero_target_sram,
};

enum class InterruptBindingId : std::uint16_t {
  none,
  interrupt_binding_adc1_adc,
  interrupt_binding_adc_common_fpu,
  interrupt_binding_dma1_rtc_wkup,
  interrupt_binding_dma1_rtc_alarm,
  interrupt_binding_dma2_rcc,
  interrupt_binding_exti_tamp_stamp,
  interrupt_binding_exti_exti0,
  interrupt_binding_exti_exti1,
  interrupt_binding_exti_exti2,
  interrupt_binding_exti_exti3,
  interrupt_binding_exti_exti4,
  interrupt_binding_exti_exti9_5,
  interrupt_binding_exti_exti15_10,
  interrupt_binding_flash_flash,
  interrupt_binding_gpioa_tim2,
  interrupt_binding_gpiod_tim1_brk_tim9,
  interrupt_binding_gpiod_tim1_up_tim10,
  interrupt_binding_gpiod_tim1_trg_com_tim11,
  interrupt_binding_gpiod_tim1_cc,
  interrupt_binding_gpioh_sdio,
  interrupt_binding_i2c3_tim3,
  interrupt_binding_rcc_i2c1_ev,
  interrupt_binding_rcc_i2c1_er,
  interrupt_binding_rtc_i2c2_ev,
  interrupt_binding_rtc_i2c2_er,
  interrupt_binding_sdio_i2c3_ev,
  interrupt_binding_sdio_i2c3_er,
  interrupt_binding_tim10_spi1,
  interrupt_binding_tim11_spi2,
  interrupt_binding_tim2_spi3,
  interrupt_binding_tim3_spi4,
  interrupt_binding_usart1_otg_fs_wkup,
  interrupt_binding_usart1_otg_fs,
  interrupt_binding_wwdg_pvd,
};

struct VectorSlotDescriptor {
  int slot;
  StartupSymbolId symbol_id;
  InterruptBindingId interrupt_binding_id;
  VectorKindId kind_id;
};
inline constexpr std::array<VectorSlotDescriptor, 50> kVectorSlots = {{
  {0, StartupSymbolId::__stack_top, InterruptBindingId::none, VectorKindId::vector_kind_initial_stack_pointer},
  {1, StartupSymbolId::Reset_Handler, InterruptBindingId::none, VectorKindId::vector_kind_reset_handler},
  {2, StartupSymbolId::NMI_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {3, StartupSymbolId::HardFault_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {4, StartupSymbolId::MemManage_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {5, StartupSymbolId::BusFault_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {6, StartupSymbolId::UsageFault_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {7, StartupSymbolId::Reserved_Handler_7, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {8, StartupSymbolId::Reserved_Handler_8, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {9, StartupSymbolId::Reserved_Handler_9, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {10, StartupSymbolId::Reserved_Handler_10, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {11, StartupSymbolId::SVCall_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {12, StartupSymbolId::DebugMon_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {13, StartupSymbolId::Reserved_Handler_13, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {14, StartupSymbolId::PendSV_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {15, StartupSymbolId::SysTick_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {17, StartupSymbolId::PVD_IRQHandler, InterruptBindingId::interrupt_binding_wwdg_pvd, VectorKindId::vector_kind_external_interrupt},
  {18, StartupSymbolId::TAMP_STAMP_IRQHandler, InterruptBindingId::interrupt_binding_exti_tamp_stamp, VectorKindId::vector_kind_external_interrupt},
  {19, StartupSymbolId::RTC_WKUP_IRQHandler, InterruptBindingId::interrupt_binding_dma1_rtc_wkup, VectorKindId::vector_kind_external_interrupt},
  {20, StartupSymbolId::FLASH_IRQHandler, InterruptBindingId::interrupt_binding_flash_flash, VectorKindId::vector_kind_external_interrupt},
  {21, StartupSymbolId::RCC_IRQHandler, InterruptBindingId::interrupt_binding_dma2_rcc, VectorKindId::vector_kind_external_interrupt},
  {22, StartupSymbolId::EXTI0_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti0, VectorKindId::vector_kind_external_interrupt},
  {23, StartupSymbolId::EXTI1_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti1, VectorKindId::vector_kind_external_interrupt},
  {24, StartupSymbolId::EXTI2_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti2, VectorKindId::vector_kind_external_interrupt},
  {25, StartupSymbolId::EXTI3_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti3, VectorKindId::vector_kind_external_interrupt},
  {26, StartupSymbolId::EXTI4_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti4, VectorKindId::vector_kind_external_interrupt},
  {34, StartupSymbolId::ADC_IRQHandler, InterruptBindingId::interrupt_binding_adc1_adc, VectorKindId::vector_kind_external_interrupt},
  {39, StartupSymbolId::EXTI9_5_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti9_5, VectorKindId::vector_kind_external_interrupt},
  {40, StartupSymbolId::TIM1_BRK_TIM9_IRQHandler, InterruptBindingId::interrupt_binding_gpiod_tim1_brk_tim9, VectorKindId::vector_kind_external_interrupt},
  {41, StartupSymbolId::TIM1_UP_TIM10_IRQHandler, InterruptBindingId::interrupt_binding_gpiod_tim1_up_tim10, VectorKindId::vector_kind_external_interrupt},
  {42, StartupSymbolId::TIM1_TRG_COM_TIM11_IRQHandler, InterruptBindingId::interrupt_binding_gpiod_tim1_trg_com_tim11, VectorKindId::vector_kind_external_interrupt},
  {43, StartupSymbolId::TIM1_CC_IRQHandler, InterruptBindingId::interrupt_binding_gpiod_tim1_cc, VectorKindId::vector_kind_external_interrupt},
  {44, StartupSymbolId::TIM2_IRQHandler, InterruptBindingId::interrupt_binding_gpioa_tim2, VectorKindId::vector_kind_external_interrupt},
  {45, StartupSymbolId::TIM3_IRQHandler, InterruptBindingId::interrupt_binding_i2c3_tim3, VectorKindId::vector_kind_external_interrupt},
  {47, StartupSymbolId::I2C1_EV_IRQHandler, InterruptBindingId::interrupt_binding_rcc_i2c1_ev, VectorKindId::vector_kind_external_interrupt},
  {48, StartupSymbolId::I2C1_ER_IRQHandler, InterruptBindingId::interrupt_binding_rcc_i2c1_er, VectorKindId::vector_kind_external_interrupt},
  {49, StartupSymbolId::I2C2_EV_IRQHandler, InterruptBindingId::interrupt_binding_rtc_i2c2_ev, VectorKindId::vector_kind_external_interrupt},
  {50, StartupSymbolId::I2C2_ER_IRQHandler, InterruptBindingId::interrupt_binding_rtc_i2c2_er, VectorKindId::vector_kind_external_interrupt},
  {51, StartupSymbolId::SPI1_IRQHandler, InterruptBindingId::interrupt_binding_tim10_spi1, VectorKindId::vector_kind_external_interrupt},
  {52, StartupSymbolId::SPI2_IRQHandler, InterruptBindingId::interrupt_binding_tim11_spi2, VectorKindId::vector_kind_external_interrupt},
  {56, StartupSymbolId::EXTI15_10_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti15_10, VectorKindId::vector_kind_external_interrupt},
  {57, StartupSymbolId::RTC_Alarm_IRQHandler, InterruptBindingId::interrupt_binding_dma1_rtc_alarm, VectorKindId::vector_kind_external_interrupt},
  {58, StartupSymbolId::OTG_FS_WKUP_IRQHandler, InterruptBindingId::interrupt_binding_usart1_otg_fs_wkup, VectorKindId::vector_kind_external_interrupt},
  {65, StartupSymbolId::SDIO_IRQHandler, InterruptBindingId::interrupt_binding_gpioh_sdio, VectorKindId::vector_kind_external_interrupt},
  {67, StartupSymbolId::SPI3_IRQHandler, InterruptBindingId::interrupt_binding_tim2_spi3, VectorKindId::vector_kind_external_interrupt},
  {83, StartupSymbolId::OTG_FS_IRQHandler, InterruptBindingId::interrupt_binding_usart1_otg_fs, VectorKindId::vector_kind_external_interrupt},
  {88, StartupSymbolId::I2C3_EV_IRQHandler, InterruptBindingId::interrupt_binding_sdio_i2c3_ev, VectorKindId::vector_kind_external_interrupt},
  {89, StartupSymbolId::I2C3_ER_IRQHandler, InterruptBindingId::interrupt_binding_sdio_i2c3_er, VectorKindId::vector_kind_external_interrupt},
  {97, StartupSymbolId::FPU_IRQHandler, InterruptBindingId::interrupt_binding_adc_common_fpu, VectorKindId::vector_kind_external_interrupt},
  {100, StartupSymbolId::SPI4_IRQHandler, InterruptBindingId::interrupt_binding_tim3_spi4, VectorKindId::vector_kind_external_interrupt},
}};

struct StartupDescriptor {
  StartupDescriptorId descriptor_id;
  StartupKindId kind_id;
  StartupMemoryRegionId source_region_id;
  StartupMemoryRegionId target_region_id;
  StartupSymbolId symbol_id;
};
inline constexpr std::array<StartupDescriptor, 6> kStartupDescriptors = {{
  {StartupDescriptorId::startup_copy_source_flash, StartupKindId::startup_kind_copy_source_region, StartupMemoryRegionId::flash, StartupMemoryRegionId::none, StartupSymbolId::none},
  {StartupDescriptorId::startup_copy_target_sram, StartupKindId::startup_kind_copy_target_region, StartupMemoryRegionId::none, StartupMemoryRegionId::sram, StartupSymbolId::none},
  {StartupDescriptorId::startup_stack_top, StartupKindId::startup_kind_initial_stack_pointer, StartupMemoryRegionId::none, StartupMemoryRegionId::none, StartupSymbolId::__stack_top},
  {StartupDescriptorId::startup_vector_source_flash, StartupKindId::startup_kind_vector_source_region, StartupMemoryRegionId::flash, StartupMemoryRegionId::none, StartupSymbolId::none},
  {StartupDescriptorId::startup_vectors, StartupKindId::startup_kind_vector_table, StartupMemoryRegionId::none, StartupMemoryRegionId::none, StartupSymbolId::_vectors},
  {StartupDescriptorId::startup_zero_target_sram, StartupKindId::startup_kind_zero_target_region, StartupMemoryRegionId::none, StartupMemoryRegionId::sram, StartupSymbolId::none},
}};
}
}
}
}
}
}
