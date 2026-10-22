"""Audit our headers for textual similarity to codedx's GPL headers.

codedx is GPL-3.0. A high textual similarity to one of its files would make ours
a derivative work, which is not something we can ship in a repo that is not
GPL-3.0. This measures similarity per file and flags anything suspicious, so
"written from the binary" is a verifiable claim rather than an assertion.
"""
import difflib
import io
import os

OURS = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"
THEIRS = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\include"

# 0.85+ is concerning; 0.95+ is effectively a copy. Interface-only overlap
# (a handful of macro or member names) is expected and unavoidable.
THRESHOLD = 0.85


def read(p):
    try:
        return io.open(p, encoding="utf-8", errors="replace").read()
    except OSError:
        return None


pairs = []
for root, _, files in os.walk(OURS):
    for f in files:
        if not f.endswith(".h"):
            continue
        mine = os.path.join(root, f)
        rel = os.path.relpath(mine, OURS)
        theirs = os.path.join(THEIRS, rel)
        pairs.append((rel, mine, theirs))

pairs.sort()

flag = []
print(f"{'file':38} {'similarity':>10}  verdict")
print("-" * 70)
for rel, mine, theirs in pairs:
    a = read(theirs)
    if a is None:
        print(f"{rel:38} {'--':>10}  no codedx counterpart")
        continue
    b = read(mine)
    r = difflib.SequenceMatcher(None, a, b).ratio()
    if r >= 0.95:
        verdict = "COPY-LIKE"
        flag.append((rel, r))
    elif r >= THRESHOLD:
        verdict = "too similar"
        flag.append((rel, r))
    elif r >= 0.70:
        verdict = "overlapping (API names)"
    else:
        verdict = "independent"
    print(f"{rel:38} {r:10.3f}  {verdict}")

print()
if flag:
    print(f"{len(flag)} file(s) need rewriting:")
    for rel, r in flag:
        print(f"  {rel}  {r:.3f}")
else:
    print(f"no file exceeds the {THRESHOLD:.2f} similarity threshold")
