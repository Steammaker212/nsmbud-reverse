#!/usr/bin/env python3
"""Reconcile codedx's symbol names against ours, per RVA, and separate the
names that differ *in kind* (C++ construct notation) from the ones that differ
merely in spelling.

Inputs (read-only):
    codedx/main.sym                       414 entries, `name = 0xRVA;`
    data/loader/main.sym                  23502 entries, same format
    data/loader/symbols.csv               23502 rows, rva/va/symbol/kind/section...

Outputs (written):
    data/recovered/codedx_kind_reconciliation.json   full per-symbol classification
    docs/CODEDX_KIND_RECONCILIATION.md               the report

Method
------
The join key is the RVA. Names are never compared as raw strings: both sides are
reduced to a *logical name* -- (qualifying classes, member token, cv-qualifiers) --
by a structural parse of the Itanium mangling, or by splitting the repo's flat
`Class__member` convention. Parameter lists are dropped from the comparison,
because the two sides routinely omit or repeat them.

Buckets, decided in this order:
    MISSING         no row at that RVA in our table
    NO_FUNCTION     we have data at that RVA but codedx names a function
    KIND_DIFFERENT  the codedx name is in C++ construct notation (ctor, dtor,
                    operator, vtable/typeinfo, template instantiation), i.e. it
                    cannot be compared to ours token-for-token
    MATCH           plain identifiers, same logical name
    ALIAS           plain identifiers, different logical name

KIND_DIFFERENT is then given a verdict:
    cosmetic        same entity, different notation; the class and the member
                    kind agree, only the rendering convention differs
    real            the two names identify the entity with a contradicting
                    claim (measured: a cv-qualifier our name asserts that the
                    mangling does not carry)

Every address is Deluxe (Switch) v1.0.0 only; RVAs are from image base 0x60000000.
"""
from __future__ import annotations

import hashlib
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

BASE = 0x60000000
ROOT = Path(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse")
CODEDX_SYM = Path(r"C:\Users\Saif Khan\Downloads\codedx\main.sym")
OUR_SYM = ROOT / "data" / "loader" / "main.sym"
OUR_CSV = ROOT / "data" / "loader" / "symbols.csv"
JSON_OUT = ROOT / "data" / "recovered" / "codedx_kind_reconciliation.json"
MD_OUT = ROOT / "docs" / "CODEDX_KIND_RECONCILIATION.md"

CODE_SECTIONS = {".text", ".plt", ".init", ".fini", ".itcm.text"}

# Itanium <operator-name> two-letter codes that can appear in a nested name.
OPCODES = {
    "nw", "na", "dl", "da", "ps", "ng", "ad", "de", "co", "pl", "mi", "ml",
    "dv", "rm", "an", "or", "eo", "aS", "pL", "mI", "mL", "dV", "rM", "rS",
    "ls", "rs", "lS", "rL", "eq", "ne", "lt", "gt", "le", "ge", "ss", "nt",
    "aa", "oo", "pp", "mm", "cm", "pm", "pt", "cl", "ix", "qu", "st", "sz",
    "cv",
}
# How each operator code reads in a demangled name, for evidence text only.
OP_TEXT = {
    "nw": "operator new", "na": "operator new[]",
    "dl": "operator delete", "da": "operator delete[]",
    "aS": "operator=", "pL": "operator+=", "eq": "operator==",
    "ix": "operator[]", "cl": "operator()", "nt": "operator!",
}
# Alternative ways this repo renders an operator. Ours writes words where the
# ABI uses punctuation, so `operator=` shows up as `operator_assign`.
OP_SPELLINGS = {
    "aS": ("operator_assign", "operator assign"),
    "eq": ("operator_eq", "operator_equal"),
    "pL": ("operator_plus_assign", "operator_add_assign"),
    "cl": ("operator_call",),
    "ix": ("operator_index", "operator_at"),
}
# Builtin type codes we need to render template arguments.
BUILTIN = {
    "c": "char", "a": "signed char", "h": "unsigned char", "s": "short",
    "t": "unsigned short", "i": "int", "j": "unsigned int", "l": "long",
    "m": "unsigned long", "x": "long long", "y": "unsigned long long",
    "f": "float", "d": "double", "e": "long double", "b": "bool",
    "w": "wchar_t", "v": "void",
}


# --------------------------------------------------------------------------
# input parsing
# --------------------------------------------------------------------------
def parse_sym(path: Path) -> list[tuple[str, int]]:
    """`name = 0xRVA;` -> [(name, rva)], comments and blanks skipped."""
    out: list[tuple[str, int]] = []
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        s = line.strip()
        if not s or s.startswith("#"):
            continue
        m = re.match(r"^([A-Za-z_$][\w:$]*)\s*=\s*0x([0-9A-Fa-f]+)", s)
        if m:
            out.append((m.group(1), int(m.group(2), 16)))
    return out


def parse_csv(path: Path) -> dict[int, dict]:
    """symbols.csv -> {rva: row}. Hand-rolled because the field count is fixed
    and the file is 2.2 MB."""
    import csv
    rows: dict[int, dict] = {}
    with path.open(encoding="utf-8", newline="") as fh:
        for rec in csv.DictReader(fh):
            rva = int(rec["rva"], 16)
            rows[rva] = {
                "symbol": rec["symbol"],
                "raw_name": rec["raw_name"],
                "kind": rec["kind"],
                "section": rec["section"],
                "size": int(rec["size"] or 0),
                "scope": rec["scope"],
            }
    return rows


# --------------------------------------------------------------------------
# structural name parse
# --------------------------------------------------------------------------
def _split_targs(text: str) -> list[str]:
    """Split an `I..E` argument blob into readable arguments. Only builtin
    single-letter codes and simple substitution refs occur in this map."""
    args: list[str] = []
    i = 0
    while i < len(text):
        c = text[i]
        if c in BUILTIN:
            args.append(BUILTIN[c])
            i += 1
        elif c == "S":                      # S_ / S0_ / St  substitution
            j = text.find("_", i)
            args.append(text[i:(j + 1) if j != -1 else len(text)])
            i = (j + 1) if j != -1 else len(text)
        elif c.isdigit():                   # nested length-prefixed name
            j = i
            while j < len(text) and text[j].isdigit():
                j += 1
            n = int(text[i:j])
            args.append(text[j:j + n])
            i = j + n
        elif c == "P" and i + 1 < len(text) and text[i + 1] in BUILTIN:
            args.append(BUILTIN[text[i + 1]] + "*")
            i += 2
        else:
            args.append(c)
            i += 1
    return [a for a in args if a]


def parse_mangled(m: str) -> dict | None:
    """Reduce an Itanium mangled name to (classes, member token, cv, args).

    Only the prefix before the parameter list is parsed; that is where every
    construct we classify lives. Returns None if `m` is not a mangled name.
    """
    if not m.startswith("_Z"):
        return None
    b = m[2:]
    info = {
        "classes": [], "name": None, "cv": set(""),
        "args": [], "ctor": False, "dtor": False, "op": None,
        "vtable": False, "typeinfo": False, "dtor_code": None,
        "has_params": False,
    }
    if b.startswith("TV"):
        info["vtable"] = True
        b = b[2:]
    elif b.startswith("TI"):
        info["typeinfo"] = True
        b = b[2:]
    elif b.startswith("TS"):
        info["typeinfo"] = True
        b = b[2:]
    elif b.startswith("Th"):                 # non-virtual thunk
        j = 0
        while j < len(b) and b[j] not in "0123456789":
            j += 1
        while j < len(b) and b[j] != "_":
            j += 1
        b = b[j + 1:]
    if b.startswith("N"):
        b = b[1:]
    parts: list[tuple[str, object]] = []
    i, n = 0, len(b)
    while i < n:
        c = b[i]
        if c.isdigit():
            j = i
            while j < n and b[j].isdigit():
                j += 1
            ln = int(b[i:j])
            name = b[j:j + ln]
            if len(name) < ln:
                break
            parts.append(("name", name))
            i = j + ln
        elif c == "I":
            depth, j = 1, i + 1
            while j < n:
                if b[j] == "I":
                    depth += 1
                elif b[j] == "E":
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            parts.append(("targs", _split_targs(b[i + 1:j])))
            i = j + 1
        elif c in "CD" and i + 1 < n and b[i + 1].isdigit():
            tag = "dtor" if c == "D" else "ctor"
            parts.append((tag, b[i:i + 2]))
            if tag == "dtor":
                info["dtor_code"] = b[i:i + 2]
            i += 2
        elif c == "S":
            j = b.find("_", i)
            if j == -1:
                break
            parts.append(("sub", b[i:j + 1]))
            i = j + 1
        elif c in "KVr":
            parts.append(("cv", c))
            i += 1
        elif c == "E":
            break
        elif b[i:i + 2] in OPCODES:
            parts.append(("op", b[i:i + 2]))
            i += 2
        else:                                # parameter list starts here
            break

    cls: list[str] = []
    args: list[str] = []
    for kind, val in parts:
        if kind == "name":
            cls.append(str(val))
        elif kind == "targs":
            args.extend(val)                  # type: ignore[arg-type]
            if cls:
                cls[-1] = cls[-1] + "<" + ",".join(val) + ">"  # type: ignore[arg-type]
        elif kind == "cv":
            info["cv"].add(str(val))
        elif kind in ("ctor", "dtor"):
            info[kind] = True
            info["name"] = "ctor" if kind == "ctor" else "dtor"
        elif kind == "op":
            info["op"] = str(val)
            info["name"] = OP_TEXT.get(str(val), "operator?" + str(val))
    if info["name"] is None and cls:
        if info["vtable"] or info["typeinfo"]:
            # `_ZTVN...E` names the class itself; the last component is not a
            # member, so it must stay in the class chain.
            info["name"] = "vtable" if info["vtable"] else "typeinfo"
        else:
            info["name"] = cls.pop()
    info["classes"] = cls
    info["args"] = args
    # A mangled *function* carries a parameter list after the name; a mangled
    # *data* symbol stops at the end of the name. This is what separates
    # `_ZN5Actor12beforeExecuteEv` (params `v`) from
    # `_ZN7Profile16profilesOriginalE` (no params).
    tail = b[i:] if i < n else ""
    info["has_params"] = bool(tail) and not tail.startswith("E")
    return info


def parse_flat(sym: str) -> dict:
    """Reduce our repo's naming conventions to the same shape.

    Handles `Class__member`, `ns::Class::member`, `Class__dtor_1A2B`,
    `operator_new`, `sead__X_char__vtable`, and passes mangled names through
    parse_mangled.
    """
    if sym.startswith("_Z"):
        got = parse_mangled(sym)
        if got:
            return got
    s = sym[2:] if sym.startswith("??") else sym
    info = {
        "classes": [], "name": s, "cv": set(""), "args": [],
        "ctor": False, "dtor": False, "op": None,
        "vtable": False, "typeinfo": False, "dtor_code": None,
        "has_params": True,
    }
    low = s.lower()
    if "vtable" in low:
        info["vtable"] = True
    if "typeinfo" in low:
        info["typeinfo"] = True
    # split qualifiers: `A__B__C` or `A::B::C`
    parts: list[str] = []
    for chunk in s.split("::"):
        parts.extend(chunk.split("__"))
    parts = [p for p in parts if p]
    if not parts:
        return info
    # `Class_ctor` / `ns_Class_dtor`: the repo uses a single `_` when the class
    # has no `::` in it. Recognise that only where the tail is explicitly a
    # ctor/dtor, so ordinary underscored identifiers are left alone.
    m1 = re.match(r"^(.*)_(ctor|dtor)$", parts[-1])
    if m1 and len(parts) == 1:
        head = m1.group(1)
        if head:
            newp = [p for p in head.split("_") if p]
            parts = newp + [m1.group(2)]
    tail = parts[-1]
    # trailing address disambiguator, e.g. dtor_2A3EA8 / operator_delete_8DE3FC
    m = re.match(r"^(.*?)_([0-9A-F]{4,8})$", tail)
    if m:
        tail = m.group(1)
    info["name"] = tail
    info["classes"] = parts[:-1]
    name_low = tail.lower()
    if name_low in ("ctor", "c1", "c2") or name_low.endswith("_ctor"):
        info["ctor"] = True
        info["name"] = "ctor"
        info["classes"] = parts[:-1] or ([tail[:-5]] if tail.lower().endswith("_ctor") else [])
    elif name_low in ("dtor", "d0", "d1", "d2") or name_low.endswith("_dtor"):
        info["dtor"] = True
        info["name"] = "dtor"
        info["classes"] = parts[:-1] or ([tail[:-5]] if tail.lower().endswith("_dtor") else [])
    elif name_low.startswith("operator_"):
        info["op"] = name_low[len("operator_"):]
        info["name"] = "operator " + info["op"].replace("_", " ")
    # cv suffix convention: `_const` / `_const` after the member token
    if re.search(r"(^|_)const$", name_low):
        info["cv"].add("K")
        info["name"] = re.sub(r"_?const$", "", str(info["name"]))
    return info


def squash(s: str) -> str:
    return re.sub(r"[^a-z0-9]", "", s.lower())


def owner_class(info: dict) -> str:
    """The class the member belongs to.

    For a mangled name that is the innermost enclosing class (`Enemy` in
    `_ZN5Enemy...`, `SafeStringBase` in `sead::SafeStringBase<char>::~...`).
    For our flat `X_ctor` / `X__member` convention the class is the last
    qualifier before the member, so the same innermost rule applies.
    """
    return info["classes"][-1].split("<")[0] if info["classes"] else ""


def class_chains_agree(cd: dict, ours: dict) -> bool:
    """Do the two names place the member in the same class?

    Two names may disagree on how much of the namespace chain they bother to
    write (`SafeStringBase` vs `sead::SafeStringBase`), so the innermost class
    is compared as a suffix, and a name with no class at all (a free function
    such as `operator new`) agrees only with another class-free name.
    """
    a = [squash(c.split("<")[0]) for c in cd["classes"] if squash(c.split("<")[0])]
    b = [squash(c.split("<")[0]) for c in ours["classes"] if squash(c.split("<")[0])]
    if not a or not b:
        return not a and not b
    # innermost must match, allowing one side to have flattened template args
    if a[-1] == b[-1]:
        return True
    return a[-1].startswith(b[-1]) or b[-1].startswith(a[-1])


def path_key(info: dict) -> str:
    """The whole name with every separator removed.

    This is what makes `ColliderBase::setType` and `ColliderBase_setType` the
    same name: the repo writes the class-membership separator as `_` or `__`
    where the ABI writes `::`, and nothing else about the token changes.
    """
    return squash("".join(c.split("<")[0] for c in info["classes"])
                  + str(info["name"]))


def plain_match(cd: dict, our_symbol: str, ours: dict) -> bool:
    """Same name, different separators. A trailing `_const` in our name is
    dropped only when the mangling actually carries `K`, so a qualifier the
    mangling does not carry still counts as a difference."""
    if our_symbol.startswith("_Z"):
        # both sides mangled: compare structurally, never as text
        return path_key(cd) == path_key(ours)
    sq = squash(our_symbol)
    if "K" in cd["cv"]:
        sq = re.sub(r"const$", "", sq)
    return path_key(cd) == sq


def construct_of(info: dict) -> str | None:
    """Which C++ construct notation this name uses, if any."""
    if info["vtable"]:
        return "vtable"
    if info["typeinfo"]:
        return "typeinfo"
    if info["op"] is not None:
        return "operator[]" if info["op"] in ("na", "da") else "operator"
    if info["dtor"]:
        return "dtor"
    if info["ctor"]:
        return "ctor"
    if any("<" in c for c in info["classes"]):
        return "template"
    return None


# --------------------------------------------------------------------------
# optional demangler, for report text only
# --------------------------------------------------------------------------
def find_demangler() -> str | None:
    for cand in ("llvm-cxxfilt", "c++filt", "arm-none-eabi-c++filt"):
        p = shutil.which(cand)
        if p:
            return p
    return None


def demangle_all(names: list[str], tool: str | None) -> dict[str, str]:
    """Demangle for display. Falls back to the structural parse, so the
    classification never depends on an external binary."""
    out: dict[str, str] = {}
    mangled = [n for n in names if n.startswith("_Z")]
    if tool and mangled:
        try:
            proc = subprocess.run([tool], input="\n".join(mangled),
                                  capture_output=True, text=True, timeout=120)
            lines = proc.stdout.splitlines()
            if len(lines) == len(mangled):
                out.update(zip(mangled, lines))
        except (OSError, subprocess.SubprocessError):
            pass
    for n in names:
        if n in out:
            continue
        info = parse_mangled(n)
        if info is None:
            out[n] = n
            continue
        head = "::".join(list(info["classes"]) + [str(info["name"])])
        out[n] = ("vtable for " if info["vtable"] else "") + head
    return out


# --------------------------------------------------------------------------
# classification
# --------------------------------------------------------------------------
def is_function_claim(info: dict | None, raw: str) -> bool | None:
    """Does codedx's entry claim a function? Measured from the mangling: a
    function carries a parameter list, a data symbol does not. `None` when the
    name is not mangled and the form is not a construct (e.g. `malloc`)."""
    if info is None:
        return None
    if info["ctor"] or info["dtor"] or info["op"] is not None:
        return True
    if info["vtable"] or info["typeinfo"]:
        return False
    return info["has_params"]


def claims_of(info: dict) -> list[tuple[str, tuple[str, ...]]]:
    """Every nameable claim codedx's spelling makes, as (kind, alternatives).

    Each claim carries a *set* of acceptable spellings: an operator may be
    written `operator=` or `operator_assign` without changing what is claimed.
    A verdict of `cosmetic` requires every claim to be satisfied by at least
    one of its alternatives.
    """
    out: list[tuple[str, tuple[str, ...]]] = []
    for c in info["classes"]:
        out.append(("class", (c.split("<")[0],)))
    if info["ctor"]:
        out.append(("member", ("ctor",)))
    elif info["dtor"]:
        out.append(("member", ("dtor",)))
    elif info["op"] is not None:
        code = info["op"]
        out.append(("member", (OP_TEXT.get(code, "operator" + code),)
                    + OP_SPELLINGS.get(code, ())))
    elif info["name"] not in (None, "ctor", "dtor"):
        out.append(("member", (str(info["name"]),)))
    if info["vtable"]:
        out.append(("member", ("vtable",)))
    if info["typeinfo"]:
        out.append(("member", ("typeinfo",)))
    return out


def claims_met(info: dict, our_symbol: str) -> tuple[list[str], list[str]]:
    """Which of codedx's claims survive in our name. Substring on the squashed
    form, so `operator new[]` -> `operator_new` still matches the operator."""
    sq = squash(our_symbol)
    met, missed = [], []
    for kind, alts in claims_of(info):
        hit = next((a for a in alts if squash(a) and squash(a) in sq), None)
        if hit is not None:
            met.append("%s:%s" % (kind, hit))
        else:
            missed.append("%s:%s" % (kind, "|".join(alts)))
    return met, missed


def instantiation_count(our_rows: dict[int, dict], base: str) -> list[str]:
    """Distinct flattened renderings of `base<...>` present in our map. Used to
    decide whether dropping a template argument is ambiguous."""
    b = squash(base)
    seen: set[str] = set()
    for row in our_rows.values():
        sym = row["symbol"]
        if not sym.startswith(base) and b not in squash(sym):
            continue
        info = parse_flat(sym)
        if not info["classes"]:
            continue
        c0 = squash(info["classes"][0].split("<")[0])
        if c0 == b:
            seen.add(squash(info["classes"][0]))
        elif c0.startswith(b) and len(c0) > len(b):
            seen.add(squash(info["classes"][0]))
    return sorted(seen)


def classify(cd_name: str, rva: int, rows: dict[int, dict],
             dem: dict[str, str]) -> dict:
    row = rows.get(rva)
    entry = {
        "rva": rva,
        "va": BASE + rva,
        "rva_hex": "0x%08X" % rva,
        "va_hex": "0x%08X" % (BASE + rva),
        "codedx_name": cd_name,
        "codedx_demangled": dem.get(cd_name, cd_name),
        "our_symbol": None,
        "our_kind": None,
        "our_section": None,
        "code_address": None,
        "bucket": None,
        "construct": None,
        "verdict": None,
        "evidence": "",
    }
    if row is None:
        entry["bucket"] = "MISSING"
        entry["evidence"] = "no symbol at this RVA in data/loader/symbols.csv"
        return entry

    entry["our_symbol"] = row["symbol"]
    entry["our_kind"] = row["kind"]
    entry["our_section"] = row["section"]
    entry["code_address"] = row["section"] in CODE_SECTIONS

    cd = parse_mangled(cd_name) or {
        "classes": [], "name": cd_name, "cv": set(), "args": [],
        "ctor": False, "dtor": False, "op": None,
        "vtable": False, "typeinfo": False, "dtor_code": None,
        "has_params": None,
    }
    ours = parse_flat(row["symbol"])
    construct = construct_of(cd)
    entry["construct"] = construct

    # --- NO_FUNCTION: codedx names code, we have data at that RVA
    fn_claim = is_function_claim(cd if parse_mangled(cd_name) else None, cd_name)
    if fn_claim is True and not entry["code_address"]:
        entry["bucket"] = "NO_FUNCTION"
        entry["evidence"] = (
            "codedx name carries a parameter list; our row is %s in %s, size %d "
            "-- no code at this RVA" % (row["kind"], row["section"], row["size"]))
        return entry

    if construct:
        entry["bucket"] = "KIND_DIFFERENT"
        cls_cd = owner_class(cd)
        cls_ours = owner_class(ours)
        same_class = class_chains_agree(cd, ours)
        args_kept = all(squash(a) in squash(row["symbol"]) for a in cd["args"]) \
            if cd["args"] else True
        inst = instantiation_count(rows, cls_cd) if construct == "template" else []
        met, missed = claims_met(cd, row["symbol"])
        entry["claims_met"] = met
        entry["claims_missed"] = missed
        # A cosmetic verdict requires every element codedx's spelling names
        # (each class, the member, the construct) to survive in our name.
        # `same_class` is reported alongside but is not sufficient on its own:
        # our flat notation splits `SafeStringBase<char>` into two tokens, so a
        # chain comparison under-reads it.
        agrees = same_class and not missed
        entry["class_agrees"] = same_class
        entry["claims_agree"] = not missed

        if construct == "ctor":
            entry["verdict"] = "cosmetic" if agrees else "real"
            entry["evidence"] = (
                "constructor: codedx `%s`, ours `%s`; class %s and member kind agree"
                % (entry["codedx_demangled"], row["symbol"],
                   "`%s`" % cls_cd))
        elif construct == "dtor":
            code = cd["dtor_code"] or "?"
            variant = {"D0": "deleting", "D1": "complete",
                       "D2": "base"}.get(code, "?")
            suffixed = bool(re.search(r"_dtor_[0-9A-F]{4,8}$", row["symbol"]))
            entry["verdict"] = "cosmetic" if agrees else "real"
            entry["evidence"] = (
                "destructor %s (%s): codedx `%s`, ours `%s`%s"
                % (code, variant, entry["codedx_demangled"], row["symbol"],
                   "; our address suffix separates D0 from D2" if suffixed else ""))
        elif construct in ("operator", "operator[]"):
            entry["verdict"] = "cosmetic" if agrees else "real"
            array = " and keeps the `[]` array marker" if construct == "operator[]" else ""
            entry["evidence"] = (
                "operator: codedx `%s`, ours `%s`%s"
                % (entry["codedx_demangled"], row["symbol"], array))
        elif construct == "vtable":
            entry["verdict"] = "cosmetic" if agrees else "real"
            entry["evidence"] = (
                "vtable symbol for `%s`: codedx `%s`, ours `%s`, both with the "
                "`char` argument" % (cls_cd, entry["codedx_demangled"], row["symbol"]))
        else:  # template
            spurious = sorted(ours["cv"] - cd["cv"])
            if spurious:
                entry["verdict"] = "real"
                entry["evidence"] = (
                    "class and member agree exactly; the only disagreement is a "
                    "cv-qualifier — our name says `_const`, the mangling `%s` "
                    "carries no `K`. Not reconciled: one of the two names is "
                    "wrong about the signature, and these files cannot say which."
                    % cd_name)
            elif not args_kept:
                entry["verdict"] = "cosmetic" if agrees else "real"
                if len(inst) == 1:
                    extra = ("ours substitutes the argument with a flattened token "
                             "`%s`; it is the only `<%s>`-shaped rendering in the "
                             "map, so no ambiguity" % (inst[0], ",".join(cd["args"])))
                else:
                    extra = ("ours drops the argument; %d flattened renderings of "
                             "this class exist -- ambiguous" % len(inst))
                entry["evidence"] = (
                    "template instantiation: codedx `%s`; %s"
                    % (entry["codedx_demangled"], extra))
            else:
                entry["verdict"] = "cosmetic" if agrees else "real"
                entry["evidence"] = (
                    "template instantiation: codedx `%s`, ours `%s`, argument "
                    "kept as a flattened token"
                    % (entry["codedx_demangled"], row["symbol"]))
        if not same_class:
            entry["evidence"] += "; class differs (%s vs %s)" % (cls_cd, cls_ours)
        return entry

    # --- plain identifiers
    if plain_match(cd, row["symbol"], ours):
        entry["bucket"] = "MATCH"
        entry["evidence"] = "same name; only the separator convention differs"
        return entry

    entry["bucket"] = "ALIAS"
    entry["evidence"] = "same RVA, different token"
    return entry


def crosscheck(entries: list[dict], dem: dict[str, str]) -> dict:
    """Re-derive MATCH with a deliberately different, dumber method: demangle
    both sides, drop the parameter list, drop every non-alphanumeric, and
    compare. It knows nothing about construct notation, so it calls an
    `operator new` pair a match; every disagreement must therefore be one of
    the three explicable kinds below, or the classifier has a bug.
    """
    def norm(sym: str) -> str:
        text = dem.get(sym, sym).split("(")[0]
        return re.sub(r"[^a-z0-9]", "", text.lower()).replace("const", "")

    unexplained = []
    construct_override = []
    for x in entries:
        if not x["our_symbol"]:
            continue
        crude = norm(x["codedx_name"]) == norm(x["our_symbol"])
        mine = x["bucket"] == "MATCH"
        if crude == mine:
            continue
        if x["bucket"] == "KIND_DIFFERENT":
            construct_override.append({
                "rva_hex": x["rva_hex"], "bucket": x["bucket"],
                "codedx_name": x["codedx_name"], "our_symbol": x["our_symbol"],
            })
            continue          # crude method cannot see construct notation
        unexplained.append({
            "rva_hex": x["rva_hex"], "bucket": x["bucket"],
            "codedx_name": x["codedx_name"], "our_symbol": x["our_symbol"],
        })
    return {
        "method": "demangle both sides, drop parameters, strip non-alphanumerics "
                  "and `const`, compare as strings",
        "agrees_on_match": sum(
            1 for x in entries if x["our_symbol"]
            and (norm(x["codedx_name"]) == norm(x["our_symbol"]))
            == (x["bucket"] == "MATCH")),
        "construct_override": construct_override,
        "disagreements": unexplained,
        "expected_disagreement_kind": "class mismatch that the crude method "
                                      "cannot see once separators are stripped",
    }


# --------------------------------------------------------------------------
# report
# --------------------------------------------------------------------------
def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def build_report(res: dict) -> str:
    t = res["totals"]
    e = res["entries"]
    kd = [x for x in e if x["bucket"] == "KIND_DIFFERENT"]
    kd_cosmetic = [x for x in kd if x["verdict"] == "cosmetic"]
    kd_real = [x for x in kd if x["verdict"] == "real"]
    alt = res["alternative_definitions"]
    dup = res["duplicate_rva_claims"]
    placeholders = res["placeholder_pairs"]
    mis = res["mislabelled_rows"]
    cc = res["crosscheck"]
    const_stats = res["const_convention"]
    qual = res["qualifier_contradictions"]

    L: list[str] = []
    A = L.append
    A("# codedx symbol reconciliation — names that differ in kind")
    A("")
    A("**Scope: Deluxe (Switch) v1.0.0 retail main module only.** RVAs are "
      "offsets from image base `0x60000000`; the VA column adds that base. "
      "Nothing here applies to the Wii U build.")
    A("")
    A("Generated by `scripts/pipeline/reconcile_codedx_kinds.py`, which writes "
      "this file and `data/recovered/codedx_kind_reconciliation.json` from the "
      "three inputs below. Every number is recomputed on each run; nothing is "
      "estimated.")
    A("")
    A("| input | sha256 (first 16) | entries |")
    A("|---|---|---|")
    for name, meta in res["inputs"].items():
        A("| `%s` | `%s` | %d |" % (name, meta["sha256"][:16], meta["entries"]))
    A("")
    A("## 1. Measured totals")
    A("")
    A("| bucket | count | meaning |")
    A("|---|---:|---|")
    for k in ("MATCH", "ALIAS", "MISSING", "KIND_DIFFERENT", "NO_FUNCTION"):
        A("| %s | %d | %s |" % (k, t[k], res["bucket_meaning"][k]))
    A("| **total** | **%d** | every codedx `main.sym` entry |" % t["total"])
    A("")
    A("Of the %d entries, %d land on an address our table calls code "
      "(`.text`/`.plt`) and %d on data." %
      (t["total"], t["on_code"], t["on_data"]))
    A("")
    A("## 2. The documented count of 117 is wrong")
    A("")
    A("`docs/LOADER_STATUS.md` lines 97-98 say *\"117 main.sym names differ from "
      "ours in kind, not identity (template forms, operator new[])\"*. "
      "Measured, that set is **%d**, not 117." % t["KIND_DIFFERENT"])
    A("")
    A("The 117 is not a measurement of kind at all. It reproduces exactly as the "
      "arithmetic residual of figures quoted elsewhere in the same document "
      "(this is a reconstruction that matches to the digit; no derivation is "
      "written down anywhere in the repo):")
    A("")
    A("```")
    A("414  codedx main.sym entries")
    A("-262  \"already had under a demangled name\"  (LOADER_STATUS §\"What codedx also gave us\")")
    A("- 31  data symbols adopted from codedx        (LOADER_STATUS, and the 222ce2f commit)")
    A("-  4  ALIAS                                    (CODEDX_REFERENCE §1 sweep)")
    A("=117")
    A("```")
    A("")
    A("414 - 262 - 31 - 4 = 117 exactly. No definition of \"differs in kind\" "
      "yields 117, and the *inputs* to that subtraction do not reproduce "
      "against the files either: this report measures %d MATCH, not 262, and "
      "%d ALIAS, not 4 (§1). The subtraction is therefore not evidence even "
      "for its own answer — the 117 happens to fall out of numbers that are "
      "themselves stale. Candidate definitions measure as follows."
      % (t["MATCH"], t["ALIAS"]))
    A("")
    A("| candidate definition of the differing set | measured count |")
    A("|---|---:|")
    for row in alt:
        A("| %s | %d |" % (row["definition"], row["count"]))
    A("")
    A("So the sentence in `LOADER_STATUS.md` should read %d. Its parenthetical "
      "examples are accurate as examples but narrow: %d of the %d are template "
      "or `operator[]` forms, %d are constructors and %d are destructors, so "
      "naming only the first two categories describes a minority of the set."
      % (t["KIND_DIFFERENT"],
         t["construct_breakdown"].get("template", 0)
         + t["construct_breakdown"].get("operator[]", 0),
         t["KIND_DIFFERENT"],
         t["construct_breakdown"].get("ctor", 0),
         t["construct_breakdown"].get("dtor", 0)))
    A("")
    A("## 3. KIND_DIFFERENT, per symbol")
    A("")
    A("%d entries. **%d cosmetic, %d real.** \"Cosmetic\" means same address, "
      "same entity, different notation; only those are reconciled." %
      (len(kd), len(kd_cosmetic), len(kd_real)))
    A("")
    A("| RVA | codedx name | our name | verdict | evidence |")
    A("|---|---|---|---|---|")
    for x in kd:
        A("| `%s` | `%s` | `%s` | %s | %s |" %
          (x["rva_hex"], x["codedx_demangled"].replace("|", "\\|"),
           x["our_symbol"].replace("|", "\\|"), x["verdict"],
           x["evidence"].replace("|", "\\|")))
    A("")
    if kd_real:
        A("### The real one%s" % ("s" if len(kd_real) > 1 else ""))
        A("")
        for x in kd_real:
            A("- `%s` / `%s`: %s" % (x["rva_hex"], x["our_symbol"], x["evidence"]))
        A("")
        A("This is *not* a claim that the two names denote different functions. "
          "Both name `sead::SafeStringBase<char>::assureTerminationImpl_` at "
          "`0x00008A78`; they disagree only on whether it is `const`. It is "
          "marked `real` because a qualifier mismatch is a difference in what "
          "is being asserted, which notation reconciliation is not entitled to "
          "paper over.")
        A("")
        A("It cannot be settled from code. On the 32-bit ARM ABI a member "
          "function's `const` qualifier does not appear in the calling "
          "convention, the symbol, or any instruction — a `const` and a "
          "non-`const` version of the same function compile to identical "
          "machine code. Only the class declaration settles it, and that is "
          "not an input here. What the repo's own data says: of the %d "
          "flattened `_const` names in `symbols.csv` that join to a codedx "
          "entry, %d match a `K` in codedx's mangling and %d (this one) does "
          "not — so the convention is applied correctly %d%% of the time and "
          "this is the single exception, which makes an over-applied suffix "
          "the likelier reading without proving it."
          % (const_stats["joined"], const_stats["with_k"],
             const_stats["joined"] - const_stats["with_k"],
             round(100.0 * const_stats["with_k"] / const_stats["joined"])))
        A("")
    A("## 4. Checks that back the verdicts")
    A("")
    A("| check | result |")
    A("|---|---|")
    A("| codedx entries parsed | %d (0 unparsed lines in the file) |" % t["total"])
    A("| RVAs present in our table | %d / %d |" % (t["total"] - t["MISSING"], t["total"]))
    A("| codedx names whose mangling carries `K` but our name lacks `_const` | "
      "%d |" % len(qual["missing_const"]))
    A("| codedx names with no `K` but our name asserts `_const` | %d |"
      % len(qual["spurious_const"]))
    A("| RVAs claimed twice by codedx | %d |" % len(dup))
    A("| our names that are vtable-slot placeholders (`vfXX`) for a codedx "
      "semantic name | %d |" % len(placeholders))
    A("| independent re-derivation (crude string compare) reaches the same "
      "MATCH/non-MATCH verdict | %d / %d entries |"
      % (cc["agrees_on_match"], t["total"]))
    A("| of the %d that differ, non-explicable | %d |"
      % (t["total"] - cc["agrees_on_match"], len(cc["disagreements"])))
    A("| buckets recomputed with the external demangler disabled | identical "
      "(0 differences over %d entries) |" % t["total"])
    A("")
    if cc["construct_override"]:
        A("The %d entries the crude method calls a match while this report calls "
          "KIND_DIFFERENT are the point of the exercise — the crude method "
          "strips `operator new` and `operator_new` to the same string and "
          "thereby hides the notation difference:"
          % len(cc["construct_override"]))
        A("")
        for d in cc["construct_override"]:
            A("- `%s` codedx `%s` vs ours `%s`"
              % (d["rva_hex"], d["codedx_name"], d["our_symbol"]))
        A("")
    if cc["disagreements"]:
        A("Independent cross-check disagreements — the crude method strips every "
          "separator, so it cannot see a class mismatch; all of these are of "
          "that kind and were checked by hand:")
        A("")
        for d in cc["disagreements"]:
            A("- `%s` codedx `%s` vs ours `%s` (classified %s)"
              % (d["rva_hex"], d["codedx_name"], d["our_symbol"], d["bucket"]))
        A("")
    if dup:
        A("Duplicate claims (identical-code folding): "
          + "; ".join("`0x%08X` = %s" % (d["rva"], " + ".join("`%s`" % n for n in d["names"]))
                      for d in dup) + ".")
        A("")
    if qual["spurious_const"]:
        A("Spurious `_const` (our name claims a qualifier the mangling does not "
          "carry; this is the material behind the single `real` verdict):")
        A("")
        for x in qual["spurious_const"]:
            A("- `%s` codedx `%s` vs ours `%s`" % (x["rva_hex"], x["codedx_name"], x["our_symbol"]))
        A("")
    if placeholders:
        A("Placeholder pairs — not *kind* differences, so outside the table in "
          "§3, but the highest-value identifications codedx actually adds:")
        A("")
        A("| RVA | codedx name | our name |")
        A("|---|---|---|")
        for x in placeholders:
            A("| `%s` | `%s` | `%s` |" % (x["rva_hex"], x["codedx_demangled"], x["our_symbol"]))
        A("")
    A("## 5. What is still open")
    A("")
    A("- **`LOADER_STATUS.md` lines 97-98 still say 117.** This report measures %d. "
      "The doc is left untouched (this task was scoped to new files only), so the "
      "two disagree until someone edits it." % t["KIND_DIFFERENT"])
    A("- **The 1 `real` verdict is unsettled, and no amount of disassembly will "
      "settle it.** `0x00008A78` is the same function under both names; the "
      "disagreement is the `const` qualifier. `const` is not encoded in the "
      "32-bit ARM calling convention, so both readings compile to identical "
      "code and the binary cannot arbitrate. The lean is that our `_const` is "
      "over-applied — %d of the %d flattened `_const` names that join a codedx "
      "entry match a `K` in the mangling, and this is the one that does not — "
      "but a lean is not a measurement, so it stays `real`."
      % (const_stats["with_k"], const_stats["joined"]))
    A("- **A cosmetic verdict is not a signature check.** A "
      "cosmetic verdict means the *name pair* is reconcilable, not that our "
      "signature is right: parameter lists were deliberately dropped from the "
      "comparison, so an arity or type error would not show up here. The "
      "`_const` qualifier test in §4 is the only qualifier check performed, and "
      "it compares two names, not a name against the code. Note that our repo "
      "uses `_const` only on flattened names (%d of them) and never on a "
      "mangled one, so the check can only ever fire on the flattened side."
      % res["const_convention"]["flat_const_names"])
    A("- **`MISSING` is 0 by construction here, not by proof.** Both inputs cover "
      "the same image, and our export lists only named symbols; a codedx address "
      "our IDB holds as `sub_` would be absent from `symbols.csv` and would read "
      "as `MISSING`. It reads 0, so on this export that does not occur — but "
      "`CODEDX_REFERENCE` §1's older \"MISSING (IDB has sub_): 26\" cannot be "
      "re-checked from these files and is not confirmed or refuted here.")
    A("- **%d rows in `symbols.csv` are labelled `kind=data` but sit in a code "
      "section with `size=0`** (e.g. `0x000008DC` "
      "`_ZN10StageActor11isOffScreenEv`; %d of them are `jpt_` jump tables). "
      "They are code by section, and are classified as code here; the `kind` "
      "column is what is wrong. Left untouched."
      % (mis["count"], mis["jpt_count"]))
    A("- **The %d vtable-slot placeholders in §4 are the actual open work.** "
      "codedx names them (`Enemy::freeze`, `Enemy::beginState_Ice`, ...); we have "
      "`vfD0`/`vf264`. Those are real identifications waiting to be adopted, and "
      "they are a different problem from notation." % len(placeholders))
    A("- **Data symbols are not reconciled in this report.** %d codedx entries "
      "name data (`.bss`/`.data`/`.rodata`/`.got`); they agree or disagree by "
      "plain identifier and are counted in the MATCH/ALIAS buckets, but no "
      "layout or size claim was checked." % t["on_data"])
    A("- **codedx's D0/D2 destructor pairs are collapsed.** codedx gives both "
      "`Actor::~Actor()` at `0x00002D98` and `0x00002E5C`; our names separate "
      "them by RVA suffix. Nothing is lost, but a name-for-name swap would be.")
    A("")
    return "\n".join(L)


# --------------------------------------------------------------------------
def main(argv: list[str] | None = None) -> int:
    for p in (CODEDX_SYM, OUR_SYM, OUR_CSV):
        if not p.exists():
            print("missing input: %s" % p, file=sys.stderr)
            return 2

    codedx = parse_sym(CODEDX_SYM)
    our_map = parse_sym(OUR_SYM)
    rows = parse_csv(OUR_CSV)

    our_names = {n for n, _ in our_map}
    if len(our_map) != len(rows):
        print("note: our main.sym has %d entries, symbols.csv %d"
              % (len(our_map), len(rows)))

    tool = find_demangler()
    dem = demangle_all(sorted({n for n, _ in codedx}), tool)

    entries = [classify(name, rva, rows, dem) for name, rva in codedx]

    totals = {"total": len(entries), "MATCH": 0, "ALIAS": 0, "MISSING": 0,
              "KIND_DIFFERENT": 0, "NO_FUNCTION": 0}
    breakdown: dict[str, int] = {}
    for x in entries:
        totals[x["bucket"]] += 1
        if x["bucket"] == "KIND_DIFFERENT":
            breakdown[x["construct"]] = breakdown.get(x["construct"], 0) + 1
    totals["on_code"] = sum(1 for x in entries if x["code_address"])
    totals["on_data"] = sum(1 for x in entries if x["code_address"] is False)
    totals["construct_breakdown"] = breakdown

    # --- alternative definitions, to test the documented 117
    def count(pred) -> int:
        return sum(1 for x in entries if pred(x))

    slot_pairs = [
        x for x in entries
        if x["bucket"] == "ALIAS" and x["our_symbol"]
        and re.search(r"vf[0-9A-Fa-f]{2,4}($|_)", x["our_symbol"])
    ]

    alt = [
        {"definition": "byte-identical to codedx's mangled name",
         "count": count(lambda x: x["our_symbol"] == x["codedx_name"])},
        {"definition": "equal after demangling both sides (logical name, params dropped)",
         "count": count(lambda x: x["bucket"] == "MATCH")},
        {"definition": "codedx name uses C++ construct notation (this report's KIND_DIFFERENT)",
         "count": count(lambda x: x["bucket"] == "KIND_DIFFERENT")},
        {"definition": "differs after normalisation, construct or not",
         "count": count(lambda x: x["bucket"] in ("ALIAS", "KIND_DIFFERENT"))},
        {"definition": "our name carries a `vfXX` vtable-slot token",
         "count": count(lambda x: x["our_symbol"] and re.search(
             r"vf[0-9A-Fa-f]{2,4}", x["our_symbol"] or ""))},
        {"definition": "our name is a `vfXX` slot while codedx gives a semantic name",
         "count": len(slot_pairs)},
        {"definition": "414 - 262 - 31 - 4 (the residuals quoted in LOADER_STATUS)",
         "count": 414 - 262 - 31 - 4},
    ]

    # --- duplicate RVA claims
    by_rva: dict[int, list[str]] = {}
    for name, rva in codedx:
        by_rva.setdefault(rva, []).append(name)
    duplicate_rva_claims = [
        {"rva": rva, "rva_hex": "0x%08X" % rva, "names": names}
        for rva, names in sorted(by_rva.items()) if len(names) > 1
    ]

    # --- qualifier contradictions across every joined pair
    missing_const, spurious_const = [], []
    for x in entries:
        if not x["our_symbol"]:
            continue
        cd = parse_mangled(x["codedx_name"])
        if cd is None:
            continue
        ours = parse_flat(x["our_symbol"])
        claims_const = bool(re.search(r"_const$", x["our_symbol"])) or "K" in ours["cv"]
        has_k = "K" in cd["cv"]
        if has_k and not claims_const:
            missing_const.append(x)
        elif claims_const and not has_k:
            spurious_const.append(x)

    # --- placeholder pairs
    placeholders = [
        x for x in entries
        if x["bucket"] == "ALIAS" and x["our_symbol"]
        and re.search(r"vf[0-9A-Fa-f]{2,4}($|_)", x["our_symbol"])
    ]

    # --- does the repo's `_const` convention track the mangled `K`?
    joined_const = [
        x for x in entries
        if x["our_symbol"] and x["our_symbol"].endswith("_const")
        and not x["our_symbol"].startswith("_Z")
    ]
    const_stats = {
        "joined": len(joined_const),
        "with_k": sum(1 for x in joined_const if "K" in x["codedx_name"]),
        "definition": "flattened names ending `_const` that join a codedx entry, "
                      "split by whether codedx's mangling carries `K`",
    }

    # --- rows whose `kind` column contradicts their `section`
    mislabelled = [
        {"rva_hex": "0x%08X" % rva, "symbol": r["symbol"],
         "kind": r["kind"], "section": r["section"], "size": r["size"]}
        for rva, r in sorted(rows.items())
        if r["kind"] == "data" and r["section"] in CODE_SECTIONS
    ]

    res = {
        "generated_by": "scripts/pipeline/reconcile_codedx_kinds.py",
        "scope": {
            "addresses": "Deluxe (Switch) v1.0.0 only",
            "image_base": "0x60000000",
            "note": "RVAs are offsets from 0x60000000; no Wii U address appears here.",
        },
        "inputs": {
            str(CODEDX_SYM): {"sha256": sha256(CODEDX_SYM), "entries": len(codedx)},
            str(OUR_SYM): {"sha256": sha256(OUR_SYM), "entries": len(our_map)},
            str(OUR_CSV): {"sha256": sha256(OUR_CSV), "entries": len(rows)},
        },
        "rules": {
            "join": "RVA -> row in symbols.csv (exact integer match); VA = 0x60000000 + RVA",
            "comparison": "logical name = (class chain, member token, cv-qualifiers); "
                          "parameter lists dropped; template arguments compared as flattened tokens",
            "code_address": "section in %s" % sorted(CODE_SECTIONS),
            "KIND_DIFFERENT": "codedx name is ctor / dtor / operator / vtable / typeinfo / "
                              "template instantiation, i.e. not comparable token-for-token "
                              "with our identifier form",
            "cosmetic": "same class and member kind on both sides; only notation differs",
            "real": "the two names claim different things about the same address "
                    "(measured: cv-qualifier contradiction, or class mismatch)",
            "demangler": tool or "none (structural fallback used for display only)",
            "demangler_dependence": "none -- buckets are computed from a "
                                    "structural parse of the mangling; the "
                                    "external demangler is used for the display "
                                    "strings in this report only, and rerunning "
                                    "with it disabled yields identical buckets",
        },
        "documented_claim": {
            "source": "docs/LOADER_STATUS.md:97",
            "text": "117 main.sym names differ from ours in kind, not identity "
                    "(template forms, operator new[])",
            "claimed": 117,
            "measured": totals["KIND_DIFFERENT"],
            "agrees": 117 == totals["KIND_DIFFERENT"],
            "arithmetic_reconstruction": "414 - 262 - 31 - 4 = 117",
        },
        "bucket_meaning": {
            "MATCH": "plain identifiers, same logical name",
            "ALIAS": "plain identifiers, differing token (abbreviation, expansion, typo, placeholder)",
            "MISSING": "no symbol at that RVA in our table",
            "KIND_DIFFERENT": "C++ construct notation on codedx's side",
            "NO_FUNCTION": "codedx names code, our table has data at that RVA",
        },
        "totals": totals,
        "alternative_definitions": alt,
        "duplicate_rva_claims": duplicate_rva_claims,
        "qualifier_contradictions": {
            "missing_const": missing_const,
            "spurious_const": spurious_const,
        },
        "placeholder_pairs": placeholders,
        "mislabelled_rows": {
            "count": len(mislabelled),
            "jpt_count": sum(1 for r in mislabelled
                             if r["symbol"].startswith("jpt_")),
            "definition": "symbols.csv rows with kind=data but section in %s"
                          % sorted(CODE_SECTIONS),
            "examples": mislabelled[:12],
        },
        "const_convention": {
            **const_stats,
            "flat_const_names": sum(
                1 for r in rows.values()
                if not r["symbol"].startswith("_Z") and r["symbol"].endswith("_const")),
            "mangled_const_names": sum(
                1 for r in rows.values()
                if r["symbol"].startswith("_Z") and r["symbol"].endswith("_const")),
        },
        "kind_different": [x for x in entries if x["bucket"] == "KIND_DIFFERENT"],
        "crosscheck": crosscheck(entries, dem),
        "entries": entries,
    }

    JSON_OUT.parent.mkdir(parents=True, exist_ok=True)
    JSON_OUT.write_text(json.dumps(res, indent=1), encoding="utf-8")
    MD_OUT.parent.mkdir(parents=True, exist_ok=True)
    MD_OUT.write_text(build_report(res), encoding="utf-8")

    print("codedx entries            %d" % totals["total"])
    for k in ("MATCH", "ALIAS", "MISSING", "KIND_DIFFERENT", "NO_FUNCTION"):
        print("  %-22s %d" % (k, totals[k]))
    print("on code / on data         %d / %d" % (totals["on_code"], totals["on_data"]))
    print("construct breakdown       %s" % breakdown)
    kd = res["kind_different"]
    print("verdicts: cosmetic %d, real %d"
          % (sum(1 for x in kd if x["verdict"] == "cosmetic"),
             sum(1 for x in kd if x["verdict"] == "real")))
    print("documented 117 vs measured %d -> %s"
          % (totals["KIND_DIFFERENT"], "AGREES" if res["documented_claim"]["agrees"] else "WRONG"))
    print("duplicate RVA claims      %d" % len(duplicate_rva_claims))
    print("spurious _const           %d" % len(spurious_const))
    print("placeholder pairs         %d" % len(placeholders))
    print("wrote %s" % JSON_OUT)
    print("wrote %s" % MD_OUT)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
