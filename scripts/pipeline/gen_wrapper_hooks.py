"""Generate wrapper hooks for functions whose calling convention is measured.

This is the step that turns the 80-site catalogue into a build. The catalogue
says "a B/BL here goes to function F"; a *hook* additionally needs F's true
prototype, because the hook is entered with F's arguments and its return value is
used where F's was.

Emitting a forwarder for all 80 sites would be easy and wrong: 79 of them would
be calls with a guessed arity, and a wrong arity corrupts registers silently. So
every candidate must pass four gates, and a candidate that fails any gate is
reported with the gate that rejected it rather than quietly dropped:

  gate 1  the corpus has a decompiled body for the target (evidence of a name)
  gate 2  the branch site and the function entry are different addresses, so the
          original is still reachable and the hook can forward to it. A hook on
          the function's own entry point cannot forward to itself.
  gate 3  the corpus prototype's parameter count equals the count the machine
          code proves, by reading which of r0..r3 the body actually uses
  gate 4  the site re-decodes as the claimed branch kind, and its displacement
          lands on the target RVA

Only candidates passing all four get a wrapper. Wrappers are *behaviour
preserving*: count the call, forward every argument, return the original's value.
That is deliberate -- the first module that runs on hardware must not change
gameplay, or a crash proves nothing about the loader.

Usage:
    python gen_wrapper_hooks.py --repo <repo> --elf <elf> --limit 12
"""
from __future__ import annotations

import argparse
import json
import re
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000

# Corpus prototypes that name a type we can forward without a definition.
SAFE_SCALAR = {
    "int": "int", "signed int": "s32", "unsigned int": "u32", "float": "f32",
    "void": "void", "_BYTE": "u8", "_DWORD": "u32", "_WORD": "u16",
    "_QWORD": "u64", "double": "f64", "char": "char", "signed char": "s8",
    "unsigned char": "u8", "short": "s16", "unsigned short": "u16",
    "int *": "void *", "unsigned int *": "void *", "char *": "char *",
}


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, es, en, _) = struct.unpack_from(
        "<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    out = []
    for i in range(en):
        _n, typ, _f, addr, off, size = struct.unpack_from(
            "<IIIIII", data, shoff + i * es)
        if addr and size:
            out.append({"type": typ, "addr": addr, "offset": off, "size": size})
    return out


class Image:
    def __init__(self, path):
        self.data = Path(path).read_bytes()
        self.secs = sections(self.data)
        self.text = [s for s in self.secs if s["type"] == 1 and s["addr"]]

    def word(self, va):
        best = None
        for s in self.text:
            if s["addr"] <= va < s["addr"] + s["size"]:
                if best is None or s["size"] < best["size"]:
                    best = s
        if best is None:
            return None
        fo = best["offset"] + (va - best["addr"])
        if fo + 4 > len(self.data):
            return None
        return struct.unpack_from("<I", self.data, fo)[0]


def regs_written(w):
    if (w & 0x0C000000) == 0x00000000 and (w & 0x02000000):
        return {(w >> 12) & 0xF}
    if (w & 0x0C000000) == 0x04000000 and ((w >> 20) & 1):
        return {(w >> 12) & 0xF}
    if (w & 0x0E000000) == 0x08000000:
        return {i for i in range(16) if (w >> i) & 1}
    return set()


def regs_read(w):
    r = set()
    if (w & 0x0C000000) == 0x00000000:
        r.add(w & 0xF)
        if not (w & 0x02000000):
            r.add((w >> 8) & 0xF)
            if w & 0x10:
                r.add((w >> 12) & 0xF)
    if (w & 0x0C000000) == 0x04000000:
        r.add((w >> 16) & 0xF)
    if (w & 0x0E000000) == 0x08000000:
        r.add((w >> 16) & 0xF)
    return r


def measure_body(img: Image, rva: int, size: int):
    base = IMAGE_BASE + rva
    step = max(4, (size // 4) * 4)
    reads, writes_r0 = set(), False
    for off in range(0, step, 4):
        w = img.word(base + off)
        if w is None:
            break
        writes_r0 |= 0 in regs_written(w)
        reads |= regs_read(w)
    return {"max_arg": max([i for i in reads if i < 4], default=-1),
            "writes_r0": writes_r0}


DECL = re.compile(r"^([A-Za-z_][\w \t\*]*?)\s*\b(\w+)\s*\(([^;{]*)\)")


def read_prototype(repo: Path, rva: int):
    hits = list((repo / "decompiled" / "src").rglob(
        "%08X_*.c" % (IMAGE_BASE + rva)))
    if not hits:
        return None
    for line in hits[0].read_text(errors="replace").splitlines():
        s = line.strip()
        m = DECL.match(s)
        if m and m.group(2) not in ("if", "for", "while", "switch", "return"):
            params = [p.strip() for p in m.group(3).split(",") if p.strip()]
            if params == ["void"]:
                params = []
            return {"ret": m.group(1).strip(), "name": m.group(2),
                    "params": params, "file": hits[0].name}
    return None


def parse_type(decl: str):
    """Split a C parameter into (type, name)."""
    decl = decl.strip()
    m = re.match(r"^(.*?)\b([A-Za-z_]\w*)\s*$", decl)
    if not m:
        return decl, None
    return m.group(1).strip(), m.group(2)


def c_type(t: str) -> str:
    t = re.sub(r"\s+", " ", t.replace("__fastcall", "").strip())
    if t in SAFE_SCALAR:
        return SAFE_SCALAR[t]
    # Any pointer or unknown struct: forward as void*, which is ABI-identical for
    # a 32-bit register argument and does not require a definition.
    if "*" in t or t.startswith("const"):
        return "void *"
    return "void *" if not t.endswith("void") else "void"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--elf", required=True)
    ap.add_argument("--limit", type=int, default=12)
    ap.add_argument("--max-size", type=int, default=420,
                    help="skip targets whose body is too big to reason about")
    ap.add_argument("--out-dir", default="loader/hooks")
    ap.add_argument("--manifest", default="loader/scratch/wrapper_manifest.json")
    opt = ap.parse_args()

    repo = Path(opt.repo)
    img = Image(opt.elf)
    cand = json.loads((repo / "hooks" / "candidate_hooks.json").read_text())

    accepted, rejected = [], []
    for h in cand:
        why = []
        proto = read_prototype(repo, h["target_rva"])
        if not proto:
            why.append("gate1: no corpus body")
        if h["site_rva"] == h["target_rva"]:
            why.append("gate2: site == entry, cannot forward")
        if h.get("size", 0) > opt.max_size:
            why.append("size: %d > %d" % (h.get("size", 0), opt.max_size))

        # gate 4: the site must still decode to this target
        w = img.word(IMAGE_BASE + h["site_rva"])
        if w is None or (w >> 25) & 0x7 != 0x5:
            why.append("gate4: site is not a branch")
        else:
            imm = w & 0xFFFFFF
            if imm & 0x800000:
                imm -= 0x1000000
            dest = (h["site_rva"] + 8 + imm * 4) & 0xFFFFFFFF
            if dest != h["target_rva"]:
                why.append("gate4: branch to 0x%X not 0x%X"
                           % (dest, h["target_rva"]))

        ev = None
        if proto and h.get("size"):
            ev = measure_body(img, h["target_rva"], h["size"])
            # gate 3: arity agreement
            if ev["max_arg"] + 1 != len(proto["params"]):
                why.append("gate3: corpus says %d params, code proves %d"
                           % (len(proto["params"]), ev["max_arg"] + 1))

        if why:
            rejected.append({**h, "why": why, "proto": proto, "evidence": ev})
            continue
        accepted.append({**h, "proto": proto, "evidence": ev})

    # Prefer the smallest, most-called functions: their behaviour is the easiest
    # to state and to check, and they exercise the loader hardest.
    accepted.sort(key=lambda r: (r["size"], -r["callers"]))
    chosen = accepted[:opt.limit]

    out_dir = repo / opt.out_dir
    out_dir.mkdir(parents=True, exist_ok=True)

    print("candidates: %d   accepted: %d   rejected: %d   chosen: %d"
          % (len(cand), len(accepted), len(rejected), len(chosen)))
    print("\nrejections by gate:")
    counts = {}
    for r in rejected:
        key = r["why"][0].split(":")[0]
        counts[key] = counts.get(key, 0) + 1
    for k, v in sorted(counts.items(), key=lambda kv: -kv[1]):
        print("  %-10s %d" % (k, v))

    # Emit one C file per accepted hook.
    for r in chosen:
        proto = r["proto"]
        ret_c = c_type(proto["ret"])
        fname = "%s_hook" % r["target_name"]
        params = []
        args = []
        for i, p in enumerate(proto["params"]):
            t, n = parse_type(p)
            n = n or ("a%d" % i)
            params.append("%s %s" % (c_type(t), n))
            args.append(n)
        guard = r["target_name"].upper()

        body = []
        body.append("/* %s -- behaviour-preserving wrapper on %s." % (fname, r["target_name"]))
        body.append(" *")
        body.append(" * Generated by scripts/pipeline/gen_wrapper_hooks.py; re-run it")
        body.append(" * rather than editing this file, or the next build will revert it.")
        body.append(" *")
        body.append(" * Measured facts behind this hook (Deluxe / Switch v1.0.0 only):")
        body.append(" *")
        body.append(" *   target      %s" % r["target_name"])
        body.append(" *   address     0x%08X (RVA 0x%X), %d bytes, %d caller(s)"
                    % (IMAGE_BASE + r["target_rva"], r["target_rva"],
                       r["size"], r["callers"]))
        body.append(" *   corpus      decompiled/src/<group>/%s" % proto["file"])
        body.append(" *   branch      %s at RVA 0x%X" % (r["type"], r["site_rva"]))
        body.append(" *   site != entry, so the original is reachable and is called")
        body.append(" *   prototype   %s" % " ".join(
            [proto["ret"], proto["name"] + "(" + ", ".join(proto["params"]) + ")"]))
        body.append(" *   arity       %d, corroborated: the body reads %s"
                    % (len(proto["params"]),
                       ", ".join("r%d" % i for i in range(len(proto["params"])))
                       if proto["params"] else "r0 only"))
        body.append(" *")
        body.append(" * The wrapper counts calls and forwards every argument, then")
        body.append(" * returns whatever the original returned. It changes no")
        body.append(" * behaviour on purpose: a module that silently altered")
        body.append(" * gameplay would make a successful boot impossible to attribute.")
        body.append(" */")
        body.append('#include "hook_api.h"')
        body.append("")
        body.append("DECLARE_ORIG(%s, %s, (%s));"
                    % (ret_c, r["target_name"],
                       ", ".join(params) if params else "void"))
        body.append("")
        body.append("static u32 calls;")
        body.append("")
        body.append("u32 %s_calls(void)" % r["target_name"])
        body.append("{")
        body.append("    return calls;")
        body.append("}")
        body.append("")
        body.append("%s %s(%s)" % (ret_c, fname,
                                   ", ".join(params) if params else "void"))
        body.append("{")
        body.append("    ++calls;")
        body.append("    ++mod_hook_calls;")
        body.append("    /* Persist the proof once, on the first call through this")
        body.append("     * hook: that is what distinguishes 'the module loaded'")
        body.append("     * from 'the hook actually ran'. */")
        body.append("    if (mod_hook_calls == 1)")
        body.append("        mod_write_proof();")
        call = "HOOK_ORIG(%s)(%s)" % (r["target_name"], ", ".join(args))
        if ret_c == "void":
            body.append("    %s;" % call)
        else:
            body.append("    return %s;" % call)
        body.append("}")
        (out_dir / ("%s.c" % fname)).write_text("\n".join(body) + "\n")

    (repo / opt.manifest).parent.mkdir(parents=True, exist_ok=True)
    (repo / opt.manifest).write_text(json.dumps(
        {"chosen": chosen, "rejected": rejected}, indent=1))

    print("\nwrote %d hook sources to %s" % (len(chosen), out_dir))
    for r in chosen:
        print("  %-34s 0x%06X %-5s %d arg(s), %d byte(s)"
              % (r["target_name"], r["site_rva"], r["type"],
                 len(r["proto"]["params"]), r["size"]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
