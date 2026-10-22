# Wii U profile IDs → Deluxe: alignment verified

**Question:** can the 20 Cheep Cheep profiles (Wii U IDs 530–547) be
reused for the Deluxe bee reskin?

**Answer: yes, the IDs carry over unchanged — and they are contiguous.**

---

## 1. Deluxe profile-ID array, verified in IDA

`sInit_SpriteToProfileTable` @ `0x60014724` fills the runtime table from a
static dword array at **`0x60AF3474`**. Verified dump:

```
0x60AF3474  0x1D3   (467)
0x60AF3478  0x1D4   (468)
0x60AF347C  0x1D5   (469)
0x60AF3480  0x1D6   (470)
...
```

The array is a **strict `467 + index` sequence**. Index → ID:

| idx | ID | idx | ID | idx | ID |
|----:|---:|----:|---:|----:|---:|
| 9 | **476** | 58 | 525 | 71 | **538** |
| 10 | 477 | 59 | 526 | 72 | **539** |
| … | … | 60 | 527 | 73 | **540** |
| 63 | **530** | 61 | 528 | 74 | **541** |
| 64 | **531** | 62 | 529 | 75 | **542** |
| 65 | **532** | 66 | 533 | 76 | **543** |
| 67 | **534** | 68 | 535 | 77 | **544** |
| 69 | **536** | 70 | **537** | 78 | **545** |
| 79 | **546** | 80 | **547** | 81 | 548 … 93 = 560 |

Anchor check: index 9 = `0x1DC` = **476**, which is exactly the FireBall
profile the Hammer patch redirects (`0x60C61BE4 → 0x00AF3498`). Consistent.

So **530–547 occupy table indices 63–80**, exactly as on Wii U, and the block
continues past 547 (548…560 present) — meaning the Deluxe build has its own
additions after the Wii U set rather than renumbering.

---

## 2. What this means for the bee

The 20 IDs you listed are **real, present, and addressable** in Deluxe:

| ID | Actor | Reusable as bee? |
|---|---|---|
| 530 | Cheep Cheep (プクプク) | Body reference — no loose `.szs` (pack-resident) |
| 531 | Grouped Cheep Cheep | School/swarm spawner — **good for a bee swarm** |
| 532/533 | Cheep Cheep Medium (+grouped) | Size variant |
| 534/535 | Deep Cheep (サーチプクプク) | Homing behaviour — **good for an aggressive bee** |
| 536/537 | Eep Cheep (にげプクプク) | Flee behaviour |
| 538 | Mecha Cheep (メカプクプク) | `pukupuku_mecha.szs` loose on disk |
| 539 | Spiny Cheep Cheep (トゲプク) | `pukupuku_toge.szs` loose — **current target** |
| 540 | Jumping Cheep Cheep (飛びプク) | Leap behaviour — **bee-like darting** |
| 541 | Flying Mecha Cheep | Airborne variant |
| 542–546 | Spawners (湧き出し) | Wave generators |
| 547 | Cheep Cheep Formation (フォーメーション) | Grouped pattern |
| 887 | 説明キノピオ / Explanation Kinopio | **Correction:** a Toad NPC, not a Cheep Cheep |

**Best fit for a bee:** 540 (Jumping) or 534 (Deep/homing) for behaviour, with
539 (`pukupuku_toge`) as the model-override target since its `.szs` is loose on
disk. 531/547 give you a swarm without extra code.

Critically — these are **existing actors**. You do not need to create a profile,
assign an ID, or touch the registration table. You either:

- **swap the `.szs`** for the ID you pick (zero code), or
- **retarget a profile ID constant** so a level object spawns a different
  Cheep variant with your bee model.

The second is a one-constant change and unlocks the whole behaviour set
(homing, fleeing, jumping, formation) for free.

---

## 3. Caveat — ID presence ≠ model presence

The IDs exist in the table, but model archives do not all exist loose. Verified:

- loose: `pukupuku_toge.Nin_NX_NVN.szs` (34.5 KB), `pukupuku_mecha` (49.8 KB)
- **not** loose: plain `pukupuku` — referenced by `cobPack.pack` (offset 1134),
  pack-resident
- no `search_pukupuku` / `nige_pukupuku` / `fly_pukupuku` archives were found

So behaviours 530/534/536/540 share the same pack-resident model. To give the
bee its own look you must override the `.szs` for whichever ID you choose, or
patch that ID's model-name string the way `pukupuku_toge`'s is bound at
`0x60375E58`.

---

## Evidence

| Claim | Evidence |
|---|---|
| Array at `0x60AF3474`, values 467, 468, 469… | `q_ids.py` direct dword reads |
| index 9 = 476 = FireBall | anchor matches known Hammer patch |
| 530–547 at indices 63–80 | `q_ids.py` band scan (36 hits in 525–560) |
| Wii U `cProfileID_212 = 530` | `ProfileInfo.cpp:7607` (red-pro2) |
| Wii U name map cRes_212…21F | `ProfileInfo.cpp:3827–3881` |
| loose `.szs` inventory | `romfs/Model/` listing (455 files) |
