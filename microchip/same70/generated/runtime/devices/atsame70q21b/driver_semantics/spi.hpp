#pragma once

#include <array>
#include <cstdint>
#include "common.hpp"

namespace microchip {
namespace same70 {
namespace generated {
namespace runtime {
namespace devices {
namespace atsame70q21b {
namespace driver_semantics {
template<PeripheralId Id>
struct SpiSemanticTraits {
  static constexpr bool kPresent = false;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::none;
  static constexpr RuntimeRegisterRef kCr1Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCr2Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kDrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kMrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCsrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kTdrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kRdrRegister = kInvalidRegisterRef;
  static constexpr RuntimeFieldRef kCphaField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCpolField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kMstrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLsbfirstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsiField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDffField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kFrxthField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxneField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBsyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDrDataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpienField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpidisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSwrstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPcsdecField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kModfdisField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kPcsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDlybcsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kNcphaField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBitsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kScbrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDlybsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDlybctField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTdreField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdrfField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxemptyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTdField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTdrPcsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRdField = kInvalidFieldRef;
};

template<>
struct SpiSemanticTraits<PeripheralId::SPI0> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_microchip_spi_zm;
  static constexpr RuntimeRegisterRef kCr1Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCr2Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = RuntimeRegisterRef{RegisterId::register_spi0_sr, 0x40008000u, 16u, true};
  static constexpr RuntimeRegisterRef kDrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = RuntimeRegisterRef{RegisterId::register_spi0_cr, 0x40008000u, 0u, true};
  static constexpr RuntimeRegisterRef kMrRegister = RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true};
  static constexpr RuntimeRegisterRef kCsrRegister = RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true};
  static constexpr RuntimeRegisterRef kTdrRegister = RuntimeRegisterRef{RegisterId::register_spi0_tdr, 0x40008000u, 12u, true};
  static constexpr RuntimeRegisterRef kRdrRegister = RuntimeRegisterRef{RegisterId::register_spi0_rdr, 0x40008000u, 8u, true};
  static constexpr RuntimeFieldRef kCphaField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCpolField = RuntimeFieldRef{FieldId::field_spi0_csr__s_cpol, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kMstrField = RuntimeFieldRef{FieldId::field_spi0_mr_mstr, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kBrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLsbfirstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsiField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDffField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kFrxthField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxneField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBsyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDrDataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpienField = RuntimeFieldRef{FieldId::field_spi0_cr_spien, RuntimeRegisterRef{RegisterId::register_spi0_cr, 0x40008000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kSpidisField = RuntimeFieldRef{FieldId::field_spi0_cr_spidis, RuntimeRegisterRef{RegisterId::register_spi0_cr, 0x40008000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kSwrstField = RuntimeFieldRef{FieldId::field_spi0_cr_swrst, RuntimeRegisterRef{RegisterId::register_spi0_cr, 0x40008000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPsField = RuntimeFieldRef{FieldId::field_spi0_mr_ps, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPcsdecField = RuntimeFieldRef{FieldId::field_spi0_mr_pcsdec, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModfdisField = RuntimeFieldRef{FieldId::field_spi0_mr_modfdis, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPcsField = RuntimeFieldRef{FieldId::field_spi0_mr_pcs, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 16u, 4u, true};
  static constexpr RuntimeFieldRef kDlybcsField = RuntimeFieldRef{FieldId::field_spi0_mr_dlybcs, RuntimeRegisterRef{RegisterId::register_spi0_mr, 0x40008000u, 4u, true}, 24u, 8u, true};
  static constexpr RuntimeFieldRef kNcphaField = RuntimeFieldRef{FieldId::field_spi0_csr__s_ncpha, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kBitsField = RuntimeFieldRef{FieldId::field_spi0_csr__s_bits, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 4u, 4u, true};
  static constexpr RuntimeFieldRef kScbrField = RuntimeFieldRef{FieldId::field_spi0_csr__s_scbr, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 8u, 8u, true};
  static constexpr RuntimeFieldRef kDlybsField = RuntimeFieldRef{FieldId::field_spi0_csr__s_dlybs, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 16u, 8u, true};
  static constexpr RuntimeFieldRef kDlybctField = RuntimeFieldRef{FieldId::field_spi0_csr__s_dlybct, RuntimeRegisterRef{RegisterId::register_spi0_csr__s, 0x40008000u, 48u, true}, 24u, 8u, true};
  static constexpr RuntimeFieldRef kTdreField = RuntimeFieldRef{FieldId::field_spi0_sr_tdre, RuntimeRegisterRef{RegisterId::register_spi0_sr, 0x40008000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kRdrfField = RuntimeFieldRef{FieldId::field_spi0_sr_rdrf, RuntimeRegisterRef{RegisterId::register_spi0_sr, 0x40008000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kTxemptyField = RuntimeFieldRef{FieldId::field_spi0_sr_txempty, RuntimeRegisterRef{RegisterId::register_spi0_sr, 0x40008000u, 16u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kTdField = RuntimeFieldRef{FieldId::field_spi0_tdr_td, RuntimeRegisterRef{RegisterId::register_spi0_tdr, 0x40008000u, 12u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kTdrPcsField = RuntimeFieldRef{FieldId::field_spi0_tdr_pcs, RuntimeRegisterRef{RegisterId::register_spi0_tdr, 0x40008000u, 12u, true}, 16u, 4u, true};
  static constexpr RuntimeFieldRef kRdField = RuntimeFieldRef{FieldId::field_spi0_rdr_rd, RuntimeRegisterRef{RegisterId::register_spi0_rdr, 0x40008000u, 8u, true}, 0u, 16u, true};
};

template<>
struct SpiSemanticTraits<PeripheralId::SPI1> {
  static constexpr bool kPresent = true;
  static constexpr BackendSchemaId kSchemaId = BackendSchemaId::schema_alloy_spi_microchip_spi_zm;
  static constexpr RuntimeRegisterRef kCr1Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCr2Register = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kSrRegister = RuntimeRegisterRef{RegisterId::register_spi1_sr, 0x40058000u, 16u, true};
  static constexpr RuntimeRegisterRef kDrRegister = kInvalidRegisterRef;
  static constexpr RuntimeRegisterRef kCrRegister = RuntimeRegisterRef{RegisterId::register_spi1_cr, 0x40058000u, 0u, true};
  static constexpr RuntimeRegisterRef kMrRegister = RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true};
  static constexpr RuntimeRegisterRef kCsrRegister = RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true};
  static constexpr RuntimeRegisterRef kTdrRegister = RuntimeRegisterRef{RegisterId::register_spi1_tdr, 0x40058000u, 12u, true};
  static constexpr RuntimeRegisterRef kRdrRegister = RuntimeRegisterRef{RegisterId::register_spi1_rdr, 0x40058000u, 8u, true};
  static constexpr RuntimeFieldRef kCphaField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kCpolField = RuntimeFieldRef{FieldId::field_spi1_csr__s_cpol, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kMstrField = RuntimeFieldRef{FieldId::field_spi1_mr_mstr, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kBrField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kLsbfirstField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsiField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSsmField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDffField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDsField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kFrxthField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kTxeField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kRxneField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kBsyField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kDrDataField = kInvalidFieldRef;
  static constexpr RuntimeFieldRef kSpienField = RuntimeFieldRef{FieldId::field_spi1_cr_spien, RuntimeRegisterRef{RegisterId::register_spi1_cr, 0x40058000u, 0u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kSpidisField = RuntimeFieldRef{FieldId::field_spi1_cr_spidis, RuntimeRegisterRef{RegisterId::register_spi1_cr, 0x40058000u, 0u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kSwrstField = RuntimeFieldRef{FieldId::field_spi1_cr_swrst, RuntimeRegisterRef{RegisterId::register_spi1_cr, 0x40058000u, 0u, true}, 7u, 1u, true};
  static constexpr RuntimeFieldRef kPsField = RuntimeFieldRef{FieldId::field_spi1_mr_ps, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kPcsdecField = RuntimeFieldRef{FieldId::field_spi1_mr_pcsdec, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 2u, 1u, true};
  static constexpr RuntimeFieldRef kModfdisField = RuntimeFieldRef{FieldId::field_spi1_mr_modfdis, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 4u, 1u, true};
  static constexpr RuntimeFieldRef kPcsField = RuntimeFieldRef{FieldId::field_spi1_mr_pcs, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 16u, 4u, true};
  static constexpr RuntimeFieldRef kDlybcsField = RuntimeFieldRef{FieldId::field_spi1_mr_dlybcs, RuntimeRegisterRef{RegisterId::register_spi1_mr, 0x40058000u, 4u, true}, 24u, 8u, true};
  static constexpr RuntimeFieldRef kNcphaField = RuntimeFieldRef{FieldId::field_spi1_csr__s_ncpha, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kBitsField = RuntimeFieldRef{FieldId::field_spi1_csr__s_bits, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 4u, 4u, true};
  static constexpr RuntimeFieldRef kScbrField = RuntimeFieldRef{FieldId::field_spi1_csr__s_scbr, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 8u, 8u, true};
  static constexpr RuntimeFieldRef kDlybsField = RuntimeFieldRef{FieldId::field_spi1_csr__s_dlybs, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 16u, 8u, true};
  static constexpr RuntimeFieldRef kDlybctField = RuntimeFieldRef{FieldId::field_spi1_csr__s_dlybct, RuntimeRegisterRef{RegisterId::register_spi1_csr__s, 0x40058000u, 48u, true}, 24u, 8u, true};
  static constexpr RuntimeFieldRef kTdreField = RuntimeFieldRef{FieldId::field_spi1_sr_tdre, RuntimeRegisterRef{RegisterId::register_spi1_sr, 0x40058000u, 16u, true}, 1u, 1u, true};
  static constexpr RuntimeFieldRef kRdrfField = RuntimeFieldRef{FieldId::field_spi1_sr_rdrf, RuntimeRegisterRef{RegisterId::register_spi1_sr, 0x40058000u, 16u, true}, 0u, 1u, true};
  static constexpr RuntimeFieldRef kTxemptyField = RuntimeFieldRef{FieldId::field_spi1_sr_txempty, RuntimeRegisterRef{RegisterId::register_spi1_sr, 0x40058000u, 16u, true}, 9u, 1u, true};
  static constexpr RuntimeFieldRef kTdField = RuntimeFieldRef{FieldId::field_spi1_tdr_td, RuntimeRegisterRef{RegisterId::register_spi1_tdr, 0x40058000u, 12u, true}, 0u, 16u, true};
  static constexpr RuntimeFieldRef kTdrPcsField = RuntimeFieldRef{FieldId::field_spi1_tdr_pcs, RuntimeRegisterRef{RegisterId::register_spi1_tdr, 0x40058000u, 12u, true}, 16u, 4u, true};
  static constexpr RuntimeFieldRef kRdField = RuntimeFieldRef{FieldId::field_spi1_rdr_rd, RuntimeRegisterRef{RegisterId::register_spi1_rdr, 0x40058000u, 8u, true}, 0u, 16u, true};
};

inline constexpr std::array<PeripheralId, 2> kSpiSemanticPeripherals = {{
  PeripheralId::SPI0,
  PeripheralId::SPI1,
}};
}
}
}
}
}
}
}
