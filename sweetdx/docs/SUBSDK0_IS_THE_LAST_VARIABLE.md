# The remaining variable is `subsdk0`

Status as of this document: **the rendering fault is isolated to our exefs artifacts, and
`subsdk0` is the only one that has never been excluded from a failing build.**

## What the control test proved

The user removed these two things and nothing else:

```
sdcard\atmosphere\contents\0100EA80032EA000\exefs\subsdk0
sdcard\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips
```

With both gone:

* every model loads, including the replaced ones
* romfs still loads: courses, tilesets in units
* the hammer-patched Question Block still gives an item

That last point matters. It means the romfs and the Yaz0moto patch are both fine and were never
the problem. The fault lives entirely in the two exefs artifacts.

## Why `subsdk0` is the suspect

| build | IPS | `subsdk0` | models |
|---|---|---|---|
| step2 hammer enabled | full | 577 b | broken |
| step3 no actor scale | full | 577 b | broken |
| step4 gate only (5 recs) | 53 b | 577 b | broken |
| step5 grant only (1 rec) | 17 b | 577 b | broken |
| step6 gate only (4 recs) | 44 b | 577 b | broken |
| step8 no exefs at all | none | none | **fine** |
| step7 ips only | 44 b | **none** | not yet tested |
| step9 full, ips only | 428 b | **none** | not yet tested |

`subsdk0` was present in every single failing build. It has never been removed from a build that
still had the IPS. Step 6 is the important row: it contains **four records, all in `.text`**, whose
instructions IDA showed to be semantically inert — and rendering still broke. That rules out the
patch payload as the cause of the rendering fault and points at the module.

## Why our project does not need `subsdk0` at all

sweet-dx emits `subsdk0` to hold compiled user code and the trampolines that `hook` and `call`
hooks branch through. `instr` and `data` hooks are written straight into the IPS record and need
no module.

Type census of our shipped hooks:

| file | types |
|---|---|
| `hammer_actor.hks` | `instr` 7 |
| `hammer_projectile.hks` | `instr` 8 |
| `item_grant.hks` | `instr` 4 |
| `mode_tables.hks` | `data` 16, `instr` 1 |

**Zero `hook`. Zero `call`.** So no trampoline is generated, and the `subsdk0` sweet-dx writes
contains nothing but its empty stub. The file is 577 bytes and is byte-identical
(`45FD18407DFE40EB…`) to sweet-dx's factory blank sample.

Removing it therefore cannot remove any of our patches. All 36 records are delivered by the IPS.

## The module's header is also malformed

The 577-byte stub declares a `rodata` segment at file offset `0x1000` in a file that is only
`0x241` bytes long. `MOD0` sits at `0x109`, `dyn` at `0xff8`, `bss_start` `0x2008`,
`bss_end` `0x2068`. Two of its declared segments point past the end of the file.

For comparison, an older 31,197-byte `subsdk0` from an earlier build had a similar problem: its
`module` segment ends at `0xA981` inside a `0x79DD`-byte file. So this may be a sweet-dx quirk that
the loader tolerates rather than the specific fault. **That is why it needs the test, not the
argument.**

## The decoder for the installed patch

Installed IPS, 44 bytes, four records, verified byte for byte:

| file offset | RVA | bytes | meaning |
|---|---|---|---|
| `0x465f34` | `0x465F34` | `090050e3` | `cmp r0,#9` (was `#8`) |
| `0x465f40` | `0x465F40` | `fb1300e3` | `movw r1,#0x3fb` (was `#0x1fb`) |
| `0x466000` | `0x466000` | `090050e3` | `cmp r0,#9` (was `#8`) |
| `0x46600c` | `0x46600C` | `fb1300e3` | `movw r1,#0x3fb` (was `#0x1fb`) |

The offset convention is correct. The user's hardware-tested project patches `.text` at `0x46A0`
by writing IPS offset `0x47A0`, which is `RVA + 0x100` — exactly what sweet-dx does. Since that
project runs on real hardware, IPS offsets are into the **decompressed** image and Atmosphère
handles decompression itself.

## Two theories I had to retract

Recording these so they are not re-derived later.

**Retracted: "the retail `main` is compressed, so `RVA + 0x100` addresses the LZ4 stream."**

The retail `main` *is* compressed — every segment has `fileSize < size`, and
`0x100 + fileSize(text) + fileSize(ro) + fileSize(data)` equals the file length to within one
byte. That part is true. But it does not make the IPS offsets wrong, because Atmosphère
decompresses first. The user's working project proves this empirically: same `instr` type, same
`+0x100` convention, works on hardware. The compression observation is real but irrelevant to the
bug.

**Retracted: "every `.rodata` record is written 0x670 bytes too high."**

The decompressed `.rodata` begins at file offset `0x9AEA90` (header `0x100` + text size
`0x9AE990`) while its memory offset is `0x9AF000`, an alignment gap of `0x670`. So `RVA + 0x100`
and `RVA - 0x570` are genuinely different offsets, and I initially declared the first one a bug.

It is not established. There are two self-consistent models of the buffer Atmosphère patches:

* **Model A, inflated NSO** — segments placed at memory offset + `0x100`, gaps included. Under
  this model `RVA + 0x100` is correct for *every* segment, and the payload lands on the right
  address.
* **Model B, concatenated** — segments back to back after the header. Under this model `.rodata`
  needs `RVA - 0x570`.

Both models agree for `.text`, and every hook in the user's proven-working project is in `.text`:
`0x46A0`, `0x6250`, `0x642C`, `0x65A4`, `0x66FC`, `0x6C34`, `0x14724`, `0x17F6C`, `0x182A0`,
`0x1839C`, `0x183C8`, `0x183F0`, `0x20FF0`, `0x25CF50`, `0x25D5B0`, `0x35C744`, `0x562998`, and
`nn_fs_OpenFile` at `0x9ADBEC` which is still below the text end `0x9AE990`. So that project
cannot discriminate between the models, and I have no evidence that favours B.

This cannot be the cause of the rendering fault regardless: step 6 broke rendering with **no
`.rodata` records at all**. No broken build before step 9 contained one.

Both conventions are built and committed so the question can be settled by test rather than by
argument, if it ever needs settling:

* `output_step10a_rodata_memory` — `.rodata` at `RVA + 0x100` (identical to step 9)
* `output_step10b_rodata_concat` — `.rodata` at `RVA - 0x570`

## Test order

Run these in order and stop at the first one that renders correctly.

1. **`output_step7_ips_only_no_subsdk0`** — 44-byte IPS, no `subsdk0`.
   * Models fine → `subsdk0` was the fault. Delete it permanently; our patch is delivered by IPS
     alone.
   * Models still broken → the four `.text` records are at fault and the addressing question
     reopens.
2. **`output_step8_no_exefs_at_all`** — `README.txt` only. Baseline, already known good.
3. **`output_step9_full_ips_only`** — all 36 records, no `subsdk0`. Only meaningful once step 7
   is understood.

Deploy by copying the `atmosphere` folder from the chosen build over the SD card root, having
first removed any existing `contents\0100EA80032EA000\exefs\subsdk0`.
