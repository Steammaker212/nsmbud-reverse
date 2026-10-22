"""Bring the corpus headers up to date in the right order.

The individual fixers each solve one class of error, and several depend on the others: sync_decls.py exposes
the next undeclared identifier, gen_data_symbols.py needs nsmbudx_data.h to exist, and
fix_subscripted_symbols.py needs the data header's scalar+array pairs. Running them by hand after every
`git checkout` is how work got lost twice, so the order lives here.

Run:
    python scripts/refresh_headers.py            # apply
    python scripts/refresh_headers.py --dry-run  # report only
"""
import os
import re
import subprocess
import sys

REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
INC = os.path.join(REPO, "decompiled", "include")
TYPES = os.path.join(INC, "nsmbudx_types.h")
PRELUDE = os.path.join(INC, "nsmbudx_prelude.h")

# Named data symbols Hex-Rays emits by name. Addresses come from sweetdx/symbols/nsmbudx.sym, so they are
# looked up rather than typed in; only symbols actually present in the .sym file are emitted.
INSTANCE_RE = re.compile(r"\b([A-Za-z_]\w*_instance)\b")
SYM_LINE = re.compile(r"(\w+)\s*=\s*(0x[0-9A-Fa-f]+);")


def instance_defines():
    root = os.path.join(REPO, "decompiled")
    used = set()
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in names:
            if fn.endswith(".c"):
                with open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace") as fh:
                    used |= set(INSTANCE_RE.findall(fh.read()))
    sym_path = os.path.join(REPO, "sweetdx", "symbols", "nsmbudx.sym")
    if not os.path.exists(sym_path):
        return [], sorted(used)
    with open(sym_path, encoding="utf-8", errors="replace") as fh:
        addrs = dict(SYM_LINE.findall(fh.read()))
    lines = []
    unresolved = []
    for name in sorted(used):
        addr = addrs.get(name)
        if addr is None:
            unresolved.append(name)
            continue
        val = int(addr, 16)
        # nsmbudx.sym stores RVAs ("Addresses are in-image addresses (VA - 0x60000000)"), not VAs.
        # The first version required >= 0x60000000 and therefore rejected every single entry.
        if val < 0x60000000:
            val += 0x60000000
        if not (0x60000000 <= val < 0x61000000):
            unresolved.append(name)
            continue
        lines.append("#define %-30s (MEMORY[0x%08X / 4])" % (name, val - 0x60000000))
    return lines, unresolved


def patch_types_header():
    with open(TYPES, encoding="utf-8") as fh:
        text = fh.read()
    # Idempotent: strip a previously generated block INCLUDING nothing else. The first version cut at the
    # marker and appended the new block AFTER the closing #endif had been dropped, leaving the header with an
    # unterminated #ifndef and breaking all 475 translation units.
    marker = "/* ---- named data symbols"
    if marker in text:
        start = text.index(marker)
        end = text.find("#endif /* NSMBUDX_TYPES_H */", start)
        if end != -1:
            text = text[:start] + text[end:]
        else:
            text = text[:start].rstrip() + "\n#endif /* NSMBUDX_TYPES_H */\n"
    lines, unresolved = instance_defines()
    block = ("/* ---- named data symbols that Hex-Rays referenced by name but never declared ----\n"
             " *\n"
             " * The symbol file records these addresses; other translation units reach the same storage as\n"
             " * MEMORY[<offset>]. Hex-Rays emitted the NAME in some places and the raw offset in others, so the\n"
             " * name has to exist or those units do not compile. Only symbols present in the .sym file are\n"
             " * emitted -- nothing is guessed.\n"
             " */\n"
             + "\n".join(lines) + "\n\n")
    text = text.replace("#endif /* NSMBUDX_TYPES_H */", block + "#endif /* NSMBUDX_TYPES_H */")
    with open(TYPES, "w", encoding="utf-8", newline="") as fh:
        fh.write(text)
    return len(lines), unresolved


def run(args):
    r = subprocess.run([sys.executable] + args, capture_output=True, text=True)
    tail = (r.stdout or "").strip().splitlines()
    return r.returncode, tail[-1] if tail else ""


def main():
    dry = "--dry-run" in sys.argv
    if dry:
        n, unres = instance_defines()
        print("instance defines available: %d, unresolved: %d %s" % (n, len(unres), unres))
        return 0

    n, unres = patch_types_header()
    print("types header: %d named data symbol(s) declared" % n)
    if unres:
        print("  unresolved (no address in .sym, NOT invented): %s" % ", ".join(unres))

    # the data-symbol header must exist before sync_decls can resolve what it references
    rc, tail = run([os.path.join(REPO, "scripts", "gen_data_symbols2.py"),
                    os.path.join(REPO, "decompiled"), "--write"])
    print("data symbols header: %s" % tail)

    rc, tail = run([os.path.join(REPO, "scripts", "fix_subscripted_symbols.py")])
    print("subscripted symbols: %s" % tail)

    rc, tail = run([os.path.join(REPO, "scripts", "sync_decls.py"),
                    "--all", os.path.join(REPO, "decompiled"), "--write"])
    print("declarations: %s" % tail)

    # Order matters: the forward-declaration block is REBUILT from the definitions, so it runs BEFORE the
    # arity relaxer. Running the other way round re-emits full prototypes over the relaxed ones from the
    # previous pass, and the arity errors come straight back.
    rc, tail = run([os.path.join(REPO, "scripts", "gen_forward_decls.py"),
                    os.path.join(REPO, "decompiled"), "--write"])
    print("forward declarations: %s" % tail)

    rc, tail = run([os.path.join(REPO, "scripts", "relax_arity2.py")])
    print("arity relaxation: %s" % tail)

    rc, tail = run([os.path.join(REPO, "scripts", "fix_bare_neon.py")])
    print("bare NEON: %s" % tail)
    return 0


if __name__ == "__main__":
    sys.exit(main())
