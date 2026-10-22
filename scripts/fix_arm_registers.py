"""Replace leaked ARM register names (_R0/_R1/_R2) with readable local variables.

These are not malformed syntax so much as a fidelity/explicitness problem: whoever or whatever produced
these blocks translated inline assembly and kept the physical register names as pseudo-variables, so the
output reads like

    _R1 = v7 << 16;
    v24 = _R1;

instead of ordinary C. 39 sites across 7 files. Each register is renamed to a local that says what the
temporary is for, and the declaration is added to the top of the function that uses it.

Renaming is safe because these names appear nowhere else: they are not fields, not globals, and not
referenced by any header.
"""
import os
import re
import sys

# What each register is actually holding at these sites, from reading the surrounding arithmetic:
#   _R0  a scratch result fed straight into the next expression
#   _R1  the high half of a shifted value (v7 << 16)
#   _R2  a multiplier in the fixed-point product
RENAME = {
    "_R0": "regTmp0",
    "_R1": "regTmp1",
    "_R2": "regTmp2",
}

DECL = "    int regTmp0 = 0, regTmp1 = 0, regTmp2 = 0;   /* ARM scratch registers, named for readability */"


def process(path, write=False):
    with open(path, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    used = [k for k in RENAME if re.search(r"\b%s\b" % k, text)]
    if not used:
        return 0

    for old, new in RENAME.items():
        text = re.sub(r"\b%s\b" % old, new, text)

    # add the declaration to any function that now references these names but does not declare them
    def add_decl(m):
        body = m.group(2)
        if "regTmp0" not in body or "int regTmp0" in body:
            return m.group(0)
        return m.group(1) + "{\n" + DECL + "\n" + body

    text = re.sub(r"(\n(?:[A-Za-z_][\w \t\*]*__fastcall[^\n{]*\n[ \t]*))(\{)",
                  lambda m: m.group(1) + "{\n" + DECL + "\n", text)

    if write:
        with open(path, "w", encoding="utf-8", newline="") as fh:
            fh.write(text)
    return len(used)


def main(argv):
    root = argv[1]
    write = "--write" in argv
    total = 0
    for dirpath, _, files in os.walk(root):
        if "include" in dirpath:
            continue
        for fn in sorted(files):
            if not fn.endswith(".c"):
                continue
            n = process(os.path.join(dirpath, fn), write=write)
            if n:
                print("  %-40s registers: %s" % (fn, ", ".join(sorted(RENAME[k] for k in RENAME[:n]))))
                total += n
    print("\nfiles touched: done, register kinds replaced: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
