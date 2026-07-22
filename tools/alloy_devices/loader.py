"""Load and schema-validate the device database.

The loader is the single place that understands the repo layout:

    registers/<vendor>/<ip>.yaml      alloy.registers.v1
    chips/<vendor>/<part>.yaml        alloy.chip.v1

Every consumer (validator, and later the alloy codegen) goes through
``load_database`` so there is exactly one resolver for IP references.
"""

from __future__ import annotations

import json
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

import jsonschema
import yaml

SCHEMA_DIR = Path(__file__).resolve().parents[2] / "schema"


@dataclass
class Issue:
    path: Path
    message: str
    kind: str = "error"  # error | warning

    def __str__(self) -> str:
        return f"{self.kind.upper()}: {self.path}: {self.message}"


@dataclass
class Database:
    root: Path
    registers: dict[str, dict[str, Any]] = field(default_factory=dict)  # "st/usart_v4" -> doc
    chips: dict[str, dict[str, Any]] = field(default_factory=dict)      # "st/stm32g071rb" -> doc
    register_paths: dict[str, Path] = field(default_factory=dict)
    chip_paths: dict[str, Path] = field(default_factory=dict)
    issues: list[Issue] = field(default_factory=list)

    @property
    def errors(self) -> list[Issue]:
        return [i for i in self.issues if i.kind == "error"]


def _load_schema(name: str) -> dict[str, Any]:
    return json.loads((SCHEMA_DIR / name).read_text())


def _validate_schema(doc: Any, schema: dict[str, Any], path: Path, issues: list[Issue]) -> bool:
    validator = jsonschema.Draft202012Validator(schema)
    ok = True
    for err in sorted(validator.iter_errors(doc), key=lambda e: list(e.absolute_path)):
        loc = "/".join(str(p) for p in err.absolute_path) or "<root>"
        issues.append(Issue(path, f"schema: {loc}: {err.message}"))
        ok = False
    return ok


def load_database(root: Path) -> Database:
    """Load every registers/ and chips/ YAML under ``root``, schema-validating each."""
    db = Database(root=root)
    reg_schema = _load_schema("registers.schema.json")
    chip_schema = _load_schema("chip.schema.json")

    for path in sorted((root / "registers").glob("*/*.yaml")):
        doc = yaml.safe_load(path.read_text())
        if not _validate_schema(doc, reg_schema, path, db.issues):
            continue
        key = f"{doc['vendor']}/{doc['ip']}"
        expected = f"registers/{doc['vendor']}/{doc['ip']}.yaml"
        if path.relative_to(root).as_posix() != expected:
            db.issues.append(Issue(path, f"file path must match vendor/ip: expected {expected}"))
            continue
        db.registers[key] = doc
        db.register_paths[key] = path

    for path in sorted((root / "chips").glob("*/*.yaml")):
        doc = yaml.safe_load(path.read_text())
        if not _validate_schema(doc, chip_schema, path, db.issues):
            continue
        key = f"{doc['vendor']}/{path.stem}"
        db.chips[key] = doc
        db.chip_paths[key] = path

    return db
