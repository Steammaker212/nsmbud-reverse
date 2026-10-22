"""Fix the SafeString mangling mismatch that blocks symbol resolution.

THE ERROR
=========
    Could not find symbol
      _ZN7ProfileC1EPFP5ActorPK14ActorBuildInfoEjRKN4sead14SafeStringBaseIcEEPK9ActorInfoj
      Profile::Profile(..., sead::SafeStringBase<char> const&, ...) inside ELF!

Our own compiled ELF exports instead:

    _ZN7ProfileC2EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj
    Profile::Profile(..., void*, ...)

THE CAUSE
=========
Two contradictory definitions of sead::SafeString existed in the include tree:

  include/sead/safestring.h   template SafeStringBase<T>, then
                              `using SafeString = SafeStringBase<char>;`   <-- correct
  include/sead.h              `class SafeString { ... }`  a SEPARATE class  <-- wrong

`safestring.h` is never included, and `sead.h` is, so `sead::SafeString` resolved to
the unrelated class. Its mangled form is Pv (weirdly, since it has no members of
pointer type -- but the point is it is not SafeStringBase<char>), while the hook
expects RKN4sead14SafeStringBaseIcEE.

In the real game, SafeString is a TYPEDEF of SafeStringBase<char>, not a distinct
type. That is why every real symbol says SafeStringBase.

THE FIX
=======
Make sead.h include sead/safestring.h and stop redefining SafeString. Verified from
IDA (see docs/IDA_VERIFICATION.md): the constructor at 0x60017F6C never reads its 4th
argument at all -- it overwrites R3 immediately -- so the 4th parameter's static type
only affects mangling, never behaviour. Aligning it with the real mangling is safe.
"""
import io
import os

SRC = r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\build\source"
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"

OLD = '''// A non-owning string view. Same 8-byte shape as SafeString.
class SafeString
{
public:
    SafeString();
    SafeString(const char* s);

    const char* cstr() const { return mStr; }

    const char* mStr;
    u32         mLength;
};
'''

NEW = '''// SafeString lives in sead/safestring.h as `using SafeString = SafeStringBase<char>;`
// because that is what it is in the real game: a typedef, not a distinct class.
// Redeclaring it here as an unrelated class changed the mangled name of every
// function taking a sead::SafeString&, so hooks could no longer resolve their
// symbols (Profile::Profile expected RKN4sead14SafeStringBaseIcEE).
#include "sead/safestring.h"
'''

# The template SafeStringBase in sead.h was also a stub that shadowed nothing useful;
# it must go too, or the two definitions conflict.
OLD_TMPL = '''
template <typename T>
class SafeStringBase : public SafeString
{
};
'''

NEW_TMPL = '''
// SafeStringBase<T> is defined in sead/safestring.h, included above.
'''


def patch(path, pairs, label):
    if not os.path.isfile(path):
        print(f"  SKIP (absent): {label}")
        return
    with io.open(path, encoding="utf-8") as fh:
        text = fh.read()
    changed = False
    for old, new in pairs:
        if old in text:
            text = text.replace(old, new, 1)
            changed = True
        else:
            print(f"  pattern not found in {label}: {old.strip().splitlines()[0][:60]}")
    if changed:
        with io.open(path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)
        print(f"  patched: {label}")
    else:
        print(f"  unchanged: {label}")


for root, name in ((SRC, "build"), (REPO, "repo")):
    print(f"\n=== {name} ===")
    patch(os.path.join(root, "include", "sead.h"),
          [(OLD, NEW), (OLD_TMPL, NEW_TMPL)],
          f"{name}/include/sead.h")

# Show that the alias now wins.
for root, name in ((SRC, "build"), (REPO, "repo")):
    p = os.path.join(root, "include", "sead.h")
    if os.path.isfile(p):
        with io.open(p, encoding="utf-8") as fh:
            t = fh.read()
        print(f"\n{name}/sead.h: includes safestring = "
              f"{'safestring.h' in t}, still declares class SafeString = "
              f"{'class SafeString' in t}")
