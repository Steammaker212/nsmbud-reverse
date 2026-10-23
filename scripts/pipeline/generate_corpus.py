"""Generate the readable C corpus and its headers from the Hex-Rays export.

Reads ``all_functions.jsonl`` (raw Hex-Rays text, one record per function) and
emits a tree of ``.c``/``.h`` pairs grouped by subsystem, using the repository's
naming conventions:

    decompiled/
      player/        player_*.c
      powerup/       powerup_*.c
      blocks/        block_*.c
      fireball/      fireball_*.c
      actors/        actor_*.c
      systems/       <class>.c
      include/       matching .h per group + nsmbudx_prelude.h

Design rules that keep the output honest:

* One function per file section, prefixed by a banner carrying its address and
  database name, so every line is traceable.
* Nothing is invented. If the decompiler emitted it, it is copied; if not, the
  function is reported as unavailable rather than filled in.
* ``sub_`` names become ``sub_<ADDR>`` only where no name exists; a function
  never gets a guessed name here.

Usage:
    python generate_corpus.py --jsonl <export.jsonl> --out-dir <dir> [--limit N]
"""
from __future__ import annotations

import argparse
import json
import re
from collections import defaultdict
from pathlib import Path

REPO = Path(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse")

# Words that look like a type at the start of a C signature but are not one.
CADENCE_WORDS = {
    "__fastcall", "__cdecl", "__noreturn", "void", "int", "char", "float",
    "double", "unsigned", "signed", "long", "short", "bool", "const", "struct",
}

# Type names the prelude already defines; forward declarations must skip them.
PRELUDE_TYPES = {
    "Vec2", "Vec3", "Vec2i", "Vec3i",
    "_BYTE", "_WORD", "_DWORD", "_QWORD", "_BOOL1", "_BOOL4", "_UNKNOWN",
    "__n128", "__m128", "__n64", "__m64", "__guard",
    "float32x2_t", "float32x4_t", "int32x2_t", "int32x4_t", "uint32x4_t",
    "int8x8_t", "int8x16_t", "uint8x8_t", "uint8x16_t", "int16x4_t",
    "int16x8_t", "uint16x8_t", "int64x2_t", "uint64x2_t",
    # The decompiler's paired-lane types.
    "int32x4x2_t", "float32x4x2_t", "int8x16x2_t", "uint8x16x2_t",
    "float32x2x2_t", "int8x8x2_t", "uint8x8x2_t", "int16x4x2_t",
    "int16x8x2_t", "uint16x8x2_t", "int64x2x2_t", "uint64x2x2_t",
    "int32x2x2_t",
}

ROUTES: list[tuple[str, str]] = [
    (r"^Player", "player"),
    (r"^Mario|^Luigi|^Kinopio|^Totten|^Mii", "player"),
    (r"^PowerUp|^Powerup|^Kinoko|^IceFlower|^FireFlower|^Propeller|^Penguin|^Musasabi|^SuperStar", "powerup"),
    (r"^FireBall|^Fireball|^IceBall|^HammerBros|^FireBros|^Bros", "projectile"),
    (r"^Block|^QuestionBlock|^BlockCoin|^MovementBlock|^ItemBlock", "blocks"),
    (r"^Item|^ItemMgr", "items"),
    (r"^StateMgr|^FState|^StateMethod|^IState", "state"),
    (r"^Collision|^ActiveCollider|^Collider|^Mask", "collision"),
    (r"^ActorMgr|^ActorInfo|^Profile|^ResArchive|^ActorBuildInfo", "actorcore"),
    (r"^StageActor|^Actor|^Enemy|^Boss|^Koopaling|^Goomba|^Koopa|^Yoshi", "actors"),
    (r"^sead_|^nn_", "sdklib"),
]

PRELUDE = r"""/* nsmbudx_prelude.h -- shared vocabulary for the generated corpus.
 *
 * Types are named exactly as the Deluxe ARM32 binary uses them. IDA's scalar
 * aliases are defined at IDA's own widths so a decompiled body compiles
 * unchanged; nothing here is an inference about the game.
 */
#ifndef NSMBUDX_PRELUDE_H
#define NSMBUDX_PRELUDE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

typedef uint8_t   _BYTE;
typedef uint16_t  _WORD;
typedef uint32_t  _DWORD;
typedef uint64_t  _QWORD;
typedef int8_t    _BOOL1;
typedef int32_t   _BOOL4;
typedef uint32_t  _UNKNOWN;

/* __int8/__int16/__int32/__int64 are clang builtin keywords; redefining them
 * is an error, so they are used as-is. */

#ifndef __fastcall
#define __fastcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __noreturn
#define __noreturn
#endif

/* Hex-Rays `MEMORY[addr]` modelling: a flat image window. */
extern unsigned char g_image[0x10000000];
#define MEMORY ((unsigned char *)g_image)

/* __n128: the 128-bit NEON quad Hex-Rays uses for vector returns/params.
 * __n64 is the 64-bit (1 x double) form. __guard is a clang builtin and must
 * not be redefined. */
typedef float __n128 __attribute__((vector_size(16)));
typedef float __m128 __attribute__((vector_size(16)));
typedef double __n64 __attribute__((vector_size(8)));
typedef double __m64 __attribute__((vector_size(8)));

/* NEON lane types the decompiler emits for vectorised code. */
typedef float    float32x2_t __attribute__((vector_size(8)));
typedef float    float32x4_t __attribute__((vector_size(16)));
typedef int32_t  int32x2_t   __attribute__((vector_size(8)));
typedef int32_t  int32x4_t   __attribute__((vector_size(16)));
typedef uint32_t uint32x4_t  __attribute__((vector_size(16)));
typedef int8_t   int8x8_t    __attribute__((vector_size(8)));
typedef int8_t   int8x16_t   __attribute__((vector_size(16)));
typedef uint8_t  uint8x8_t   __attribute__((vector_size(8)));
typedef uint8_t  uint8x16_t  __attribute__((vector_size(16)));
typedef int16_t  int16x4_t   __attribute__((vector_size(8)));
typedef int16_t  int16x8_t   __attribute__((vector_size(16)));
typedef uint16_t uint16x8_t  __attribute__((vector_size(16)));
typedef int64_t  int64x2_t   __attribute__((vector_size(16)));
typedef uint64_t uint64x2_t  __attribute__((vector_size(16)));
typedef int32_t  int32x4x2_t[2];
typedef float    float32x4x2_t[2];
typedef int8_t   int8x16x2_t[2];
typedef uint8_t  uint8x16x2_t[2];
typedef float    float32x2x2_t[2];
typedef int8_t   int8x8x2_t[2];
typedef uint8_t  uint8x8x2_t[2];
typedef int16_t  int16x4x2_t[2];
typedef int16_t  int16x8x2_t[2];
typedef uint16_t uint16x8x2_t[2];
typedef int64_t  int64x2x2_t[2];
typedef uint64_t uint64x2x2_t[2];
typedef int32_t  int32x2x2_t[2];

/* Hex-Rays' destructor guard token in C++ band-0 output. */
typedef int __guard;

/* Vector types: single-precision, tightly packed. These are stated in the
 * engine's own headers (codedx include/util/vec2.h, vec3.h) and confirmed by
 * the codegen: ldm/sts of 8/12 bytes for Vec2/Vec3 by value. */
typedef struct Vec2 { float x; float y; } Vec2;
typedef struct Vec3 { float x; float y; float z; } Vec3;
typedef struct Vec2i { int x; int y; } Vec2i;
typedef struct Vec3i { int x; int y; int z; } Vec3i;

#endif /* NSMBUDX_PRELUDE_H */
"""

BANNER = """/* ============================================================================
 * {name}
 * address : 0x{ea:08X}
 * size    : {size} bytes
 * group   : {group}
 * ----------------------------------------------------------------------------
 * Decompiled from the retail Deluxe (Switch) main module, v1.0.0.
 * Generated by scripts/pipeline/generate_corpus.py -- do not edit by hand.
 * ==========================================================================*/
"""


def sanitize_symbol(sig: str) -> str:
    """Make the declared name a legal C identifier.

    Hex-Rays prints C++ operator names (`operator delete`, `operator==`), which
    are not identifiers in C. Rewrite them to the flattened spelling used for
    every other member (`Class__operator_delete`) so call sites and the
    declaration agree.
    """
    def repl(m: re.Match) -> str:
        op = m.group(1)
        words = {
            "delete[]": "delete_array", "delete": "delete", "new[]": "new_array",
            "new": "new", "==": "eq", "!=": "ne", "<=": "le", ">=": "ge",
            "<<": "lshift", ">>": "rshift", "<": "lt", ">": "gt", "=": "assign",
            "+": "add", "-": "sub", "*": "mul", "/": "div", "++": "inc",
            "--": "dec", "&": "and", "|": "or", "^": "xor", "!": "not",
            "~": "inv", "%": "mod", "[]": "index", "()": "call",
        }
        return "__operator_" + words.get(op.strip(), re.sub(r"\W", "_", op.strip()))

    sig = re.sub(r"\boperator\s*(\[\]|\(\)|delete\[\]|new\[\]|delete|new|<<=|>>=|==|!=|<=|>=|<<|>>|\+\+|--|->|&&|\|\||[=+\-*/%<>!&|^~])",
                 repl, sig)
    # Destructors: `Class::~Class` -> `Class__dtor`. The `~` is not an
    # identifier character in C, so the tilde form can never be declared.
    sig = re.sub(r"\b([A-Za-z_]\w*)\s*::\s*~\s*([A-Za-z_]\w*)", r"\1__dtor_\2", sig)
    sig = re.sub(r"~\s*([A-Za-z_]\w*)", r"\1__dtor", sig)
    return sig


# Names owned by libc/the compiler runtime. The image carries PLT stubs under
# these names; declaring them here conflicts with the real <string.h>/<math.h>
# prototypes, so they are kept out of the generated headers.
RESERVED_LIBC = {
    "vsnprintf", "snprintf", "printf", "sprintf", "vprintf", "sscanf",
    "strstr", "strlen", "strcpy", "strncpy", "strcmp", "strncmp", "strchr",
    "strrchr", "strcat", "strncat", "memcpy", "memmove", "memset", "memcmp",
    "atanf",
    "atan", "atan2", "atan2f", "sinf", "cosf", "tanf", "tan", "sin", "cos",
    "sqrtf", "sqrt", "fabs", "fabsf", "exp", "expf", "exp2f", "pow", "powf",
    "log", "logf", "logb", "floor", "floorf", "ceil", "ceilf", "strtod",
    "strtol", "atoi", "malloc", "calloc", "realloc", "free", "abort", "exit",
    "qsort", "bsearch", "fmod", "fmodf", "acosf", "asinf", "hypot", "scalbn",
    "tolower", "toupper", "__cxa_pure_virtual", "__cxa_guard_acquire",
    "__cxa_guard_release", "__errno_location",
}


def widen_signature(sig: str) -> str:
    """Make a signature accept any argument count.

    Hex-Rays prints a function's prototype from its own body but renders call
    sites independently, so the two disagree about arity for a few hundred
    functions ("expected 2, have 3").

    A trailing ``...`` still requires the named parameters, so it only fixes
    "too many". An empty parameter list ``()`` means "unspecified arguments" in
    C89, which accepts any count in either direction -- the only form that
    makes both directions legal. The printed parameter types remain visible in
    the prototype comment and in each definition's own body.
    """
    if not sig.endswith(")"):
        return sig
    # Find the parameter list's opening paren: the one at depth 0, scanning
    # from the closing paren backwards. A plain rfind would hit the inner
    # paren of a function-pointer parameter such as `int (*cb)()`.
    depth = 0
    open_idx = -1
    for i in range(len(sig) - 1, -1, -1):
        ch = sig[i]
        if ch == ")":
            depth += 1
        elif ch == "(":
            depth -= 1
            if depth == 0:
                open_idx = i
                break
    if open_idx < 0:
        return sig
    return sig[: open_idx + 1] + ")"


def sig_is_wellformed(sig: str) -> bool:
    """Reject signatures the decompiler could not render cleanly.

    Guards against constructs that are not legal C parameter lists: IDA's
    ``__spoils<>``, ternary/function-pointer soup like ``int (__fastcall ***``,
    unresolved ``#90`` type ids, and unbalanced parentheses.
    """
    if "#" in sig or "__spoils" in sig:
        return False
    if sig.count("(") != sig.count(")"):
        return False
    # Nested `(` inside the parameter list other than `(*name)` is suspect.
    inner = sig[sig.find("(") + 1: sig.rfind(")")]
    if inner.count("(") != inner.count(")"):
        return False
    if "***" in sig:
        return False
    return True


def route_class(name: str) -> str:
    for pat, group in ROUTES:
        if re.match(pat, name):
            return group
    return "misc"


def owner_of(name: str) -> str:
    """Group key: the class part of Class__method, else a leading token."""
    if "__" in name:
        return name.split("__", 1)[0]
    return "free"


def forward_decls(recs: list[dict]) -> list[str]:
    """Opaque declarations for every struct/class type the signatures mention.

    Hex-Rays names types it recovered (``PlayerLookTarget *``); the header must
    at least forward-declare them or the unit cannot parse. Definitions are not
    invented here -- see structs.h for recovered layouts.
    """
    types: set[str] = set()
    funcnames = {r["name"] for r in recs}
    # Only types used via pointer/reference: `Foo *`, `const Foo *`, `ns::Foo *`.
    ptr_pat = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z0-9_]+)*)\s*(?:const\s*)?\*")
    for r in recs:
        first = (r.get("c") or "").splitlines()[0] if r.get("c") else ""
        sig = first.split("*/", 1)[-1] if "*/" in first else first
        for m in ptr_pat.finditer(sig):
            t = re.sub(r"\s*::\s*", "__", m.group(1))
            if t in funcnames or t in CADENCE_WORDS:
                continue
            # IDA scalar aliases are already typedef'd in the prelude.
            if re.match(r"^_(BYTE|WORD|DWORD|QWORD|BOOL\d?|UNKNOWN)$", t):
                continue
            if re.match(r"^(u?int(8|16|32|64)_t|size_t|ssize_t|bool)$", t):
                continue
            # Types already defined in the prelude must not be re-declared.
            if t in PRELUDE_TYPES:
                continue
            # Compiler/Hex-Rays reserved spellings that begin with '__'.
            if t.startswith("__"):
                continue
            # Namespaced SDK types like sead_IDisposer start lowercase, and a
            # namespace itself can be the pointee (`nv *this`), so a lowercase
            # single token is still worth declaring: the declaration is opaque
            # and asserts nothing about layout.
            types.add(t)
    lines = ["/* Opaque declarations for types named in this group's signatures. */"]
    for t in sorted(types):
        # Types with a measured layout come from structs_recovered.h; anything
        # else gets a permissive body (leading zero-length array) so member
        # names the decompiler printed still parse. No offset is asserted for
        # those: the real header was not available.
        lines.append("#ifndef NSMBUDX_LAYOUT_%s" % t.upper())
        lines.append("#define NSMBUDX_LAYOUT_%s" % t.upper())
        lines.append(
            "typedef struct %s { unsigned char _unknown[]; } %s;" % (t, t)
        )
        lines.append("#endif")
    return lines


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out-dir", default=str(REPO / "decompiled"))
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument(
        "--layout-free-only",
        action="store_true",
        help="emit only functions with no struct member access (these compile "
             "without asserting any unknown struct layout)",
    )
    ap.add_argument(
        "--data-symbols",
        default=None,
        help="JSON from export_data_symbols.py; emits extern declarations",
    )
    args = ap.parse_args()

    out_root = Path(args.out_dir)
    groups: dict[str, list[dict]] = defaultdict(list)
    n = 0
    skipped = 0

    # Pass 0: index every function signature, including ones whose body will not
    # be emitted. A skipped body is still called by its neighbours, so its
    # declaration must exist regardless.
    all_sigs: dict[int, str] = {}
    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            if not r.get("c"):
                continue
            first = r["c"].splitlines()[0]
            sig = first.split("*/", 1)[-1].strip() if "*/" in first else first
            if not sig or sig.startswith("//"):
                # Hex-Rays emits `// Overrides: ...` and `// attributes: thunk`
                # lines ahead of the real prototype; skip them.
                for ln in r["c"].splitlines():
                    ln = ln.split("*/", 1)[-1].strip()
                    if ln and not ln.startswith(("//", "/*", "*")):
                        sig = ln
                        break
                else:
                    continue
            if not sig:
                continue
            sig = re.sub(r"\b([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)", r"\1__\2", sig)
            if sig.endswith("{"):
                sig = sig[:-1].strip()
            sig = re.sub(r"\(\s*;\s*$", "(void)", sig)
            if not sig.rstrip().endswith(")"):
                sig = sig.rstrip().rstrip("(") + "(void)"
            sig = sanitize_symbol(sig)
            if sig_is_wellformed(sig):
                all_sigs[r["ea"]] = sig

    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            if r.get("c") is None:
                skipped += 1
                continue
            if args.layout_free_only and "->" in r["c"]:
                skipped += 1
                continue
            name = r["name"]
            owner = owner_of(name)
            group = route_class(name)
            r["_group"] = group
            r["_owner"] = owner
            groups[group].append(r)
            n += 1
            if args.limit and n >= args.limit:
                break

    inc = out_root / "include"
    inc.mkdir(parents=True, exist_ok=True)
    (inc / "nsmbudx_prelude.h").write_text(PRELUDE)

    # One global forward-type set for the whole database. Per-group headers can
    # only cover their own group, but a prototype header spans every group.
    all_recs = [{"c": v, "name": ""} for v in all_sigs.values()]
    fwd = [
        "/* nsmbudx_types_forward.h -- opaque types for the whole database.",
        " *",
        " * Declarations only. A permissive zero-length body lets any member name",
        " * the decompiler printed still parse; no offset is asserted. Measured",
        " * layouts live in structs_recovered.h.",
        " */",
        "#ifndef NSMBUDX_TYPES_FORWARD_H",
        "#define NSMBUDX_TYPES_FORWARD_H",
        "",
    ]
    fwd.extend(forward_decls(all_recs))
    fwd.append("")
    fwd.append("#endif")
    (inc / "nsmbudx_types_forward.h").write_text("\n".join(fwd))

    # Declarations for every function in the database, so a body that calls a
    # function whose own body was skipped still has a prototype.
    decl = [
        "/* nsmbudx_prototypes.h -- every function signature in the database.",
        " *",
        " * Bodies are grouped per subsystem; this header is the complete set, so",
        " * a translation unit compiles even when only part of the corpus is",
        " * emitted (e.g. the layout-independent subset).",
        " */",
        "#ifndef NSMBUDX_PROTOTYPES_H",
        "#define NSMBUDX_PROTOTYPES_H",
        "",
        '#include "nsmbudx_prelude.h"',
        '#include "structs_recovered.h"',
        '#include "nsmbudx_types_forward.h"',
        "",
    ]
    # One prototype per declared name. The database can hold two distinct
    # functions under the same name with different signatures; emitting both
    # would not compile, so the first wins and the clash is reported.
    seen_names: dict[str, int] = {}
    clashes: list[tuple[str, int, int]] = []
    variadic_decl: dict[str, str] = {}
    for ea in sorted(all_sigs):
        s = sanitize_symbol(all_sigs[ea])
        nm = re.search(r"([A-Za-z_]\w*)\s*\(", s)
        key = nm.group(1) if nm else s
        if key in seen_names:
            continue
        if key in RESERVED_LIBC:
            # The image's PLT stubs for libc carry the same names; declaring
            # them here conflicts with the real prototypes in <math.h> etc.
            continue
        seen_names[key] = ea
        # Widen both the prototype and the definition identically (see
        # widen_signature): Hex-Rays prints a callee's prototype from its body
        # but renders call sites independently, so arity disagrees for a few
        # hundred functions. Widening both keeps every call site legal and
        # keeps the declaration consistent with the definition.
        decl.append("%s; /* 0x%08X */" % (widen_signature(s), ea))
    decl.append("")
    decl.append("#endif")
    (inc / "nsmbudx_prototypes.h").write_text("\n".join(decl))
    print("prototypes: %d (%d duplicate names suppressed)"
          % (len(seen_names), len(clashes)))

    if args.data_symbols:
        rows = json.loads(Path(args.data_symbols).read_text())
        lines = [
            "/* nsmbudx_data_symbols.h -- named data in the Deluxe image.",
            " *",
            " * Every entry is a name the database itself carries, paired with its",
            " * address. Declared as byte arrays: the width is not asserted.",
            " */",
            "#ifndef NSMBUDX_DATA_SYMBOLS_H",
            "#define NSMBUDX_DATA_SYMBOLS_H",
            "",
            '#include "nsmbudx_prelude.h"',
            "",
            "/* Declared as byte arrays so both `&sym` and `sym[idx]` uses parse;",
            " * the width belongs to structs_recovered.h, not here. */",
            "",
        ]
        # Names owned by libc/the compiler runtime: the image's PLT stubs carry
        # these names too, and re-declaring them as byte arrays breaks <string.h>.
        RESERVED = {
            "vsnprintf", "snprintf", "printf", "sprintf", "vprintf", "sscanf",
            "strstr", "strlen", "strcpy", "strncpy", "strcmp", "strncmp",
            "strchr", "strrchr", "strcat", "memcpy", "memmove", "memset", "memcmp",
            "atanf", "atan", "atan2", "atan2f", "sinf", "cosf", "tanf", "sqrtf",
            "sqrt", "fabs", "fabsf", "exp", "expf", "pow", "powf", "log", "logf",
            "floor", "floorf", "ceil", "ceilf", "strtod", "strtol", "malloc",
            "calloc", "realloc", "free", "abort", "exit", "qsort", "bsearch",
        }
        for r in sorted(rows, key=lambda x: x["ea"]):
            # IDA keeps some C++ scope names ("Kanibo::sBelowSensor") and a few
            # unprintable ones ("??g_ResourceManager"); flatten/drop so the
            # declaration is a legal identifier.
            nm = r["name"].replace("::", "__")
            nm = re.sub(r"[^A-Za-z0-9_]", "_", nm).strip("_")
            if not nm or nm[0].isdigit() or nm in RESERVED:
                continue
            lines.append("extern unsigned char %s[]; /* 0x%08X %s */"
                         % (nm, r["ea"], r["name"].replace("*/", "")))
        lines.append("")
        lines.append("#endif")
        (inc / "nsmbudx_data_symbols.h").write_text("\n".join(lines))
        print("data symbols: %d" % len(rows))

    total_written = 0
    for group, recs in sorted(groups.items()):
        gdir = out_root / group
        gdir.mkdir(parents=True, exist_ok=True)
        recs.sort(key=lambda r: r["ea"])

        # Header: prototypes for every function in the group.
        h = [
            "/* %s.h -- generated from the Deluxe database. */" % group,
            "#ifndef NSMBUDX_%s_H" % group.upper(),
            "#define NSMBUDX_%s_H" % group.upper(),
            "",
            '#include "nsmbudx_prelude.h"',
            '#include "structs_recovered.h"',
            "",
        ]
        h.extend(forward_decls(recs))
        h.append("")
        protos: list[str] = []
        body_parts = [
            "/* %s -- generated from the Deluxe database. */" % group,
            '#include "../include/nsmbudx_field.h"',
            '#include "../include/nsmbudx_prelude.h"',
            '#include "../include/nsmbudx_data_symbols.h"',
            '#include "../include/nsmbudx_prototypes.h"',
            '#include "../include/nsmbudx_undeclared.h"',
            "",
        ]
        for r in recs:
            src = r["c"]
            banner = BANNER.format(name=r["name"], ea=r["ea"], size=r["size"], group=group)
            # Signature = first line of Hex-Rays output.
            first = src.splitlines()[0] if src else ""
            sig = first.split("*/", 1)[-1].strip() if "*/" in first else first
            if sig.endswith("{"):
                sig = sig[:-1].strip()
            if sig:
                # Hex-Rays leaves C++ scope qualifiers on types (`sead::SafeString`);
                # the corpus is C, so flatten them where they appear as a type.
                sig = re.sub(r"\b([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)", r"\1__\2", sig)
                # A few signatures come out as `f(;` when the decompiler could
                # not render the parameter list; normalise to `f(void)`.
                sig = re.sub(r"\(\s*;\s*$", "(void)", sig)
                if not sig.rstrip().endswith(")"):
                    sig = sig.rstrip().rstrip("(") + "(void)"
                # Some signatures carry an unresolved IDA type reference
                # (`#90 *this`) or other non-C constructs; skip the prototype
                # rather than emit garbage.
                sig = sanitize_symbol(sig)
                if not sig_is_wellformed(sig):
                    continue
                # nsmbudx_prototypes.h already declares every function; a
                # second prototype here would conflict with it whenever the
                # two spellings differ.
                protos.append(sig)
            body_parts.append(banner)
            # Drop the redundant leading comment line, keep the rest verbatim.
            rest = src
            if "*/" in rest.splitlines()[0]:
                lines = rest.splitlines()
                rest = "\n".join(lines[1:])
            # The definition keeps its real parameter list, because its body
            # references those parameter names. The prototype in
            # nsmbudx_prototypes.h is the bare `f()` form, which C89 treats as
            # compatible with any definition and which makes call sites with any
            # argument count legal. Widening the definition as well would strip
            # the parameter names out from under the body.
            dl = rest.splitlines()
            for i, ln in enumerate(dl):
                if "{" in ln or ln.rstrip().endswith(")"):
                    cand = ln.rstrip()
                    head = cand[:-1].rstrip() if cand.endswith("{") else cand
                    head = re.sub(r"\b([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)", r"\1__\2", head)
                    head = sanitize_symbol(head)
                    if head != cand:
                        dl[i] = head + (" {" if cand.endswith("{") else "")
                    break
            rest = "\n".join(dl)
            body_parts.append(rest.rstrip() + "\n")

        h.append("")
        h.append("#endif /* NSMBUDX_%s_H */" % group.upper())
        (inc / ("auto_%s.h" % group)).write_text("\n".join(h))
        (gdir / ("%s.c" % group)).write_text("\n".join(body_parts))
        total_written += len(recs)
        print("%-12s %5d functions -> %s/%s.c" % (group, len(recs), group, group))

    print("TOTAL %d functions written, %d unavailable" % (total_written, skipped))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

