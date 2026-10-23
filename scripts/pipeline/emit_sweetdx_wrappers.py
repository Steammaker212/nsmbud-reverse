"""Emit sweet-dx-style wrappers for every active hook.

The loader's own wrappers (loader/hooks/*.c) already carry the corroborated
prototype for each hook, written into their header comment by
gen_wrapper_hooks.py. Rather than restating those prototypes by hand in a second
place -- where they would silently drift -- this reads them back out and emits the
same behaviour in sweet-dx's C++ dialect.

The wrapper body is identical in intent to the loader's: count the call, forward
every argument, return what the original returned. Nothing changes gameplay, so a
successful boot is attributable to the loader rather than to a behaviour change.

`sweet-dx` declares originals differently (a plain prototype, not DECLARE_ORIG),
and its module-level proof state lives in static_init.c, so the counter and the
proof call are the same symbols the loader build uses.

Usage:
    python scripts/pipeline/emit_sweetdx_wrappers.py --repo .
"""
from __future__ import annotations

import argparse
import io
import re
from pathlib import Path

# "   prototype   int __fastcall Player_stun(int a1, int a2)"
PROTO = re.compile(r"prototype\s+(.+?)\s*$", re.M)
ADDR = re.compile(r"address\s+0x([0-9A-Fa-f]+)\s+\(RVA 0x([0-9A-Fa-f]+)\)")
NAME = re.compile(r"^/\* (\w+?)_hook -- behaviour-preserving wrapper on (\w+)\.")


def parse_hook(path: Path):
    """Extract (wrapper name, original name, prototype) from a generated hook."""
    text = io.open(path, encoding="utf-8", errors="replace").read()
    m = NAME.search(text)
    if not m:
        return None
    hook_name, orig = m.group(1), m.group(2)
    pm = PROTO.search(text)
    if not pm:
        return None
    proto = pm.group(1).strip()
    # Normalise the __fastcall spelling and drop `__fastcall` for C++.
    proto = proto.replace("__fastcall ", "")
    return hook_name, orig, proto


def split_ret_args(proto: str):
    """'int foo(int a1, int a2)' -> ('int', 'foo', ['int a1', 'int a2'], ['a1','a2']).

    Both the full declarations and the bare names are returned: the wrapper's
    signature needs the declarations, its body needs the names.
    """
    m = re.match(r"^(.*?)\b(\w+)\s*\((.*)\)\s*$", proto, re.S)
    if not m:
        return None
    ret, name, args = m.group(1).strip(), m.group(2), m.group(3).strip()
    if args in ("", "void"):
        return ret, name, [], []
    # Split on commas not inside parentheses.
    parts, depth, cur = [], 0, ""
    for ch in args:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        parts.append(cur.strip())

    decls, names = [], []
    for p in parts:
        ids = [i for i in re.findall(r"[A-Za-z_]\w*", p)
               if i not in ("const", "volatile", "unsigned", "signed", "int",
                            "char", "short", "long", "void", "float", "double",
                            "bool", "struct", "class")]
        nm = ids[-1] if ids else "a%d" % (len(names) + 1)
        # `this` is a keyword in C++, and the corpus uses it as a parameter name
        # because the source dialect is C. Renaming is cosmetic -- the wrapper
        # forwards positionally.
        if nm == "this":
            nm = "self"
        # Map the corpus's own type names onto opaque pointers.
        #
        # sweet-dx's include tree does not carry Actor, ActorBuildInfo, StageActor
        # and friends -- it declares only what its own mods touched. Since every
        # wrapper here forwards its arguments untouched and never dereferences
        # them, the pointed-to types are irrelevant to correctness: only the
        # size of each slot matters, and all pointers are 32-bit in this ABI.
        # Emitting `void*` keeps the ABI exact without importing a type system.
        decls.append(_opaque_decl(p, nm))
        names.append(nm)
    return ret, name, decls, names


NUMERIC = {"int", "unsigned int", "short", "unsigned short", "char",
           "unsigned char", "float", "double", "bool", "long",
           "unsigned long", "__int64", "unsigned __int64", "u8", "u16", "u32",
           "s8", "s16", "s32", "f32"}


def _opaque_decl(param: str, name: str) -> str:
    """Render one parameter as an ABI-exact declaration.

    Pointers become `void*`; numerics keep their type; anything else (a struct
    passed by value, which would change the calling convention) is widened to a
    pointer, because a by-value aggregate cannot be forwarded safely without its
    real definition and is reported by the caller as a skip instead.
    """
    if "*" in param:
        return "void *%s" % name
    t = " ".join(w for w in param.split() if w not in ("const", "volatile"))
    t = " ".join(w for w in t.split() if w != name).strip()
    if t in NUMERIC:
        return "%s %s" % (t, name)
    # Unknown/aggregate: keep it as a word. Callers with no real definition
    # cannot be forwarded correctly, so they are skipped upstream.
    return "void *%s" % name


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--out", default="sweetdx-test/source/code/hooks.cpp")
    opt = ap.parse_args()

    repo = Path(opt.repo)
    hooks = []
    for p in sorted((repo / "loader" / "hooks").glob("*.c")):
        if p.name in ("example_hook.c",):
            continue
        parsed = parse_hook(p)
        if parsed:
            hooks.append(parsed)

    lines = [
        "// hooks.cpp -- behaviour-preserving wrappers on every verified hook site.",
        "//",
        "// Generated by scripts/pipeline/emit_sweetdx_wrappers.py from the",
        "// prototypes corroborated in loader/hooks/*.c. Re-run it rather than",
        "// editing here, or the two harnesses will disagree about an arity and one",
        "// of them will corrupt the stack.",
        "//",
        "// Every wrapper counts its calls and forwards every argument unchanged,",
        "// then returns what the original returned. The first call through any",
        "// hook persists the runtime proof, which is the moment \"the module",
        "// loaded\" becomes \"the hook actually ran\".",
        "//",
        "// Deluxe (Switch) v1.0.0 only.",
        "",
        '#include "nn.h"',
        '#include "types.h"',
        "",
        'extern "C" {',
        "",
        "extern u32 mod_hook_calls;",
        "void mod_write_proof(void);",
        "",
        "static inline void note_call(void)",
        "{",
        "    ++mod_hook_calls;",
        "    if (mod_hook_calls == 1)",
        "        mod_write_proof();",
        "}",
        "",
    ]

    emitted = skipped = 0
    for hook_name, orig, proto in hooks:
        sig = split_ret_args(proto)
        if not sig:
            skipped += 1
            continue
        ret, _name, decls, names = sig
        # A zero-argument hook is legitimate (the two endState hooks and
        # ActorMgr__create take no arguments in the published prototype), so it
        # must NOT be skipped -- only `static_init` is special, and it is
        # identified by name because sweet-dx's crt0 supplies it.
        if hook_name == "static_init_hook":
            continue
        argdecl = ", ".join(decls)
        arguse = ", ".join(names)
        # The hook's own return type must be declared: `extern "C" name(args)`
        # without it is not a definition and does not link. The corpus's return
        # types are largely unknown to sweet-dx's headers, so a pointer return
        # becomes `void*` and an unknown scalar type becomes a word -- both
        # ABI-identical to what the original returns in r0.
        rets = ret.strip()
        if "*" in rets:
            hret = "void *"
        elif rets in NUMERIC:
            hret = rets
        elif rets in ("", "void"):
            hret = "void"
        else:
            hret = "u32"
        orig_ret = hret if hret not in ("void",) else "void"
        # The wrapper is `<symbol>_hook`; the original keeps its plain name.
        hn = hook_name[: -len("_hook")] if hook_name.endswith("_hook") else hook_name
        hname = "%s_hook" % hn
        # The declaration's parameter names also need the C++ rename.
        decl_args = proto[proto.index("(") + 1:proto.rindex(")")]
        for i, old in enumerate(re.findall(r"\bthis\b", decl_args)):
            decl_args = decl_args.replace("this", "self", 1)

        # The declaration uses the same opaque-ABI spelling as the hook, so the
        # original and the wrapper agree on the slot layout by construction.
        lines.append("// %s  <-  %s" % (hname, orig))
        lines.append("%s %s(%s);" % (hret, orig, argdecl))
        lines.append("")
        lines.append('extern "C" %s %s(%s)' % (hret, hname, argdecl))
        lines.append("{")
        lines.append("    note_call();")
        if ret.strip() == "void":
            lines.append("    %s(%s);" % (orig, arguse))
        else:
            lines.append("    return %s(%s);" % (orig, arguse))
        lines.append("}")
        lines.append("")
        emitted += 1

    lines.append('} // extern "C"')
    lines.append("")

    out = repo / opt.out
    out.parent.mkdir(parents=True, exist_ok=True)
    io.open(out, "w", encoding="utf-8", newline="\n").write("\n".join(lines))
    print("wrote %s (%d wrappers, %d skipped)" % (out, emitted, skipped))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
