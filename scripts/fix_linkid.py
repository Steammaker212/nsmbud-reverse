"""Move linkId/movementId/initStateFlag to Actor where they belong.

codedx's Actor carries:

    +0x10 u8 _10
    +0x11 u8 _11
    +0x12 u8 _12
    +0x13 bool isDeleted
    +0x14 u32 settings1
    +0x18 u32 settings2
    +0x1C u8 movementId
    +0x1D u8 linkId
    +0x1E u8 initStateFlag
    +0x20 sead::ListNode _20
    +0x28 u32 childCount
    ...
    +0x38 Actor* parent

I had put linkId at StageActor+0x44, which shifted direction (+0x50) and playerId
(+0x54) by four bytes and broke the layout assertions. This restores them.
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"


def patch(rel, old, new, label):
    p = os.path.join(INC, rel)
    t = io.open(p, encoding="utf-8").read()
    if old not in t:
        print(f"  SKIP {rel} ({label})")
        return False
    io.open(p, "w", encoding="utf-8", newline="\n").write(t.replace(old, new))
    print(f"  {rel}: {label}")
    return True


# 1. StageActor: drop the misplaced linkId.
patch("actor/stageactor.h",
      """    // Movement-link identifier: ties this actor to a slot in the shared
    // movement table, so several actors can move as one unit.
    u16   linkId;            // +0x44  [I]

    u32   direction;         // +0x50  confirmed""",
      "    u32   direction;         // +0x50  confirmed",
      "removed misplaced linkId")

# 2. Actor: correct the +0x10..+0x38 block.
p = os.path.join(INC, "actor", "actor.h")
t = io.open(p, encoding="utf-8").read()
start = t.index("    u32      heapFlags;")
end = t.index("     Actor*   parent;") + len("     Actor*   parent;         // +0x38  confirmed")

new = """    // +0x04: the heap this actor was allocated from. Declared as a pointer
    // because that is what the engine stores; the low bits carry the allocation
    // flags, which is why it is sometimes treated as a u32.
    sead::Heap* heap;        // +0x04

    u32      id;             // +0x08  actor instance id
    Profile* profile;        // +0x0C  confirmed

    u8       _10;            // +0x10
    u8       _11;            // +0x11
    u8       _12;            // +0x12
    bool     isDeleted;      // +0x13
    u32      settings1;      // +0x14  confirmed
    u32      settings2;      // +0x18
    u8       movementId;     // +0x1C
    u8       linkId;         // +0x1D  ties this actor to a movement group
    u8       initStateFlag;  // +0x1E
    u8       _1F;            // +0x1F

    u32      _20;            // +0x20  sead::ListNode (two pointers)
    u32      _24;            // +0x24
    u32      childCount;     // +0x28
    s32      _2C;            // +0x2C
    u32      _30;            // +0x30
    u32      _34;            // +0x34
    Actor*   parent;         // +0x38  confirmed"""

t = t[:start] + new + t[end:]
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("  actor/actor.h: rewrote +0x04..+0x38 with movementId/linkId/initStateFlag")
