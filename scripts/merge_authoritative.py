"""Merge authoritative re-decompilations back into the merged corpus.

The merged corpus has 56 functions whose bodies are TRUNCATED (verified: their gotos have no label of their
own, after labels were qualified per function). `decompiled/authoritative/*.c` holds complete fresh Hex-Rays
output for 26 of them.

A fresh decompilation is self-contained: every local is declared inside the function, so replacing the whole
function -- signature line through closing brace -- is safe without touching anything around it.

Labels in the fresh output are still plain `LABEL_N` and must be qualified with the owning function name, or
merging would reintroduce exactly the collision that `qualify_labels.py` just removed.

Matched by function NAME, which is unique within a file and present in both the corpus header comment and the
authoritative file's signature.

Usage: merge_authoritative.py <decompiled-root> [--write] [--only sub_60037BB0]
"""
import os
import re
import sys

FUNC_HDR = re.compile(r"/\* =+\s*\n \* (\S+)\s*\n \* RVA 0x([0-9A-Fa-f]+)")
LABEL_TOKEN = re.compile(r"\bLABEL_(\d+)\b")


def sanitise(name):
    return re.sub(r"[^A-Za-z0-9_]", "_", name)


def load_authoritative(auth_dir):
    """name -> (rva, source text). A file may hold one function; take its first definition."""
    out = {}
    for fn in sorted(os.listdir(auth_dir)):
        if not fn.endswith(".c"):
            continue
        with open(os.path.join(auth_dir, fn), encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        m = re.search(r"^([A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;]*?\))\s*\n\{", text, re.M)
        if not m:
            continue
        name = m.group(2)
        rva = None
        rv = re.search(r"RVA 0x([0-9A-Fa-f]+)", text)
        if rv:
            # The authoritative files carry an ABSOLUTE VA (0x60037bb0) while the merged corpus header
            # comments carry an RVA (0x37bb0). Comparing them directly matched nothing: 6 of 26 files were
            # skipped, and the ones that matched did so only by NAME falling back.
            rva = int(rv.group(1), 16)
            if rva >= 0x60000000:
                rva -= 0x60000000
        else:
            # Fall back to the filename, which is sub_XXXXXXXX.c and holds an ABSOLUTE VA
            # (sub_60037BB0 -> 0x60037BB0). The conversion to RVA has to happen HERE too: the `RVA 0x...`
            # header comment does not exist in these generated files, so every one of them took this
            # branch and kept a VA, and the RVA comparison then matched nothing.
            f = re.search(r"sub_([0-9A-Fa-f]{6,8})", fn)
            if f:
                rva = int(f.group(1), 16)
                if rva >= 0x60000000:
                    rva -= 0x60000000
        out[name] = (rva, text, m.start(1))
    return out


def extract_function(text, sig_start):
    """Return (signature_line, whole_function_text) for the definition starting at sig_start."""
    brace = text.index("{", sig_start)
    depth = 0
    i = brace
    while i < len(text):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                return text[sig_start:i + 1]
        i += 1
    return None                     # unbalanced source


def main(argv):
    root = argv[1]
    write = "--write" in argv
    only = None
    if "--only" in argv:
        only = argv[argv.index("--only") + 1]

    auth_dir = os.path.join(root, "authoritative")
    auth = load_authoritative(auth_dir)
    print("authoritative functions loaded: %d" % len(auth))

    replaced = 0
    files_touched = 0
    skipped = []

    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            original = text
            marks = [(m.start(), m.group(1), m.group(2)) for m in FUNC_HDR.finditer(text)]

            # walk backwards so earlier offsets stay valid while replacing
            for idx in range(len(marks) - 1, -1, -1):
                start, name, rva_s = marks[idx]
                # Match by RVA, not name: several renamed functions in this corpus have a
                # different name from the sub_<rva> filename, e.g. 0x78F32C is Player_animSetCarry_load
                # here. Matching by name silently skipped 6 of 26 authoritative files.
                key = None
                rva = int(rva_s, 16)
                for aname, (arva, _t, _s) in auth.items():
                    if arva is not None and arva == rva:
                        key = aname
                        break
                if key is None and name in auth:
                    key = name
                if key is None:
                    continue
                if only and (key != only and name != only):
                    continue
                end = marks[idx + 1][0] if idx + 1 < len(marks) else len(text)
                body = text[start:end]

                _, auth_text, sig_start = auth[key]
                func = extract_function(auth_text, sig_start)
                if func is None:
                    skipped.append((name, "unbalanced authoritative source"))
                    continue

                # qualify labels with the owning function so jumps stay local and collisions cannot return
                prefix = sanitise(name)      # corpus name keeps labels aligned with existing gotos
                func_q = LABEL_TOKEN.subn(lambda m: "%s__LABEL_%s" % (prefix, m.group(1)), func)[0]

                # keep the corpus header comment, replace everything after it
                hdr_end = body.find("*/")
                header = body[:hdr_end + 2]
                new_body = header + "\n  " + func_q + "\n\n"
                text = text[:start] + new_body + text[end:]
                replaced += 1
                if replaced <= 12:
                    print("  %-24s replaced in %-26s (+%d bytes)"
                          % (name, fn, len(new_body) - len(body)))

            if text != original:
                files_touched += 1
                if write:
                    with open(path, "w", encoding="utf-8", newline="") as fh:
                        fh.write(text)

    print()
    print("functions replaced: %d in %d file(s) (write=%s)" % (replaced, files_touched, write))
    for name, why in skipped:
        print("  skipped %s: %s" % (name, why))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
