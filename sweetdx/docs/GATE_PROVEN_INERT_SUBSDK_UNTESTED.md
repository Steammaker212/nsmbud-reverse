# The gate patch is proven inert. The constant in every test is `subsdk0`.

Date: 2026-10-22

## 1. The four records cannot break models — now proven by decompilation

I finally decompiled the function containing all four patched words instead of reasoning
about it (`ida_gate_functions.py` → `out_gate_functions.txt`). All four records live in one
function, `sub_60465E4C`:

```c
if ( v6
  && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
  && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
  && ((0x1FBu >> v7) & 1) != 0 )
{
  return dword_60B0267C[a2];      /* grant allowed */
}
return 0;                          /* grant refused */
```

And the assembly at the patch sites:

```
0x60465f2c  LDR  R0, [R6,#0x528]     ; current power-up mode
0x60465f30  SUB  R0, R0, #1          ; index = mode - 1
0x60465f34  CMP  R0, #8              ; <<< patched to #9
0x60465f38  BHI  loc_6046601C        ; out of range -> refuse
0x60465f3c  UXTH R0, R0
0x60465f40  MOVW R1, #0x1FB          ; <<< patched to #0x3FB
0x60465f44  MOV  R2, #1
0x60465f48  TST  R2, R1,LSR R0       ; bit test
0x60465f4c  BEQ  loc_6046601C        ; bit clear -> refuse
```

`R0` after the compare is used **only** as a shift amount into a constant. It never becomes a
table index. The only table access in the function is `LDR R4, [R0,R5,LSL#2]` at
`0x60465e64`, and that indexes with a different register entirely.

Widening `#8` to `#9` admits exactly one new value of `mode-1`, namely 9, i.e. mode 10.
`0x1FB` and `0x3FB` differ only in bit 9. Modes 1–9 take byte-identical branches.

**These four words cannot change any model, body, or resource lookup.** This retires the
hypothesis that the gate patch causes the rendering fault.

## 2. The installed IPS really is step 6, and it really is applied

Decoded from the live file
`sdcard\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips`:

```
rva 0x00465f34  090050e3   cmp r0,#9
rva 0x00465f40  fb1300e3   movw r1,#0x3fb
rva 0x00466000  090050e3
rva 0x0046600c  fb1300e3
```

Format and offsets are correct. So the patch mechanism works; it is simply not the cause.

## 3. The one thing present in every single test: `subsdk0`

A sweet-dx build run with **no hooks at all** still emits two files:

```
       577  output\atmosphere\contents\0100EA80032EA000\exefs\subsdk0
         8  output\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips
```

and the emitted `subsdk0` is byte-identical to **sweet-dx's own factory blank sample**:

```
45FD18407DFE40EB...   577 b   sweet-dx-main\output\...\exefs\subsdk0
45FD18407DFE40EB...   577 b   the currently installed mod
```

That file has been present in step 2, 3, 3b, 4, 5 and 6. It has never been excluded, so it has
never been ruled out. Everything else has been bisected to nothing; this is what is left.

Its header is also not a clean module: the rodata segment declares `file_off 0x1000` with the
file only `0x241` bytes long, i.e. a segment pointing past EOF. And interestingly, the older
31,197-byte `subsdk0` from the previous mod has a module segment ending at `0xA981` in a
`0x79DD`-byte file — also past EOF. Whatever conventions these headers follow, this build
produces them consistently, so I am not going to claim the header alone is the fault. The
point is narrower and safer: **it is untested, and it is free to test.**

## 4. The control that settles it — run step 8 first

```
sweetdx\output_step8_no_exefs_at_all\README.txt     (instructions; folder is deliberately empty)
sweetdx\output_step7_ips_only_no_subsdk0\           (the four gate records, no subsdk0)
```

Run them in this order:

| test | installed | what it proves |
|---|---|---|
| **8** | *nothing* — no `subsdk0`, no IPS | baseline. If models break here, our patch was never involved and the romfs/emulator is implicated after all. |
| **7** | four IPS records only | if models are fine at 8 and break at 7, the IPS is implicated despite §1. |
| **6** | four IPS records **+** `subsdk0` | if models are fine at 7 and break at 6, `subsdk0` is the cause. |

Step 8 has never been run. Every previous test included `subsdk0`, so the bisection has been
sitting on top of an unmeasured constant.

## 5. Correction on the "working" hammer behaviour

Test 5 reported the question block ejecting **value 3** produces a fireball. Item value 3 is
the Fire Flower in retail, and the Fire Flower already produces fireballs. So that test is
consistent with **unmodified retail behaviour** and is not evidence that the Hammer works.

The editor note that "values 2 and 3 both resolve to action code 0" matches this: the block
is dispensing the normal Fire Flower path. Mode 10 being accepted by the gate is necessary
for the Hammer but not sufficient — there is still no hammer projectile or hammer body model
in the image, which is why what you observe is a fireball and a big-Mario body.
