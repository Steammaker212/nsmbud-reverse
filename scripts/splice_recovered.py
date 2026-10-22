"""Replace functions whose bodies are brace-broken with fresh decompilations from main.idb.

The 14 functions below failed the brace balance check, and each one poisons everything after it: a single
unclosed brace makes every later function a nested definition, which is where 2,099 of the 5,420 remaining
errors come from.

Re-decompiling from the database is the only honest fix -- editing braces to make a compiler accept a body we
do not understand would hide the defect rather than repair it.

Each replacement is spliced in place of the old definition, found by its banner comment, and only if the new text
is itself brace-balanced.
"""
import os, re, sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\out2"

OWNER = {
 "sub_60037BB0": "systems/core.c",
 "sub_60178CF0": "actors/actor_construction.c",
 "sub_6019F708": "actors/actor_construction.c",
 "sub_60227F68": "actors/actors_a.c",
 "sub_6022C360": "actors/actors_a.c",
 "sub_603F8408": "actors/actors_b.c",
 "sub_6043B8B0": "actors/actors_b.c",
 "sub_60476A7C": "powerup/powerup.c",
 "sub_60721780": "systems/states.c",
 "sub_6081BFFC": "libs/libs.c",
 "sub_60925854": "libs/libs.c",
}

def balanced(text):
    b = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    b = re.sub(r"//[^\n]*", "", b)
    b = re.sub(r'"(?:\\.|[^"\\])*"', '""', b)
    return b.count("{") - b.count("}") == 0

def main(argv):
    write = "--write" in argv
    done = 0
    for name, owner in sorted(OWNER.items()):
        src = os.path.join(SRC, name + ".c")
        if not os.path.exists(src):
            print("  MISS  %s (no recovered body)" % name)
            continue
        new = open(src, encoding="utf-8", errors="replace").read()
        if not balanced(new):
            print("  SKIP  %s (recovered body is still unbalanced)" % name)
            continue
        # strip the recovery banner: the corpus keeps its own
        new = re.sub(r"^/\* Recovered from main\.idb:[^\n]*\*/\n", "", new)
        new = new.rstrip() + "\n"

        path = os.path.join(ROOT, owner.replace("/", os.sep))
        t = open(path, encoding="utf-8", errors="replace").read()
        # the banner block precedes the definition; replace banner + body up to the next banner
        # Some definitions have a banner and some do not, so match the DEFINITION itself and take the banner
        # with it when one is directly above.
        pat = re.compile(r"(?:/\* =+\n \* " + re.escape(name) + r"\n \* RVA[^\n]*\n \* =+ \*/\n(?:\n)?)?"
                         r"[^\n]*__\w+[ \t\*]+" + re.escape(name) + r"\([^;{]*\)\s*\n\{", re.S)
        m = pat.search(t)
        if not m:
            print("  MISS  %s definition in %s" % (name, owner))
            continue
        # Find the end of the OLD definition by brace matching from its opening brace. The brace searched for
        # must be the one that opens THIS definition, which is the last character of the match -- searching from
        # a later offset can skip past it into a helper block and swallow unrelated text.
        i = m.end() - 1
        while i < len(t) and t[i] != "{":
            i += 1
        depth, j = 0, i
        while j < len(t):
            if t[j] == "{":
                depth += 1
            elif t[j] == "}":
                depth -= 1
                if depth == 0:
                    j += 1
                    break
            j += 1
        old_len = j - m.start()
        t2 = t[:m.start()] + new + t[j:]
        done += 1
        print("  %-16s %s  (replaced %d chars with %d)" % (name, owner, old_len, len(new)))
        if write:
            open(path, "w", encoding="utf-8", newline="").write(t2)
    print("replaced: %d (write=%s)" % (done, write))
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv))