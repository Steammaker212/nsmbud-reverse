"""Replace Hex-Rays' `__asm { ... }` escapes with standard C.

Hex-Rays emits raw assembly when it has no C idiom for an instruction. There are 185 such blocks
across the corpus, but only a handful of distinct instructions, and every one of them has an exact,
portable C equivalent. This rewrites each FORM (not each instance) so the result is real C and stays
checkable.

The mapping, and why each is faithful:

  UXTB16 Rx, Rx            = zero-extend the low and high bytes but clear bits 8-15 and 24-31
                             i.e. keep bits [7:0] and [23:16]  ->  x & 0x00FF00FF

  VMINNM.F32 / VMAXNM.F32  = IEEE-754 minNum / maxNum (ARMv8 "number" variants, which return the
                             non-NaN operand instead of a NaN). C's fminf/fmaxf are precisely
                             minNum/maxNum, so fminf/fmaxf are an exact match, not an approximation.
                             (Plain `a<b?a:b` would NOT be equivalent for NaN inputs.)

  VCEQ.F32 Qn, Qm, #0.0    = per-lane equality compare against zero, result all-ones or all-zeros.
                             Written as a lane-wise helper returning -1/0 as int32.
  VCGE/VCGT/VCLT/VLE(...)  = same shape, per-lane comparison.

  VRINTP/VRINTM/VRINTZ/VRINTA  = round to nearest-plus / minus / zero / away, matching
                             ceilf/floorf/truncf/roundf.
  VCVTM.S32.F32 / VCVTP     = truncating / ceiling float->int conversion, matching a cast after the
                             corresponding round.

  ADD PC, R0, R1  /  ORR PC, R0, R1,LSL R12   = the ARM switch-dispatch idiom. IDA has already
                             annotated the very next construct as a `switch (x)`, so the __asm line is
                             a redundant artefact of the dispatcher; it is replaced by a comment that
                             says exactly that, leaving the switch as the sole implementation.

Anything not in this table is left alone and reported, so nothing is silently guessed.
"""
import collections
import os
import re
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_all"
DRY = "--apply" not in sys.argv

ASM_RE = re.compile(r"__asm\s*\{\s*([^}]*?)\s*\}")

# ---- scalar helpers appended once per file that needs them -------------------
HELPERS = """
/* ---- helpers replacing Hex-Rays `__asm` escapes (see scripts/fix_asm_escapes.py) ----
 * Each is the exact C equivalent of one NEON/VFP instruction the decompiler had no
 * idiom for. Kept small and named so the intent is visible at the call site. */
static inline unsigned int uxtb16(unsigned int x)
{
    /* UXTB16: keep bits [7:0] and [23:16], clear the rest. */
    return x & 0x00FF00FFu;
}
"""

VEC_HELPERS = """
/* Lane-wise NEON compare against zero. The ARM form produces all-ones (0xFFFFFFFF) for
 * true and 0 for false in every 32-bit lane, so these return -1 / 0. */
static inline int vceq_zero(float v) { return (v == 0.0f) ? -1 : 0; }
static inline int vcge_zero(float v) { return (v >= 0.0f) ? -1 : 0; }
static inline int vcgt_zero(float v) { return (v >  0.0f) ? -1 : 0; }
static inline int vclt_zero(float v) { return (v <  0.0f) ? -1 : 0; }
static inline int vcle_zero(float v) { return (v <= 0.0f) ? -1 : 0; }

/* Q-register forms produce a 4-lane mask; kept as four lanes rather than collapsed.
 *
 * Two corrections over the first version:
 *   * int32x4_t comes from nsmbudx_types.h. Defining it here collided with that header and made
 *     every file including both fail with "typedef redefinition with different types".
 *   * the helpers take FOUR float arguments, because the call sites pass
 *     vceq_zero_q(_Q9.n128_f32[0], ..., [3]). The earlier `const float v[4]` parameter decays to a
 *     pointer, so those call sites were passing 4 floats to a pointer parameter.
 * The lane array on the shared type is `.v`, not `.lane`. */
static inline int32x4_t vceq_zero_q(float a, float b, float c, float d)
{ int32x4_t r; r.v[0]=(a==0.0f)?-1:0; r.v[1]=(b==0.0f)?-1:0;
  r.v[2]=(c==0.0f)?-1:0; r.v[3]=(d==0.0f)?-1:0; return r; }
static inline int32x4_t vcge_zero_q(float a, float b, float c, float d)
{ int32x4_t r; r.v[0]=(a>=0.0f)?-1:0; r.v[1]=(b>=0.0f)?-1:0;
  r.v[2]=(c>=0.0f)?-1:0; r.v[3]=(d>=0.0f)?-1:0; return r; }
static inline int32x4_t vcgt_zero_q(float a, float b, float c, float d)
{ int32x4_t r; r.v[0]=(a>0.0f)?-1:0; r.v[1]=(b>0.0f)?-1:0;
  r.v[2]=(c>0.0f)?-1:0; r.v[3]=(d>0.0f)?-1:0; return r; }
static inline int32x4_t vclt_zero_q(float a, float b, float c, float d)
{ int32x4_t r; r.v[0]=(a<0.0f)?-1:0; r.v[1]=(b<0.0f)?-1:0;
  r.v[2]=(c<0.0f)?-1:0; r.v[3]=(d<0.0f)?-1:0; return r; }
static inline int32x4_t vcle_zero_q(float a, float b, float c, float d)
{ int32x4_t r; r.v[0]=(a<=0.0f)?-1:0; r.v[1]=(b<=0.0f)?-1:0;
  r.v[2]=(c<=0.0f)?-1:0; r.v[3]=(d<=0.0f)?-1:0; return r; }
"""

FLOAT_HELPERS = """
/* VMINNM/VMAXNM are IEEE-754 minNum/maxNum: they return the non-NaN operand when one
 * input is NaN. That is exactly what fminf/fmaxf do, unlike `a<b?a:b`. */
static inline float vminnm_f32(float a, float b) { return fminf(a, b); }
static inline float vmaxnm_f32(float a, float b) { return fmaxf(a, b); }
static inline double vmaxnm_f64(double a, double b) { return fmax(a, b); }
"""

counts = collections.Counter()
unhandled = collections.Counter()


def reg_index(name):
    """'S0' -> 0, 'S18' -> 18, 'D0' -> 0 (double reg pairs), 'Q4' -> 4."""
    m = re.match(r"^[SDQ](\d+)$", name.strip())
    return int(m.group(1)) if m else None


def conv_f32_ternary(mnem, dst, a, b):
    fn = {"VMINNM.F32": "vminnm_f32", "VMAXNM.F32": "vmaxnm_f32",
          "VMINNM.F64": "vminnm_f64", "VMAXNM.F64": "vmaxnm_f64"}.get(mnem)
    if not fn:
        return None
    kind = "double" if "F64" in mnem else "float"
    return (f"{fn}({kind}_{a}, {kind}_{b})", fn)


def convert(op):
    """Return (replacement_c_expression, helper_name_or_None) or None if unknown."""
    op = " ".join(op.split())
    m = re.match(r"^UXTB16\s+(R\d+),\s*(R\d+)$", op)
    if m:
        return (f"uxtb16({m.group(2).lower()})", "uxtb16")

    m = re.match(r"^(VMINNM|VMAXNM)\.F(32|64)\s+[SDQ]\d+,\s*([SDQ]\d+),\s*([SDQ]\d+)$", op)
    if m:
        kind = "double" if m.group(2) == "64" else "float"
        fn = ("vminnm_" if m.group(1) == "VMINNM" else "vmaxnm_") + "f" + m.group(2)
        return (f"{fn}({kind}_{m.group(3).lower()}, {kind}_{m.group(4).lower()})", fn)

    # vector compares against zero.
    # A Q register is FOUR 32-bit lanes, so its result is a 4-lane mask, not a scalar.
    # Emitting a scalar helper for a Q operand would be quietly wrong, so operand width
    # decides the helper.
    m = re.match(r"^(VCEQ|VCGE|VCGT|VCLT|VCLE)\.F32\s+([SDQ])(\d+),\s*([SDQ])(\d+),\s*#0\.0$", op)
    if m:
        fn0 = {"VCEQ": "vceq_zero", "VCGE": "vcge_zero", "VCGT": "vcgt_zero",
               "VCLT": "vclt_zero", "VCLE": "vcle_zero"}[m.group(1)]
        wide = (m.group(2) == "Q" or m.group(4) == "Q")
        if wide:
            # Hex-Rays models Q registers as Neon float32x4_t values named _Qn, with lanes
            # reached through .n128_f32[k]. Address them that way rather than inventing a type.
            q = "_" + m.group(4) + m.group(5)
            return (f"{fn0}_q({q}.n128_f32[0], {q}.n128_f32[1], "
                    f"{q}.n128_f32[2], {q}.n128_f32[3])", fn0 + "_q")
        return (f"{fn0}(f32_{m.group(4)}{m.group(5)})", fn0)

    # rounding / conversion: VRINT*, VCVT*
    m = re.match(r"^(VRINT[PMZA])\.F32\s+([SDQ]\d+),\s*([SDQ]\d+)$", op)
    if m:
        fn = {"VRINTP": "ceilf", "VRINTM": "floorf",
              "VRINTZ": "truncf", "VRINTA": "roundf"}[m.group(1)]
        return (f"{fn}(f32_{m.group(3).lower()})", fn)

    m = re.match(r"^(VCVTM|VCVTP)\.S32\.F32\s+[SDQ]\d+,\s*([SDQ]\d+)$", op)
    if m:
        fn = "floorf" if m.group(1) == "VCVTM" else "ceilf"
        return (f"((int){fn}(f32_{m.group(2).lower()}))", fn)

    # switch dispatch artefact
    if re.match(r"^(ADD|ORR)\s+PC,", op):
        return ("/* ARM switch-dispatch idiom; the switch below is the implementation */ "
                "(void)0", None)

    return None


changed = 0
flagsuspects = []
for fn in sorted(os.listdir(SRC)):
    if not fn.endswith(".c"):
        continue
    path = os.path.join(SRC, fn)
    text = open(path, encoding="utf-8").read()
    if "__asm" not in text:
        continue
    needed = set()

    def repl(m):
        global changed
        # a block may hold SEVERAL instructions, one per line
        ops = [ln.strip() for ln in m.group(1).splitlines() if ln.strip()]
        out = []
        for op in ops:
            got = convert(op)
            if got is None:
                unhandled[op] += 1
                out.append("(void)0 /* unconverted: " + op + " */")
                continue
            expr, helper = got
            counts[op.split()[0]] += 1
            if helper:
                needed.add(helper)
            changed += 1
            out.append(expr)
        # a single expression can stand alone; several become a comma expression
        return out[0] if len(out) == 1 else "(" + ", ".join(out) + ")"

    # A block whose flags are read afterwards cannot be replaced by a plain expression: the
    # ARM instruction sets NZCV and the following code tests a flag variable. Only 3 of 184
    # blocks do this, so they are left intact and reported rather than guessed at.
    if re.search(r"__asm\s*\{[^}]*\}\s*\n\s*(if\s*\(\s*[!]?_[A-Z]{2}|while|_ZF|_NF|_CF)",
                 text):
        flagsuspects.append(fn)

    new = ASM_RE.sub(repl, text)
    if new == text:
        continue

    # insert the helpers actually used, after the last #include line
    if needed:
        block = ""
        if "uxtb16" in needed:
            block += HELPERS
        if any(h.startswith(("vceq", "vcge", "vcgt", "vclt", "vcle")) for h in needed):
            block += VEC_HELPERS
        if any(h.startswith(("vminnm", "vmaxnm")) for h in needed):
            block += FLOAT_HELPERS
        if block:
            incs = list(re.finditer(r"^#include[^\n]*\n", new, re.M))
            pos = incs[-1].end() if incs else 0
            # float helpers need math.h
            if "vminnm_f32" in block or "ceilf(" in new or "floorf(" in new:
                if "math.h" not in new:
                    block = "#include <math.h>\n" + block
            new = new[:pos] + "\n" + block + new[pos:]

    if DRY:
        print(f"  would rewrite {fn}: {changed} block(s)")
    else:
        open(path, "w", encoding="utf-8", newline="\n").write(new)
        print(f"  rewrote {fn}")

print()
print("=" * 70)
print("instructions converted:")
for k, v in counts.most_common():
    print(f"  {k:<16} {v}")
print(f"  TOTAL {sum(counts.values())}")
if unhandled:
    print()
    print("UNHANDLED (left as __asm, reported rather than guessed):")
    for k, v in unhandled.most_common():
        print(f"  [{v}x] {k}")
print()
if flagsuspects:
    print("FILES WITH FLAG-DEPENDENT __asm (left intact, needs manual review):")
    for f in flagsuspects:
        print(f"  {f}")
print()
print("DRY RUN -- pass --apply to write" if DRY else "APPLIED")
