"""World map tool for NSMBU Deluxe: dump, check and rebuild CS_W<n> archives.

A world map is romfs/Model/CS_W<n>[a|b].Nin_NX_NVN.szs, holding
pointW<n>[a|b].csv, routeW<n>[a|b].csv and output.bfres (the map model; every
point is a bone of the CS_W<n> skeleton, at the bone's position). Every rule
`check` applies is a limit or behaviour read from the game (ledger F0064-F0075,
reverse-engineering/FindingsA/course_select/WorldMapData.cpp).

    python scripts/worldmap/wmtool.py dump  CS_W1.Nin_NX_NVN.szs -o work/W1
    python scripts/worldmap/wmtool.py check work/W1 --courses <romfs>/Course
    python scripts/worldmap/wmtool.py objects CS_W1.Nin_NX_NVN.szs   # castles, houses, pipes ...
    python scripts/worldmap/wmtool.py build CS_W1.Nin_NX_NVN.szs work/W1 -o out/CS_W1.Nin_NX_NVN.szs

`check` also simulates play (every course cleared by both exits) from the
world's start point and reports anything that can never be reached: the
answer to "can this world be explored?".
"""
from __future__ import annotations

import argparse
import csv
import io
import re
import struct
import sys
from collections import defaultdict, deque
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "sdk"))
from course_sprites import yaz0  # noqa: E402

# ---- what the game accepts (WorldMapData::load 0x6017BE9C and helpers) -------

MAX_POINT_CSV = 4095        # read through a 4096-byte string buffer
MAX_ROUTE_CSV = 8191        # 0x2000-byte buffer
MAX_POINTS = 256
MAX_ROUTES = 256
MAX_UNLOCK_NODES = 4        # per exit; a 5th wraps onto slot 0
MAX_UNLOCK_ROUTES = 16
MAX_REVEALS = 2             # columns 5 / 8
MAX_SAVED_F_POINTS = 128    # save slots per world/variant (0x6081F5DC)
MAX_COURSES = 58            # course flags per world (CourseSelectMgr +208)

# Flag names, by mask word and bit (tables built at 0x60183BE8 / F9C / 4350 / 4704).
FLAG_TABLES = {
    "A (+0x42C)": "stop,link1,link2,link3,link4,link5,scale,fixX,fixY,fixZ,focus,board1,Shuffle,"
                  "Slot,1Up,nonstop,onestop,merge",
    "B (+0x430)": "W1PakkunA,W1PakkunB,W1Item,W2Enemy0,W2Enemy1,W2EnemyA,W2EnemyB,W2EnemyC,W2maze,"
                  "W3EnemyA,W3EnemyB,W4EnemyA,W4EnemyB,W4EnemyC,W4EnemyD,W4Circle,ChorobonA,"
                  "ChorobonB,ChorobonC,W5bEnemy1,W5bEnemy2,W5bEnemy3,W5bEnemy4,W5bEnemy5,"
                  "W5bEnemy6,W5bEnemy7,W5bDemo,W5bPreDemo,W5Teresa,noUI,restart",
    "C (+0x434)": "W3TrapA,W3TrapB,W4TrapA,W4TrapB,W6trapA,W6trapB,KanketsusenA,KanketsusenB,"
                  "KanketsusenD,KanketsusenE,dokan,dokan2,RainbowA,RainbowB,RainbowC,RainbowD,"
                  "clear,switchA,switchB,ShipKoopaJr01,ShipKoopaJr02,ShipKoopaJr03,ShipKoopaJr04,"
                  "W8Koopa01,W8Koopa02,W8Koopa03,egg,W7Demo,W7PreDemo,W7DemoEnd,W7Return,dokanW8",
    "D (+0x43C)": "boarding,station,coaster,shadowDemo,shadowRoute,KoopaJr01,W1Item,balloon1,"
                  "balloon2,bubble1,bubble2,water",
}
KNOWN_FLAGS = {f for names in FLAG_TABLES.values() for f in names.split(",")}

# Route types (table 0x60C88ED4 -> codes 0x60AF7B04).
ROUTE_TYPES = {
    "道": ("road", 3), "砂": ("sand", 20), "木": ("wood", 33), "ジャンプ": ("jump", 7),
    "はしご": ("ladder", 6), "ツタ": ("vine", 10), "坂": ("slope", 11), "氷坂": ("ice slope", 12),
    "スイッチブロック": ("switch block", 19), "流砂": ("quicksand", 21), "雪": ("snow", 22),
    "氷": ("ice", 23), "雲": ("cloud", 24), "水": ("water", 25), "はしご右": ("ladder right", 27),
    "はしご左": ("ladder left", 26), "はしご岩": ("rock ladder", 29),
    "はしご岩右": ("rock ladder right", 31), "はしご岩左": ("rock ladder left", 30),
    "はしご縄": ("rope ladder", 32), "土": ("dirt", 28), "石橋": ("stone bridge", 4), "石": ("stone", 5),
}


def point_class(name: str) -> int:
    """0x6019A214: 0 free point, 1 route bend, 2 entry, 3 stop, 4 Toad house / other."""
    if name[:1] == "F":
        return 0
    if name[:1] == "K":
        return 1
    if name[:1] == "W" and name[2:3] == "M":
        return 2
    if name[:1] != "W" or name[2:3] in ("K", "W"):
        return 4
    return 3


CLASS_NAMES = {0: "free", 1: "bend", 2: "entry", 3: "stop", 4: "house/other"}


def course_index(name: str) -> int:
    """0x6040D864: point name -> 0-based course number in its world (-1: none).

    The level file is Course/<world>-<index+1>.sarc.
    """
    if len(name) != 4 or name[0] != "W":
        return -1
    c = name[3]
    n = int(c, 16) if c in "0123456789abcdef" else 0
    kind = name[2]
    if kind == "0":
        return n - 1
    if kind == "S":
        w = ord(name[1]) - ord("1")
        return 12 + w if 0 <= w < 5 else 12
    return {"A": 36, "B": n + 41, "C": n + 22, "G": 19, "K": n + 38 if n > 7 else n + 23,
            "M": 37, "T": n + 20, "W": 34, "X": 57}.get(kind, -1)


# ---- what the map model's bones spawn (0x60227F68, ledger F0237-F0240) -------------

# World-map actor profiles (ids 855-910; names from their Profile constructors).
MAP_PROFILES = {
    855: "CourseSelect player", 858: "course-select camera", 859: "castle", 860: "fort (tower)",
    861: "1-Up Toad house", 862: "shuffle Toad house", 863: "slot Toad house",
    864: "Peach's castle door (1F)", 865: "Peach's castle door (2F)", 866: "course point",
    867: "world-move pipe", 868: "W8 cloud", 869: "ghost house", 870: "W2 Hammer Bro",
    871: "airship Lemmy", 872: "airship Morton", 873: "airship Larry", 874: "airship Wendy",
    875: "airship Iggy", 876: "airship Roy", 877: "airship Ludwig", 878: "airship Bowser Jr.",
    879: "wrecked airship Bowser Jr.", 880: "white flag", 881: "switch A (blue)",
    882: "switch B (red)", 883: "Boo", 884: "opening Kamek", 885: "fort boss",
    886: "Piranha Plant", 887: "hint Toad", 888: "jumping Cheep Cheep", 889: "Chorobon",
    890: "W7 item", 891: "W5 Boo", 892: "Peach's castle flag", 893: "Waddlewing", 894: "geyser",
    895: "W7 rainbow bridge", 896: "Mii balloon", 897: "Pentaro", 898: "W4 item",
    899: "W2 Goomba", 900: "big Piranha Plant", 901: "Nabbit icon", 902: "big Urchin",
    903: "grave", 904: "hint Nabbit", 905: "bone coaster", 906: "Bowser Jr.",
    907: "Princess Peach", 908: "W1 item", 909: "W9 star gate", 910: "event assistant",
}

# Non-point bones, tried in this order. "exact" = whole name; otherwise a prefix.
COB_RULES = [
    ("cobPeachGates1st", True, 864), ("cobPeachGates2nd", True, 865), ("cobCastle", True, 859),
    ("cobToride", False, 860), ("cobKinoko1up", False, 861), ("cobKinokoShuffle", False, 862),
    ("cobKinokoSlot", False, 863), ("cobGhost", True, 869), ("cobFlag", False, 892),
    ("cobPakkun", False, 900), ("cobUnizo", False, 902), ("cobStarGate", False, 909),
]
# The objects that take their course and point from the bone they are parented to.
PARENTED = {859, 860, 861, 862, 863, 864, 865, 869}
# F-point flags (word C unless noted) that put an object on the point.
F_POINT_OBJECTS = [({"dokan", "dokan2"}, 867), ({"switchA"}, 881), ({"switchB"}, 882),
                   ({"KanketsusenA", "KanketsusenB", "KanketsusenD", "KanketsusenE"}, 894),
                   ({"RainbowA", "RainbowB", "RainbowC", "RainbowD"}, 895),
                   ({f"W5bEnemy{i}" for i in range(1, 8)}, 903)]

# Map parts: models "<map>_<part>" drawn if the BFRES has them (0x60226F74); each
# plays the skeletal/texture/shader animations of the same name.
MAP_PARTS = {"a": {2: ["Quicksand", "CloudBG"], 3: ["Ocean"], 4: ["Aurora"], 5: ["Doku"],
                   8: ["CloudBG", "Ocean", "Castle", "Wall"]},
             "b": {5: ["Doku", "Ocean"], 8: ["Magma", "CloudBG"], 9: ["Universe"]}}
# connectW<k> joins two worlds' maps into one space (0x6019F2F0): W3 is the anchor.
WORLD_LINKS = [(3, 9), (3, 4), (4, 5), (5, 6), (6, 7), (7, 8), (3, 2), (2, 1)]
# The only map archives the game loads (0x6016A300).
MAP_ARCHIVES = ["CS_W1", "CS_W2a", "CS_W3", "CS_W4", "CS_W5a", "CS_W5b", "CS_W6a", "CS_W7",
                "CS_W8a", "CS_W8b", "CS_W9a", "CS_W9b"]


def connect_bones(world: int) -> set[str]:
    """connectW<k> bones world <world> needs: k is the higher world of each link."""
    return {f"connectW{max(a, b)}" for a, b in WORLD_LINKS if world in (a, b)}


def point_flags(row: list[str]) -> set[str]:
    return set(split(row[2])) if len(row) > 2 else set()


def map_objects(w) -> list[tuple[str, int | None, str]]:
    """[(bone, profile or None, note)] for every bone of the map model, the way 0x60227F68 reads it."""
    by_name = {r[1]: r for r in w.points}
    names = [n for n, _, _ in w.skeleton]
    out = []
    for name, parent, _ in w.skeleton:
        pname = names[parent] if 0 <= parent < len(names) else ""
        if name[:1] == "F":
            flags = point_flags(by_name[name]) if name in by_name else set()
            hit = [(p, f) for fs, p in F_POINT_OBJECTS for f in fs & flags]
            out.append((name, hit[0][0] if hit else None,
                        f"flag {hit[0][1]}" if hit else ("" if name in by_name else "not in pointW")))
        elif name[:1] == "W" and len(name) > 2:
            ok = name[2].isdigit() or name[2] in "ABCGKSTWX"
            out.append((name, 866 if ok else None, "" if ok else "entry/junction: no object"))
        elif name.startswith("cob"):
            prof = next((p for pre, exact, p in COB_RULES if (name == pre if exact else name.startswith(pre))), None)
            if name.startswith("cobShip"):
                out.append((name, None, "airships 871-877 all appear here only after the story flag (save +28)"))
            elif prof is None:
                out.append((name, None, "not spawned from the bone list (an actor may look it up by name)"))
            elif prof in PARENTED:
                ci = course_index(pname)
                out.append((name, prof, f"course from parent {pname or '-'}"
                            + (f" ({w.world}-{ci + 1})" if ci >= 0 else " (parent is not a course point!)")))
            else:
                out.append((name, prof, ""))
        elif name.startswith("lookW"):
            out.append((name, None, "camera look-at position saved for this world"))
        elif name.startswith("connectW"):
            out.append((name, None, "world link anchor"))
    return out


# ---- archives ------------------------------------------------------------------

def read_sarc(raw: bytes):
    """-> (decompressed bytes, [(name, start, end, node offset)], data offset)."""
    d = yaz0(raw) if raw[:4] == b"Yaz0" else raw
    assert d[:4] == b"SARC" and d[6:8] == b"\xff\xfe", "expected a little-endian SARC"
    hdr = struct.unpack_from("<H", d, 4)[0]
    data_off = struct.unpack_from("<I", d, 0xC)[0]
    count = struct.unpack_from("<H", d, hdr + 6)[0]
    names_base = hdr + 12 + count * 16 + 8
    nodes = []
    for i in range(count):
        no = hdr + 12 + i * 16
        _, attr, s, e = struct.unpack_from("<IIII", d, no)
        off = names_base + (attr & 0xFFFF) * 4
        nodes.append((d[off:d.index(b"\0", off)].decode(), s, e, no))
    return d, nodes, data_off


def sarc_files(raw: bytes) -> dict[str, bytes]:
    d, nodes, data_off = read_sarc(raw)
    return {n: d[data_off + s:data_off + e] for n, s, e, _ in nodes}


def align_of(offset: int) -> int:
    a = 4
    while a < 0x2000 and offset % (a * 2) == 0:
        a *= 2
    return a


def write_sarc(raw: bytes, replace: dict[str, bytes]) -> bytes:
    """Same names, order and alignment as `raw`; replaced contents."""
    d, nodes, data_off = read_sarc(raw)
    head = bytearray(d[:data_off])
    body = bytearray()
    for name, s, e, no in nodes:
        data = replace.get(name, d[data_off + s:data_off + e])
        a = align_of(s) if s else 4
        body += b"\0" * (-len(body) % a)
        start = len(body)
        body += data
        struct.pack_into("<II", head, no + 8, start, len(body))
    out = head + body
    struct.pack_into("<I", out, 8, len(out))
    return bytes(out)


def yaz0_store(data: bytes) -> bytes:
    """Yaz0 with every byte a literal: valid, fast, ~12% larger than the input."""
    out = bytearray(b"Yaz0" + struct.pack(">I", len(data)) + b"\0" * 8)
    for i in range(0, len(data), 8):
        chunk = data[i:i + 8]
        out.append(0xFF)
        out += chunk
    return bytes(out)


def yaz0_compress(data: bytes) -> bytes:
    """Greedy LZ with a 3-byte hash chain (slow in Python for large files)."""
    out = bytearray(b"Yaz0" + struct.pack(">I", len(data)) + b"\0" * 8)
    heads: dict[bytes, list[int]] = defaultdict(list)
    i, n = 0, len(data)
    while i < n:
        flag_pos = len(out); out.append(0); flags = 0
        for bit in range(8):
            if i >= n:
                break
            best_len, best_dist = 0, 0
            key = data[i:i + 3]
            if len(key) == 3:
                for j in reversed(heads[key][-16:]):
                    dist = i - j
                    if dist > 0x1000:
                        break
                    ln = 3
                    while ln < 0x111 and i + ln < n and data[j + ln] == data[i + ln]:
                        ln += 1
                    if ln > best_len:
                        best_len, best_dist = ln, dist
            if best_len >= 3:
                dist = best_dist - 1
                if best_len >= 0x12:
                    out += bytes([dist >> 8, dist & 0xFF, best_len - 0x12])
                else:
                    out += bytes([((best_len - 2) << 4) | (dist >> 8), dist & 0xFF])
                for k in range(best_len):
                    if i + k + 3 <= n:
                        heads[data[i + k:i + k + 3]].append(i + k)
                i += best_len
            else:
                flags |= 0x80 >> bit
                out.append(data[i])
                if len(key) == 3:
                    heads[key].append(i)
                i += 1
        out[flag_pos] = flags
    return bytes(out)


# ---- the map model ---------------------------------------------------------------

def bfres_skeletons(bfres: bytes) -> dict[str, list[tuple[str, int, tuple]]]:
    """{model name: [(bone name, parent index, translation)]} for a Switch BFRES (v8).
    Bone: name +0x0, index +0x28, parent +0x2A (read by the game at 0x6022A7E4), translation +0x54."""
    u16 = lambda o: struct.unpack_from("<H", bfres, o)[0]
    u64 = lambda o: struct.unpack_from("<Q", bfres, o)[0]

    def string(off):
        if not off or off + 2 > len(bfres):
            return None
        n = u16(off)
        return bfres[off + 2:off + 2 + n].decode("utf-8", "replace") if n < 128 else None

    names = [string(u64(m.start() + 0x10)) for m in re.finditer(b"FMDL", bfres)]
    skls = [m.start() for m in re.finditer(b"FSKL", bfres)]
    out = {}
    for name, skl in zip(names, skls):
        arr, count = u64(skl + 0x18), u16(skl + 0x4C)
        out[name] = [(string(u64(arr + i * 0x60)) or "", struct.unpack_from("<h", bfres, arr + i * 0x60 + 0x2A)[0],
                      struct.unpack_from("<3f", bfres, arr + i * 0x60 + 0x54)) for i in range(count)]
    return out


def bfres_bones(bfres: bytes) -> dict[str, dict[str, tuple]]:
    """{model name: {bone name: translation}} for a Switch BFRES (v8 layout)."""
    u16 = lambda o: struct.unpack_from("<H", bfres, o)[0]
    u64 = lambda o: struct.unpack_from("<Q", bfres, o)[0]

    def string(off):
        if not off or off + 2 > len(bfres):
            return None
        n = u16(off)
        return bfres[off + 2:off + 2 + n].decode("utf-8", "replace") if n < 128 else None

    # Models and skeletons appear in the same order (one FSKL per FMDL).
    names = [string(u64(m.start() + 0x10)) for m in re.finditer(b"FMDL", bfres)]
    skls = [m.start() for m in re.finditer(b"FSKL", bfres)]
    out = {}
    for name, skl in zip(names, skls):
        arr, count = u64(skl + 0x18), u16(skl + 0x4C)
        bones = {}
        for i in range(count):
            o = arr + i * 0x60
            bn = string(u64(o))
            if bn:
                bones[bn] = struct.unpack_from("<3f", bfres, o + 0x54)
        out[name] = bones
    return out


# ---- loading a world ---------------------------------------------------------------

class World:
    def __init__(self, files: dict[str, bytes], label: str):
        self.label = label
        self.point_name = next((n for n in files if n.startswith("pointW")), None)
        self.route_name = next((n for n in files if n.startswith("routeW")), None)
        if not self.point_name or not self.route_name:
            raise SystemExit(f"{label}: no pointW*.csv / routeW*.csv")
        self.point_raw, self.route_raw = files[self.point_name], files[self.route_name]
        m = re.match(r"pointW([0-9a-f])([ab]?)\.csv", self.point_name)
        self.world, self.variant = int(m.group(1), 16), m.group(2)
        self.points = [r for r in csv.reader(io.StringIO(self.point_raw.decode("utf-8-sig"))) if r]
        self.routes = [r for r in csv.reader(io.StringIO(self.route_raw.decode("utf-8-sig"))) if r]
        self.bones = {}
        self.skeleton = []
        self.model = f"CS_W{self.world}{self.variant}"
        if "output.bfres" in files:
            skels = bfres_skeletons(files["output.bfres"])
            self.skeleton = skels.get(self.model, [])
            self.bones = {n: pos for n, _, pos in self.skeleton if n}
            self.models = set(skels)
        else:
            self.models = set()


def load(path: Path) -> World:
    if path.is_dir():
        files = {p.name: p.read_bytes() for p in path.iterdir() if p.is_file()}
    else:
        files = sarc_files(path.read_bytes())
    return World(files, path.name)


def split(cell: str) -> list[str]:
    return [t for t in cell.split(",") if t]


def paths(cell: str) -> list[str]:
    """An unlock-path column. Each entry is a 10-byte string: the game keeps 9
    characters (vanilla W6's "RW601W602.RW601Fsa1" works as RW601W602)."""
    return [t[:9] for t in split(cell)]


def route_ends(rid: str):
    return (rid[1:5], rid[5:9]) if len(rid) == 9 and rid[0] == "R" else None


# ---- commands ----------------------------------------------------------------------

def cmd_dump(args):
    raw = Path(args.archive).read_bytes()
    files = sarc_files(raw)
    out = Path(args.out) if args.out else None
    if out:
        out.mkdir(parents=True, exist_ok=True)
        for n, data in files.items():
            (out / n).write_bytes(data)
        print(f"wrote {len(files)} files to {out}")
    w = World(files, Path(args.archive).name)
    print(f"world {w.world}{w.variant}: {len(w.points)} points, {len(w.routes)} routes, "
          f"{len(w.bones)} bones in model {w.model}; models: {', '.join(sorted(w.models))}")
    print(f"{'#':>3} {'name':5} {'class':11} {'level':7} {'position':24} flags | normal -> | secret ->")
    for r in w.points:
        name = r[1]
        ci = course_index(name) if point_class(name) in (3, 4) else -1
        level = f"{w.world}-{ci + 1}" if ci >= 0 else ""
        pos = w.bones.get(name)
        pos = f"({pos[0]:.0f}, {pos[1]:.0f}, {pos[2]:.0f})" if pos else "-"
        print(f"{r[0]:>3} {name:5} {CLASS_NAMES[point_class(name)]:11} {level:7} {pos:24} "
              f"{r[2]} | {r[3]} | {r[6]}")


def is_stop(name: str, by_name: dict) -> bool:
    """Paths run through F and K points (even F points flagged `stop`, like
    W1's F001 on the 1-2 -> tower path) and end at W points."""
    return name[:1] == "W"


def segment_graph(w: World):
    adj = defaultdict(list)
    for r in w.routes:
        ends = route_ends(r[0])
        if ends:
            adj[ends[0]].append((ends[1], r[0])); adj[ends[1]].append((ends[0], r[0]))
    # Pipes: a point flagged dokan leads to the one flagged dokan2 (W1 Fd01 -> Fd02).
    pipe = {f: r[1] for r in w.points for f in split(r[2]) if f in ("dokan", "dokan2")}
    if "dokan" in pipe and "dokan2" in pipe:
        a, b = pipe["dokan"], pipe["dokan2"]
        adj[a].append((b, "(pipe)")); adj[b].append((a, "(pipe)"))
    return adj


def path_segments(path: str, adj, by_name):
    """An unlock column names a path R<from><to>; the route CSV holds its walk
    as segments through F and K points. -> segment ids, or None if no chain."""
    ends = route_ends(path)
    if not ends:
        return None
    a, b = ends
    prev = {a: None}
    queue = deque([a])
    while queue:
        p = queue.popleft()
        if p == b:
            break
        if p != a and is_stop(p, by_name):
            continue
        for q, rid in adj[p]:
            if q not in prev:
                prev[q] = (p, rid); queue.append(q)
    if b not in prev:
        return None
    segs, p = [], b
    while prev[p]:
        p, rid = prev[p]
        segs.append(rid)
    return segs


def simulate(w: World):
    """Every course cleared by both exits: which points and segments are reached?"""
    names = {r[1] for r in w.points}
    by_name = {r[1]: r for r in w.points}
    adj = segment_graph(w)
    chains = {}
    for r in w.points:
        for path in paths(r[4]) + paths(r[7]):
            chains[path] = path_segments(path, adj, by_name) or []
    gated = {s for segs in chains.values() for s in segs}
    start = next((n for n in names if point_class(n) == 2), None)
    if not start:
        return None, set(), set(), set()
    opened = {r[0] for r in w.routes if r[0] not in gated}       # on no unlock path: open from the start
    opened.add("(pipe)")
    seen, used, external = {start}, set(), set()
    changed = True
    while changed:
        changed = False
        queue = deque(seen)
        while queue:
            p = queue.popleft()
            row = by_name.get(p)
            if row:
                for path in paths(row[4]) + paths(row[7]):
                    for s in chains.get(path, []):
                        if s not in opened:
                            opened.add(s); changed = True
            for q, rid in adj[p]:
                if rid in opened:
                    used.add(rid)
                    if q not in seen:
                        seen.add(q); queue.append(q); changed = True
                        if q not in names and q[:1] != "K":
                            external.add(q)
    used.discard("(pipe)")
    return start, seen, used, external


def cmd_check(args):
    w = load(Path(args.path))
    errors, warnings = [], []
    E, W = errors.append, warnings.append

    if len(w.point_raw) > MAX_POINT_CSV:
        E(f"{w.point_name} is {len(w.point_raw)} bytes; the game reads at most {MAX_POINT_CSV}")
    if len(w.route_raw) > MAX_ROUTE_CSV:
        E(f"{w.route_name} is {len(w.route_raw)} bytes; the game reads at most {MAX_ROUTE_CSV}")
    if len(w.points) > MAX_POINTS:
        E(f"{len(w.points)} points; the game keeps {MAX_POINTS}")
    if len(w.routes) > MAX_ROUTES:
        E(f"{len(w.routes)} routes; the game keeps {MAX_ROUTES}")

    names = [r[1] for r in w.points]
    route_ids = [r[0] for r in w.routes]
    by_name = {r[1]: r for r in w.points}
    adj = segment_graph(w)
    if len(set(names)) != len(names):
        E("duplicate point names: " + ", ".join(sorted({n for n in names if names.count(n) > 1})))
    for rid in sorted({x for x in route_ids if route_ids.count(x) > 1}):
        W(f"route {rid} listed twice; the game keeps the first")
    f_points = [n for n in names if n[:1] == "F"]
    if len(f_points) > MAX_SAVED_F_POINTS:
        E(f"{len(f_points)} F points; the save keeps state for {MAX_SAVED_F_POINTS}")
    if not any(point_class(n) == 2 for n in names):
        # Vanilla W5b, W8a and W9a have none: they are entered from the other variant.
        (W if w.variant else E)(f"no entry point (W{w.world}M0): the map has nowhere to start"
                                + (" unless it is entered from another map" if w.variant else ""))

    courses = {}
    for i, r in enumerate(w.points):
        name = r[1]
        where = f"point {name} (row {i})"
        if len(r) != 9:
            E(f"{where}: {len(r)} columns, expected 9")
            continue
        if str(i) != r[0]:
            W(f"{where}: index column is {r[0]!r}")
        if len(name) != 4:
            E(f"{where}: names are 4 characters")
        if name[:1] not in "WFK":
            W(f"{where}: unknown prefix {name[:1]!r} (W stop, F free point, K bend)")
        for flag in split(r[2]):
            if flag not in KNOWN_FLAGS and not flag.startswith("lookW"):
                W(f"{where}: flag {flag!r} is not a name the game knows (ignored)")
        for col, limit, what in ((3, MAX_UNLOCK_NODES, "unlocked nodes"), (6, MAX_UNLOCK_NODES, "unlocked nodes"),
                                 (4, MAX_UNLOCK_ROUTES, "unlocked routes"), (7, MAX_UNLOCK_ROUTES, "unlocked routes"),
                                 (5, MAX_REVEALS, "reveal names"), (8, MAX_REVEALS, "reveal names")):
            if len(split(r[col])) > limit:
                E(f"{where}: {len(split(r[col]))} {what} in column {col}; the game keeps {limit} "
                  f"(the extra ones overwrite the first)")
        for col in (4, 7):
            for entry in split(r[col]):
                if len(entry) > 9:
                    W(f"{where}: {entry!r} is longer than 9 characters; the game reads {entry[:9]!r}")
            for path in paths(r[col]):
                ends = route_ends(path)
                if not ends:
                    E(f"{where}: unlock path {path!r} is not R + point + point")
                elif path_segments(path, adj, by_name) is None:
                    local = all(e in names or e[:1] == "K" for e in ends)
                    (E if local else W)(f"{where}: path {path} has no chain of segments in "
                                        f"{w.route_name}" + ("" if local else " (it ends on another map)"))
        for col in (3, 6):
            for n in split(r[col]):
                if n not in names:
                    W(f"{where}: unlocks node {n}, not a point of this map (another world's?)")
        if point_class(name) in (3, 4):
            ci = course_index(name)
            if ci >= MAX_COURSES:
                E(f"{where}: course index {ci} >= {MAX_COURSES}")
            if ci >= 0:
                if ci in courses:
                    W(f"{where}: same level ({w.world}-{ci + 1}) as {courses[ci]}")
                courses.setdefault(ci, name)
                if args.courses and not (Path(args.courses) / f"{w.world}-{ci + 1}.sarc").exists():
                    # Toad houses share levels (vanilla 3-27, 4-26 ... do not exist).
                    # Vanilla has some (W6C1 -> 6-24); entering one would fail.
                    W(f"{where}: level file Course/{w.world}-{ci + 1}.sarc does not exist"
                      + (" (fine for a Toad house)" if name[2] == "K" else ""))
        if w.bones and name not in w.bones:
            W(f"{where}: no bone named {name} in model {w.model} (the point has no position)")

    for r in w.routes:
        rid = r[0]
        ends = route_ends(rid)
        if not ends:
            E(f"route {rid!r}: route ids are R + 4-character point + 4-character point")
            continue
        if len(r) < 2 or r[1] not in ROUTE_TYPES:
            W(f"route {rid}: type {r[1] if len(r) > 1 else ''!r} is not one of the 23 the game knows")
        for e in ends:
            if e not in names and e[:1] != "K":
                W(f"route {rid}: end {e} is not a point of this map (link to another map?)")
            if e[:1] == "K" and w.bones and e not in w.bones:
                W(f"route {rid}: bend {e} has no bone in model {w.model}")

    if w.model not in MAP_ARCHIVES:
        E(f"model {w.model}: the game only loads {', '.join(MAP_ARCHIVES)} (0x6016A300)")
    if w.skeleton:
        for bone, prof, note in map_objects(w):
            if "not a course point" in note:
                W(f"bone {bone}: {note}")
        if w.variant != "b":
            missing = connect_bones(w.world) - set(w.bones)
            if missing:
                W(f"no bone {', '.join(sorted(missing))}: this map cannot be lined up with its "
                  "neighbours (0x601A02F8 then reads bone -1)")

    start, seen, used, external = simulate(w)
    if start:
        unreachable = [n for n in names if n not in seen]
        unused = [r[0] for r in w.routes if r[0] not in used]
        print(f"exploration from {start}: {len(seen & set(names))}/{len(names)} points reachable, "
              f"{len(used)}/{len(w.routes)} routes walkable")
        if external:
            print("  leads to other maps: " + ", ".join(sorted(external)))
        if unreachable:
            W("never reachable (no open route leads there): " + ", ".join(unreachable))
        if unused:
            W("routes never walkable: " + ", ".join(unused))

    for m in errors:
        print("ERROR  " + m)
    for m in warnings:
        print("warn   " + m)
    print(f"{w.label}: {len(errors)} error(s), {len(warnings)} warning(s)")
    return 1 if errors else 0


def cmd_objects(args):
    w = load(Path(args.path))
    if not w.skeleton:
        raise SystemExit(f"{w.label}: no model {w.model} in output.bfres")
    print(f"{w.model}: objects the game builds from its bones (0x60227F68)")
    for bone, prof, note in map_objects(w):
        what = f"{prof} {MAP_PROFILES.get(prof, '')}" if prof else "-"
        if prof or note:
            print(f"  {bone:20} {what:34} {note}")
    parts = MAP_PARTS.get(w.variant or "a", {}).get(w.world, [])
    drawn = [f"{w.model}_{p}" for p in parts + ["Synchro", "Synchro1", "Synchro2"]]
    print("map parts drawn when present: " + ", ".join(
        f"{m}{'' if m in w.models else ' (absent)'}" for m in drawn))
    extra = sorted(m for m in w.models if m.startswith(w.model + "_") and m not in drawn)
    if extra:
        print("other models (drawn by their own actor or demo, or unused): " + ", ".join(extra))
    if w.variant != "b":
        print("world links: " + ", ".join(
            f"{b}{'' if b in w.bones else ' (MISSING)'}" for b in sorted(connect_bones(w.world))))


def cmd_build(args):
    raw = Path(args.archive).read_bytes()
    _, nodes, _ = read_sarc(raw)
    src = Path(args.dir)
    replace = {}
    for name, *_ in nodes:
        p = src / name
        if p.exists():
            replace[name] = p.read_bytes()
    extra = [p.name for p in src.iterdir() if p.is_file() and p.name not in {n for n, *_ in nodes}]
    if extra:
        print("note: not in the original archive, not added: " + ", ".join(extra))
    if not args.no_check:
        w = World({**sarc_files(raw), **replace}, Path(args.archive).name)
        if len(w.point_raw) > MAX_POINT_CSV or len(w.route_raw) > MAX_ROUTE_CSV:
            raise SystemExit("CSV over the game's buffer size; run `check` for details")
    sarc = write_sarc(raw, replace)
    data = yaz0_compress(sarc) if args.compress else yaz0_store(sarc)
    Path(args.out).parent.mkdir(parents=True, exist_ok=True)
    Path(args.out).write_bytes(data)
    print(f"wrote {args.out} ({len(data)} bytes; replaced {', '.join(sorted(replace)) or 'nothing'})")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    sub = ap.add_subparsers(dest="cmd", required=True)
    p = sub.add_parser("dump", help="list a map's points (and extract its files with -o)")
    p.add_argument("archive"); p.add_argument("-o", "--out")
    p = sub.add_parser("check", help="validate a map (archive or extracted folder)")
    p.add_argument("path"); p.add_argument("--courses", help="romfs/Course, to check level files exist")
    p = sub.add_parser("objects", help="list the castles, houses, pipes ... the map's bones spawn")
    p.add_argument("path")
    p = sub.add_parser("build", help="rebuild an archive with the files from a folder")
    p.add_argument("archive"); p.add_argument("dir"); p.add_argument("-o", "--out", required=True)
    p.add_argument("--compress", action="store_true", help="real Yaz0 compression (slow)")
    p.add_argument("--no-check", action="store_true")
    args = ap.parse_args()
    return {"dump": cmd_dump, "check": cmd_check, "objects": cmd_objects, "build": cmd_build}[args.cmd](args) or 0


if __name__ == "__main__":
    sys.exit(main())
