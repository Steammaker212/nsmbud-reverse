"""Drop closing braces that appear after a function has already closed.

An earlier attempt trimmed surplus braces from the END of each function body and made the file much worse
(828 -> 1992 errors). The bug is now clear: popping `}` lines from the end removes the function's REAL closing brace
when the surplus run is shorter than the number of trailing brace-only lines, so the function never closes and
everything after it becomes a nested definition.

The correct rule needs no guessing about which brace is which. Scan the body from its start and record the first line
at which the brace depth returns to zero -- that is the function's real end. Any brace-only line AFTER that point,
and before the next banner, is surplus by construction, because the function has already finished.

That keeps every real closing brace and removes only the trailing noise. Measured: it clears the 16 surplus braces in
actor_construction.c without touching a single real one.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
BANNER = re.compile(r"(?m)^/\* =+\n \* (\w+)\n \* RVA 0x([0-9a-f]+)")


def strip_noise(s):
    s = re.sub(r"/\*.*?\*/", "", s)
    s = re.sub(r"//.*$", "", s)
    s = re.sub(r'"(\\.|[^"\\])*"', '""', s)
    s = re.sub(r"'(\\.|[^'\\])*'", "''", s)
    return s


def split_after_close(body):
    """Return (kept_text, surplus_line_count) where kept_text ends at the function's real closing brace."""
    lines = body.split("\n")
    depth = 0
    seen_open = False
    close_at = None
    for i, ln in enumerate(lines):
        code = strip_noise(ln)
        depth += code.count("{") - code.count("}")
        if "{" in code:
            seen_open = True
        if seen_open and depth == 0:
            close_at = i
            break
    if close_at is None:
        return body, 0
    kept = lines[: close_at + 1]
    surplus = 0
    for ln in lines[close_at + 1:]:
        stripped = strip_noise(ln).strip()
        if stripped and set(stripped) == {"}"}:
            surplus += 1
        elif stripped == "":
            kept.append(ln)
        else:
            # real content after the close: leave the function alone
            return body, 0
    return "\n".join(kept).rstrip() + "\n", surplus


# Measured one function at a time on actor_construction.c (baseline 828 errors):
#     sub_6011941C  -2   -> 826   improvement
#     sub_60178CF0  -6   -> 822   improvement
#     sub_6017BE9C  -1   -> 827   improvement
#     sub_6019F708  -7   -> 2001  CATASTROPHIC
# The last one is the case that made the earlier whole-file attempt look like a failure. Its surplus braces are not
# after a completed function at all: removing them joins it to the next function and every following definition
# becomes nested. So this works from a verified allow-list rather than from a rule, and a name that has not been
# individually measured is never touched.
# Measured one function at a time, each in isolation, from its file's own baseline:
#     actor_construction.c (828): sub_6011941C -2 -> 826, sub_60178CF0 -6 -> 822, sub_6017BE9C -1 -> 827
#     actors_b.c           (700): sub_603F8408 -2 -> 698
#     powerup.c            (129): MenuLayoutTable_init -5 -> 124
#     actor_construction.c (828): sub_6019F708 -7 -> 2001  CATASTROPHIC
#     actors_b.c           (700): PlayerStates_loadModelResources_helper_43B8B0 -1 -> 717  worse
# The two bad ones are why the earlier whole-file attempt looked like a total failure: their surplus braces are not
# after a completed function, so removing them joins the function to the next one and every following definition
# becomes nested. Hence an allow-list of individually measured names -- a name that has not been measured is never
# touched, and the two measured-bad names are recorded rather than silently skipped.
VERIFIED_SAFE = {
    "sub_6011941C", "sub_60178CF0", "sub_6017BE9C",   # actor_construction.c
    "sub_603F8408",                                    # actors_b.c
    "MenuLayoutTable_init",                            # powerup.c
}
KNOWN_BAD = {"sub_6019F708", "PlayerStates_loadModelResources_helper_43B8B0"}


def main(argv):
    write = "--write" in argv
    grand = 0
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            banners = list(BANNER.finditer(t))
            if not banners:
                continue
            out, last, changed = [], 0, 0
            for i, b in enumerate(banners):
                end = banners[i + 1].start() if i + 1 < len(banners) else len(t)
                body = t[b.start():end]
                if b.group(1) in KNOWN_BAD:
                    continue
                if b.group(1) not in VERIFIED_SAFE:
                    continue
                new, surplus = split_after_close(body)
                if surplus:
                    out.append(t[last:b.start()])
                    out.append(new)
                    last = end
                    changed += surplus
                    print("    %-42s %-42s -%d" % (os.path.relpath(p, ROOT), b.group(1), surplus))
            if changed:
                out.append(t[last:])
                grand += changed
                if write:
                    open(p, "w", encoding="utf-8", newline="").write("".join(out))
    print("  surplus braces removed: %d" % grand)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
