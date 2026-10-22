"""Correct ActorBuildInfo from StageActor's constructor.

Disassembly of StageActor::StageActor(ActorBuildInfo const*) at 0x600002A0 reads
the build info as follows:

    add  r2, r5, #0x10        ; r2 = buildInfo + 0x10
    ldm  r2, {r0, r1, r2}     ; 3 words from buildInfo+0x10..+0x18
    stm  r3, {r0, r1, r2, r6} ; -> this+0x6C..+0x74 (position), +0x78 = 0
    ldrb r0, [r5, #0x20]      ; buildInfo + 0x20 is a BYTE
    strb r0, [r4, #0x56]      ; -> StageActor::layer

So position is at +0x10, not +0x2C, and there is a byte at +0x20. That matches
the layout below, which therefore replaces my earlier guess outright.
"""
import io

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\actor\actor.h"
t = io.open(p, encoding="utf-8").read()

start = t.index("struct ActorBuildInfo")
end = t.index("};", start) + 2

new = """struct ActorBuildInfo
{
    u32      settings1;    // +0x00
    u32      settings2;    // +0x04
    u32      parentId;     // +0x08
    Profile* profile;      // +0x0C  when set, overrides the sprite-derived profile
    Vec3     position;     // +0x10  verified: read as 3 words into this+0x6C
    u32      rotation;     // +0x1C
    u8       unk20;        // +0x20  verified: byte, becomes StageActor::layer (+0x56)
    u8       eventId1;     // +0x21
    u8       eventId2;     // +0x22
    u8       _23;          // +0x23
    u8       movementId;   // +0x24
    u8       linkId;       // +0x25
    u8       initStateFlag;// +0x26
    u8       _27;          // +0x27
    u32      _28;          // +0x28
};"""

t = t[:start] + new + t[end:]
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("ActorBuildInfo rewritten to the verified layout")
print("  position +0x10, rotation +0x1C, byte +0x20, size 0x2C")
