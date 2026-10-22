"""Remove the one helper name that fails verification, and record why.

0x0035B204 was named j_KoopaTroopa_onCreate_helper_35A5CC, but a recount with the calibrated
decoder shows it has ZERO BL callers -- it is reached by a plain B (branch) stub, which the helper
rule explicitly does not cover. The name therefore asserts something unverified, so it goes back
to sub_.

This is the whole reason to audit a batch before trusting it: 156 of 157 were sound, and the 157th
was catchable only by re-deriving the claim.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

BAD = 0x0035B204
cur = ida_name.get_name(BASE + BAD) or ""
ok = ida_name.set_name(BASE + BAD, f"sub_{BAD:X}", ida_name.SN_NOWARN)
print(f"  {BAD:#010x}  {cur}  ->  sub_{BAD:X}   ok={ok}")

# also drop the now-pointless comment if any
idc.set_cmt(BASE + BAD, "", 1)
idaapi.save_database("", 0)
print("saved")
