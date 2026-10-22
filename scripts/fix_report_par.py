t = open(r'.rea\HAMMER_POWERUP_REPORT.md', encoding='utf-8').read()
old = "runtime testing. **APPLIED** (2026-10-21) to the patched copy only;\nin the patched copy only (`convertedmain.hammer_b.elf`). Pending approval."
new = ("runtime testing. **APPLIED 2026-10-21** to the patched copy only\n"
       "(`convertedmain.hammer_b.elf`, new MD5 `1134cf5f37d16a55f150fadebc3dfb87`;\n"
       "original `convertedmain.rebased.elf` untouched). Note: the mask addend is\n"
       "bit 9 = 0x200 (0x1FB -> 0x3FB); an earlier 0x5FB proposal was wrong (it sets\n"
       "bit 10) and was caught before shipping.")
assert old in t, 'anchor not found'
open(r'.rea\HAMMER_POWERUP_REPORT.md', 'w', encoding='utf-8').write(t.replace(old, new))
print('fixed gate-patch paragraph')
