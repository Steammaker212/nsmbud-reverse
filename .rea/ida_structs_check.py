"""VALIDATE the extracted layouts against ground truth already established by hand.

Before generating a header from 1,524 fields, check the ones we independently know:

  * PlayerBase_ctor writes 24 distinct offsets including +0x484 and +0x485 at WIDTH 1,
    +0x4DC (1244), +0x522 (width 1), +0x524, +0x528 (width 4)
  * Player_ctor writes +0x528 at width 4
  * FireballBase_ctor writes: +6100 LightMask, +6140, +6144, +6180, +6216..+6260,
    +6364 LightSource, +6436 ActiveCollider, +6740..+6756
  * ColliderBase should be a modest struct (ActiveCollider size was disputed 0xB8 vs 0x130)

If the extraction reproduces these, it is trustworthy. If it does not, the guard is wrong and no
header should be written from it.

Also prints CollisionMgr's layout skeleton to judge whether 389 fields is plausible or an artifact
(a 0x1000-byte object with 389 stored offsets is possible but suspicious -- it may be an array-like
manager whose ctor initialises slots).
"""
import json

path = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\structs_guarded.json"
data = json.load(open(path, encoding="utf-8"))

print("=" * 92)
print("GROUND TRUTH CHECK 1: PlayerBase must contain 0x484(w1), 0x485(w1), 0x528(w4)")
print("=" * 92)
pb = {r["off"]: r for r in data.get("PlayerBase", [])}
for off, want in ((0x484, 1), (0x485, 1), (0x4DC, None), (0x522, 1), (0x524, None), (0x528, 4)):
    if off in pb:
        got = pb[off]["width"]
        ok = "OK" if want is None or got == want else f"MISMATCH (want w{want})"
        print(f"  {off:#06x}  width {got}  {ok}")
    else:
        print(f"  {off:#06x}  MISSING")
print(f"  PlayerBase fields found: {len(pb)}")

print()
print("=" * 92)
print("GROUND TRUTH CHECK 2: FireballBase offsets")
print("=" * 92)
fb = {r["off"]: r for r in data.get("FireballBase", [])}
for off in (6100, 6140, 6144, 6180, 6216, 6240, 6260, 6364, 6436, 6740):
    if off in fb:
        print(f"  0x{off:04x} ({off})  width {fb[off]['width']}  OK")
    else:
        print(f"  0x{off:04x} ({off})  MISSING")
print(f"  FireballBase fields found: {len(fb)}")

print()
print("=" * 92)
print("PlayerBase full layout (as extracted)")
print("=" * 92)
for r in data.get("PlayerBase", []):
    print(f"  +0x{r['off']:04x}  width {r['width']}")

print()
print("=" * 92)
print("CollisionMgr: is 389 plausible? first 30 offsets")
print("=" * 92)
cm = data.get("CollisionMgr", [])
print(f"  total {len(cm)}, offsets run {cm[0]['off']:#x} .. {cm[-1]['off']:#x}")
for r in cm[:30]:
    print(f"  +0x{r['off']:04x}  w{r['width']}")
