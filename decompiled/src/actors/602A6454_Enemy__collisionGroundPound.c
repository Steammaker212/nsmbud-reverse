/* Enemy__collisionGroundPound
 * address: 0x602A6454   size: 356   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259D34 : Amp
//   - 0x60277D34 : Fuzzy
//   - 0x602AE9B8 : FireSnake
//   - 0x602D6760 : SledgeBro
//   - 0x6029F04C : Thwomp
//   - 0x60316408 : DryBones
//   - 0x6033ACEC : Goomba
//   - 0x60363B68 : ParaGoomba
//   - 0x60384C88 : Pokey
//   - 0x603E0250 : RiverPiranha
//   - 0x6062436C : FixedIcicle
//   - 0x60264B6C : BrosBase
//   - 0x6002517C : BossBase
//   - 0x603A1250 : ShellEnemy
signed int __fastcall Enemy__collisionGroundPound(int *a1, int a2, int a3)
{
  int v3; // r6
  _BOOL4 v5; // r5
  int v6; // r1
  char v7; // r8
  void (__fastcall *v8)(int *, int *); // r2
  int v9; // r0
  char v10; // r6
  char v11; // r12
  char *v12; // r0
  int v13; // r1
  int v15; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+4h] [bp-34h]
  int v17; // [sp+8h] [bp-30h]
  int v18; // [sp+Ch] [bp-2Ch]
  StateVirtual *v19; // [sp+10h] [bp-28h]
  char v20; // [sp+14h] [bp-24h]
  _BOOL4 v21; // [sp+18h] [bp-20h]
  char v22; // [sp+1Ch] [bp-1Ch]

  v3 = FIELD_U32(a3, 64);
  v5 = sub_6000ADDC((int)a1, v3);
  v6 = FIELD_U32(v3, 112);
  v7 = FIELD_U8(v3, 84);
  v8 = *(void (__fastcall **)(int *, int *))(*a1 + 416);
  v15 = FIELD_U32(v3, 108);
  v16 = v6;
  v17 = 1166843904;
  v8(a1, &v15);
  SE_EMY_KAME_HIT_ref(v3, FIELD_S8(v3, 1313), a1[1573] == 2);
  v9 = sub_602A3358((int)a1, v3);
  v10 = sub_602856EC(a1 + 1573, v9);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613391096 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v12 = (char *)&unk_60C907F0 + 8 * v5;
  v13 = *((_DWORD *)v12 + 11);
  v16 = *((_DWORD *)v12 + 12);
  v15 = v13;
  v17 = -1065353216;
  v18 = unk_60C906E8;
  v19 = &stru_60C90710;
  v20 = v10;
  v21 = v5;
  v22 = v7;
  sub_602A852C((int)(a1 + 1526), &v15);
  return 1;
}
