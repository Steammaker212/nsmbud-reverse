# NSMBUDX (Switch) — main.nso reverse-engineering notes

Everything here was measured from `main.nso` (SHA-256
`03e4fde420f3fd5fecb73cecf4ae94ff033f5f9197139a3401a4e3c35daf7512`, 8,001,591 bytes),
the main executable from the game's exefs. No speculation: each claim is tied to
a byte offset, a verified hash, or a tool result.

---

## 0. Summary — what to do

1. Use **Ghidra**, on the ELF in this kit (`main32e.elf`). Do not start from
   scratch: your offsets are live in this binary, and the actor system, the
   player state machine and the model pipeline are now mapped (§3).
2. The module is **32-bit ARM**, not 64-bit. That is why the AArch64 Ghidra
   NSO loader won't touch it.
3. **Powerups are actors with a numeric ID** — grep the ID constant to find
   every site that touches that actor (§3.1). Your fireball is ID `6776`.
4. **The player state machine is found**: `_INIT_5` (0x2830C) registers it,
   `power_up` is state **#21**, handled by `FUN_00032ECC` (§3.3).
5. **The visual is a 3D model loaded by name** — `FUN_0013FFFC` shows the
   exact call, so a new model = new `.szs` in ROMFS + a name string (§3.4).
6. `main.idb` is optional — see §5.

---

## 1. `main.nso` is 32-bit ARM (AArch32), not AArch64

Five independent measurements agree:

| Evidence | Value | Meaning |
|---|---|---|
| `DT_SYMENT` (tag 11) | `0x10` | 16-byte symbols = `Elf32_Sym`, not `Elf64_Sym` (24) |
| `DT_RELENT` (tag 19) | `0x08` | 8-byte relocs = `Elf32_Rel`, not `Elf64_Rel` (16/24) |
| Relocation types present | 2, 21, 22, 23 | `R_ARM_ABS32`, `R_ARM_GLOB_DAT`, `R_ARM_JUMP_SLOT`, `R_ARM_RELATIVE` — the ARM32 set |
| `.got.plt` extent | `0x740` = 464 × **4** bytes | 4-byte GOT cells |
| `.init_array` size | `0x1124` | divisible by 4 only → 1097 32-bit RVAs |
| Code at `.text` | `e92d4830` (`push {r4,r5,lr}`), `e59f016c` (`ldr r1,[pc,#0x6c]`), `eb000a68` (`bl`) | ARM32-only encodings (`0xe5xx` is not valid Thumb-2) |

Nintendo's own build system confirms it — the binary leaks its build paths:

```
0x009af008  D:\home\Project\RedPro-S\App\Rom\NX32\Product\code\RedPro-S.nss
0x00ab9014  D:/home/Project/RedPro-S/App/Lib/NintendoSDK/Libraries/NX-NXFP2-a32/Release/nnSdk.nss
```

`NX32` and `NX-NXFP2-a32` = the 32-bit ARM target. SDK version string:
`SDK MW+Nintendo+NintendoSDK_gfx-4_4_0-Release`.

**Consequences**

* A Ghidra loader written for AArch64 NSOs (e.g. `Adubbz/Ghidra-Switch-Loader`)
  will not load this module correctly.
* `Ryujinx`/`Yuzu` emulate **ARM64**. A 32-bit ARM main module will not run
  in them, so the "GDB stub in the emulator" route does not apply to `main`.
  (Other exefs modules may be 64-bit — check them separately.)

---

## 2. The NSO *is* an ELF32 ARM image with the header swapped out

`DT_SYMENT`, `DT_RELENT`, the relocation types and the 8-byte dynamic table
(`{u32 tag, u32 value}`) all match ELF32 ARM exactly, so the conversion is
**repackaging**, not re-derivation.

```
python3 nso2elf32.py main.nso -o main32e.elf
```

* Every decompressed segment is verified against the SHA-256 in the NSO header
  before anything is written (`hash checks: text=OK, rodata=OK, data=OK`), so a
  successful run *proves* the decode is byte-exact. The tool is deterministic —
  the shipped `main32e.elf` is byte-identical on a re-run.
* Output is **ELF32 ARM, `ET_EXEC`**, so every address equals the module's own
  runtime RVA: text `0x0`, rodata `0x9AF000`, data `0xBC0000`, bss `0xC7B274`.
  (`ET_DYN` makes loaders rebase the image, after which the module's own
  relocation table points at unmapped addresses.)
* The section table is **non-overlapping** (metadata sections are carved out
  and the gaps become `.text.1`, `.rodata.2`, `.data.1`, …). This matters:
  with overlapping sections Ghidra pushes the big ones into its *file* address
  space instead of RAM, and the module's relocations then fail to apply. With
  the fixed layout Ghidra reports **zero relocation errors** and every block
  lands in RAM at the exact RVA.
* 581 dynamic symbols with real names, 464 PLT imports resolved
  (`nn::mem::StandardAllocator::Allocate`, `nn::os::GetSystemTick`, …).

### In Ghidra

Import `main32e.elf`; the language is auto-detected as **ARM:LE:32:v8** and
the image base is **0**, so Ghidra's addresses *are* the module RVAs — your
`main+0x…` offsets work as-is. `scripts/MemMap.java` prints the memory map if
you want to sanity-check a load; `scripts/DumpInfo.java` prints the function
and string inventory plus string→function references.

### Verified end-to-end

`analyzeHeadless` on `main32e.elf` (Ghidra 12.1.4, JDK 25) reports:

```
language   : ARM:LE:32:v8
image base : 00000000            <- addresses are the module RVAs, no rebasing
functions  : 31999
symbols    : 119313
strings    : 11692
relocation errors : 0
```

Every block lands in RAM at the exact RVA:

```
.text     00000000-00000007     .nso.mod0 00000008-00000023
.init     00000024-00000217     .fini     00000218-0000027f
.text.1   00000280-009ae98f     .rodata   009af000-009af047
.rel.dyn  009af048-00aae297     .rel.plt  00aae298-00aaf117
.rodata.1 00aaf118-00ab032f     .nso.dynsym 00ab0330-00ab277f
.dynstr   00ab2780-00ab9069     .rodata.2 00ab906a-00bbfa52
.data     00bc0000-00c611ab     .dynamic  00c611ac-00c61253
.data.1   00c61254-00c7a14f     .init_array 00c7a150-00c7b273
.bss      00c7b274-00cd0fff
```

Largest functions, for orientation:

```
0x18FD0  27916 bytes   0x77BFAC 24520   0x919C10 23876   0x1873D0 18016
0x712498 14092         0x836678 13380   0x1DBB64 13248   0x14724  11532
```

---

## 3. How actors (and therefore powerups) work

This is the part that was missing, and it is now mapped.

### 3.1 Every actor has a numeric ID baked into the code

`main+0x8DE044` is the single dispatch point for actor creation:

```c
int actor_build(uint32 id)            // 0x8DE044
{
    if (*(uint32 *)0xC61AF0 == 0) {          // manager instance not up yet
        if (*(uint32 *)0xCC72A0 != 0) { ... fallback lookup ... }
        return 0;
    }
    void *mgr = actor_manager_get();          // 0x8FAC18 -> instance + 0x64
    if (mgr != 0)
        return ((int (*)(void *, uint32, int))(*(void **)(*(uint32 *)mgr + 0x18))(mgr, id, 4);
    return 0;
}
```

So: a virtual call on the actor manager, slot `+0x18`, with `(id, 4)`.

* **5,642 distinct actor IDs** appear as `movw` immediates across the module,
  at **51,406 code sites** — `actor_id_sites.csv` lists every one.
* **686 of those sites are spawn calls** (`bl 0x8DE044` with the ID inline) —
  `actor_catalog.csv` lists them, plus the **284 build wrappers** (thin
  tail-call thunks `push {r4,lr}; mov r4,r0; movw r0,#ID; b 0x8DE044`).
* The build-function pointers live in per-category arrays in `.data`
  (`0xC27xxx`–`0xC78xxx`).
* Within a category the ID is **`base + index`**, where `index` is the position
  in that category's pointer table (verified: five independent slot pairs have
  identical ID-delta and slot-delta).

**The practical move: grep the ID.** For the fireball, ID `6776` appears at
**80 code sites** — every place the game touches that actor:

```
0x6eb64  0x7962c  0xb0484  0xd0534  0x103ed8  0x106064  0x106738  0x10747c
0x13a220 0x13a7ac 0x252834 0x26c3e4 0x26cc60 0x29d1c0 ... (80 total)
```

In Ghidra: *Search → For Scalars → 6776*. The same works for every actor.

### 3.2 Your three build functions are correct — and their IDs changed

Every offset you had lands exactly on an ARM32 prologue in this binary:

| Offset | Code | Meaning |
|---|---|---|
| `main+0x8138` | `push {r4,r5,r6,r7,r8,r9,r10,lr}` | the big `ActorMgr::create` (vtable calls at +0x10/+0x14/+0x18) |
| `main+0x13A7A4` | `push {r4,lr}; mov r4,r0; movw r0,#6776; b 0x8DE044` | player fireball build |
| `main+0x13F02C` | `push {r4,lr}; mov r4,r0; movw r0,#11912; b 0x8DE044` | hammer projectile build |
| `main+0x2CBB20` | `push {r4,lr}; mov r4,r0; movw r0,#12496; b 0x8DE044` | hammer Bros build |

**The IDs are the Switch-side numbers.** `476` and `759` are the *Wii U*
numbers (`NSMBU-Headers/actor/ProfileInfo.h`: `cProfileID_FireBallPlayer = 476`,
`cProfileID_Hammer = 758`, `cProfileID_FireBallBros = 762`). The Switch build
renumbered: fireball `6776`, hammer projectile `11912`, hammer Bros `12496`.

### 3.3 The player state machine — found

The **static constructor `_INIT_5` (0x2830C)** registers the player state
table at startup. It is a `.init_array` entry, and it fills a table of
`{name, value}` pairs (base pointer `DAT_00C62A10`):

```c
void _INIT_5(void)                 // 0x2830C, 2656 bytes
{
  int *t = DAT_00C62A10;
  ...
  t[0x13] = "fall";            t[0x15] = "damage";
  t[0x17] = "damage_s";        t[0x19] = "down";
  t[0x1b] = "down_wait";       t[0x1d] = "down_back";
  t[0x1f] = "return";          t[0x21] = "return_back";
  t[0x23] = "demo_battleA_st"; t[0x25] = "demo_battleA_st_wait";
  t[0x27] = "demo_battleA";    t[0x29] = "demo_scale_up";
  t[0x2b] = "power_up";        <-- the powerup state
}
```

Each entry is two `u32`s, so **`power_up` is player state #21**. The state
*names* in `.rodata` sit in one contiguous blob:

```
0x00aba706  fall            0x00aba734  return
0x00aba70b  damage          0x00aba73b  return_back
0x00aba712  damage_s        0x00aba747  demo_battleA_st
0x00aba71b  down            0x00aba757  demo_battleA_st_wait
0x00aba720  down_wait       0x00aba76c  demo_battleA
0x00aba72a  down_back       0x00aba779  demo_scale_up
                             0x00aba787  power_up
```

**The `power_up` state handler is `FUN_00032ECC`** (652 bytes). It is the
function that puts the player into the power-up state:

```c
void FUN_00032ECC(int *player)
{
  if (*(int *)(*DAT_00C61B1C + 0x18) != 0) {
     char f = *(char *)(*(int *)(*DAT_00C61B1C + 0x18) + 0x17E9);
     *(uint16 *)(player + 0x1884) = f ? 0xF0 : 0x218;   // scale/height
     *(byte  *)(player + 0x18A0) = f ? 0x8F : 0x6E;
     *(byte  *)(player + 0x18A1) = f ? 0x32 : 0x11;
  }
  // build the state object(s) named "power_up"
  FUN_00445F80(**(void ***)(*(int *)(player + 0x189C) + 0x1C), id, &name);
  ...
}
```

`FUN_0005121C` (800 bytes) is the sibling: it creates the stunned **"bunbun"**
state, gives it `"damage_s"` and then `"power_up"`. It is reached from seven
call sites, several of them function pointers in `.data` (`0xBC3644`,
`0xBC3B88`, `0xBC446C`, …) — that is the **state table of handlers**.

So the player's power-up flow is: `bunbun` (hit) → `damage_s` → `power_up`,
with the handler table in `.data` and the names registered by `_INIT_5`.

### 3.4 The model pipeline (how a powerup gets its visual)

`FUN_0013FFFC` is the function that loads and attaches the hammer's 3D model:

```c
void FUN_0013FFFC(int param_1)
{
  char name[] = "bros_hammer_model";
  void *model = (**(code **)(*obj + 0x54))(obj, &name);   // lookup by name
             (**(code **)(*obj + 0x6C))(obj, model, &name); // instantiate
  ... scale / rotate / position ...
  FUN_00236DA0(0x213, &transform, 0, 0);   // set object property 0x213
}
```

and `FUN_0013FCD4` creates the actor itself:

```c
void FUN_0013FCD4(int param_1)
{
  char name[] = "bros_hammer";
  void *state = FUN_00430090(id, &name, 1, 0, 0, 0, 0, 0, 0);
  void *obj  = FUN_008DE25C(0x30, 0, 4);      // allocate 0x30 bytes
  FUN_0040F050(obj, state, 1, 0, 0, 0, 0);
  FUN_0040F160(obj, id, 0, 0);
  *(void **)(FUN_00002E2C + param_1 + 4) = obj;
}
```

Both are called from function-pointer tables in `.data` (`0xBD331C`,
`0xBD33DC`) — the actor's init table, matching §3.1.

**This is the answer to "new model, same mechanics":** the model is looked up
by *name string*, and that string is referenced from code (§3.5). Change the
string in the NSO, drop a new `.Nin_NX_NVN.szs` in ROMFS under the matching
name, and the actor picks it up.

### 3.5 Where the names live (xrefs work — with the fixed image)

Every asset/actor/state name in `.rodata` **is** referenced from code, and
Ghidra resolves them cleanly on the fixed ELF:

| Name | Refs | Referenced from |
|---|---|---|
| `power_up` (0xABA787) | 5 | `FUN_00032ecc` (×2), **`_INIT_5`** (0x2830C), `FUN_0005121c` (×2) |
| `SE_OBJ_FIREBALL_DISAPP` (0xABA5AC) | 49 | 49 functions |
| `SE_EMY_FIRE_BROS_FIRE` (0xABEBDB) | 2 | `FUN_001379B0`, `FUN_001376E0` |
| `SE_EMY_HAMMER_BROS_HAMMER` (0xABED00) | 2 | `FUN_0013F558`, `FUN_001405F4` |
| `bros_hammer` (0xABECF4) | 1 | `FUN_0013FCD4` |
| `bros_hammer_model` (0xABED1A) | 1 | `FUN_0013FFFC` |
| `mega_hammer` (0xABEDD8) | 1 | `FUN_001453B8` |
| `P_Propeller_00` (0xACDE66) | 2 | `FUN_004F9090`, `FUN_0052F1C4` |
| `Propeller` (0xACD8CC) | 3 | `_INIT_457`, `_INIT_458` (×2) |
| `I_propeller_model` (0xAC9818) | 4 | `_INIT_926`, `_INIT_420`, `_INIT_402`, `FUN_0046BC58` |
| `SE_EMY_BOOMERANG_BROS_BOOMERANG` (0xABEB0A) | 5 | five functions |

The `_INIT_n` symbols are **static constructors** (the module's `.init_array`
entries, 1097 of them) — that is where assets and actors get *registered*. So
the registration site for a given asset is one search away.

> **Important:** an earlier build of this ELF had overlapping sections, and in
> that image Ghidra put the bulk sections in its *file* address space, dropped
> every relocation, and reported `refs=0` for all of these strings. If you
> see `refs=0` for a name that obviously must be used, check the memory map
> first (`scripts/MemMap.java`) — the sections must be non-overlapping, and
> every block must be in RAM at the module RVA. The shipped `main32e.elf` is
> the fixed one: **zero relocation errors, 31,999 functions, refs resolve.**


---

## 4. The Switch build is a 3D remake — there are no sprite atlases

The graphics pipeline is Nintendo's 3D framework (`nn::g3d`, `nn::nvn`) and
every visual is a **model archive** in ROMFS:

```
0x00ab916d  Model/%s.Nin_NX_NVN.szs
0x00abf25d  Model/%s%s.szs
0x00abef3b  Model/CS_W1%s.szs … Model/CS_W9b%s.szs
0x00ad9179  Model/obj_chikuwa_block.Nin_NX_NVN.sarc
0x00ac676d  Replay/otehon/%02u-%s.dat
0x00ad91c9  course/course%d_bgdatL0.bin
0x00ac953f  Shader/RedProS_Proc.Nin_NX_NVN.release.szs
0x00ac68bd  {REDPRO2_ROOT}\Core\Resource\Common\subject\HIOSubjectData.gui
```

The powerup "sprites" are 3D models with `P_` names; the item IDs are `I_`
names:

```
0x00acde14  P_Kinoko_00        0x00acde20  P_FireFlower_00
0x00acde3d  P_Star_00          0x00acde47  P_IceFlower_00
0x00acde66  P_Propeller_00     0x00acde30  P_Penguin_00
0x00ab9d6c  I_kinoko           0x00ab9e50  I_fireflower
0x00ab9e5d  I_iceflower        0x00ab9faa  I_propeller
0x00abebdb  SE_EMY_FIRE_BROS_FIRE     0x00abecf4  bros_hammer
0x00abed1a  bros_hammer_model          0x00abedd8  mega_hammer
```

`SE_*` sound effect, `EF_*` effect, `I_*` item, `P_*` model, `N_*` node. The
same names as the Wii U game, which is why `red-pro2` is a *naming* reference
(shared `Core/Resource` framework, same `REDPRO2_ROOT`) even though the
gameplay layer is a 3D remake.

### Making a new powerup

Cheapest first:

1. **Swap a model archive.** Build the new model, package it as
   `.Nin_NX_NVN.szs`, and replace the matching file in ROMFS under the same
   name. No code change at all — this is "same mechanics, new model" done
   properly.
2. **Add a model** → ship a new `P_<name>_00.szs`. The name string *is*
   referenced by code (§3.4), so renaming it in the NSO is a valid patch —
   the name is what the loader builds the ROMFS path from. Two call sites
   reference `P_Propeller_00` (`FUN_004F9090`, `FUN_0052F1C4`); the same
   pattern applies to every `P_*` name.
3. **New mechanics** → the player state machine (§3.3) plus the actor build
   function; the ID is a constant in code, so a new actor = a new ID constant
   + a new build wrapper registered in the category table.

Prerequisites: the game ROMFS (the exefs only contain the program) and an
SZS/model toolchain. `.szs` is Nintendo's compressed archive (deflate-based
SZS), `.sarc` is a plain archive; editing needs a converter/viewer for the
Switch's `nn::g3d` model format.

---

## 5. About `main.idb`

An `.idb` is an **IDA database, not a binary** — Ghidra cannot open it, and it
is bound to the IDA version that wrote it and to the exact bytes of its input.
Three cases:

1. **It is the Wii U (PowerPC) build** — most likely, given the existing
   project. Then its *addresses are meaningless* for the Switch binary
   (different CPU, different layout, and the Switch build is 3D while the Wii U
   game is 2D). Its *names* are still useful, but `NSMBU-Headers` + `red-pro2`
   already give you far more (actual source).
2. **It is this Switch build** — then it is worth a lot, but you need IDA
   (commercial) to open it, and it only applies if the input file matches.
3. Either way it is **not a prerequisite**: the ELF's symbol table, the leaked
   build paths, the ID catalog and the asset name tables carry the map.

Check which it is without IDA:

```bash
strings -n 6 main.idb | head -60
strings -n 6 main.idb | grep -iE 'RedPro|NX32|NN_NX_NVN|ProfileInfo|\.nso'
```

A Wii U `.idb` will show PowerPC-era names and the `red-pro2`/Wii U paths; one
for this build will show `RedPro-S`, `NX32`, `NN_NX_NVN` or the module id
`aee6dccc06d9c05b42061e2019123a61`.

If it turns out to be the Switch build: open it in IDA, export the function
names (File → Scripting, or an `idc`/`idaapi` loop over `Functions()`), and
apply them to the Ghidra image with a small script
(`FlatProgramAPI.setName`). Do not try to parse the `.idb` binary format — it
is a proprietary blob.

---

## 6. Dynamic analysis: what is and is not available

* **Ryujinx/Yuzu GDB stub** (port 2345) targets ARM64 titles. This main
  module is AArch32, so that path does not apply to it. Check whether another
  exefs module is 64-bit — those can be debugged that way.
* For a 32-bit module the practical options are real hardware with a
  console-side debugger, or a CPU-level ARM32 environment; there is no mature
  32-bit-Switch emulator to attach GDB to.
* **Prototype on the Wii U side instead.** `red-pro2` is a decompilation with
  source: build it, run it under Cemu, iterate on gameplay with a real
  debugger and a memory viewer, then port the change (a model, a parameter, a
  code change) into the Switch NSO/ROMFS. Fastest loop available, and exactly
  what the decomp is for.

---

## 7. Open items (need input this kit does not have)

| Question | What is needed |
|---|---|
| Which build is `main.idb` from? | the `.idb` file itself |
| Absolute category bases (so ID → table index is computable) | one named actor to anchor against — e.g. confirm which ID the game shows as "Fire Flower" |
| What the other exefs modules contain | the other NSOs from `exefs.rar` (useful for the 64-bit modules and any shared core) |

---

## 8. Files in this kit

| File | What it is |
|---|---|
| `nso2elf32.py` | NSO0 (ARM32) → ELF32 ARM `ET_EXEC` converter. Stdlib only, hash-verified, deterministic. |
| `main32e.elf` | The analysis image (13,102,296 bytes) — import this into Ghidra. |
| `actor_catalog.csv` | 284 build wrappers + 686 spawn call sites, with actor IDs and RVAs. |
| `actor_id_sites.csv` | Every code site (51,406) that mentions an actor ID, with its ID. |
| `findings_strings.json` | Item/model/state/SFX names and asset path templates, with RVAs. |
| `scripts/DumpInfo.java` | Ghidra post-script: language, function count, string→function references, largest functions. |
| `scripts/MemMap.java` | Ghidra post-script: memory map (check a load looks right). |
| `scripts/DisasmAt.java` | Ghidra post-script: disassemble + decompile at given addresses (works without full analysis). |
| `scripts/TraceAt.java` | Ghidra post-script: callers + pseudocode for given addresses. |
| `tools/*.py` | The offline scanners used to produce everything above. |

Reproduce:

```bash
python3 nso2elf32.py main.nso -o main32e.elf
readelf -h main32e.elf
readelf -s -W main32e.elf | head -20
python3 tools/catalog.py          # regenerates actor_catalog.csv / actor_id_sites.csv
```
