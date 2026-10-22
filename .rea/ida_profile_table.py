"""EXTRACT the whole actor Profile table: id -> constructor -> name.

Profile::Profile(this, ctor_fn, name_str, ..., id) is called once per actor class from a static
initialiser. Decoding all of them yields, for every actor:

    profile id  <->  constructor function  <->  internal name string

That is a large, fully-verifiable naming win:
  * each static initialiser can be named  <Class>_registerProfile
  * every constructor gets its profile id as a comment
  * the id map is directly useful for the sweet-dx side (spawning a block item by id)

Profile::Profile signature, from the decompiled bodies:
    Profile *Profile::Profile(Profile *this, int ctor, const char *name,
                              int archive, void *unk, int id)
Registered in .init_array. Detection: a function whose first call is Profile::Profile and whose
arguments include a code pointer and a string.

This walks every function, finds calls to the Profile::Profile constructor, recovers the
arguments by walking back to the MOV/MOVW that set R0..R3, and prints the table. Where an
argument cannot be recovered it says so rather than guessing.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

# find Profile::Profile
ctor_fns = {}
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if "Profile" in nm and ("C1" in nm or "C2" in nm or nm.startswith("_ZN7Profile")):
        ctor_fns[ea - BASE] = nm
print("=" * 92)
print("Profile constructor candidates")
print("=" * 92)
for rva, nm in sorted(ctor_fns.items())[:12]:
    print(f"  {rva:#010x}  {nm}")

if not ctor_fns:
    raise SystemExit("no Profile ctor found")


def cstr(ea, maxlen=64):
    b = []
    for i in range(maxlen):
        try:
            c = ida_bytes.get_byte(ea + i)
        except Exception:
            return None
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 3 else None


def arm_bl_target(addr):
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0B000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + NSO else None
    return None


def imm_of(insn):
    """recover an immediate from MOV/MOVW/MOVT-style instruction, or None"""
    d = idc.GetDisasm(insn)
    if "#" not in d:
        return None
    try:
        part = d.split("#")[1].split(";")[0].strip()
        return int(part, 16)
    except Exception:
        return None


targets = set(ctor_fns)
rows = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t not in targets:
        continue
    f = ida_funcs.get_func(addr)
    if not f:
        continue
    # walk back collecting r0..r3 immediates, last write wins going backwards
    regs = {}
    a = addr - 4
    for _ in range(60):
        if a < BASE + TEXT_LO:
            break
        d = idc.GetDisasm(a)
        for r in ("R0", "R1", "R2", "R3"):
            if d.startswith("MOV") and d.split()[1].rstrip(",") == r and r not in regs:
                v = imm_of(a)
                if v is not None:
                    regs[r] = v
        if len(regs) == 4:
            break
        a -= 4
    # also try to spot a string literal loaded for the name argument
    rows.append((f.start_ea - BASE, addr - BASE, dict(regs)))

print()
print("=" * 92)
print(f"Profile::Profile call sites found: {len(rows)}")
print("=" * 92)
for fn, site, regs in rows[:60]:
    nm = ida_name.get_name(BASE + fn) or f"sub_{fn:X}"
    print(f"  init {fn:#010x}  {nm}   call@{site:#010x}  args={ {k: hex(v) for k,v in regs.items()} }")
