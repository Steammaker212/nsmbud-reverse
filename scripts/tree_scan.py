p = r"New Super Mario Bros U Deluxe (NSP)(Base Game) Tree.txt"
lines = open(p, encoding="utf-8", errors="replace").read().splitlines()
pats = ["fire", "flower", "ice", "hammer", "mario", "luigi", "toad", "kinopio", "kinoko", "player", "suit", "penguin", "squirrel", "propeller", "yos", "item", "obj_", "bros"]
for pat in pats:
    m = [(i + 1, l) for i, l in enumerate(lines) if pat in l.lower()]
    print("====", pat, len(m))
    for i, l in m[:40]:
        print(i, l)
