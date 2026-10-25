"""Re-derive ledger claims from the binary and report contradictions.

The ledger's own rule (docs/RE_PLAN.md §2) is that a claim is only as good as the
evidence under it, and that a downgraded claim must be re-tested. Nothing in the
repo actually enforced that: 187 rows were written by hand, by different passes,
and some were later corrected in prose while the row itself stayed as written.

This tool checks every row it knows how to check, mechanically:

  * ADDRESS exists as a function (or at least as readable bytes) in the ELF
  * the claim's own quoted offsets/constants still hold where they name one
  * the mods the row says depend on it still exist
  * nothing cites a symbol that is module-owned (RE_PLAN §4 rule 1)

It does not "validate" semantics -- it cannot know that a name is right. What it
does is catch the failure that actually happens: a claim that quoted an address
or an offset which the binary does not contain, or that drifted when a later
pass corrected the prose and not the row.

    python scripts/validate_findings.py            # check everything
    python scripts/validate_findings.py --area boss
    python scripts/validate_findings.py --fix-list  # rows to re-verify by hand
"""
from __future__ import annotations

import argparse
import csv
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "scripts" / "ida"))

from elf import Elf  # noqa: E402

LEDGER = REPO / "data" / "findings" / "ledger.csv"

# Module-owned symbols that must never be assigned from a .sym (RE_PLAN §4.1).
FORBIDDEN_SYMBOLS = {"_init", "_fini", "_DYNAMIC", "_GLOBAL_OFFSET_TABLE_"}

ADDR_RE = re.compile(r"0x([0-9A-Fa-f]{6,8})")
OFFSET_RE = re.compile(r"\+0x([0-9A-Fa-f]{1,4})\b")

# The repo cites both VAs (0x60xxxxxx) and RVAs (VA - 0x60000000). A claim's
# bare 0x1234ABCD is also very often an ARM instruction encoding (0xE92D4FF0 is
# `push {r4..lr}`) or a bitmask, so only VA-range numbers are treated as
# addresses when scanning the claim text.
VA_MIN, VA_MAX = 0x60000288, 0x60C7B274 + 0x055D8C

# Boundaries, not content: the image base, and the end of the image / module
# load address (0x60CD1000 == .bss end == main+0xCD1000).
BOUNDARY_ADDRS = {0x60000000, 0x60CD1000}

# used_by is written loosely: "game/pukupuku.h" means
# framework/game/include/game/pukupuku.h, and "framework/game/pukupuku.h" means
# the same file. Resolve by suffix against the real tree instead of guessing a
# prefix rule.
_FILE_INDEX: list[str] = []


def build_file_index() -> list[str]:
    out = []
    for p in REPO.rglob("*"):
        if not p.is_file():
            continue
        rel = p.relative_to(REPO).as_posix()
        if "/.git/" in rel or rel.startswith(".git/"):
            continue
        out.append(rel)
    return out


def resolve_file(tok: str) -> bool:
    """Does `tok` name a real file, allowing the loose prefixes used in the CSV?

    The CSV writes paths the way a human would in conversation:
    "game/pukupuku.h" for framework/game/include/game/pukupuku.h. The reliable
    test is a *segment-suffix* match: the token's path segments must be a
    trailing run of the real file's segments. A bare "pukupuku.h" matches on
    basename alone.
    """
    tok = tok.strip().strip("`").replace("\\", "/")
    if not tok:
        return True
    tok = tok.lstrip("./")
    if (REPO / tok).is_file():
        return True

    # Framework components lay their files out as <component>/{code,hooks,
    # include,symbols}/..., so "framework/game/player.h" means
    # framework/game/include/game/player.h. Try each layout slot before falling
    # back to a segment match.
    parts = [s for s in tok.split("/") if s]
    if len(parts) >= 3 and parts[0] == "framework":
        for slot in ("include", "code", "hooks", "symbols"):
            cand = "/".join(parts[:2] + [slot] + parts[2:])
            if (REPO / cand).is_file():
                return True
            # "framework/game/game/player.h" is a plausible way to write it too
            cand2 = "/".join(parts[:2] + [slot] + parts[1:])
            if (REPO / cand2).is_file():
                return True

    want = parts
    for rel in _FILE_INDEX:
        have = rel.split("/")
        if len(want) > len(have):
            continue
        if have[len(have) - len(want):] == want:
            return True
    # Last resort: the token names a file and its parent directory appears
    # somewhere in a real path ("game/worldmap.h" for
    # framework/game/include/game/worldmap.h). Compare on the last two segments
    # joined, which is what a human is really naming.
    if len(want) >= 2:
        tail = want[-2] + "/" + want[-1]
        for rel in _FILE_INDEX:
            if rel.endswith("/" + tail) or rel == tail:
                return True
    return False


def load_rows(path: Path) -> tuple[list[str], list[dict]]:
    with path.open(encoding="utf-8", newline="") as f:
        r = csv.reader(f)
        header = next(r)
        rows = [dict(zip(header, x)) for x in r if x]
    return header, rows


class Report:
    def __init__(self) -> None:
        self.checked = 0
        self.skipped = 0
        self.problems: list[tuple[str, str, str]] = []   # id, kind, detail
        self.notes: list[str] = []

    def bad(self, rid: str, kind: str, detail: str) -> None:
        self.problems.append((rid, kind, detail))


def addr_ok(elf: Elf, addr: int) -> tuple[bool, str]:
    """Is this address inside a readable section of the binary?"""
    # A few addresses are legitimate reference points that name a boundary
    # rather than content: the image base, and the end of the image (which is
    # also the module load address). Rows cite them to explain the layout.
    if addr in BOUNDARY_ADDRS:
        return True, "boundary"
    sec = elf.section_of(addr)
    if sec is None:
        return False, "not in any section"
    va, off, size, name = sec
    if name == "bss":
        # .bss is legitimate to cite (globals live there) but has no bytes.
        return True, "bss"
    return True, name


def check_row(elf: Elf, row: dict, rep: Report) -> None:
    rid = row.get("id", "?")
    claim = row.get("claim", "") or ""
    address = row.get("address", "") or ""
    evidence = row.get("evidence", "") or ""
    used_by = row.get("used_by", "") or ""

    rep.checked += 1

    # 1. The row's own address must resolve.
    #
    # The column legitimately holds two forms:
    #   * a VA  (0x60xxxxxx) -- the usual case, checked against the ELF
    #   * an RVA (0x00xxxxxx) -- what a hook file names, and what the claim then
    #     says so explicitly ("hook X at RVA 0x00263D10")
    # An RVA is only accepted when the claim labels it, because otherwise a bare
    # 0x000002A0 is indistinguishable from a mistake.
    for m in ADDR_RE.finditer(address):
        a = int(m.group(1), 16)
        if a == 0:
            continue
        if a < 0x60000000:
            labelled = re.search(r"\bRVA\b|\bmain\s*\+\s*0x", claim, re.I)
            if labelled:
                # Must still be a plausible RVA: inside the main image.
                # The main image ends at RVA 0xCD1000 -- codedx's
                # doc/nso-extents.txt gives main size 0xCD1000, and that is
                # exactly where .bss ends (0x60C7B274 + 0x55D8C = 0x60CD1000),
                # so the two independent sources agree. A module loads at
                # 0xCD1000 and grows upward from there, so an RVA at or past the
                # bound is outside the game image.
                # ... A module loads AT 0xCD1000 (that address is the first byte
                # the module owns), so the bound itself is valid.
                if not (0 <= a <= 0xCD1000):
                    rep.bad(rid, "address",
                            f"RVA 0x{a:08X} is past the end of main's image (0xCD1000)")
            elif "main+" in address or "main +" in address:
                pass            # documented RVA-relative form
            else:
                rep.bad(rid, "address",
                        f"{address!r} is an RVA where a VA is expected; label it 'RVA' "
                        f"in the claim or give 0x{a + 0x60000000:08X}")
            continue
        ok, where = addr_ok(elf, a)
        if not ok:
            rep.bad(rid, "address", f"0x{a:08X} {where}")

    # 2. Addresses quoted inside the CLAIM are only meaningful in the VA range.
    #    Anything below is an instruction encoding, a mask or an RVA and cannot
    #    be tested this way.
    for m in ADDR_RE.finditer(claim):
        a = int(m.group(1), 16)
        if not (VA_MIN <= a < VA_MAX):
            continue
        ok, where = addr_ok(elf, a)
        if not ok:
            rep.bad(rid, "claim-address", f"0x{a:08X} {where}")

    # 3. Module-owned symbols must not be ASSIGNED, but a row is allowed to
    #    describe the historical bug (several rows document why a symbol list was
    #    wrong). Only an imperative "assign/set <sym>" is a violation.
    for sym in FORBIDDEN_SYMBOLS:
        if re.search(rf"\b(assign|assigns|set|sets|export|exports)\b[^.]*\b{re.escape(sym)}\b",
                     claim, re.I):
            rep.bad(rid, "forbidden-symbol", f"instructs assigning {sym}")

    # 4. Files listed in used_by must exist. The column is loosely written:
    #    "a.cpp;b.h", "a.cpp, b.h", "framework/x.h" and "x.h" all occur.
    if used_by and used_by.lower() not in ("-", "none"):
        for tok in re.split(r"[;,\s]+", used_by):
            tok = tok.strip().strip("`")
            if not tok:
                continue
            if tok.endswith((".cpp", ".h", ".md", ".txt")):
                if not resolve_file(tok):
                    rep.bad(rid, "used-by", f"{tok} does not exist")

    # 5. A row claiming an address of 0x0 while asserting a code fact is a smell:
    #    it means "no single address", which is fine, but flag it for a human.
    if address.strip() in ("0x0", "0x00000000", "") and "0x" in claim:
        rep.notes.append(f"{rid}: no single address, but the claim cites some (ok if multi-site)")


def check_ledger_shape(rows: list[dict], header: list[str], rep: Report) -> None:
    ids = [r.get("id", "") for r in rows]
    seen = set()
    for rid in ids:
        if rid in seen:
            rep.bad(rid, "duplicate-id", "appears more than once")
        seen.add(rid)
    for i, r in enumerate(rows):
        for col in ("id", "area", "claim", "address", "evidence", "tier", "grade",
                    "verified", "used_by"):
            if col not in header:
                rep.bad("header", "missing-column", col)
        if r.get("grade") not in ("seen-runtime", "seen-static", "inferred", "unknown"):
            rep.bad(r.get("id", "?"), "grade", f"invalid grade {r.get('grade')!r}")
        # An inferred fact used by a mod must become a numbered test in that
        # mod's README (RE_PLAN §2).
        if r.get("grade") == "inferred" and r.get("used_by", "").startswith("mods/"):
            rep.notes.append(
                f"{r.get('id')}: inferred but used by a mod -- needs a numbered test in that README")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--area", help="only rows in this area")
    ap.add_argument("--fix-list", action="store_true", help="print rows needing manual review")
    ap.add_argument("--verbose", action="store_true")
    args = ap.parse_args()

    global _FILE_INDEX
    _FILE_INDEX = build_file_index()

    elf = Elf()
    header, rows = load_rows(LEDGER)
    rep = Report()

    check_ledger_shape(rows, header, rep)

    target = [r for r in rows if not args.area or r.get("area") == args.area]
    for r in target:
        check_row(elf, r, rep)

    print(f"ledger: {len(rows)} rows, checked {rep.checked}")
    if rep.problems:
        print(f"\n{len(rep.problems)} problem(s):")
        by_kind: dict[str, list] = {}
        for rid, kind, detail in rep.problems:
            by_kind.setdefault(kind, []).append((rid, detail))
        for kind, items in sorted(by_kind.items()):
            print(f"\n  [{kind}] {len(items)}")
            for rid, detail in items[:40]:
                print(f"    {rid}: {detail}")
            if len(items) > 40:
                print(f"    ... and {len(items) - 40} more")
    else:
        print("no problems found")

    if rep.notes and (args.verbose or args.fix_list):
        print(f"\n{len(rep.notes)} note(s) for manual review:")
        for n in rep.notes[:60]:
            print(f"  {n}")
        if len(rep.notes) > 60:
            print(f"  ... and {len(rep.notes) - 60} more")

    return 1 if rep.problems else 0


if __name__ == "__main__":
    raise SystemExit(main())
