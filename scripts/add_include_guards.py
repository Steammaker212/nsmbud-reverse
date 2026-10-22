"""Add include guards to the generated headers that lack them.

Six headers had no guard:

    actors.h  libs.h  player.h  powerup.h  systems.h  structs.h  nsmbudx_recovered_types.h

Any translation unit that reaches one of these twice -- directly and through the prelude, say -- gets every
declaration and every struct definition a second time. For structs that is a hard "redefinition" error, and for
the prototype headers it makes identical declarations look like conflicting ones, which is why

    libs.c:112  int __fastcall sub_6082B1CC(struct nn_oe *a1);
    libs.h:546  int __fastcall sub_6082B1CC(struct nn_oe *a1);   /* identical text */

was reported as a type conflict.
"""
import os
import re

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include"


def main():
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        p = os.path.join(INC, fn)
        t = open(p, encoding="utf-8", errors="replace").read()
        if re.search(r"#ifndef\s+\w+", t):
            continue
        guard = "NSMBUDX_" + re.sub(r"[^A-Za-z0-9]", "_", fn).upper()
        body = t.rstrip("\n")
        new = ("#ifndef %s\n#define %s\n\n" % (guard, guard)) + body + \
              ("\n\n#endif /* %s */\n" % guard)
        open(p, "w", encoding="utf-8", newline="\n").write(new)
        print("  guard added: %-28s %s" % (fn, guard))


if __name__ == "__main__":
    main()