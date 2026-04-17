#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace st {
namespace stm32g0 {
namespace generated {
namespace runtime {
namespace devices {
namespace stm32g030f6 {
enum class StartupMemoryRegionId : std::uint16_t {
  none,
  flash,
  sram,
};

enum class StartupSymbolId : std::uint16_t {
  none,
  ADC_IRQHandler,
  CEC_IRQHandler,
  DMA_Channel1_IRQHandler,
  DMA_Channel2_3_IRQHandler,
  DMA_Channel4_5_6_7_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  FLASH_IRQHandler,
  HardFault_Handler,
  I2C1_IRQHandler,
  I2C2_IRQHandler,
  NMI_Handler,
  PendSV_Handler,
  RCC_IRQHandler,
  RTC_STAMP_IRQHandler,
  Reserved_Handler_10,
  Reserved_Handler_12,
  Reserved_Handler_13,
  Reserved_Handler_4,
  Reserved_Handler_5,
  Reserved_Handler_6,
  Reserved_Handler_7,
  Reserved_Handler_8,
  Reserved_Handler_9,
  Reset_Handler,
  SPI1_IRQHandler,
  SPI2_IRQHandler,
  SVCall_Handler,
  SysTick_Handler,
  TIM14_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM2_IRQHandler,
  TIM3_IRQHandler,
  USART1_IRQHandler,
  USART2_IRQHandler,
  WWDG_IRQHandler,
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
  interrupt_binding_crc_cec,
  interrupt_binding_dma1_dma_channel1,
  interrupt_binding_dma1_dma_channel2_3,
  interrupt_binding_dmamux1_dma_channel4_5_6_7,
  interrupt_binding_exti_exti0_1,
  interrupt_binding_exti_exti2_3,
  interrupt_binding_exti_exti4_15,
  interrupt_binding_flash_flash,
  interrupt_binding_i2c1_i2c1,
  interrupt_binding_i2c2_i2c2,
  interrupt_binding_rcc_rcc,
  interrupt_binding_rtc_rtc_stamp,
  interrupt_binding_spi1_spi1,
  interrupt_binding_spi2_spi2,
  interrupt_binding_tim1_tim1_brk_up_trg_com,
  interrupt_binding_tim1_tim1_cc,
  interrupt_binding_tim14_tim14,
  interrupt_binding_tim16_tim16,
  interrupt_binding_tim17_tim17,
  interrupt_binding_tim2_tim2,
  interrupt_binding_tim2_tim3,
  interrupt_binding_usart1_usart1,
  interrupt_binding_usart2_usart2,
  interrupt_binding_wwdg_wwdg,
};

struct VectorSlotDescriptor {
  int slot;
  StartupSymbolId symbol_id;
  InterruptBindingId interrupt_binding_id;
  VectorKindId kind_id;
};
inline constexpr std::array<VectorSlotDescriptor, 41> kVectorSlots = {{
  {0, StartupSymbolId::__stack_top, InterruptBindingId::none, VectorKindId::vector_kind_initial_stack_pointer},
  {1, StartupSymbolId::Reset_Handler, InterruptBindingId::none, VectorKindId::vector_kind_reset_handler},
  {2, StartupSymbolId::NMI_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {3, StartupSymbolId::HardFault_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {4, StartupSymbolId::Reserved_Handler_4, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {5, StartupSymbolId::Reserved_Handler_5, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {6, StartupSymbolId::Reserved_Handler_6, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {7, StartupSymbolId::Reserved_Handler_7, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {8, StartupSymbolId::Reserved_Handler_8, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {9, StartupSymbolId::Reserved_Handler_9, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {10, StartupSymbolId::Reserved_Handler_10, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {11, StartupSymbolId::SVCall_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {12, StartupSymbolId::Reserved_Handler_12, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {13, StartupSymbolId::Reserved_Handler_13, InterruptBindingId::none, VectorKindId::vector_kind_reserved},
  {14, StartupSymbolId::PendSV_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {15, StartupSymbolId::SysTick_Handler, InterruptBindingId::none, VectorKindId::vector_kind_system_exception},
  {16, StartupSymbolId::WWDG_IRQHandler, InterruptBindingId::interrupt_binding_wwdg_wwdg, VectorKindId::vector_kind_external_interrupt},
  {18, StartupSymbolId::RTC_STAMP_IRQHandler, InterruptBindingId::interrupt_binding_rtc_rtc_stamp, VectorKindId::vector_kind_external_interrupt},
  {19, StartupSymbolId::FLASH_IRQHandler, InterruptBindingId::interrupt_binding_flash_flash, VectorKindId::vector_kind_external_interrupt},
  {20, StartupSymbolId::RCC_IRQHandler, InterruptBindingId::interrupt_binding_rcc_rcc, VectorKindId::vector_kind_external_interrupt},
  {21, StartupSymbolId::EXTI0_1_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti0_1, VectorKindId::vector_kind_external_interrupt},
  {22, StartupSymbolId::EXTI2_3_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti2_3, VectorKindId::vector_kind_external_interrupt},
  {23, StartupSymbolId::EXTI4_15_IRQHandler, InterruptBindingId::interrupt_binding_exti_exti4_15, VectorKindId::vector_kind_external_interrupt},
  {25, StartupSymbolId::DMA_Channel1_IRQHandler, InterruptBindingId::interrupt_binding_dma1_dma_channel1, VectorKindId::vector_kind_external_interrupt},
  {26, StartupSymbolId::DMA_Channel2_3_IRQHandler, InterruptBindingId::interrupt_binding_dma1_dma_channel2_3, VectorKindId::vector_kind_external_interrupt},
  {27, StartupSymbolId::DMA_Channel4_5_6_7_IRQHandler, InterruptBindingId::interrupt_binding_dmamux1_dma_channel4_5_6_7, VectorKindId::vector_kind_external_interrupt},
  {28, StartupSymbolId::ADC_IRQHandler, InterruptBindingId::interrupt_binding_adc1_adc, VectorKindId::vector_kind_external_interrupt},
  {29, StartupSymbolId::TIM1_BRK_UP_TRG_COM_IRQHandler, InterruptBindingId::interrupt_binding_tim1_tim1_brk_up_trg_com, VectorKindId::vector_kind_external_interrupt},
  {30, StartupSymbolId::TIM1_CC_IRQHandler, InterruptBindingId::interrupt_binding_tim1_tim1_cc, VectorKindId::vector_kind_external_interrupt},
  {31, StartupSymbolId::TIM2_IRQHandler, InterruptBindingId::interrupt_binding_tim2_tim2, VectorKindId::vector_kind_external_interrupt},
  {32, StartupSymbolId::TIM3_IRQHandler, InterruptBindingId::interrupt_binding_tim2_tim3, VectorKindId::vector_kind_external_interrupt},
  {35, StartupSymbolId::TIM14_IRQHandler, InterruptBindingId::interrupt_binding_tim14_tim14, VectorKindId::vector_kind_external_interrupt},
  {37, StartupSymbolId::TIM16_IRQHandler, InterruptBindingId::interrupt_binding_tim16_tim16, VectorKindId::vector_kind_external_interrupt},
  {38, StartupSymbolId::TIM17_IRQHandler, InterruptBindingId::interrupt_binding_tim17_tim17, VectorKindId::vector_kind_external_interrupt},
  {39, StartupSymbolId::I2C1_IRQHandler, InterruptBindingId::interrupt_binding_i2c1_i2c1, VectorKindId::vector_kind_external_interrupt},
  {40, StartupSymbolId::I2C2_IRQHandler, InterruptBindingId::interrupt_binding_i2c2_i2c2, VectorKindId::vector_kind_external_interrupt},
  {41, StartupSymbolId::SPI1_IRQHandler, InterruptBindingId::interrupt_binding_spi1_spi1, VectorKindId::vector_kind_external_interrupt},
  {42, StartupSymbolId::SPI2_IRQHandler, InterruptBindingId::interrupt_binding_spi2_spi2, VectorKindId::vector_kind_external_interrupt},
  {43, StartupSymbolId::USART1_IRQHandler, InterruptBindingId::interrupt_binding_usart1_usart1, VectorKindId::vector_kind_external_interrupt},
  {44, StartupSymbolId::USART2_IRQHandler, InterruptBindingId::interrupt_binding_usart2_usart2, VectorKindId::vector_kind_external_interrupt},
  {46, StartupSymbolId::CEC_IRQHandler, InterruptBindingId::interrupt_binding_crc_cec, VectorKindId::vector_kind_external_interrupt},
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
