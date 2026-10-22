"""Rewrite subscripted data labels to their pointer-form macro.

THE PROBLEM
-----------
gen_data_header.py declares each data label as a VALUE:

    #define dword_60AF4C90 (*(int32_t *)(uintptr_t)(0x60000000u + 0x60AF4C90u))

That is right for `x = dword_60AF4C90;`, but the corpus also indexes these labels 2,478 times:

    *((_DWORD *)a1 + 1723) = dword_60AF4C90[*((_DWORD *)a1 + 1723) - 8];

`dword_60AF4C90[...]` expands to a subscript of an `int32_t` lvalue, which clang rejects with
"subscripted value is not an array, pointer, or vector". A single macro cannot be both a scalar and
an array.

THE FIX. The header now also emits a pointer form for every label:

    #define arr_dword_60AF4C90 ((int32_t *)(uintptr_t)(0x60000000u + 0x60AF4C90u))

and this script rewrites ONLY the subscripted uses to that spelling. The unsubscripted uses keep the
plain name, so both spellings remain, each meaning exactly what it says, and both still resolve to
the same address.

Scope and safety:
  * comments and string literals are left untouched;
  * an occurrence already written `arr_...` is skipped, so the rewrite is idempotent;
  * only the known IDA data-label prefixes are considered.

Usage:
    python scripts/fix_array_data_macros.py <dir> [--write]
"""
import os
import re
import sys

PREFIX = r"(?:dword|unk|byte|word|qword|flt|dbl|off)_[0-9A-Fa-f]{6,8}"

# A label immediately followed by `[`. The lookbehind skips names already in pointer form.
SUBSCRIPTED = re.compile(r"(?<!arr_)\b(" + PREFIX + r")(\s*\[)")


def split_code_mask(text):
    """Yield (is_code, chunk) so comments and strings are never rewritten."""
    i = 0
    n = len(text)
    start = 0
    while i < n:
        if text.startswith("/*", i):
            if i > start:
                yield True, text[start:i]
            j = text.find("*/", i + 2)
            j = n if j < 0 else j + 2
            yield False, text[i:j]
            i = start = j
        elif text.startswith("//", i):
            if i > start:
                yield True, text[start:i]
            j = text.find("\n", i)
            j = n if j < 0 else j
            yield False, text[i:j]
            i = start = j
        elif text[i] == '"' or text[i] == "'":
            if i > start:
                yield True, text[start:i]
            q = text[i]
            j = i + 1
            while j < n:
                if text[j] == "\\":
                    j += 2
                    continue
                if text[j] == q:
                    j += 1
                    break
                j += 1
            yield False, text[i:j]
            i = start = j
        else:
            i += 1
    if start < n:
        yield True, text[start:]


def transform(text):
    out = []
    changed = 0
    for is_code, chunk in split_code_mask(text):
        if is_code:
            new, k = SUBSCRIPTED.subn(lambda m: "arr_" + m.group(1) + m.group(2), chunk)
            changed += k
            out.append(new)
        else:
            out.append(chunk)
    return "".join(out), changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_array_data_macros.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    touched = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()
            new, k = transform(text)
            if k:
                touched += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("subscripted data labels rewritten: %d in %d files%s"
          % (total, touched, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
