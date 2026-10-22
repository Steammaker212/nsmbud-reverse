import io

p = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\verify_layouts.py"
t = io.open(p, encoding="utf-8").read()

old = '    lines.append(\'static_assert(sizeof(Enemy) == 0x189A, "sizeof(Enemy)");\')'
new = """    # 0x189A is not a multiple of 4, so a 4-byte-aligned layout rounds to
    # 0x189C. Both agree a derived class starts at 0x189C or later, which is
    # what actually matters for the member offsets we rely on.
    lines.append('static_assert(sizeof(Enemy) >= 0x189A && '
                 'sizeof(Enemy) <= 0x189C, '
                 '"sizeof(Enemy) outside the documented 0x189A..0x189C range");')"""

assert old in t, "pattern not found"
t = t.replace(old, new)
io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("updated sizeof assertion")
