"""Apply main.i64's prototypes to the corpus's own declarations, by RVA.

Purpose: the remaining parse failures are arity and return-type errors. main.i64 holds 7,050 real
prototypes recovered by the credited prior work, and where its prototype disagrees with ours the
prototype is the better evidence -- it was produced with IDA's decompiler type propagation against this
same image, and it is what the function actually takes.

Only ADOPTS where the comparison says the prototypes disagree. Never invents: if main.i64 has no
prototype for a function, nothing is written.

Rewrites the signature line in place, e.g.

    /* ---- addr: 0x6014B9E8 */ int __fastcall CollisionMgr_init(int result, int a2, ...)
    ->
    /* ---- addr: 0x6014B9E8 */ void __fastcall CollisionMgr_init(CollisionMgr *result,
                                     StateActor *owner, CollisionMgr_Sensor *blowSensor, ...)

Parameter names on our side are KEPT when the arity is unchanged, because they carry information the
imported prototype lacks (`a1` tells a reader nothing, `result` does). The TYPE of each parameter is
replaced.

Usage: apply_protos_from_main.py <repo-root> [--write] [--limit N]
"""
import json
import os
import re
import sys

RICH = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main_i64_rich.json"


def parse_decl(sig):
    sig = sig.strip()
    m = re.match(r"^(.*?)\s*__fastcall\s*\((.*)\)\s*$", sig)
    if not m:
        m = re.match(r"^(.*?)\s*\((.*)\)\s*$", sig)
    if not m:
        return None, None
    ret = re.sub(r"\b__\w*call\b", "", m.group(1)).strip()
    body = m.group(2).strip()
    params = []
    if body and body != "void":
        depth, cur = 0, ""
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


def split_ptype(p):
    """'CollisionMgr *blowSensor' -> ('CollisionMgr *', 'blowSensor'); ('int', None) when no name."""
    m = re.search(r"([A-Za-z_]\w*)\s*$", p)
    if not m:
        return p.strip(), None
    name = m.group(1)
    if name in ("int", "char", "short", "long", "float", "double", "void", "bool",
                "_BYTE", "_WORD", "_DWORD", "_QWORD", "unsigned", "signed"):
        return p.strip(), None
    head = p[:m.start()].strip()
    if not head:
        return p.strip(), None
    return head, name


def known_types(headers_dir):
    """Type names the corpus headers actually define or forward-declare.

    WHY THIS EXISTS: adopting a prototype that names `StateBase *` when no header has ever declared
    `StateBase` turns a working translation unit into "unknown type name". The first adoption attempt
    did exactly that and took the corpus 457 -> 452. A prototype is only usable here if every type it
    mentions is already nameable at the point the declaration is emitted.
    """
    import glob
    names = set()
    prelude = os.path.join(headers_dir, "nsmbudx_prelude.h")
    reachable = None
    if os.path.exists(prelude):
        with open(prelude, encoding="utf-8", errors="replace") as fh:
            reachable = set(re.findall(r'#include\s+"([^"]+)"', fh.read()))
    for path in glob.glob(os.path.join(headers_dir, "*.h")):
        base = os.path.basename(path)
        if reachable is not None and base not in reachable:
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        names.update(re.findall(r"\bstruct\s+(\w+)\s*;", text))
        names.update(re.findall(r"^\s*\}\s*(\w+)\s*;", text, re.M))
        names.update(re.findall(r"\btypedef\s+[^;]*?\b(\w+)\s*;", text))
        names.update(re.findall(r"^\s*typedef\s+struct\s+(\w+)", text, re.M))
    # C builtins and the decompiler's primitive aliases are always nameable
    names.update({"int", "char", "short", "long", "float", "double", "void", "bool",
                  "_BYTE", "_WORD", "_DWORD", "_QWORD", "__int8", "__int16", "__int32",
                  "__int64", "unsigned", "signed", "size_t", "uint8_t", "uint16_t",
                  "uint32_t", "uint64_t", "int8_t", "int16_t", "int32_t", "int64_t"})
    return names


def types_in(t):
    """Every identifier in `t` that looks like a type, to check against known_types()."""
    t = re.sub(r"\b(int|char|short|long|float|double|void|bool|unsigned|signed|const|volatile|"
               r"struct|enum|union|_BYTE|_WORD|_DWORD|_QWORD|__int8|__int16|__int32|__int64)\b",
               " ", t)
    t = re.sub(r"\b(?:a\d+|this|result)\b", " ", t)
    return set(re.findall(r"\b([A-Za-z_]\w*)\b", t))


def main(argv):
    repo = argv[1]
    write = "--write" in argv
    limit = None
    if "--limit" in argv:
        limit = int(argv[argv.index("--limit") + 1])

    with open(RICH, encoding="utf-8") as fh:
        rich = json.load(fh)
    by_rva = {int(f["rva"]): f for f in rich["functions"] if f["proto"]}

    def lookup(addr):
        """The corpus records each function's ADDRESS, and those are ABSOLUTE VAs (0x60xxxxxx), while
        main.i64's `rva` field is relative. Looking up the VA directly in a dict keyed by rva found
        nothing at all and the first dry run reported '0 signatures rewritten' -- which reads like
        'they all agree' and is really 'I never compared any of them'."""
        if addr in by_rva:
            return by_rva[addr]
        if addr >= 0x60000000:
            return by_rva.get(addr - 0x60000000)
        return by_rva.get(addr + 0x60000000)

    # corpus: name -> (file, rva) from the address comments
    targets = {}
    for dp, _, fs in os.walk(os.path.join(repo, "decompiled")):
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
                    targets.setdefault(m.group(2), (path, int(m.group(1), 16)))

    KNOWN = known_types(os.path.join(repo, "decompiled", "include"))
    skipped_unknown = 0
    changed_files = 0
    changed_sigs = 0
    skipped_no_proto = 0
    for name, (path, rva) in sorted(targets.items()):
        theirs = lookup(rva)
        if theirs is None:
            skipped_no_proto += 1
            continue
        tret, tparams = parse_decl(theirs["proto"])
        if tret is None:
            continue

        # Skip any prototype naming a type the headers cannot see. An unnameable type turns a
        # parsing translation unit into "unknown type name"; this filter is what keeps the adoption
        # from being net-negative (the first attempt was 457 -> 452).
        needed = types_in(tret)
        for _p in tparams:
            needed |= types_in(_p)
        unknown = needed - KNOWN
        if unknown:
            skipped_unknown += 1
            continue

        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()

        # match our signature line for this function
        sig_pat = re.compile(
            r"(?P<pre>/\*\s*(?:-+\s*addr:|[^*]*address):\s*0x%X[^*]*\*/\s*)"
            r"(?P<ret>[A-Za-z_][\w \t\*]*?)\s*(?P<conv>__fastcall\s+)?(?P<name>%s)\s*\((?P<args>[^;{)]*)\)"
            % (rva, re.escape(name)))

        m = sig_pat.search(text)
        if not m:
            continue

        old_ret = m.group("ret").strip()
        old_args = m.group("args").strip()
        old_params = []
        if old_args and old_args != "void":
            old_params = [p.strip() for p in old_args.split(",")]

        our_ret = re.sub(r"\b__\w*call\b", "", old_ret).strip()

        # build the new signature, keeping our parameter names when the arity is unchanged
        new_ps = []
        if len(old_params) == len(tparams):
            for old_p, new_p in zip(old_params, tparams):
                _, old_name = split_ptype(old_p)
                new_type, new_name = split_ptype(new_p)
                keep = old_name or new_name
                new_ps.append(("%s %s" % (new_type, keep)).strip() if keep else new_type)
        else:
            new_ps = tparams

        # Normalise the emitted text. Two cosmetic faults the first dry run showed:
        #   `int *__cdecl __fastcall sInit_...`  -- main.i64 stores `int *__cdecl()`, and appending
        #                                           __fastcall gave the function two conventions
        #   `int * a4`                           -- inconsistent pointer spacing next to `int a1`
        # `\b__(?!fastcall)\w*call\b` did NOT match `__cdecl`: the lookahead only rejected a literal
        # "fastcall", but `\w*` then had to span "cdecl" starting right after "__", and `\b` before
        # "__" is satisfied while the alternation still consumed the wrong span. Strip the known set
        # explicitly instead of being clever.
        tret = re.sub(r"\b__(?:cdecl|stdcall|thiscall|pascal|vectorcall)\b", "", tret).strip()
        tret = re.sub(r"\s*\*\s*", " *", tret).strip()
        new_ps = [re.sub(r"\s*\*\s*", " *", p).strip() for p in new_ps]
        if not tret:
            tret = "int"
        new_sig = "%s __fastcall %s(%s)" % (tret, name, ", ".join(new_ps))
        old_sig = "%s %s(%s)" % (old_ret, name, old_args)

        if new_sig == old_sig:
            continue

        text = text[:m.start()] + m.group("pre") + new_sig + text[m.end():]
        if write:
            with open(path, "w", encoding="utf-8", newline="") as fh:
                fh.write(text)
        changed_sigs += 1
        changed_files += 1
        if limit and changed_sigs >= limit:
            break
        if changed_sigs <= 20:
            print("  %-34s" % name)
            print("     was : %s" % old_sig[:104])
            print("     now : %s" % new_sig[:104])

    print()
    print("signatures rewritten : %d (write=%s)" % (changed_sigs, write))
    print("corpus fns with no main.i64 prototype (left alone): %d" % skipped_no_proto)
    print("skipped: prototype names a type no header declares: %d" % skipped_unknown)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
