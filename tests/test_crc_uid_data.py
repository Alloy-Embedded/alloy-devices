"""The CRC unit's and the UID's curated facts, pinned where a driver trusts them.

The CRC tests are all one claim: **this block can be configured to the exact
function alloy already computes in software** (CRC-32/ISO-HDLC — zlib, PKZIP,
Ethernet; the one in alloy's `src/alloy/ota/crc32.hpp`, used for every OTA image
header, every payload and every provisioning record). That claim is worth
guarding here rather than only in the driver, because it is a claim about six
numbers and five of them are *reset values in this file*. If a copy-and-edit of
this file for `crc_v1` or `crc_v2` changes POL's reset value, or renames the
REV_IN encodings, a driver keeps compiling and starts computing a different
checksum against a bootloader that still computes the old one.

The sixth parameter — xorout — is deliberately absent from the block, and one
test says so out loud so that its absence stays a recorded fact rather than an
oversight someone "fixes" by inventing a register.
"""

from __future__ import annotations

from pathlib import Path

import yaml

REPO = Path(__file__).resolve().parent.parent
CRC_FILES = sorted((REPO / "registers" / "st").glob("crc_*.yaml"))
UID_FILES = sorted((REPO / "registers" / "st").glob("uid_*.yaml"))

#: CRC-32/ISO-HDLC, normal (MSB-first) form. This is the number the STM32 POL
#: register wants. Software writes the same polynomial reflected, as 0xEDB88320.
ISO_HDLC_POLY_NORMAL = 0x04C11DB7
ISO_HDLC_POLY_REFLECTED = 0xEDB88320


def _reg(ip: dict, name: str) -> dict:
    return next(r for r in ip["registers"] if r["name"] == name)


def _field(reg: dict, name: str) -> dict:
    return next(f for f in reg["fields"] if f["name"] == name)


def _bitrev32(v: int) -> int:
    return int(f"{v:032b}"[::-1], 2)


def test_at_least_one_crc_is_curated() -> None:
    assert CRC_FILES, "registers/st has no crc IP file"


def test_the_polynomial_reset_value_is_the_one_software_uses() -> None:
    """POL's reset value and alloy's software constant are ONE polynomial in two
    spellings. Reflecting one must give the other — anything else means the
    hardware and software checksums silently differ."""
    assert _bitrev32(ISO_HDLC_POLY_NORMAL) == ISO_HDLC_POLY_REFLECTED
    for path in CRC_FILES:
        ip = yaml.safe_load(path.read_text())
        pol = _reg(ip, "POL")
        assert int(pol["reset"], 16) == ISO_HDLC_POLY_NORMAL, (
            f"{path.name}: POL resets to {pol['reset']}, which is not "
            f"CRC-32/ISO-HDLC's polynomial in normal form"
        )


def test_the_seed_reset_value_is_all_ones() -> None:
    for path in CRC_FILES:
        ip = yaml.safe_load(path.read_text())
        assert int(_reg(ip, "INIT")["reset"], 16) == 0xFFFFFFFF, (
            f"{path.name}: INIT does not reset to the all-ones seed"
        )
        # DR reloads from INIT, so its reset value has to agree with INIT's or
        # one of the two is a transcription error.
        assert int(_reg(ip, "DR")["reset"], 16) == int(_reg(ip, "INIT")["reset"], 16), (
            f"{path.name}: DR and INIT disagree about the value a reset loads"
        )


def test_the_width_and_reversal_encodings_are_curated_not_magic_numbers() -> None:
    """Question 0 row 4: a curated field whose ENCODING is not curated is a
    magic number wearing an accessor. Both multi-bit CR fields select a MODE,
    which is the shape that invites one."""
    for path in CRC_FILES:
        ip = yaml.safe_load(path.read_text())
        cr = _reg(ip, "CR")
        assert _field(cr, "POLYSIZE").get("values") == {
            "WIDTH_32": 0, "WIDTH_16": 1, "WIDTH_8": 2, "WIDTH_7": 3,
        }, f"{path.name}: CR.POLYSIZE's encoding is not curated as named widths"
        assert _field(cr, "REV_IN").get("values") == {
            "NONE": 0, "BYTE": 1, "HALF_WORD": 2, "WORD": 3,
        }, f"{path.name}: CR.REV_IN's encoding is not curated as named granularities"


def test_the_single_bit_mode_fields_carry_no_invented_encoding() -> None:
    """The other half of row 4, and the half that over-curation gets wrong: a
    one-bit field's encoding IS its bit. `values:` on RESET or REV_OUT would be
    two spellings of one fact, and the emitter would put both in the flags enum."""
    for path in CRC_FILES:
        ip = yaml.safe_load(path.read_text())
        cr = _reg(ip, "CR")
        for name in ("RESET", "REV_OUT"):
            f = _field(cr, name)
            assert f.get("width", 1) == 1
            assert "values" not in f, (
                f"{path.name}: CR.{name} is one bit; `values:` would restate the bit"
            )


def test_the_block_has_no_final_xor_register() -> None:
    """The sixth ISO-HDLC parameter, xorout=0xFFFFFFFF, has NO home in this
    silicon. A driver must apply it to the value it reads from DR, and skipping
    it yields CRC-32/JAMCRC — a different checksum that agrees with ISO-HDLC on
    no input at all. Recorded as a test so the absence stays deliberate."""
    for path in CRC_FILES:
        ip = yaml.safe_load(path.read_text())
        names = {r["name"] for r in ip["registers"]}
        assert not (names & {"XOR", "XOROUT", "FINAL"}), (
            f"{path.name}: a final-XOR register appeared; the driver's software "
            f"xorout is now a double application"
        )


def test_uid_words_agree_with_the_registers_that_hold_them() -> None:
    assert UID_FILES, "registers/st has no uid IP file"
    for path in UID_FILES:
        ip = yaml.safe_load(path.read_text())
        regs = ip["registers"]
        assert ip["feat"]["id_words"] == len(regs), (
            f"{path.name}: feat.id_words and the register count name the same "
            f"quantity and disagree"
        )
        # Contiguous, word-aligned, ascending — a reader walks them as one value.
        for i, reg in enumerate(regs):
            assert int(reg["offset"], 16) == 4 * i, f"{path.name}: {reg['name']} is not at word {i}"
            assert reg["access"] == "ro", f"{path.name}: {reg['name']} is not read-only"
