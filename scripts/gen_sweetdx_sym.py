#!/usr/bin/env python3
"""Generate a SweetDX-compatible symbols/nsmbudx.sym from our IDB inventory.

SweetDX .sym format (modules/wisdom/lib/sym.ts):
    name = 0xADDRESS;        # '#' comments; trailing ';' optional
    - name must not contain whitespace or '='
    - addresses are NSMBUDX *in-image addresses* (VA - 0x60000000), because
      Sym.toLinker subtracts NSMBUDX_NSO_MEMORY_SIZE (0xCD1000) to place
      subsdk0's view of them.
    - addresses must be >= 0; duplicates are a hard error.

Rules applied here:
  * drop anything whose RVA >= 0x00CD1000 (outside the image; unlinkable)
  * drop IDA-local junk and names that would not survive a symbol name check
  * apply our verified name corrections (see CODEDX_REFERENCE.md)
  * prefer codedx's canonical spelling where the two agree on address
  * refuse to emit duplicate names (case-sensitive, as sweet-dx is)
"""
import json
import os
import re
import sys

IDB = 0x60000000
NSO_MEM = 0x00CD1000

FUNCS = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_all.json"
CODEX_SYM = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\main.sym"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\symbols\nsmbudx.sym"

# Verified corrections: our IDB name -> canonical name (see CODEDX_REFERENCE.md)
RENAMES = {
    "_ZN10StageActor18directionToPlayerXERK4Vec2": "_ZN10StageActor18directionToPlayerHERK4Vec3",
    "_ZN10StageActor18directionToPlayerYERK4Vec2": "_ZN10StageActor18directionToPlayerVERK4Vec3",
    "_ZN10StageActor9befreDrawEv": "_ZN10StageActor10beforeDrawEv",
    "_ZN5Enemy4vfD0Ev": "_ZN5Enemy6freezeEv",
}

# IDA bookkeeping we never want in a linker script
DROP_PATTERNS = [
    re.compile(r"^sub_"),          # unnamed
    re.compile(r"^loc_"),
    re.compile(r"^byte_"),         # data, often unnamed
    re.compile(r"^dword_"),
    re.compile(r"^word_"),
    re.compile(r"^qword_"),
    re.compile(r"^unk_"),
    re.compile(r"^stru_"),
    re.compile(r"^off_"),
    re.compile(r"^asc_"),
    re.compile(r"^algn_"),
    re.compile(r"^def_"),
    re.compile(r"^j_"),            # tail-call thunks
    re.compile(r"^nullsub_"),
    re.compile(r"^nullsub"),
    re.compile(r"@"),              # IDA versioned names contain '@'
    re.compile(r"\.part\."),
    re.compile(r"\.cold"),
    re.compile(r"\$"),
    re.compile(r"^_?ida_"),
    # ---- crt0's OWN labels. These are the documented cause of the DT_INIT fault, see
    # sweetdx/docs/SUBSDK0_DT_INIT_ROOT_CAUSE.md. `_init` and `_fini` exist in the MAIN executable at
    # 0x24 and 0x218, but they are ALSO labels crt0.s defines for subsdk0 itself. sweet-dx's
    # toLinker() subtracts the module load offset from every symbol it is given, so emitting them
    # produces
    #       0x24 - 0xCD1000 = 0xff32f024
    # and the linker writes that as DT_INIT. At load the dynamic linker branches to 0xff32f024, which is
    # outside the module, so initialisation runs into unmapped memory. The earlier symptom was black
    # and missing models; the observed symptom now is a crash on boot. Either way the cause is the same
    # and the fix is to never hand these names to the linker.
    re.compile(r"^_(init|fini|start|end|edata|etext|bss_start|init_array_start|init_array_end)$"),
    re.compile(r"^__(init|fini)_array(_start|_end)?$"),
    re.compile(r"^_DYNAMIC$"),
    re.compile(r"^_GLOBAL_OFFSET_TABLE_$"),
]

VALID_NAME = re.compile(r"^[A-Za-z_.$][A-Za-z0-9_.$]*$")


def load_ours():
    d = json.load(open(FUNCS, encoding="utf-8"))
    out = []
    for r in d["data"]:
        va = int(r["address"], 16)
        out.append((r["name"], va - IDB))
    return out


def load_codedx():
    pat = re.compile(r"^([^\s=]+)\s*=\s*(-?0x[0-9a-fA-F]+)\s*;?$", re.I)
    out = {}
    if not os.path.exists(CODEX_SYM):
        return out
    for line in open(CODEX_SYM, encoding="utf-8", errors="replace"):
        s = line.split("#")[0].strip()
        if not s:
            continue
        m = pat.match(s)
        if m:
            out[m.group(1)] = int(m.group(2), 16)
    return out


def main():
    ours = load_ours()
    codedx = load_codedx()

    kept, dropped_out_of_image, dropped_junk, dropped_dupe = [], 0, 0, 0
    seen = {}

    # codedx addresses win when they name the same slot (verified agreement)
    codedx_by_addr = {}
    for n, a in codedx.items():
        codedx_by_addr.setdefault(a, n)

    for name, rva in ours:
        if rva < 0 or rva >= NSO_MEM:
            dropped_out_of_image += 1
            continue
        if any(p.search(name) for p in DROP_PATTERNS):
            dropped_junk += 1
            continue
        name = RENAMES.get(name, name)
        if not VALID_NAME.match(name):
            dropped_junk += 1
            continue
        if name in seen:
            # same name twice: keep the lower address, it is the real entry
            dropped_dupe += 1
            if rva >= seen[name]:
                continue
        seen[name] = rva
        kept.append((name, rva))

    # rebuild de-duplicated list
    final = {}
    for name, rva in kept:
        final[name] = rva
    for name, rva in codedx.items():
        if rva >= NSO_MEM:
            continue
        if name in final:
            continue
        if any(p.search(name) for p in DROP_PATTERNS):
            continue
        if not VALID_NAME.match(name):
            continue
        if name in seen and seen[name] < rva:
            continue
        final[name] = rva

    os.makedirs(os.path.dirname(OUT), exist_ok=True)

    order = sorted(final.items(), key=lambda kv: (kv[1], kv[0]))
    with open(OUT, "w", encoding="utf-8", newline="\n") as f:
        f.write("# nsmbudx.sym -- symbols for New Super Mario Bros. U Deluxe v1.0.0\n")
        f.write("# Generated from the nsmbud-reverse IDB inventory.\n")
        f.write("#\n")
        f.write("# SweetDX format: 'name = 0xADDRESS;'  ('#' starts a comment)\n")
        f.write("# Addresses are in-image addresses (VA - 0x60000000) and are\n")
        f.write("# strictly below NSMBUDX_NSO_MEMORY_SIZE (0x00CD1000).\n")
        f.write("#\n")
        f.write(f"# symbols: {len(order)}\n")
        f.write("#\n")
        f.write("# Name corrections applied (verified against disassembly):\n")
        for old, new in RENAMES.items():
            f.write(f"#   {old}\n#     -> {new}\n")
        f.write("\n")
        last = None
        for name, rva in order:
            # blank line between address clusters for readability
            if last is not None and rva - last > 0x2000:
                f.write("\n")
            f.write(f"{name} = 0x{rva:08X};\n")
            last = rva

    print(f"wrote {OUT}")
    print(f"  emitted          : {len(order)}")
    print(f"  dropped (outside): {dropped_out_of_image}")
    print(f"  dropped (junk)   : {dropped_junk}")
    print(f"  dropped (dupe)   : {dropped_dupe}")

    # validate as sweet-dx would
    txt = open(OUT, encoding="utf-8").read()
    pat = re.compile(r"^([^\s=]+)\s*=\s*(-?0x[0-9a-fA-F]+)\s*;?$", re.I)
    seen2 = set()
    n_ok = 0
    for i, line in enumerate(txt.split("\n"), 1):
        s = line.split("#")[0].strip()
        if not s:
            continue
        m = pat.match(s)
        if not m:
            print(f"  PARSE FAIL line {i}: {line!r}")
            return 1
        nm, hx = m.group(1), m.group(2)
        a = int(hx, 16)
        if a < 0:
            print(f"  NEGATIVE line {i}")
            return 1
        if nm in seen2:
            print(f"  DUPLICATE line {i}: {nm}")
            return 1
        seen2.add(nm)
        n_ok += 1
    print(f"  validated        : {n_ok} symbols parse, no duplicates, none negative")
    return 0


if __name__ == "__main__":
    sys.exit(main())
