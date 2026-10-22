import io
import os

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\actor\actor.h"
t = io.open(p, encoding="utf-8").read()
old = "    void* operator new(size_t32 size);"
new = ("    // On the 32-bit target size_t is `unsigned int`, not a 64-bit type.\n"
       "    void* operator new(unsigned int size);")
assert old in t, "pattern not found"
t = t.replace(old, new)
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("patched actor.h")
for line in t.splitlines():
    if "operator new" in line:
        print("  ", line)
