"""Name the power-up mode plumbing that is now proven.

Proven this round by reading code, not guessing:

  0x00796A60  Player vtable slot 39. Body is exactly:
                  LDR R0, =dword_60B0C300
                  LDR R0, [R0, R1, LSL #2]      ; R1 = power-up mode
                  BX  LR
              i.e. it maps a power-up mode to a small group index.
              -> Player_modeToGroupIndex

  dword_60B0C300  -> Player_modeGroupTable
              Contents (mode -> group):
                  0 Kinoko      -> 1
                  1 FireFlower  -> 2
                  2 Star        -> 2
                  3 IceFlower   -> 0
                  4..9          -> 2
              Groups observed: 0, 1, 2.

  unk_60B0C8F0 -> Player_modeGroupDataTable
              Indexed by the group (0..2) by slot 305: [0]=0x3B, [1]=0x3A, [2]=0x39.
              Larger strides follow, so it is a per-group record rather than a flat array;
              named to say only what is established: it is the table slot 305 indexes by group.

  unk_60B0CE34 -> Player_heightFallbackBySubtype
              Slot 260 indexes it by *(player+0x524) when that value is > 3; entries are floats
              (9.0, 3.0, ...). Named conservatively around its use, not its meaning.

Only names that describe a proven access pattern are applied. No claim is made about what the
group numbers MEAN.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

FN = [
    (0x00796A60, "Player_modeToGroupIndex"),
]
DATA = [
    (0x00B0C300, "Player_modeGroupTable"),
    (0x00B0C8F0, "Player_modeGroupDataTable"),
    (0x00B0CE34, "Player_heightFallbackBySubtype"),
]

for rva, name in FN + DATA:
    cur = ida_name.get_name(BASE + rva) or ""
    ok = ida_name.set_name(BASE + rva, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)':<34} -> {name}  ok={ok}")

idc.set_cmt(BASE + 0x00796A60,
            "Player vtable slot 39: returns Player_modeGroupTable[mode]. "
            "Body: LDR R0,=dword_60B0C300; LDR R0,[R0,R1,LSL#2]; BX LR", 1)
idc.set_cmt(BASE + 0x00B0C300,
            "Power-up mode -> group index. mode 0 Kinoko=1, 1 FireFlower=2, 2 Star=2, "
            "3 IceFlower=0, 4..9=2. Groups seen: 0,1,2.", 1)

idaapi.save_database("", 0)
print("saved")
