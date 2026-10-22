"""Remove symbols that our own subsdk implements, so the linker does not clobber them.

THE ERROR
=========
    Branch from 0x000182A0 to 0x1000182A0 is out of range (ARM B/BL can only
    reach +-32 MiB).

THE MECHANISM
=============
sweet-dx turns each .sym file into a linker script of ABSOLUTE assignments:

    modules/wisdom/lib/sym.ts  Sym.toLinker()
        `${name} = ${hexify(address - NSMBUDX_NSO_MEMORY_SIZE)}`

`hexify` of a negative number wraps to 32 bits, so a symbol at 0x182A0 becomes
`0x182A0 - 0xCD1000 = -13340000 = 0xFF3472A0`. That is harmless for symbols that are
merely *referenced* (the game's own code lives there). It is fatal for a symbol our
own subsdk *defines*, because the linker script's assignment overrides the definition:

    destiny = NSMBUDX_NSO_MEMORY_SIZE + symbol.value
            = 0xCD1000 + 0xFF3472A0
            = 0x1000182A0        <-- outside the +-32 MiB branch range

So the hook at 0x182A0 tried to branch to the wrapped address instead of to the copy
of Profile::get that our own profile.cpp actually compiles into subsdk0.

WHICH SYMBOLS
=============
Only the ones our code defines. `profile.cpp` (upstream sweet-dx's own file, which is
what implements the custom-profile support) defines the constructor and every
accessor. Our nsmbudx.sym must therefore NOT name those, or it steals them back.

The two that actually collided were:
    _ZN7ProfileC2EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj   (ctor,   0x17F6C)
    _ZN7Profile3getEj                                            (get,    0x182A0)

The accessors getPriority / getHasResources / getResourceCount / getResourceList /
getNumProfiles were already absent from our .sym, which is why only `get` and the
ctor tripped.

WHY NOT JUST EDIT Sym.toLinker?
===============================
That is third-party GPL code we do not vendor. Fixing it in our own .sym keeps the
toolchain untouched and the fix reproducible.

The symbols are kept in a separate reference file so the addresses are not lost.
"""
import io
import os
import re

SRC = r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\build\source"
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"

# Symbols our own subsdk implementation defines. Defining these in a .sym file makes
# the generated linker script point hooks at the GAME's address instead of our copy.
OWNED_BY_SUBSDK = [
    "_ZN7ProfileC2EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj",  # Profile::Profile 0x17F6C
    "_ZN7ProfileC1EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj",  # same, C1 spelling
    "_ZN7Profile3getEj",                                           # Profile::get     0x182A0
]

HEADER = """# nsmbudx.sym -- NSMBU Deluxe (Switch) symbol addresses
#
# Format: `name = 0xADDRESS;` where ADDRESS is an in-image address (VA - 0x60000000).
#
# IMPORTANT: do not list a symbol here if our own subsdk code defines it.
#
# sweet-dx converts every entry into an absolute linker-script assignment of
# `address - NSMBUDX_NSO_MEMORY_SIZE` (0xCD1000). For addresses below that offset the
# value wraps negative into 0xFFxxxxxx, and any hook on it then tries to branch to
# 0x100xxxxxx -- outside the +-32 MiB ARM branch range. We hit exactly that:
#
#     Branch from 0x000182A0 to 0x1000182A0 is out of range
#
# caused by listing Profile::get (0x182A0) and the Profile constructor (0x17F6C) here
# while profile.cpp compiles its own versions into subsdk0. Those two are removed; the
# addresses are preserved in symbols/nsmbudx_removed.sym for reference.
"""


def clean(path, outdir):
    if not os.path.isfile(path):
        print(f"  SKIP (absent): {path}")
        return
    removed = []
    kept = []
    with io.open(path, encoding="utf-8") as fh:
        for line in fh:
            s = line.split("#")[0].strip()
            m = re.match(r"^([^\s=]+)\s*=\s*(-?0x[0-9a-fA-F]+)\s*;?$", s)
            if m and m.group(1) in OWNED_BY_SUBSDK:
                removed.append((m.group(1), m.group(2), line.rstrip("\n")))
                continue
            kept.append(line.rstrip("\n"))

    os.makedirs(outdir, exist_ok=True)
    ref = os.path.join(outdir, "nsmbudx_removed.sym")
    with io.open(ref, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("# Symbol addresses removed from nsmbudx.sym.\n")
        fh.write("# These are DEFINED by our own subsdk code, so listing them in a .sym\n")
        fh.write("# file made the generated linker script override our definitions and\n")
        fh.write("# send hooks to a wrapped 0x100xxxxxx address outside branch range.\n")
        fh.write("# Kept here so the addresses are not lost.\n\n")
        for name, addr, _ in removed:
            fh.write(f"{name} = {addr};\n")

    with io.open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(HEADER)
        fh.write("\n")
        fh.write("\n".join(kept).lstrip("\n"))
        fh.write("\n")

    print(f"  cleaned: {path}")
    print(f"    removed {len(removed)} entry(ies):")
    for name, addr, _ in removed:
        short = name[:64] + ("..." if len(name) > 64 else "")
        print(f"      {addr}  {short}")
    print(f"    reference written: {ref}")
    return len(removed)


for root, name in ((SRC, "build"), (REPO, "repo")):
    print(f"\n=== {name} ===")
    clean(os.path.join(root, "symbols", "nsmbudx.sym"),
          os.path.join(root, "symbols"))
