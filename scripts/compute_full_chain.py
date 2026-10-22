"""The chain is contents -> ACTION -> item. Recompute with the action hop.

IDA, from sub_605B5A3C calling the wrapper:

    sub_60466328(MEMORY[0xC9D3E4], v18, *(_DWORD *)(a1 + 6856), v14)

and from sub_605635AC:

    v9 = dword_60B04164[ (*virt(a1))() ];
    *(_DWORD *)(a1 + 6856) = v9;

So with the virtual call returning raw block contents, the real chain is:

    action = dword_60B04164[contents]
    item   = dword_60B0267C[action]

My original code was right about the hop; what was wrong was claiming the RESULT
matched "Fire Flower" for contents 2/3 without checking it against the editor. This
script computes the full chain and prints it beside the editor's labels, so the
disagreement is explicit rather than hidden.
"""
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
ACTION_TBL = 0x60B04164
ITEM_TBL = 0x60B0267C

EDITOR = ['Nothing', '1 coin', 'Fire Flower', 'Fire Flower', 'Propeller Mushroom',
          'Penguin Suit', 'Mini mushroom', 'Star', 'Continuous star', 'Yoshi egg',
          '10-Coin', '1-UP', 'Vine', 'Spring', 'Super mushroom (if small)',
          'Ice flower']

# From HAMMER_POWERUP_REPORT 10.2 (behaviourally verified: grant handler analysis).
ITEM_CLASS = {0: ('Mushroom', 1), 1: ('Fire Flower', 2), 2: ('LightMask', 1),
              3: ('Propeller', 3), 4: ('Star', 6), 5: ('Penguin', 4),
              6: ('Mini', 5), 7: ('1-UP', 1), 8: ('Ice Flower', 7),
              9: ('1-UP', 1), 10: ('Yoshi Egg', 9)}


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


d = open(ELF, "rb").read()
S = segs(d)


def rd(va, n):
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


actions = struct.unpack_from("<26I", rd(ACTION_TBL, 26 * 4), 0)
items = struct.unpack_from("<16I", rd(ITEM_TBL, 16 * 4), 0)

print("=== full chain: contents -> action -> item -> class ===")
print(f"{'cont':>4} {'action':>7} {'item':>6}  {'class':<14} {'mode':>4}  "
      f"{'editor says':<26}")
print("-" * 78)

rows = []
for c in range(16):
    action = actions[c]
    item = items[action] if action < len(items) else None
    cls, mode = ITEM_CLASS.get(item, ('?', None)) if item is not None else ('?', None)
    rows.append((c, action, item, cls, mode))
    print(f"{c:>4} {action:>7} {str(item):>6}  {cls:<14} {str(mode):>4}  "
          f"{EDITOR[c]:<26}")

agree = sum(1 for c, a, i, cls, mode in rows
            if cls.lower().replace(' ', '') in EDITOR[c].lower().replace(' ', '')
            or EDITOR[c].lower().replace(' ', '') in cls.lower().replace(' ', ''))
print(f"\n  rows where binary class matches the editor label: {agree}/16")

print("\n=== the entries that matter for the patch ===")
for c in (2, 3):
    action = actions[c]
    item = items[action] if action < len(items) else None
    cls, mode = ITEM_CLASS.get(item, ('?', None)) if item is not None else ('?', None)
    print(f"  contents {c}: action {action}, item {item}, class {cls}, mode {mode}"
          f"   (editor: {EDITOR[c]})")

print("""
=== interpretation ===
The chain reproduces a coherent, monotone mapping (Fire Flower, Propeller, Penguin,
Star, Yoshi egg, Ice Flower all appear in plausible order), but it does NOT agree
with the editor's labels at the same indices. Two readings are possible:

  (a) the editor's list is keyed differently from the raw contents byte, e.g. offset
      by one, or ordered by the order items appear in its own source data; or
  (b) one of my two table addresses is off by an entry.

Because (a) and (b) cannot be distinguished from the tables alone, the relabel in
HammerQuestionBlock cannot be justified entry-by-entry. What IS certain and verified
on the real build is the mode-10 capability (0x1FB -> 0x3FB, and mov r2,#2 -> #10).

Resolution requires reading a block's stored contents byte as it is written by the
editor's own save path, which is the next experiment (see README).
""")
