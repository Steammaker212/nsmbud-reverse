"""Compare main.i64's prototypes against the corpus's own declarations, by RVA.

The remaining parse failures are mostly wrong arity and wrong return type. main.i64 carries 7,050 real
prototypes recovered by the credited prior work. Matching is by RVA, not by name, because this repo
renamed many functions after import (ColliderBase_vf30 here is a main.i64 name, but BlockBase_onDraw and
air_... are ours).

Reports, per corpus function that main.i64 also has:
    AGREES                 return type and arity match
    ARITY DIFFERS          prototype differs in parameter count
    RETURN DIFFERS         same arity, different return type
    NO DECLARATION HERE    corpus has the function but declares nothing usable
"""
import json
import os
import re
import sys

RICH = os.environ.get("NSMBUDX_RICH", r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main_i64_rich.json")
# SIBLING SCRIPTS: this path is produced by scripts/ida_export_main_i64_rich.py, which must be run
# against the main.i64 database first. It is an absolute path because the IDA database lives outside
# this repository (game artifacts are git-ignored), and NSMBUDX_RICH overrides it.


def parse_decl(sig):
    """'int __fastcall(a *this, int b)' -> (return_type, [param types])."""
    sig = sig.strip()
    m = re.match(r"^(.*?)\s*(?:__fastcall|__cdecl|__stdcall|__thiscall)?\s*\((.*)\)\s*$", sig)
    if not m:
        return None, None
    ret = m.group(1).strip()
    body = m.group(2).strip()
    params = []
    if body and body != "void":
        depth = 0
        cur = ""
        for ch in body:
            if ch in "([":
                depth += 1
            elif ch in ")]":
                depth -= 1
            if ch == "," and depth == 0:
                params.append(cur.strip())
                cur = ""
            else:
                cur += ch
        if cur.strip():
            params.append(cur.strip())
    return ret, params


KNOWN_TYPE_WORDS = {
    "int", "char", "short", "long", "float", "double", "void", "bool", "signed",
    "unsigned", "_BYTE", "_WORD", "_DWORD", "_QWORD", "__int8", "__int16", "__int32",
    "__int64", "uint8_t", "uint16_t", "uint32_t", "uint64_t", "size_t", "this",
}


def norm_type(t):
    """Reduce a type to a comparable core.

    Two bugs found by instrumenting the comparison rather than trusting its totals:

    1. Our side captured the calling convention INTO the return type. Our decl
       `bool __fastcall(int a1, int a2)` gives ret='bool __fastcall', while main.i64's
       `bool __fastcall(...)` gives ret='bool'. So EVERY function looked like a return-type
       disagreement, and the totals did not move no matter what else was corrected. That is why this
       is worth fixing rather than tuning thresholds.
    2. Parameter-name stripping must handle a name after `*` (`CollisionMgr *result`) and names that are
       not in a fixed list. Drop the final identifier when it is not a known type word instead of
       enumerating names.
    """
    if t is None:
        return ""
    t = re.sub(r"\s+", " ", t).strip()
    t = re.sub(r"\b__\w*call\b", "", t)          # __fastcall / __cdecl / __stdcall / __thiscall
    t = re.sub(r"\bconst\s+", "", t).strip()

    m = re.search(r"\b([A-Za-z_]\w*)\s*$", t)
    if m and m.group(1) not in KNOWN_TYPE_WORDS:
        if not t.endswith("struct") and not t.endswith("enum"):
            t = t[:m.start()].strip()

    # longest spellings first; both `unsigned ...` forms before their `signed ...` tails, because
    # "unsigned __int8" CONTAINS the substring "signed __int8"
    t = (t.replace("unsigned long long", "_QWORD")
          .replace("unsigned __int64", "_QWORD")
          .replace("unsigned __int8", "_BYTE")
          .replace("unsigned __int16", "_WORD")
          .replace("unsigned __int32", "_DWORD")
          .replace("unsigned char", "_BYTE")
          .replace("unsigned short", "_WORD")
          .replace("unsigned int", "_DWORD")
          .replace("signed __int8", "__int8")
          .replace("signed int", "int"))
    t = re.sub(r"\s*\*\s*", "*", t)
    return re.sub(r"\s+", " ", t).strip()


def norm_params(params):
    """Normalise a parameter list; returns the count and the normalised types."""
    return [norm_type(p) for p in params]


def main(argv):
    corpus_root = argv[1]
    with open(RICH, encoding="utf-8") as fh:
        rich = json.load(fh)
    by_rva = {}
    for f in rich["functions"]:
        if f["proto"]:
            by_rva[int(f["rva"])] = f

    print("main.i64 functions with a prototype: %d" % len(by_rva))
    print()

    # Corpus declarations, keyed by name -> (ret, params). Collected from every aggregate .c.
    decls = {}
    for dp, _, fs in os.walk(corpus_root):
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            for m in re.finditer(
                    r"^[ \t]*([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\{", text, re.M):
                name = m.group(2)
                if name in decls:
                    continue
                decls[name] = (m.group(1).strip(), m.group(3))

    print("corpus function definitions: %d" % len(decls))
    print()

    # The corpus records each function's address in a leading comment, in two spellings AND two
    # layouts. The signature may be on the SAME line as the comment or the next one:
    #   /* ---- addr: 0x60563984 */ int __fastcall BlockBase_onDraw(int a1)     <- same line
    #   /* line: 0, address: 0x6075e758 */ void nullsub_2135()                  <- same line
    name_rva = {}
    for dp, _, fs in os.walk(corpus_root):
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            for pat in (r"addr:\s*0x([0-9A-Fa-f]+)\s*\*/\s*[ \t]*"
                        r"[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(",
                        r"address:\s*0x([0-9A-Fa-f]+)[^*]*\*/\s*[ \t]*"
                        r"[A-Za-z_][\w \t\*]*?\b(\w+)\s*\("):
                for m in re.finditer(pat, text):
                    name_rva.setdefault(m.group(2), int(m.group(1), 16))

    print("corpus functions with a recorded address: %d" % len(name_rva))
    print()

    stats = {"AGREES": 0, "ARITY DIFFERS": 0, "RETURN DIFFERS": 0, "NO_DECLARATION_HERE": 0}
    interesting = []
    for name, rva in name_rva.items():
        theirs = by_rva.get(rva - 0x60000000 if rva >= 0x60000000 else rva)
        if theirs is None:
            continue
        tret, tparams = parse_decl(theirs["proto"])
        if tret is None:
            continue
        ours = decls.get(name)
        if ours is None:
            stats["NO_DECLARATION_HERE"] += 1
            continue
        oret, oparams_body = ours
        oret = re.sub(r"\b__\w*call\b", "", oret).strip()
        oparams = []
        if oparams_body.strip() and oparams_body.strip() != "void":
            oparams = [p.strip() for p in oparams_body.split(",")]
        if len(oparams) != len(tparams):
            stats["ARITY DIFFERS"] += 1
            interesting.append(("ARITY", name, rva, theirs["proto"],
                                "%s(%s)" % (oret, oparams_body)))
        elif norm_type(oret) != norm_type(tret) or norm_params(oparams) != norm_params(tparams):
            stats["RETURN DIFFERS"] += 1
            interesting.append(("RETURN", name, rva, theirs["proto"],
                                "%s(%s)" % (oret, oparams_body)))
        else:
            stats["AGREES"] += 1


    for k, v in stats.items():
        print("  %-20s %d" % (k, v))

    print()
    print("--- first 25 disagreements ---")
    for kind, name, rva, theirs, ours in interesting[:25]:
        print("  %s  RVA 0x%X  %s" % (kind, rva, name))
        print("     main.i64 : %s" % theirs[:96])
        print("     here     : %s" % ours[:96])
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
