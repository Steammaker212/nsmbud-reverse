"""ROMANIZE the 775 developer debug tags into ASCII identifiers.

All 775 actor constructor names are Japanese UTF-8, which IDA refuses as identifiers
(set_name returned False for every one). But the tags themselves are excellent evidence --
they are the developers' own names, e.g.

    ボスK.K.                  Boss K.K.
    カメック                   Kamek
    巨大サンボのパーツ          Giant Sumo Bro parts
    プレイヤー用ファイヤーボール  Player fireball
    メガハンマー               Mega Hammer
    ハンマー                   Hammer

So the useful move is to transliterate to ASCII, which yields a real identifier while
keeping the meaning. This script does that offline from the extracted JSON: katakana and
hiragana to romaji, common kanji compounds to English/romaji, then sanitise.

Output: a JSON map ctor_rva -> ascii identifier, plus a readable listing that keeps the
original tag beside it. The IDA side then applies these names.
"""
import json
import re

SRC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\data\actor_internal_names.json"
OUT_JSON = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_tags_romaji.json"
OUT_TXT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\data\actor_names_romaji.txt"

# --- katakana (and the few hiragana used) to romaji, longest first
KANA = {
    "キャ": "kya", "キュ": "kyu", "キョ": "kyo", "シャ": "sha", "シュ": "shu",
    "ショ": "sho", "チャ": "cha", "チュ": "chu", "チョ": "cho", "ニャ": "nya",
    "ニュ": "nyu", "ニョ": "nyo", "ヒャ": "hya", "ヒュ": "hyu", "ヒョ": "hyo",
    "ミャ": "mya", "ミュ": "myu", "ミョ": "myo", "リャ": "rya", "リュ": "ryu",
    "リョ": "ryo", "ギャ": "gya", "ギュ": "gyu", "ギョ": "gyo", "ジャ": "ja",
    "ジュ": "ju", "ジョ": "jo", "ビャ": "bya", "ビュ": "byu", "ビョ": "byo",
    "ピャ": "pya", "ピュ": "pyu", "ピョ": "pyo", "ファ": "fa", "フィ": "fi",
    "フェ": "fe", "フォ": "fo", "ティ": "ti", "ディ": "di", "デュ": "dyu",
    "ウィ": "wi", "ウェ": "we", "ウォ": "wo", "ヴァ": "va", "ヴィ": "vi",
    "ヴェ": "ve", "ヴォ": "vo", "ツァ": "tsa", "ツィ": "tsi", "ツェ": "tse",
    "ツォ": "tso", "シェ": "she", "チェ": "che", "ジェ": "je", "ティ": "ti",
    "ア": "a", "イ": "i", "ウ": "u", "エ": "e", "オ": "o",
    "カ": "ka", "キ": "ki", "ク": "ku", "ケ": "ke", "コ": "ko",
    "サ": "sa", "シ": "shi", "ス": "su", "セ": "se", "ソ": "so",
    "タ": "ta", "チ": "chi", "ツ": "tsu", "テ": "te", "ト": "to",
    "ナ": "na", "ニ": "ni", "ヌ": "nu", "ネ": "ne", "ノ": "no",
    "ハ": "ha", "ヒ": "hi", "フ": "fu", "ヘ": "he", "ホ": "ho",
    "マ": "ma", "ミ": "mi", "ム": "mu", "メ": "me", "モ": "mo",
    "ヤ": "ya", "ユ": "yu", "ヨ": "yo",
    "ラ": "ra", "リ": "ri", "ル": "ru", "レ": "re", "ロ": "ro",
    "ワ": "wa", "ヲ": "o", "ン": "n",
    "ガ": "ga", "ギ": "gi", "グ": "gu", "ゲ": "ge", "ゴ": "go",
    "ザ": "za", "ジ": "ji", "ズ": "zu", "ゼ": "ze", "ゾ": "zo",
    "ダ": "da", "ヂ": "ji", "ヅ": "zu", "デ": "de", "ド": "do",
    "バ": "ba", "ビ": "bi", "ブ": "bu", "ベ": "be", "ボ": "bo",
    "パ": "pa", "ピ": "pi", "プ": "pu", "ペ": "pe", "ポ": "po",
    "ァ": "a", "ィ": "i", "ゥ": "u", "ェ": "e", "ォ": "o",
    "ッ": "", "ャ": "ya", "ュ": "yu", "ョ": "yo", "ー": "",
    "ヴ": "vu", "ヵ": "ka", "ヶ": "ke",
    # hiragana equivalents (a few tags use them)
    "あ": "a", "い": "i", "う": "u", "え": "e", "お": "o",
    "か": "ka", "き": "ki", "く": "ku", "け": "ke", "こ": "ko",
    "さ": "sa", "し": "shi", "す": "su", "せ": "se", "そ": "so",
    "た": "ta", "ち": "chi", "つ": "tsu", "て": "te", "と": "to",
    "な": "na", "に": "ni", "ぬ": "nu", "ね": "ne", "の": "no",
    "は": "ha", "ひ": "hi", "ふ": "fu", "へ": "he", "ほ": "ho",
    "ま": "ma", "み": "mi", "む": "mu", "め": "me", "も": "mo",
    "や": "ya", "ゆ": "yu", "よ": "yo",
    "ら": "ra", "り": "ri", "る": "ru", "れ": "re", "ろ": "ro",
    "わ": "wa", "を": "o", "ん": "n", "っ": "",
}

# --- common kanji / compounds worth real words rather than dropped
KANJI = {
    "巨大": "giant", "大": "big", "小": "small", "中": "mid",
    "最終": "final", "初回": "first", "戦闘後": "afterbattle", "水中": "underwater",
    "遠景": "background", "城": "castle", "部屋": "room", "炎": "fire",
    "雷": "thunder", "氷": "ice", "雪": "snow", "岩": "rock", "鉄球": "ironball",
    "爆弾": "bomb", "魔法": "magic", "分身": "clone", "翼": "wing",
    "土管": "pipe", "看板": "sign", "矢印": "arrow", "床": "floor",
    "扉": "door", "旗": "flag", "雲": "cloud", "水": "water", "砂": "sand",
    "毒": "poison", "霧": "mist", "闇": "dark", "光": "light",
    "回転": "rotate", "移動": "move", "上下": "vertical", "左右": "horizontal",
    "制御": "control", "条件": "condition", "管理": "manage", "用": "for",
    "専用": "exclusive", "通常": "normal", "特殊": "special", "共通": "common",
    "親": "parent", "子": "child", "親子": "parentchild", "中央": "center",
    "位置": "pos", "範囲": "range", "狭い": "narrow", "広い": "wide",
    "生成": "spawn", "退避": "retreat", "乗り込み": "boarding", "結果": "result",
    "読む": "read", "書く": "write", "切換": "switch", "付き": "with",
    "無し": "none", "有り": "yes", "穴": "hole", "通": "through",
    "溶岩": "lava", "振り子": "pendulum", "間欠泉": "geyser", "常駐": "resident",
    "冷凍": "freeze", "凍": "freeze", "火": "fire", "玉": "ball",
    "鉄": "iron", "骨": "bone", "海": "sea", "空": "sky", "森": "forest",
    "花": "flower", "木": "tree", "草": "grass", "石": "stone",
    "道中": "course", "面": "level", "砦": "fort", "塔": "tower",
    "船": "ship", "飛行船": "airship", "気球": "balloon", "列車": "train",
    "扉開": "dooropen", "登場": "appear", "消滅": "vanish", "発生": "spawn",
    "待機": "wait", "攻撃": "attack", "防御": "guard", "移動床": "movingfloor",
}

# --- well-known entity names, so the important actors read properly
KNOWN = {
    "ボスK.K.": "BossKK", "カメック": "Kamek", "クッパ": "Bowser",
    "クッパJr": "BowserJr", "クッパJr.": "BowserJr", "ピーチ": "Peach",
    "イギー": "Iggy", "ラリー": "Larry", "レミー": "Lemmy",
    "ルドウィッグ": "Ludwig", "モートン": "Morton", "ロイ": "Roy",
    "ウェンディ": "Wendy", "ウーガン": "Unga", "ブンブン": "BoomBoom",
    "ハナチャン": "Wiggler", "サンボ": "SumoBro", "パタメット": "Parabeetle",
    "ハンマー": "Hammer", "メガハンマー": "MegaHammer", "スパナ": "Wrench",
    "ブーメラン": "Boomerang", "アイスボール": "IceBall",
    "ファイヤーボール": "FireBall", "プレイヤー": "Player", "キノピオ": "Toad",
    "パックン": "Piranha", "ゲッソー": "Blooper", "テレサ": "Boo",
    "クリボー": "Goomba", "ノコノコ": "Koopa", "トゲゾー": "Spiny",
    "メット": "Buzzy", "クラウン": "Crown", "デモ": "Demo", "タグ": "Tag",
    "スタッフロール": "StaffRoll", "マネージャ": "Manager",
    "コースセレクト": "CourseSelect", "バトル": "Battle", "アイテム": "Item",
    "ショートプレイ": "ShortPlay", "クエスト": "Quest", "フラグ": "Flag",
    "スイッチ": "Switch", "ジャンプ台": "JumpStand", "リフト": "Lift",
    "カメックブロック": "KamekBlock", "冷凍ブロック": "FreezeBlock",
    "トゲ鉄球": "SpikeBall", "ボクシング": "Boxing", "ピーチ城": "PeachCastle",
}


def romanize(tag):
    s = tag
    # Fullwidth latin/digits to ASCII first, so 'Ｗ１砦' keeps its world number.
    s = "".join(
        chr(ord(ch) - 0xFEE0) if 0xFF01 <= ord(ch) <= 0xFF5E else ch for ch in s
    )
    # possessive particle -> separator, so 'クッパの炎' becomes bowser_fire not bowserfire
    s = s.replace("の", "_")
    # longest known phrase first
    for k in sorted(KNOWN, key=len, reverse=True):
        s = s.replace(k, KNOWN[k] + "_")
    for k in sorted(KANJI, key=len, reverse=True):
        s = s.replace(k, KANJI[k] + "_")
    for k in sorted(KANA, key=len, reverse=True):
        s = s.replace(k, KANA[k])
    s = s.replace("（", "_").replace("）", "_").replace("(", "_").replace(")", "_")
    s = s.replace("・", "_").replace("、", "_").replace("。", "_")
    s = s.replace(".", "_").replace("　", "_")
    s = re.sub(r"[^0-9A-Za-z_]", "", s)
    s = re.sub(r"_+", "_", s).strip("_")
    return s


data = json.load(open(SRC, encoding="utf-8"))
rows = []
seen = {}
for t in data:
    rva = t["ctor_rva"]
    tag = t["internal_name"]
    ident = romanize(tag)
    if not ident or len(ident) < 2:
        continue
    # ensure uniqueness
    base = ident
    n = 2
    while ident in seen and seen[ident] != rva:
        ident = f"{base}_{n}"
        n += 1
    seen[ident] = rva
    if len(ident) > 70:
        ident = ident[:70].rstrip("_")
    rows.append({"ctor_rva": rva, "ident": ident, "internal_name": tag})

rows.sort(key=lambda r: r["ctor_rva"])
json.dump(rows, open(OUT_JSON, "w", encoding="utf-8"), ensure_ascii=False, indent=1)

with open(OUT_TXT, "w", encoding="utf-8", newline="\n") as fh:
    fh.write("# Actor constructor -> ASCII name romanized from the developer's Japanese\n")
    fh.write("# debug tag, NSMBU Deluxe v1.0.0 (Switch).\n#\n")
    fh.write("# The Japanese tag is the primary evidence; the ASCII form is a transliteration\n")
    fh.write("# used because IDA rejects non-ASCII identifiers.\n#\n")
    fh.write("# ctor_rva    ascii_name                     original tag\n")
    for r in rows:
        fh.write(f"{r['ctor_rva']:#010x}  {r['ident']:<28}  {r['internal_name']}\n")

print(f"romanized {len(rows)} of {len(data)} tags")
print()
for r in rows[:40]:
    print(f"  {r['ctor_rva']:#010x}  {r['ident']:<32} {r['internal_name']}")
