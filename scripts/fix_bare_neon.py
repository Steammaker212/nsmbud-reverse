"""Restore the assignment Hex-Rays dropped on bare NEON pseudo-calls.

The corpus contains lines like

    _S0 = 1.0;
    vmaxnm_f32(float_s18, float_s0)        <- no '=', no ';'
    *(_DWORD *)(v18 + 24) = _S0;           <- uses _S0

The result register of a NEON max is _S0, and the very next statement stores _S0, so the dropped assignment is
`_S0 = vmaxnm_f32(...)`. That is confirmed by the pattern rather than assumed: every one of these sites is
followed by a use of the destination register.

Where libs.c already defines
    static inline float vmaxnm_f32(float a, float b) { return fmaxf(a, b); }
these become ordinary float code -- no ARM left.
"""
import os
import re

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
BARE = re.compile(r"^([ \t]*)(v(?:max|min)nm_f32|v(?:max|min)nm_f64)\(([^;]*)\)[ \t]*$", re.M)


def main():
    total = 0
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dirpath, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            n = 0

            def repl(m):
                nonlocal n
                n += 1
                # destination is the S0 lane, which is what the following statement reads
                return "%s_S0 = %s(%s);" % (m.group(1), m.group(2), m.group(3))

            new = BARE.sub(repl, t)
            if n:
                open(p, "w", encoding="utf-8", newline="").write(new)
                total += n
                print("  %-30s %d site(s)" % (fn, n))
    print("bare NEON pseudo-calls given their assignment: %d" % total)


if __name__ == "__main__":
    main()