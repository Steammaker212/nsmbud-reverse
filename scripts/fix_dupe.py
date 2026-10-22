import io

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\actor\actor.h"
t = io.open(p, encoding="utf-8").read()

old = """    u32  id;          // +0x00
    u32  _04;
    u32  _08;
    u32  _0C;
    u32  _10;
    u32  _14;
    u32  _18;
    u32  _1C;
    u32  settings1;   // +0x14  becomes StageActor::settings1
    u32  settings2;   // +0x18  becomes StageActor::settings2
    u32  _1C;
    u32  _20;
    u32  _24;
    u32  _28;
    Vec3 position;    // +0x2C"""

new = """    u32  id;          // +0x00
    u32  _04;
    u32  _08;
    u32  _0C;
    u32  _10;
    u32  settings1;   // +0x14  becomes StageActor::settings1
    u32  settings2;   // +0x18  becomes StageActor::settings2
    u32  _1C;
    u32  _20;
    u32  _24;
    u32  _28;
    Vec3 position;    // +0x2C"""

assert old in t, "ActorBuildInfo block not matched"
io.open(p, "w", encoding="utf-8", newline="\n").write(t.replace(old, new))
print("ActorBuildInfo de-duplicated: settings1 at +0x14, settings2 at +0x18")
