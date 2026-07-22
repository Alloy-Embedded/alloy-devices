"""alloy-devices CLI.

Commands:
    validate    schema-validate + lint the whole database (CI gate)
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from . import __version__
from .lints import run_all
from .loader import load_database


def _repo_root() -> Path:
    return Path(__file__).resolve().parents[2]


def cmd_validate(args: argparse.Namespace) -> int:
    root = Path(args.root) if args.root else _repo_root()
    db = load_database(root)
    run_all(db)

    for issue in db.issues:
        print(issue)

    n_reg, n_chip = len(db.registers), len(db.chips)
    errors = db.errors
    warnings = [i for i in db.issues if i.kind == "warning"]
    print(
        f"\n{n_reg} IP register file(s), {n_chip} chip(s): "
        f"{len(errors)} error(s), {len(warnings)} warning(s)"
    )
    if not errors and n_reg + n_chip == 0:
        print("NOTE: database is empty — nothing was validated")
    return 1 if errors else 0


def main() -> None:
    parser = argparse.ArgumentParser(prog="alloy-devices", description=__doc__)
    parser.add_argument("--version", action="version", version=__version__)
    sub = parser.add_subparsers(dest="command", required=True)

    p_validate = sub.add_parser("validate", help="schema-validate + lint the database")
    p_validate.add_argument("--root", help="database root (default: this repo)")
    p_validate.set_defaults(func=cmd_validate)

    args = parser.parse_args()
    sys.exit(args.func(args))


if __name__ == "__main__":
    main()
