"""alloy-devices: device database validation and (later) build pipeline."""

from __future__ import annotations


def _version() -> str:
    """The release number, from the one place that decides it.

    Kept by hand this said 0.1.0 while pyproject.toml said 0.3.0 — so
    `alloy-devices --version` reported a release that had not existed for two
    tags, and anything downstream that trusted it was wrong by the same amount.
    Installed metadata answers first (it is what a wheel really is); a checkout
    falls back to reading pyproject.toml, which is what the release workflow
    asserts the tag against.
    """
    try:
        from importlib.metadata import PackageNotFoundError, version  # noqa: PLC0415

        return version("alloy-devices")
    except (ImportError, PackageNotFoundError):
        pass
    try:
        import tomllib  # noqa: PLC0415
        from pathlib import Path  # noqa: PLC0415

        pyproject = Path(__file__).resolve().parents[2] / "pyproject.toml"
        return tomllib.loads(pyproject.read_text())["project"]["version"]
    except (OSError, KeyError, ValueError):
        return "0+unknown"


__version__ = _version()
