"""The package must not report a version it is not.

`alloy-devices --version` printed 0.1.0 through the 0.2.0 and 0.3.0 releases,
because the constant was maintained by hand next to a pyproject.toml nobody
cross-checked it against. Alloy's project pin reads this database's version to
decide whether a shipped product may build against it, so a wrong number here
is not cosmetic.
"""

from __future__ import annotations

import subprocess
import sys
import tomllib
from pathlib import Path

import alloy_devices

REPO = Path(__file__).resolve().parents[1]


def declared() -> str:
    return tomllib.loads((REPO / "pyproject.toml").read_text())["project"]["version"]


def test_module_version_matches_pyproject() -> None:
    assert alloy_devices.__version__ == declared()


def test_version_is_a_release_number() -> None:
    parts = alloy_devices.__version__.split(".")
    assert len(parts) >= 2 and all(p.isdigit() for p in parts[:2])


def test_the_cli_reports_the_same_number() -> None:
    out = subprocess.run([sys.executable, "-m", "alloy_devices.cli", "--version"],
                         capture_output=True, text=True, check=False)
    assert declared() in (out.stdout + out.stderr)
