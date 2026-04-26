#pragma once

#include <array>
#include <cstdint>
#include "../../types.hpp"

namespace microchip {
namespace avr_da {
namespace generated {
namespace runtime {
namespace devices {
namespace avr128da32 {
enum class StartupMemoryRegionId : std::uint16_t {
  none,
  APP_SECTION,
  EEPROM,
  INTERNAL_SRAM,
};

enum class StartupSymbolId : std::uint16_t {
  none,
  ADC0_RESRDY_IRQHandler,
  ADC0_WCMP_IRQHandler,
  BOD_VLM_IRQHandler,
  CCL_IRQHandler,
  NMI_IRQHandler,
  NVMCTRL_EE_IRQHandler,
  PORTA_PORT_IRQHandler,
  PORTC_PORT_IRQHandler,
  PORTD_PORT_IRQHandler,
  PORTF_PORT_IRQHandler,
  PTC_IRQHandler,
  RTC_CNT_IRQHandler,
  RTC_PIT_IRQHandler,
  SPI0_INT_IRQHandler,
  TCA0_CMP0_IRQHandler,
  TCA0_CMP1_IRQHandler,
  TCA0_CMP2_IRQHandler,
  TCA0_HUNF_IRQHandler,
  TCA0_LUNF_IRQHandler,
  TWI0_TWIM_IRQHandler,
  TWI0_TWIS_IRQHandler,
  USART0_DRE_IRQHandler,
  USART0_RXC_IRQHandler,
  USART0_TXC_IRQHandler,
  USART1_DRE_IRQHandler,
  USART1_RXC_IRQHandler,
  USART1_TXC_IRQHandler,
  __stack_top,
  __vector_0,
  _vectors,
};

enum class StartupDescriptorId : std::uint16_t {
  none,
  startup_copy_source_app_section,
  startup_copy_target_internal_sram,
  startup_stack_top,
  startup_vector_source_app_section,
  startup_vectors,
  startup_zero_target_internal_sram,
};

enum class InterruptBindingId : std::uint16_t {
  none,
  interrupt_binding_adc0_adc0_resrdy,
  interrupt_binding_adc0_adc0_wcmp,
  interrupt_binding_spi0_spi0_int,
  interrupt_binding_tca0_tca0_lunf,
  interrupt_binding_tca0_tca0_hunf,
  interrupt_binding_tca0_tca0_cmp0,
  interrupt_binding_tca0_tca0_cmp1,
  interrupt_binding_tca0_tca0_cmp2,
  interrupt_binding_twi0_twi0_twis,
  interrupt_binding_twi0_twi0_twim,
  interrupt_binding_usart0_usart0_rxc,
  interrupt_binding_usart0_usart0_dre,
  interrupt_binding_usart0_usart0_txc,
  interrupt_binding_usart1_usart1_rxc,
  interrupt_binding_usart1_usart1_dre,
  interrupt_binding_usart1_usart1_txc,
};

struct VectorSlotDescriptor {
  int slot;
  StartupSymbolId symbol_id;
  InterruptBindingId interrupt_binding_id;
  VectorKindId kind_id;
};
inline constexpr std::array<VectorSlotDescriptor, 28> kVectorSlots = {{
  {0, StartupSymbolId::__vector_0, InterruptBindingId::none, VectorKindId::vector_kind_reset_handler},
  {17, StartupSymbolId::NMI_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {18, StartupSymbolId::BOD_VLM_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {19, StartupSymbolId::RTC_CNT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {20, StartupSymbolId::RTC_PIT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {21, StartupSymbolId::CCL_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {22, StartupSymbolId::PORTA_PORT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {23, StartupSymbolId::TCA0_LUNF_IRQHandler, InterruptBindingId::interrupt_binding_tca0_tca0_lunf, VectorKindId::vector_kind_external_interrupt},
  {24, StartupSymbolId::TCA0_HUNF_IRQHandler, InterruptBindingId::interrupt_binding_tca0_tca0_hunf, VectorKindId::vector_kind_external_interrupt},
  {25, StartupSymbolId::TCA0_CMP0_IRQHandler, InterruptBindingId::interrupt_binding_tca0_tca0_cmp0, VectorKindId::vector_kind_external_interrupt},
  {26, StartupSymbolId::TCA0_CMP1_IRQHandler, InterruptBindingId::interrupt_binding_tca0_tca0_cmp1, VectorKindId::vector_kind_external_interrupt},
  {27, StartupSymbolId::TCA0_CMP2_IRQHandler, InterruptBindingId::interrupt_binding_tca0_tca0_cmp2, VectorKindId::vector_kind_external_interrupt},
  {32, StartupSymbolId::TWI0_TWIS_IRQHandler, InterruptBindingId::interrupt_binding_twi0_twi0_twis, VectorKindId::vector_kind_external_interrupt},
  {33, StartupSymbolId::TWI0_TWIM_IRQHandler, InterruptBindingId::interrupt_binding_twi0_twi0_twim, VectorKindId::vector_kind_external_interrupt},
  {34, StartupSymbolId::SPI0_INT_IRQHandler, InterruptBindingId::interrupt_binding_spi0_spi0_int, VectorKindId::vector_kind_external_interrupt},
  {35, StartupSymbolId::USART0_RXC_IRQHandler, InterruptBindingId::interrupt_binding_usart0_usart0_rxc, VectorKindId::vector_kind_external_interrupt},
  {36, StartupSymbolId::USART0_DRE_IRQHandler, InterruptBindingId::interrupt_binding_usart0_usart0_dre, VectorKindId::vector_kind_external_interrupt},
  {37, StartupSymbolId::USART0_TXC_IRQHandler, InterruptBindingId::interrupt_binding_usart0_usart0_txc, VectorKindId::vector_kind_external_interrupt},
  {38, StartupSymbolId::PORTD_PORT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {40, StartupSymbolId::ADC0_RESRDY_IRQHandler, InterruptBindingId::interrupt_binding_adc0_adc0_resrdy, VectorKindId::vector_kind_external_interrupt},
  {41, StartupSymbolId::ADC0_WCMP_IRQHandler, InterruptBindingId::interrupt_binding_adc0_adc0_wcmp, VectorKindId::vector_kind_external_interrupt},
  {43, StartupSymbolId::PTC_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {45, StartupSymbolId::PORTC_PORT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {47, StartupSymbolId::USART1_RXC_IRQHandler, InterruptBindingId::interrupt_binding_usart1_usart1_rxc, VectorKindId::vector_kind_external_interrupt},
  {48, StartupSymbolId::USART1_DRE_IRQHandler, InterruptBindingId::interrupt_binding_usart1_usart1_dre, VectorKindId::vector_kind_external_interrupt},
  {49, StartupSymbolId::USART1_TXC_IRQHandler, InterruptBindingId::interrupt_binding_usart1_usart1_txc, VectorKindId::vector_kind_external_interrupt},
  {50, StartupSymbolId::PORTF_PORT_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
  {51, StartupSymbolId::NVMCTRL_EE_IRQHandler, InterruptBindingId::none, VectorKindId::vector_kind_external_interrupt},
}};

struct StartupDescriptor {
  StartupDescriptorId descriptor_id;
  StartupKindId kind_id;
  StartupMemoryRegionId source_region_id;
  StartupMemoryRegionId target_region_id;
  StartupSymbolId symbol_id;
};
inline constexpr std::array<StartupDescriptor, 6> kStartupDescriptors = {{
  {StartupDescriptorId::startup_copy_source_app_section, StartupKindId::startup_kind_copy_source_region, StartupMemoryRegionId::APP_SECTION, StartupMemoryRegionId::none, StartupSymbolId::none},
  {StartupDescriptorId::startup_copy_target_internal_sram, StartupKindId::startup_kind_copy_target_region, StartupMemoryRegionId::none, StartupMemoryRegionId::INTERNAL_SRAM, StartupSymbolId::none},
  {StartupDescriptorId::startup_stack_top, StartupKindId::startup_kind_initial_stack_pointer, StartupMemoryRegionId::none, StartupMemoryRegionId::none, StartupSymbolId::__stack_top},
  {StartupDescriptorId::startup_vector_source_app_section, StartupKindId::startup_kind_vector_source_region, StartupMemoryRegionId::APP_SECTION, StartupMemoryRegionId::none, StartupSymbolId::none},
  {StartupDescriptorId::startup_vectors, StartupKindId::startup_kind_vector_table, StartupMemoryRegionId::none, StartupMemoryRegionId::none, StartupSymbolId::_vectors},
  {StartupDescriptorId::startup_zero_target_internal_sram, StartupKindId::startup_kind_zero_target_region, StartupMemoryRegionId::none, StartupMemoryRegionId::INTERNAL_SRAM, StartupSymbolId::none},
}};
}
}
}
}
}
}
