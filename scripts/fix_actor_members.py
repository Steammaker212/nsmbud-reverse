"""Correct Actor's data member block to the codedx-confirmed layout.

codedx's Actor gives, in order:
    +0x04 sead::Heap* heap
    +0x08 u32 id
    +0x0C Profile* profile
    +0x10..+0x13  four bytes (_10,_11,_12,isDeleted)
    +0x14 u32 settings1
    +0x18 u32 settings2
    +0x1C u8 movementId
    +0x1D u8 linkId
    +0x1E u8 initStateFlag
    +0x1F u8 pad
    +0x20..+0x27 sead::ListNode
    +0x28 u32 childCount
    +0x2C..+0x34
    +0x38 Actor* parent
    +0x3C..+0x4F

The previous version had movementId/isDeleted at +0x44..+0x4C, which was wrong.
"""
import io

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\actor\actor.h"
t = io.open(p, encoding="utf-8").read()

start = t.index("    u32      heapFlags;")
end = t.index("};", start)

new = """    // +0x04: the heap this actor was allocated from. The lowest bits double as
    // allocation flags, so the engine sometimes reads it as a plain u32.
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

    u32      _20;            // +0x20  sead::ListNode
    u32      _24;            // +0x24
    u32      childCount;     // +0x28
    s32      _2C;            // +0x2C
    u32      _30;            // +0x30
    u32      _34;            // +0x34
    Actor*   parent;         // +0x38  confirmed
    u32      _3C;            // +0x3C
    u32      _40;            // +0x40
    u32      _44;            // +0x44
    u32      _48;            // +0x48
    u32      _4C;            // +0x4C
"""

t = t[:start] + new + t[end:]
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("Actor data members rewritten; parent at +0x38, linkId at +0x1D")
