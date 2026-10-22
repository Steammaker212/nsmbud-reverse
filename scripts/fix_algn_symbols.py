"""Make algn_ symbols addresses rather than dereferenced bytes.

nsmbudx_undeclared.h currently declares them as

    #define algn_60CC48F4 (*(uint8_t *)(uintptr_t)(0x60000000u + 0x60CC48F4))

so `*(_DWORD *)algn_60CC48F4 = x;` casts the BYTE VALUE to a pointer and writes to address 0x...F4-the-value,
not to the intended address. `&algn_60CC48F4[4]` also fails outright ("subscripted value is not an array").

IDA's `algn_` prefix marks an alignment-padding data label: a location, not a value. Declaring it as the
address fixes both the cast form and the subscript form. Nothing is invented -- the address is in the name.
"""
import re

P = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_undeclared.h"


def main():
    t = open(P, encoding="utf-8", errors="replace").read()
    pat = re.compile(r"#define\s+(algn_[0-9A-Fa-f]{6,8})\s+\(\*\(uint8_t \*\)\(uintptr_t\)\((0x[0-9A-Fa-f]+)u? \+ (0x[0-9A-Fa-f]+)\)\)")
    new, n = pat.subn(lambda m: "#define %s ((uint8_t *)(uintptr_t)(%su + %s))"
                      % (m.group(1), m.group(2), m.group(3)), t)
    if n:
        open(P, "w", encoding="utf-8", newline="").write(new)
    print("algn_ declarations converted to addresses: %d" % n)


if __name__ == "__main__":
    main()