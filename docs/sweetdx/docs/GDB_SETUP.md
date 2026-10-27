# Debugging with Ryujinx/Ryubing's gdb stub (port 55555)

Ryubing and Ryujinx can both expose a gdb remote stub. That gives you live memory and
register inspection on the real emulated console, which is exactly what has been missing:
every conclusion so far came from static analysis of two ELFs, and two of those conclusions
have already had to be retracted.

## 0. Is ChatDBG any help?

Partially, and not for this. ChatDBG (github.com/plasma-umass/ChatDBG) wraps gdb/pdb/lldb
and asks an LLM "why" about a stopped program using gdb's own output as context. Useful for
crash triage on a program you can run natively. Here:

- Your target is a Switch binary under a *remote* stub. ChatDBG drives a local debugger
  session; a `target remote` workflow is not its main path, and its LLM has no knowledge of
  this game's internals, so its answers would be guesses dressed as analysis.
- The three questions actually blocking you are **numeric** — what is in memory at three
  tables and one actor field. `gdb` alone answers those in one command. No model needed.

So: skip ChatDBG for now. If you later want it on a native crash, it is fine. The setup
below is plain `gdb-multiarch`, which you already have at
`C:\Users\Saif Khan\Downloads\gdb-multiarch-14.1\bin\gdb-multiarch.exe`.

## 1. Enable the stub

Ryubing: `Options > Settings > General > Enable GDB Stub` (or launch with
`--gdb-stub 55555`). Ryujinx equivalents live in `Options > Settings`; some builds use
`config.json` key `EnableGdbStub`. The stub listens on **55555** as you said.

Start the game, get in-level, then attach.

## 2. Attach

```gdb
set architecture armv8-a
set endian little
target remote 127.0.0.1:55555
```

`armv8-a` in AArch32 state is what you want; the game is ARM32 (AArch32). If gdb reports a
64-bit target, `set architecture arm` and reattach.

## 3. The addresses that answer the open questions

Image base is `0x60000000`. IPS record offsets are `RVA + 0x100`; **gdb uses VAs**, so no
adjustment — read at base + RVA.

### Q1. Are the relocated tables actually there, or zero?

This is question #1 because if a repoint targets memory that is not file-backed, the readers
get zeros and every mode collapses onto one value.

```gdb
# height table  (11 x f32)  -- expect 16, 31, 31, 6, 31, ... , 31
x/11fw 0x60B493A8

# body table    (11 x u32)  -- expect 1,0,0,1,2,3,0,4,4,5,0
x/11dw 0x60B493D8

# balloon table (11 x f32)  -- expect 0,-4,-4,4,-5,-2,-4,-4,-4,0,-4
x/11fw 0x60B49404

# 4th table element [10]    -- expect 2
x/1dw 0x60B0C328
```

If any of these reads `0x00000000` repeatedly, the patch is not landing in loaded memory and
that is the whole bug.

### Q2. What does the player's mode actually hold?

`mMode` is at player `+0x528` per the gate code. Get the player pointer first:

```gdb
# the gate reads [player + 0x528]; find the player object by breaking at the gate
break *0x60465F34
continue
info registers r0 r1 r2 r3
```

At that breakpoint the relevant register holds the player pointer. Then:

```gdb
p/x $r0
x/1dw $r0+0x528     # stored power-up mode
```

Expect `0xa` for Hammer, `0x2` for Fire.

### Q3. Does the variant selector get 1 or 2 for Fire?

This is the substitution bug in `sub_6078E608`. Break just after the selector is chosen:

```gdb
break *0x6078E6C4
continue
info registers r1          # 1 = normal body, 2 = fire body, 3 = mode-6 body
```

With the current build: enter a level as Hammer, you should see `r1 = 1`.
Now the decisive comparison — **revert to the stock NSO, load a save as Fire Mario**, and
break at the same address. Stock should show `r1 = 2`. If patched-Fire shows `1` while
stock-Fire shows `2`, the substitution bug is confirmed at the hardware level and the
rendering corruption is fully explained.

### Q4. Is anything written at 0x2E34 (the scale triple)?

```gdb
break *0x6013FB94
continue
info registers s0          # the divisor result
x/1fw $r9+0x2E34
```

If this breakpoint **never hits**, `sub_6013FB0C` is dead code and the scale hooks are
confirmed inert (already strongly suggested: the function has zero references).

## 4. Useful convenience

```gdb
# stop the world less noisily
set pagination off
set confirm off

# snapshot a table to a file for diffing against both ELFs
dump binary memory C:\temp\body_table.bin 0x60B493D8 0x60B49404
```

Then compare with:

```powershell
python -c "d=open(r'C:\temp\body_table.bin','rb').read(); import struct; print(struct.unpack('<11I', d))"
```

## 5. What to report back

The four reads in Q1 plus `r1` from Q3 are enough to close this out:

- Q1 all correct, Q3 shows `r1=1` for Fire → substitution bug confirmed; apply fix option A.
- Q1 shows zeros → patches are not in loaded memory; the table repoints must be reworked.
- Q3 shows `r1=2` → my substitution analysis is wrong and the fault is elsewhere; say so and
  I will re-derive from the breakpoint evidence rather than from the diff.

## 6. Caveats

- The stub stops the whole emulated CPU; expect the game to freeze while stopped.
- Breakpoints on code that runs every frame will make it crawl. Use them for one hit, then
  `delete`.
- Addresses are for **NSMBU Deluxe v1.0.0, build id `AEE6DCCC06D9C05B42061E2019123A61`**.
  A different title update moves everything.
- ASLR: the stub reports the image at a fixed `0x60000000` base for exefs, so these absolute
  addresses hold. If `x/4i 0x60000000` shows garbage or a fixed pattern, verify with
  `info files` / `maintenance info sections`.
