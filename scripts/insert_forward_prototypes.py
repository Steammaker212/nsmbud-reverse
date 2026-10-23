"""Insert forward prototypes into a recovered translation unit.

C treats a call to an undeclared function as an implicit `int` declaration. When the real definition appears later in
the same file -- `unsigned int __fastcall sub_607C0FB4(_DWORD *a1)` -- clang reports "conflicting types". The corpus
solved this per-file with forward declarations; the recovered units were merged without them.

This inserts one prototype per function definition, immediately after the includes, preserving each definition's own
return type and calling convention. It is idempotent: an already-present prototype is not added twice.
"""
import os
import re
import sys


def top_level_definitions(text):
    """Yield (return_type_with_conv, name, params) for each top-level definition."""
    out = []
    pat = re.compile(r"(?m)^([A-Za-z_][\w \t\*]*?(?:\s+__\w+)?)\s+([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\n?\s*\{")
    for m in pat.finditer(text):
        ret = m.group(1).strip()
        name = m.group(2)
        params = " ".join(m.group(3).split())
        out.append((ret, name, params))
    return out


def main(argv):
    write = "--write" in argv
    targets = argv[1:] if len(argv) > 1 and not argv[1].startswith("--") else [
        r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\recovered\recovered_named.c",
        r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\recovered\recovered_missing.c",
    ]
    for p in targets:
        if not os.path.exists(p):
            continue
        t = open(p, encoding="utf-8", errors="replace").read()
        defs = top_level_definitions(t)
        # which names are called before their definition?
        needed = []
        for ret, name, params in defs:
            first_def = t.find(name + "(")
            m = re.search(r"\b%s\s*\(" % re.escape(name), t)
            call = re.search(r"\b%s\s*\(" % re.escape(name), t)
            if not call:
                continue
            # is there a use before the definition line?
            def_pos = t.find(re.search(r"(?m)^[A-Za-z_][\w \t\*]*?(?:\s+__\w+)?\s+%s\s*\(" % re.escape(name), t).group(0))
            uses = [mm.start() for mm in re.finditer(r"\b%s\s*\(" % re.escape(name), t)]
            if uses and min(uses) < def_pos:
                # Emit an EMPTY parameter list, not the definition's own. The corpus has many functions whose
                # call sites disagree with their definition's arity (the decompiler recorded extra parameters at
                # some calls), and a full prototype re-enables arity checking at every one of them: inserting the
                # definition's parameters immediately produced "too many arguments to function call" errors.
                # `()` means "unspecified arguments" in C and permits all of them, which is what the corpus's own
                # relax_all_decls.py does for the same reason.
                needed.append("%s %s();" % (ret, name))
        needed = sorted(set(needed))
        print("  %-30s definitions %4d  needing a prototype %3d" % (os.path.basename(p), len(defs), len(needed)))
        if write and needed:
            lines = t.split("\n")
            idx = max(i for i, l in enumerate(lines) if l.startswith("#include") or l.strip().startswith("/*") is False and l.startswith("#"))
            block = ("\n/* Forward prototypes. A call before the definition would otherwise be an implicit `int`\n"
                     " * declaration, and the later real definition then conflicts with it. */\n"
                     + "\n".join(needed) + "\n")
            lines.insert(idx + 1, block)
            open(p, "w", encoding="utf-8", newline="").write("\n".join(lines))
            print("    inserted")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
