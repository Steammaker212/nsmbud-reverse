"""Is the 'conflicting types' bucket really duplicate typedefs across headers?

The single failing unit pointed at a function prototype, but the note pointed at
nsmbudx_prototypes.h and the type itself is declared in several auto_*.h headers:

    auto_actors.h:63     typedef struct StageActor { ... } StageActor;
    auto_collision.h:71  typedef struct StageActor { ... } StageActor;
    auto_misc.h:187      typedef struct StageActor { ... } StageActor;
    auto_player.h:27     typedef struct StageActor { ... } StageActor;

If the generated per-group headers each define the same struct, then any unit that
includes two of them gets a redefinition, and clang reports the conflict at
whichever prototype it reaches first -- which is why the diagnostic names a
function rather than a type.

This measures that directly instead of trusting the example.
"""
from __future__ import annotations

import collections
import io
import re
from pathlib import Path

INC = Path("decompiled/src/include")

# typedef struct NAME { ... } NAME;   (single line, as the generator writes them)
TYPEDEF = re.compile(r"^\s*typedef\s+struct\s+(\w+)\s*\{[^}]*\}\s*(\w+)\s*;",
                     re.M)

defined_in = collections.defaultdict(list)
for p in sorted(INC.glob("*.h")):
    txt = io.open(p, encoding="utf-8", errors="replace").read()
    for m in TYPEDEF.finditer(txt):
        defined_in[m.group(2)].append(p.name)

dupes = {k: v for k, v in defined_in.items() if len(v) > 1}
print("types defined by a typedef in some header : %d" % len(defined_in))
print("types defined in MORE THAN ONE header    : %d" % len(dupes))
print()
print("most duplicated:")
for name, files in sorted(dupes.items(), key=lambda kv: -len(kv[1]))[:14]:
    print("  %-34s %d headers" % (name, len(files)))
    print("      %s" % ", ".join(files[:6]))

# How many corpus units include but one of the auto_ headers? If a unit pulls in
# two headers that both define a type, it is doomed regardless of its own code.
print()
print("=" * 74)
print("do units include more than one auto_*.h?")
print("=" * 74)

counts = collections.Counter()
for p in Path("decompiled/src").rglob("*.c"):
    txt = io.open(p, encoding="utf-8", errors="replace").read()
    auto = set(re.findall(r'#include\s+"(auto_\w+\.h)"', txt))
    counts[len(auto)] += 1

for k in sorted(counts):
    print("  %d auto_ header(s) included : %d units" % (k, counts[k]))
