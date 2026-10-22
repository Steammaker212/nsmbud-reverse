"""Make actor/actor.h pull in profile.h, matching the include graph mod code expects.

codedx's actor/actor.h includes profile.h, so any source that only includes an
actor header still sees Profile and ProfileId. Our tree did not, which broke
otherwise-unchanged actor sources.
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"

p = os.path.join(INC, "actor", "actor.h")
t = io.open(p, encoding="utf-8").read()

old = """#include "types.h"
#include "util/vec2.h"
#include "util/vec3.h"
#include "sead.h"

class ActorMgr;
class Profile;
struct ActorInfo;
struct ActorBuildInfo;"""

new = """#include "types.h"
#include "util/vec2.h"
#include "util/vec3.h"
#include "sead.h"
#include "profile.h"

class ActorMgr;
struct ActorInfo;
struct ActorBuildInfo;"""

assert old in t, "actor.h include block not found"
t = t.replace(old, new)
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("actor/actor.h now includes profile.h")
