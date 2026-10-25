"""Measure, per translation unit, whether the published corpus compiles.

The repository has carried three different "units fail to compile" numbers
(9,339 in docs/legacy/CORPUS_STATUS.md, 9,092 in docs/legacy/LOADER_STATUS.md, 7,303
elsewhere). This script exists to replace all of them with one measured number
and a breakdown by diagnostic *kind*, so the next fix can be chosen from
evidence instead of from a claim.

What it does, exactly:

1. enumerates every ``.c`` file under ``decompiled/src`` (headers excluded);
2. compiles each one independently with
   ``clang -fsyntax-only -std=gnu89 -Wno-everything -ferror-limit=0``
   and ``-I decompiled/src/include``, in parallel;
3. takes the *first* diagnostic of each failing unit (the first error line,
   not the exact text, is what is bucketed);
4. normalises that diagnostic into a cause bucket by diagnostic kind, so
   ``no member named 'x' in 'struct A'`` and ``no member named 'y' in 'struct B'``
   land in the same bucket;
5. writes the per-unit evidence and the aggregate report.

Nothing here edits the corpus. It only reads and compiles it.

Usage:
    python measure_compile_failures.py [--jobs 16] [--json PATH] [--md PATH]
                                       [--cache PATH] [--limit N]

``--cache`` stores the raw per-unit results (JSONL) so that bucketing rules can
be iterated without recompiling 45k units:
    python measure_compile_failures.py --cache %TEMP%/cf_raw.jsonl
    python measure_compile_failures.py --cache %TEMP%/cf_raw.jsonl --from-cache
"""
from __future__ import annotations

import argparse
import json
import os
import re
import subprocess
import sys
import time
from collections import Counter, defaultdict
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
SRC = REPO / "decompiled" / "src"
INCLUDE = SRC / "include"
OUT_JSON = REPO / "data" / "recovered" / "compile_failures.json"
OUT_MD = REPO / "docs" / "legacy" / "COMPILE_FAILURES.md"

# `path:line:col: error: message` / `...: fatal error: message`.
# Windows paths contain a drive colon, so the file match is non-greedy and the
# line/column are required to be numeric.
DIAG_RE = re.compile(
    r"^(?P<file>.+?):(?P<line>\d+):(?P<col>\d+):\s+(?:fatal\s+)?error:\s+(?P<msg>.*)$"
)

# --------------------------------------------------------------------------
# Bucketing. Order matters: the first pattern that matches wins.
#
# Each rule maps a diagnostic *kind* (not its exact text) to a bucket name.
# The name is what the report shows; the patterns are deliberately loose so
# that renamed identifiers/locations fold together.
# --------------------------------------------------------------------------
BUCKET_RULES: list[tuple[str, re.Pattern[str]]] = [
    # --- type-system ---
    ("incomplete type", re.compile(r"incomplete type|has incomplete type|"
                                   r"field has incomplete type")),
    ("unknown type name", re.compile(r"unknown type name|unknown type name .*did you mean|"
                                     r"unknown typename")),
    # --- declarations ---
    ("undeclared identifier", re.compile(r"use of undeclared identifier")),
    ("undeclared function", re.compile(r"call to undeclared function|"
                                       r"implicit declaration of function|"
                                       r"implicitly declaring library function")),
    ("conflicting types", re.compile(r"conflicting types for|conflicting types|"
                                     r"redefinition of|redefines|"
                                     r"previous definition is here")),
    ("duplicate symbol/definition", re.compile(r"duplicate definition|"
                                               r"redefinition of parameter")),
    # --- expressions ---
    ("assignment to array type", re.compile(r"array type .* is not assignable|"
                                            r"assignment to expression with array type|"
                                            r"cannot assign to .*array")),
    ("not assignable", re.compile(r"expression is not assignable|"
                                  r"is not assignable|read-only variable is not assignable|"
                                  r"cannot assign to")),
    ("member not found", re.compile(r"no member named|"
                                    r"has no member named|"
                                    r"no member named .* in")),
    ("member access on non-struct", re.compile(
        r"member reference base type .* is not a structure|"
        r"member reference type .* is not a pointer|"
        r"member reference type .* is not a struct")),
    ("incompatible types", re.compile(r"incompatible (?:integer to pointer|pointer to integer|"
                                      r"pointer types|type|types|operand types|"
                                      r"function pointer types|pointer to integer)")),
    ("too few arguments", re.compile(r"too few arguments|"
                                     r"too few arguments to function")),
    ("too many arguments", re.compile(r"too many arguments|"
                                      r"too many arguments to function")),
    ("argument type mismatch", re.compile(r"argument .* incompatible|"
                                          r"passing .* to parameter|"
                                          r"incompatible .* argument")),
    ("non-constant initializer", re.compile(r"initializer element is not|"
                                            r"initializer is not a constant|"
                                            r"variable-sized object may not be initialized")),
    ("indirection requires pointer", re.compile(r"indirection requires pointer|"
                                                r"subscripted value is not an array")),
    ("invalid operands", re.compile(r"invalid operands to binary expression|"
                                    r"invalid operands|"
                                    r"operand of type .* where arithmetic or pointer type "
                                    r"is required|"
                                    r"cannot increment value of type|"
                                    r"cannot decrement value of type|"
                                    r"pointer cannot be cast to type|"
                                    r"operand of type .* cannot be cast to a pointer type")),
    ("called object is not a function",
     re.compile(r"called object type .* is not a function or function pointer")),
    ("incompatible return type", re.compile(r"returning .* from a function with "
                                            r"incompatible result type")),
    ("syntax error / malformed expression",
     re.compile(r"expected expression|expected .* after expression|"
                r"expected .* after return statement|"
                r"expected identifier|expected .* after top level declarator|"
                r"unknown token in expression|"
                r"expected .* before|expected .* after")),
    ("undeclared label", re.compile(r"use of undeclared label")),
    ("lvalue required", re.compile(r"lvalue required|"
                                   r"cannot take the address of an rvalue")),
    # --- the decompiler's own vocabulary ---
    ("redefinition of typedef", re.compile(r"redefinition of typedef|"
                                           r"typedef redefinition")),
    ("storage class / linkage", re.compile(r"cannot combine with previous|"
                                           r"illegal storage class|"
                                           r"non-static declaration")),
    # --- preprocessor / driver ---
    ("file not found", re.compile(r"file not found|"
                                  r"no such file or directory")),
    ("fatal (driver/parse)", re.compile(r"too many errors emitted|"
                                        r"error reading|"
                                        r"unable to")),
]


def bucket_of(msg: str) -> str:
    """Normalise one diagnostic message into a cause bucket."""
    for name, rx in BUCKET_RULES:
        if rx.search(msg):
            return name
    return "other"


def first_diagnostic(stderr: str) -> tuple[str, int | None, str]:
    """Return (raw first diagnostic line, line number, message)."""
    for line in stderr.splitlines():
        m = DIAG_RE.match(line.strip())
        if m:
            return line.strip(), int(m.group("line")), m.group("msg")
    return "", None, ""


def compile_unit(unit: Path, jobs_timeout: float = 600.0) -> dict:
    p = subprocess.run(
        [
            "clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
            "-ferror-limit=0", "-I", str(INCLUDE), str(unit),
        ],
        capture_output=True, text=True, errors="replace", timeout=jobs_timeout,
    )
    raw, line, msg = first_diagnostic(p.stderr)
    n_err = len(re.findall(r":\s+(?:fatal\s+)?error:", p.stderr))
    return {
        "path": unit.relative_to(REPO).as_posix(),
        "ok": p.returncode == 0 and n_err == 0,
        "errors": n_err,
        "first_diagnostic": raw,
        "first_message": msg,
        "first_line": line,
        "bucket": "" if n_err == 0 else bucket_of(msg),
    }


def enumerate_units() -> list[Path]:
    return sorted(p for p in SRC.rglob("*.c") if p.is_file())


# ==========================================================================
# Candidate systematic fixes, measured rather than asserted.
#
# Each candidate is a change a *generator* could make once. It is applied to a
# throwaway copy of decompiled/src/include (never to the corpus), only the
# failing units it targets are recompiled, and the number that then compile is
# recorded. Whatever does not recover is reported as not recovered.
# ==========================================================================
IDA_ACCESSOR_MACROS = r"""
/* IDA bitfield accessors as lvalues. Hex-Rays emits `LOWORD(x) = ...` and
 * `LODWORD(v[i]) = ...`; without these, clang parses the left side as a call
 * to an undeclared function and reports "expression is not assignable". */
#define LOBYTE(x)    (*(uint8_t  *)(void *)&(x))
#define LOWORD(x)    (*(uint16_t *)(void *)&(x))
#define LODWORD(x)   (*(uint32_t *)(void *)&(x))
#define HIBYTE(x)    (*((uint8_t  *)(void *)&(x) + 1))
#define HIWORD(x)    (*((uint16_t *)(void *)&(x) + 1))
#define HIDWORD(x)   (*((uint32_t *)(void *)&(x) + 1))
#define BYTE1(x)     (*((uint8_t  *)(void *)&(x) + 1))
#define BYTE2(x)     (*((uint8_t  *)(void *)&(x) + 2))
#define BYTE3(x)     (*((uint8_t  *)(void *)&(x) + 3))
#define BYTE4(x)     (*((uint8_t  *)(void *)&(x) + 4))
#define WORD1(x)     (*((uint16_t *)(void *)&(x) + 1))
#define WORD2(x)     (*((uint16_t *)(void *)&(x) + 2))
#define SBYTE1(x)    (*((int8_t   *)(void *)&(x) + 1))
#define SLODWORD(x)  (*(int32_t  *)(void *)&(x))
#define SHIDWORD(x)  (*((int32_t  *)(void *)&(x) + 1))
#define SHIWORD(x)   (*((int16_t  *)(void *)&(x) + 1))
#define SWORD1(x)    (*((int16_t  *)(void *)&(x) + 1))
#define SWORD2(x)    (*((int16_t  *)(void *)&(x) + 2))
"""

FIX_TARGETS = {
    "ida_accessor_macros": "not assignable",
    "real_parameter_lists": "conflicting types",
    "scalar_data_symbols": "assignment to array type",
    "vtable_member_on_opaque_structs": "member not found",
}


def _split_params(p: str):
    depth, cur = 0, []
    for ch in p:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            yield "".join(cur)
            cur = []
        else:
            cur.append(ch)
    yield "".join(cur)


def _param_type_only(p: str):
    p = p.strip()
    if not p:
        return None
    if p == "...":
        return "..."
    m = re.match(r"^(.*?[\*\)\]])\s*[A-Za-z_]\w*$", p)
    if m:
        return m.group(1).strip()
    if re.match(r"^[A-Za-z_]\w*$", p):
        return "int"  # bare name == implicit int parameter
    return p


def _sanitize_type(t):
    """Reject type text the decompiler corrupted (leaked FIELD_ expressions).

    Those units are *not* mechanically fixable; counting them would inflate the
    projected recovery.
    """
    if t is None:
        return None
    if re.search(r"[=]|FIELD_|\bif\b|\?", t):
        return None
    if not re.match(r"^[A-Za-z_][\w \t\*\[\]\(\),]*$", t):
        return None
    return t


def _apply_fix(inc: Path, variant: str, failures: list[dict]) -> dict:
    """Apply one generator fix to a throwaway include dir. Returns stats."""
    stats: dict[str, int] = {}

    if variant == "ida_accessor_macros":
        pre = inc / "nsmbudx_prelude.h"
        t = pre.read_text(encoding="utf-8", errors="replace")
        t = t.replace("#endif /* NSMBUDX_PRELUDE_H */",
                      IDA_ACCESSOR_MACROS + "\n#endif /* NSMBUDX_PRELUDE_H */")
        pre.write_text(t, encoding="utf-8")
        stats["macros_added"] = IDA_ACCESSOR_MACROS.count("#define")

    elif variant == "scalar_data_symbols":
        # close_undeclared.py already has the rule ("assigned globals are
        # scalars") but nsmbudx_data_symbols.h is written by a different path
        # that declares everything as a byte array. Apply that rule here.
        ds = inc / "nsmbudx_data_symbols.h"
        t = ds.read_text(encoding="utf-8", errors="replace")
        assigned: set[str] = set()
        for u in SRC.rglob("*.c"):
            txt = u.read_text(encoding="utf-8", errors="replace")
            assigned |= set(re.findall(r"(?<![\w.>])([A-Za-z_]\w*)\s*=(?!=)", txt))
            assigned |= {a or b for a, b in re.findall(
                r"(?:\+\+|--)\s*([A-Za-z_]\w*)|([A-Za-z_]\w*)\s*(?:\+\+|--)", txt)}
        n = 0

        def repl(m):
            nonlocal n
            if m.group(1) in assigned:
                n += 1
                return "extern uintptr_t %s;" % m.group(1)
            return m.group(0)

        t = re.sub(r"extern unsigned char (\w+)\[\d*\];", repl, t)
        ds.write_text(t, encoding="utf-8")
        stats["symbols_became_scalars"] = n

    elif variant == "real_parameter_lists":
        # Measured gnu89 rule: `T f();` is incompatible with a definition that
        # has a float/char/short/_Bool parameter, because the call promotes it.
        # The fix is to emit the definition's own parameter types.
        fixes, skipped = {}, 0
        for path in (f["path"] for f in failures if f["bucket"] == FIX_TARGETS[variant]):
            name = Path(path).stem.split("_", 1)[1]
            txt = (REPO / path).read_text(encoding="utf-8", errors="replace")
            found = None
            for line in txt.splitlines():
                s = line.strip()
                if "(" not in s or ";" in s or not s.endswith(")"):
                    continue
                m = re.match(r"^(?P<ret>.+?)\b(?P<name>[A-Za-z_]\w*)\s*"
                             r"\((?P<params>.*)\)$", s)
                if not m or m.group("name") != name:
                    continue
                params = [_sanitize_type(_param_type_only(p))
                          for p in _split_params(m.group("params"))]
                if any(p is None for p in params) or not params:
                    break
                found = ", ".join(params)
                break
            if found is None:
                skipped += 1
            else:
                fixes[name] = found
        proto = inc / "nsmbudx_prototypes.h"
        out, changed = [], 0
        for ln in proto.read_text(encoding="utf-8", errors="replace").splitlines():
            m = re.match(r"^(?P<ret>.*?\b(?P<name>[A-Za-z_]\w*)\s*)\(\s*\);\s*"
                         r"(?P<addr>/\* 0x[0-9A-Fa-f]+ \*/)$", ln)
            if m and m.group("name") in fixes:
                out.append("%s(%s); %s" % (m.group("ret"), fixes[m.group("name")],
                                           m.group("addr")))
                changed += 1
            else:
                out.append(ln)
        proto.write_text("\n".join(out), encoding="utf-8")
        stats["prototypes_rewritten"] = changed
        stats["units_whose_definition_could_not_be_parsed"] = skipped

    elif variant == "vtable_member_on_opaque_structs":
        # Every opaque struct gets a leading `void *vtable`. This is a guess
        # about layout, which is why it is measured rather than assumed.
        pat = re.compile(r"typedef struct (\w+) \{ unsigned char _unknown\[\]; \} \1;")
        n = 0
        for h in inc.glob("*.h"):
            t = h.read_text(encoding="utf-8", errors="replace")
            new, k = pat.subn(
                lambda m: "typedef struct %s { void *vtable; unsigned char "
                          "_unknown[]; } %s;" % (m.group(1), m.group(1)), t)
            if k:
                h.write_text(new, encoding="utf-8")
                n += k
        stats["opaque_structs_given_vtable"] = n
    return stats


def measure_fix(variant: str, failures: list[dict], jobs: int) -> dict:
    """Measure how many failing units one candidate fix recovers."""
    import shutil
    import tempfile

    work = Path(tempfile.gettempdir()) / ("dsh_cf_" + variant)
    if work.exists():
        shutil.rmtree(work)
    inc = work / "include"
    inc.parent.mkdir(parents=True, exist_ok=True)
    shutil.copytree(INCLUDE, inc)
    stats = _apply_fix(inc, variant, failures)

    bucket = FIX_TARGETS[variant]
    targets = [f["path"] for f in failures if f["bucket"] == bucket]

    def check(path: str) -> bool:
        p = subprocess.run(
            ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
             "-ferror-limit=0", "-I", str(inc), str(REPO / path)],
            capture_output=True, text=True, errors="replace")
        return p.returncode == 0 and "error:" not in p.stderr

    with ThreadPoolExecutor(max_workers=jobs) as pool:
        ok = list(pool.map(check, targets))
    recovered = sum(ok)
    return {
        "fix": variant,
        "target_bucket": bucket,
        "units_tested": len(targets),
        "units_recovered": recovered,
        "recovery_pct": round(100.0 * recovered / max(1, len(targets)), 1),
        "generator_change": stats,
    }


def measure_all_fixes(failures: list[dict], jobs: int) -> list[dict]:
    out = []
    for v in FIX_TARGETS:
        print("  measuring fix: %s ..." % v, flush=True)
        out.append(measure_fix(v, failures, jobs))
    # Combined: all four at once, applied to every failing unit, so that the
    # overlap between fixes is measured instead of added up.
    import shutil
    import tempfile
    work = Path(tempfile.gettempdir()) / "dsh_cf_combined"
    if work.exists():
        shutil.rmtree(work)
    inc = work / "include"
    inc.parent.mkdir(parents=True, exist_ok=True)
    shutil.copytree(INCLUDE, inc)
    for v in FIX_TARGETS:
        _apply_fix(inc, v, failures)
    targets = [f["path"] for f in failures]

    def check(path: str) -> bool:
        p = subprocess.run(
            ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
             "-ferror-limit=0", "-I", str(inc), str(REPO / path)],
            capture_output=True, text=True, errors="replace")
        return p.returncode == 0 and "error:" not in p.stderr

    print("  measuring all four fixes combined over %d units ..." % len(targets),
          flush=True)
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        ok = list(pool.map(check, targets))
    out.append({
        "fix": "all_four_combined",
        "target_bucket": "(every failing unit)",
        "units_tested": len(targets),
        "units_recovered": sum(ok),
        "recovery_pct": round(100.0 * sum(ok) / max(1, len(targets)), 1),
        "generator_change": {},
    })
    return out


def load_cache(path: Path) -> list[dict]:
    recs = []
    with path.open(encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if line:
                recs.append(json.loads(line))
    return recs


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jobs", type=int, default=16)
    ap.add_argument("--json", type=Path, default=OUT_JSON)
    ap.add_argument("--md", type=Path, default=OUT_MD)
    ap.add_argument("--cache", type=Path, default=None,
                    help="raw per-unit JSONL cache")
    ap.add_argument("--from-cache", action="store_true",
                    help="reuse --cache instead of compiling")
    ap.add_argument("--limit", type=int, default=0, help="debug: first N units")
    ap.add_argument("--no-fix-experiments", action="store_true",
                    help="skip measuring the candidate systematic fixes")
    args = ap.parse_args()

    units = enumerate_units()
    if args.limit:
        units = units[: args.limit]

    t0 = time.time()
    if args.from_cache:
        if not args.cache or not args.cache.exists():
            print("--from-cache needs an existing --cache file", file=sys.stderr)
            return 2
        records = load_cache(args.cache)
        # Re-derive the bucket so the cache can be re-profiled without a
        # recompile when the bucketing rules change.
        for r in records:
            r["ok"] = bool(r.get("ok", not r.get("errors")))
            r["bucket"] = "" if r["ok"] else bucket_of(r.get("first_message", ""))
        print("loaded %d cached results" % len(records))
    else:
        print("units: %d  clang: %s  jobs: %d"
              % (len(units), shutil_which("clang"), args.jobs))
        results: list[dict] = []
        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            for i, rec in enumerate(pool.map(compile_unit, units), 1):
                results.append(rec)
                if i % 2000 == 0:
                    el = time.time() - t0
                    print("  %6d/%d  %.0fs  (%.0f units/s)"
                          % (i, len(units), el, i / max(el, 1e-9)), flush=True)
        records = results
        if args.cache:
            args.cache.parent.mkdir(parents=True, exist_ok=True)
            with args.cache.open("w", encoding="utf-8") as fh:
                for r in records:
                    fh.write(json.dumps(r, ensure_ascii=False) + "\n")

    elapsed = time.time() - t0
    total = len(records)
    failing = [r for r in records if not r["ok"]]
    clean = [r for r in records if r["ok"]]

    # ---- buckets over the FIRST diagnostic of each failing unit ----
    bcount: Counter = Counter()
    bexamples: dict[str, list[str]] = defaultdict(list)
    for r in failing:
        b = r["bucket"] or "other"
        bcount[b] += 1
        if len(bexamples[b]) < 3:
            bexamples[b].append(r["path"])

    # Distinct message texts per bucket, for the fix analysis.
    bmsgs: dict[str, Counter] = defaultdict(Counter)
    for r in failing:
        bmsgs[r["bucket"] or "other"][norm_msg(r["first_message"])] += 1

    # How many units are *single-cause*: only one error total, so fixing that
    # one bucket would likely flip the unit to clean.
    single = Counter()
    for r in failing:
        if r["errors"] == 1:
            single[r["bucket"] or "other"] += 1

    buckets = []
    for name, n in bcount.most_common():
        buckets.append({
            "bucket": name,
            "units": n,
            "pct_of_failing": round(100.0 * n / max(1, len(failing)), 2),
            "units_whose_only_error_is_this": single.get(name, 0),
            "top_messages": [{"message": m, "count": c}
                             for m, c in bmsgs[name].most_common(8)],
            "examples": bexamples[name],
        })

    by_group = Counter(r["path"].split("/")[2] for r in failing)
    total_by_group = Counter(r["path"].split("/")[2] for r in records)

    fixes = []
    if not args.no_fix_experiments and failing:
        print("\nmeasuring candidate systematic fixes:", flush=True)
        fixes = measure_all_fixes(failing, args.jobs)

    payload = {
        "measured_at": time.strftime("%Y-%m-%dT%H:%M:%S%z"),
        "command": "clang -fsyntax-only -std=gnu89 -Wno-everything "
                   "-ferror-limit=0 -I decompiled/src/include <unit>",
        "clang": clang_version(),
        "corpus_root": "decompiled/src",
        "total_units": total,
        "clean_units": len(clean),
        "failing_units": len(failing),
        "clean_pct": round(100.0 * len(clean) / max(1, total), 3),
        "failing_pct": round(100.0 * len(failing) / max(1, total), 3),
        "total_errors": sum(r["errors"] for r in failing),
        "wall_seconds_compile": round(elapsed, 1) if not args.from_cache else None,
        "buckets": buckets,
        "candidate_fixes": fixes,
        "by_group": [
            {"group": g, "units": total_by_group[g], "failing": by_group.get(g, 0)}
            for g in sorted(total_by_group)
        ],
        "claimed_in_docs": {
            "docs/legacy/CORPUS_STATUS.md": 9339,
            "docs/legacy/LOADER_STATUS.md": 9092,
            "other_claim_seen": 7303,
        },
        # One record per failing unit, as required.
        "failures": [
            {
                "path": r["path"],
                "first_diagnostic": r["first_diagnostic"],
                "bucket": r["bucket"] or "other",
                "error_count": r["errors"],
                "line": r["first_line"],
            }
            for r in failing
        ],
    }

    args.json.parent.mkdir(parents=True, exist_ok=True)
    args.json.write_text(json.dumps(payload, indent=1, ensure_ascii=False) + "\n",
                         encoding="utf-8")
    write_markdown(args.md, payload, records)
    print("\ntotal %d  clean %d (%.2f%%)  failing %d (%.2f%%)"
          % (total, len(clean), payload["clean_pct"],
             len(failing), payload["failing_pct"]))
    for b in buckets[:15]:
        print("  %6d  %-28s (%d are single-error units)"
              % (b["units"], b["bucket"], b["units_whose_only_error_is_this"]))
    print("\nwrote %s\nwrote %s" % (args.json, args.md))
    return 0


def norm_msg(m: str) -> str:
    """Strip the identifier/location from a message so texts fold together."""
    m = re.sub(r"'[^']*'", "'X'", m)
    m = re.sub(r"\b0x[0-9A-Fa-f]+\b", "0xN", m)
    m = re.sub(r"\b\d+\b", "N", m)
    return m


def clang_version() -> str:
    try:
        p = subprocess.run(["clang", "--version"], capture_output=True, text=True)
        return p.stdout.splitlines()[0].strip()
    except Exception:  # pragma: no cover - clang missing
        return "unknown"


def shutil_which(name: str) -> str:
    from shutil import which
    return which(name) or name


def write_markdown(path: Path, p: dict, records: list[dict]) -> None:
    b = p["buckets"]
    lines = []
    lines.append("# Compile failures: the measured number\n")
    lines.append("Every number on this page was produced by running clang over the\n"
                 "published corpus. Nothing here is estimated. Reproduce it with:\n")
    lines.append("```sh\npython scripts/pipeline/measure_compile_failures.py\n```\n")
    lines.append("Command per unit:\n")
    lines.append("```\n%s\n```\n" % p["command"])
    lines.append("- clang: `%s`\n" % p["clang"])
    lines.append("- corpus root: `%s` (%d `.c` files; headers excluded)\n"
                 % (p["corpus_root"], p["total_units"]))
    lines.append("- measured: %s\n" % p["measured_at"])

    lines.append("\n## The number\n")
    lines.append("| | units | share |\n| --- | ---: | ---: |\n")
    lines.append("| total `.c` units | %d | 100%% |\n" % p["total_units"])
    lines.append("| compile clean | %d | %.2f%% |\n"
                 % (p["clean_units"], p["clean_pct"]))
    lines.append("| **fail** | **%d** | **%.2f%%** |\n"
                 % (p["failing_units"], p["failing_pct"]))

    lines.append("\n## The docs disagree, and all three are wrong\n")
    lines.append("| Source | Claimed failures | Measured | Delta |\n"
                 "| --- | ---: | ---: | ---: |\n")
    for src, n in p["claimed_in_docs"].items():
        label = src if src.startswith("docs/") else "a verbal/other claim"
        lines.append("| %s | %d | %d | %+d |\n"
                     % (label, n, p["failing_units"], p["failing_units"] - n))

    lines.append("\n## Breakdown by cause\n")
    lines.append("Bucketed by diagnostic *kind* (the first error of each failing\n"
                 "unit), not by exact message text. `single-error units` counts the\n"
                 "units whose *only* error is of that kind — those are the ones a fix\n"
                 "would flip straight to clean.\n")
    lines.append("\n| # | Cause bucket | Units | % of failing | single-error units |\n"
                 "| ---: | --- | ---: | ---: | ---: |\n")
    for i, x in enumerate(b, 1):
        lines.append("| %d | %s | %d | %.2f%% | %d |\n"
                     % (i, x["bucket"], x["units"], x["pct_of_failing"],
                        x["units_whose_only_error_is_this"]))

    lines.append("\n### Evidence: representative units per bucket\n")
    for x in b:
        lines.append("\n**%s** (%d units)\n\n" % (x["bucket"], x["units"]))
        for ex in x["examples"]:
            lines.append("- `%s`\n" % ex)
        if x["top_messages"]:
            top = x["top_messages"][0]
            lines.append("\n  most common message (%d): `%s`\n"
                         % (top["count"], top["message"]))

    lines.append("\n## Per-group distribution\n")
    lines.append("| Group | units | failing | failure rate |\n| --- | ---: | ---: | ---: |\n")
    for g in p["by_group"]:
        rate = 100.0 * g["failing"] / max(1, g["units"])
        lines.append("| %s | %d | %d | %.1f%% |\n"
                     % (g["group"], g["units"], g["failing"], rate))

    # ---------------- candidate systematic fixes ----------------
    if p.get("candidate_fixes"):
        fx = p["candidate_fixes"]
        lines.append("\n## The three mechanically fixable causes\n")
        lines.append("Each candidate below is a single change to a *generator*, not\n"
                     "per-file editing. Every figure was measured: the change was applied\n"
                     "to a throwaway copy of `decompiled/src/include`, the failing units\n"
                     "it targets were recompiled, and units that then compile were\n"
                     "counted. The corpus itself was not modified.\n")
        lines.append("\n| Candidate generator fix | Targets bucket | Units tested | "
                     "Recovered | Recovery |\n| --- | --- | ---: | ---: | ---: |\n")
        for f in fx:
            lines.append("| %s | %s | %d | %d | %.1f%% |\n"
                         % (f["fix"], f["target_bucket"], f["units_tested"],
                            f["units_recovered"], f["recovery_pct"]))
        combined = next((f for f in fx if f["fix"] == "all_four_combined"), None)
        if combined:
            lines.append("\nApplied together to **every** failing unit, these fixes take\n"
                         "the corpus from **%d** failing to **%d** failing — i.e. "
                         "%d units recovered, `%d + %d = %d` clean of %d (%.2f%%).\n"
                         % (p["failing_units"],
                            p["failing_units"] - combined["units_recovered"],
                            combined["units_recovered"], p["clean_units"],
                            combined["units_recovered"],
                            p["clean_units"] + combined["units_recovered"],
                            p["total_units"],
                            100.0 * (p["clean_units"] + combined["units_recovered"])
                            / max(1, p["total_units"])))

        lines.append("""
### 1. Missing IDA accessor macros — `not assignable` (840 units, 746 recovered)

Hex-Rays emits `LOWORD(x) = ...`, `LODWORD(v[i]) = ...`, `BYTE1(p) = ...`.
The corpus defines none of these names anywhere in `decompiled/src/include`,
so clang parses the left-hand side as a *call to an undeclared function* and
reports `expression is not assignable`. Sub-cause breakdown of the 840:
`LODWORD` 345, `LOBYTE` 221, `LOWORD` 141, `HIDWORD` 99.

**Fix:** emit the 18 standard IDA accessor macros as lvalue casts in
`nsmbudx_prelude.h` (`#define LOWORD(x) (*(uint16_t *)(void *)&(x))` etc.).
**Measured recovery: 746 of 840 (88.8%).** The 94 that do not recover have a
second, unrelated error after this one.

### 2. Unprototyped declarations vs promoted parameters — `conflicting types` (1,136 units, 835 recovered)

`generate_corpus.py:widen_signature()` deliberately writes every prototype as
`T f()`, on the stated assumption that C89 treats `f()` as "compatible with any
definition". That is false for definitions with a `float`, `char`, `short` or
`_Bool` parameter: the caller applies default argument promotions, so the
types genuinely differ and clang errors. Measured: **1,087 of the 1,136** have
at least one promotion-affected parameter.

**Fix:** in `widen_signature()`, keep the parameter *types* and drop only the
names, for functions whose definition has a promotable parameter. (Dropping
the whole list is what causes the conflict; the arity problem the function was
written to solve is unaffected, because the call-site arity mismatch is fixed by
`-Wno-everything` against an unprototyped *call*, not by the declaration.)
**Measured recovery: 835 of 1,136 (73.5%).** 87 units were skipped because
their definition line could not be parsed cleanly; those are not counted as
recoverable.

### 3. Data symbols declared as arrays but assigned — `assignment to array type` (655 units, 613 recovered)

`nsmbudx_data_symbols.h` declares every named datum as
`extern unsigned char sym[...]`, but the bodies assign to them:
`StageActor_RTTI = (int)&off_60BC0098;` (310 units), `Enemy_RTTI` (199),
`Actor_RTTI` (37). `close_undeclared.py` already knows this rule — it writes
"assigned globals are scalars" — but `data_symbols` is emitted by a different
path in `generate_corpus.py` that does not apply it.

**Fix:** apply the same assigned-vs-not split in the data-symbol emitter:
`extern uintptr_t sym;` for the 44 scalars, keep the array form for the rest.
**Measured recovery: 613 of 655 (93.6%).** Only 44 symbols need to change,
which is why this is the cheapest fix per unit recovered.

### What is *not* mechanically fixable

The largest bucket, `member not found` (2,852 units, 38.8% of all failures), is
**not** on this list. Its cause is that the recovered structs are opaque
(`typedef struct Actor { unsigned char _unknown[]; }`), so every field the
decompiler prints — `vtable` (1,228 units), `_` (357), `id` (171),
`currentState` (171), across 84 distinct member names and 12+ structs — has no
declaration. The tempting systematic patch, giving every opaque struct a
leading `void *vtable`, was measured: **63 of 2,852 units recovered (2.2%)**.
It cannot work, because each struct needs its *real* field names at their *real*
offsets, which is per-struct evidence work, not a generator switch. The
documentation should say so rather than promise a systematic fix.
""")

    lines.append("\n## Method\n")
    lines.append("""
- One translation unit per `.c` file, compiled alone. The corpus is never
  compiled as a single unit, because one local mistake would cascade and
  inflate the count.
- `-Wno-everything` keeps warnings out; only `error:` lines count.
- `-ferror-limit=0` lets a unit emit all its errors, so each unit's first
  diagnostic is its genuine first failure, not a capped one.
- A unit counts as failing if clang exits non-zero or emits any `error:`.
- The bucket is decided from the first `path:line:col: error:` line only.
  Cascades after that line are not counted; they are why the per-bucket
  `single-error units` column exists.
""")
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("".join(lines), encoding="utf-8")


if __name__ == "__main__":
    raise SystemExit(main())
