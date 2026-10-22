import io
import re

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\actor\actor.h"
t = io.open(p, encoding="utf-8").read()

old = """    void* vtable;               // +0x00
    u32   heapFlags;            // +0x04"""
new = """    // NOTE: there is no explicit vtable member. Actor declares virtual
    // functions, so the compiler inserts the vptr at +0x00 itself. Writing it
    // out by hand shifted every field by 4.
    u32   heapFlags;            // +0x04"""
assert old in t, "vtable member block not found"
t = t.replace(old, new)
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("removed explicit vtable member from Actor")
