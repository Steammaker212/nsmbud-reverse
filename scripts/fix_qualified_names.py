"""Rewrite C++-qualified names in the decompiled corpus into valid C identifiers.

WHY THIS EXISTS
---------------
IDA recovered many callees under their Itanium-demangled C++ names, so the pseudo-code contains
calls like `StateMgr::changeState(...)` and `sead::IDisposer::~IDisposer(...)`. That is not C. The
parser reads `StateMgr::changeState(a1, x)` as a declaration of something named after a type, fails
with "expected identifier or '('", and the whole translation unit is unparseable -- 137 of 475 files
and 18,598 call sites, which is the single largest cause of the corpus not being readable C.

The fix must not lose information: these ARE distinct functions from their unqualified namesakes,
and the class prefix is the best evidence we have about what they do. So the transformation is
mechanical and information-preserving rather than a deletion:

    StateMgr::changeState          -> StateMgr__changeState
    sead::IDisposer::~IDisposer    -> sead__IDisposer__dtor

`::` becomes `__` (a legal identifier character pair that cannot appear in a demangled name) and a
destructor `A::~A` collapses to `A__dtor` rather than repeating the class name. The mapping is
many-to-one in no case and stays greppable, so a later pass can recover the original spelling.

Scope: only identifier runs immediately followed by `::` are touched, and only inside code -- string
literals and comments are left alone, because mangled names legitimately appear there and changing a
string constant would change program meaning.
"""
import re
import sys
from pathlib import Path

# A qualified run: at least one identifier, then ::, then an optional ~ and a final identifier.
# The trailing group is anchored so `a ? b::c : d` style expressions cannot swallow the `?`.
QUALIFIED = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)\b")

# Call sites only: a qualified run immediately followed by `(`. A qualified run in any other
# position is a TYPE, which restructure_includes.py already declares; rewriting those broke all
# 475 files with "unknown type name", because no header declares the rewritten spelling.
CALL = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)\b(?=\s*\()")

# Template-instantiated qualified names, e.g. sead::BufferedSafeStringBase<char>::assureTerminationImpl_
#
# The plain CALL pattern above cannot match these: `<char>` sits between two `::` runs, so the final
# `::name(` never follows a bare identifier. 740 such call sites existed and every one of them kept its
# C++ spelling and kept its file failing. A template argument may itself be a qualified or qualified-
# template name (`sead::SafeStringBase<char>`), so the argument is matched as a balanced-ish run of
# identifier characters, `:`, `.`, `*`, and spaces -- enough for the shapes IDA actually emits.
TEMPLATE_CALL = re.compile(
    r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)"      # first qualified run: sead::BufferedSafeStringBase
    r"(<[A-Za-z_0-9:_,\.\* ]*>)"                  # template arguments: <char>
    r"((?:::[A-Za-z_~]\w*)+)"                     # remaining qualified run(s)
    r"\b(?=\s*\()"
)


def rewrite_template_call(match):
    """sead::BufferedSafeStringBase<char>::f  ->  sead__BufferedSafeStringBase_char__f"""
    head, args, tail = match.group(1), match.group(2), match.group(3)
    # Flatten the angle brackets to underscores so the whole thing is one C identifier. `<` and `>`
    # cannot appear in an identifier, and dropping them entirely would merge unrelated names.
    flat = args[1:-1].strip().replace("::", "_").replace("*", "ptr").replace(",", "_").replace(" ", "")
    return head.replace("::", "__") + "_" + flat + tail.replace("::", "__")


# A qualified name used as an ARRAY, not called: `Kanjibo::AnimNamesWait[i]`.
#
# The call-site patterns require a trailing `(`, so these kept their C++ spelling. There is no call
# here -- the scope is only part of the array's name -- so the flattening is the same `::` -> `__`.
# Restricted to a trailing `[` so nothing else is caught.
QUALIFIED_ARRAY = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)\b(?=\s*\[)")

# A qualified OPERATOR call: sead::SafeStringBase<char>::operator=(dst, src).
#
# The components above only allow word characters, and `operator=` is a keyword plus punctuation, so
# every one of these survived the rewrite and stayed C++. Matched as its own case; the template
# argument is optional because both `sead::X::operator=` and `sead::X<char>::operator=` occur.
QUALIFIED_OPERATOR = re.compile(
    r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)"
    r"(<[A-Za-z_0-9:_,\.\* ]*>)?"
    r"::operator\s*(=|\[\]|\(\)|new\[\]|delete\[\]|new|delete|\+|-|\*|/|==|!=|<<|>>)(?=\s*\()"
)

OPNAME = {"=": "assign", "[]": "index", "()": "call", "new[]": "new_array",
          "delete[]": "delete_array", "new": "new", "delete": "delete",
          "+": "add", "-": "sub", "*": "mul", "/": "div", "==": "eq", "!=": "ne",
          "<<": "shl", ">>": "shr"}


def rewrite_qualified_operator(match):
    head, targs, op = match.group(1), match.group(2) or "", match.group(3)
    flat = head.replace("::", "__")
    if targs:
        inner = targs[1:-1].strip().replace("::", "_").replace("*", "ptr").replace(",", "_").replace(" ", "")
        flat += "_" + inner
    return "%s__operator_%s" % (flat, OPNAME.get(op, "op"))


# Destructor spelling, applied to the captured run before the :: replacement.
DTOR = re.compile(r"^(.*?)::~(\w+)$")


def rewrite_qualified(match):
    run = match.group(1)
    d = DTOR.match(run)
    if d:
        # sead::IDisposer::~IDisposer  ->  sead__IDisposer__dtor
        return d.group(1).replace("::", "__") + "__dtor"
    return run.replace("::", "__")


# C++ allocation operators. IDA prints these with their C++ spelling, which no C compiler knows:
# `v2 = operator new(0x178u);`. There are 2,107 operator new, 1,699 operator delete, 257 new[] and
# 200 delete[] sites, across 40 files -- and every one of those 40 files fails to parse. The
# replacements are plain C identifiers declared in nsmbudx_types.h, so the call still means the same
# allocation and the reference stays greppable.
# The `[]` alternatives must come first so `operator new[]` is not read as `operator new` followed by
# junk. No trailing \b either: the match ends in `]`, and `\b` after `]` never matches (there is no
# word boundary between a bracket and whitespace), which is why 257 `operator new[]` sites were left
# unconverted on the first pass while `operator new` was fine.
OPERATOR = re.compile(r"\boperator\s*(new\[\]|delete\[\]|new|delete)(?!\w)")


def rewrite_operator(match):
    kind = match.group(1)
    # operator new[] -> __operator_new_array, operator delete -> __operator_delete, ...
    return "__operator_" + kind.replace("[]", "_array")


def split_code_mask(text):
    """Yield (is_code, chunk) so rewrites never touch strings or comments."""
    i = 0
    n = len(text)
    start = 0
    while i < n:
        c = text[i]
        if c == '"' or c == "'":
            if start < i:
                yield True, text[start:i]
            quote = c
            j = i + 1
            while j < n:
                if text[j] == "\\":
                    j += 2
                    continue
                if text[j] == quote:
                    j += 1
                    break
                j += 1
            yield False, text[i:j]
            i = start = j
        elif c == "/" and i + 1 < n and text[i + 1] == "*":
            if start < i:
                yield True, text[start:i]
            j = text.find("*/", i + 2)
            j = n if j < 0 else j + 2
            yield False, text[i:j]
            i = start = j
        elif c == "/" and i + 1 < n and text[i + 1] == "/":
            if start < i:
                yield True, text[start:i]
            j = text.find("\n", i)
            j = n if j < 0 else j
            yield False, text[i:j]
            i = start = j
        else:
            i += 1
    if start < n:
        yield True, text[start:n]


def transform(text):
    out = []
    changed = 0
    for is_code, chunk in split_code_mask(text):
        if is_code:
            new, k0 = TEMPLATE_CALL.subn(rewrite_template_call, chunk)
            new, kq = QUALIFIED_OPERATOR.subn(rewrite_qualified_operator, new)
            new, k1 = QUALIFIED_ARRAY.subn(rewrite_qualified, new)
            new, k = CALL.subn(rewrite_qualified, new)
            new, k2 = OPERATOR.subn(rewrite_operator, new)
            changed += k0 + kq + k1 + k + k2
            out.append(new)
        else:
            out.append(chunk)
    return "".join(out), changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_qualified_names.py <dir> [--write]")
        return 2
    root = Path(argv[1])
    write = "--write" in argv
    touched = 0
    total = 0
    # Only .c files, and only CALL sites -- a qualified run immediately followed by `(`.
    #
    # Both restrictions are the result of getting it wrong first. Rewriting headers broke the type
    # declarations they carry. Rewriting every qualified run in the .c files turned type uses like
    # `sead::IDisposer *a1` into `sead__IDisposer *a1`, which no header declares, and all 475 files
    # failed with "unknown type name". The declaration machinery in restructure_includes.py already
    # knows how to present these types; what it cannot do is make `StateMgr::changeState(x)` legal C.
    # So the narrow job is exactly the call sites.
    files = sorted(root.rglob("*.c"))
    for p in files:
        text = p.read_text(encoding="utf-8", errors="surrogateescape")
        new, changed = transform(text)
        if changed:
            touched += 1
            total += changed
            if write:
                p.write_text(new, encoding="utf-8", errors="surrogateescape")
    print("qualified names rewritten: %d in %d files%s"
          % (total, touched, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
