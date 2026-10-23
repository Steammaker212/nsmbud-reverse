/* Enemy__collisionSlide
 * address: 0x602A5C00   size: 660   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60278B30 : Fuzzy
//   - 0x60316614 : DryBones
//   - 0x60382AAC : Pokey
//   - 0x603E0240 : RiverPiranha
//   - 0x60624414 : FixedIcicle
//   - 0x6002661C : BossBase
//   - 0x603A2630 : ShellEnemy
signed int __fastcall Enemy__collisionSlide(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v6; // r7
  int v8; // r6
  _BOOL4 v9; // r8
  char v10; // r12
  char v11; // r9
  unsigned int v12; // r5
  unsigned int v13; // r0
  int *v14; // r0
  int v15; // r0
  char v16; // r6
  char v17; // r12
  char *v18; // r0
  int v19; // r1
  int v21; // [sp+8h] [bp-40h] BYREF
  int v22; // [sp+Ch] [bp-3Ch]
  int v23; // [sp+10h] [bp-38h]
  int v24; // [sp+14h] [bp-34h]
  StateVirtual *v25; // [sp+18h] [bp-30h]
  char v26; // [sp+1Ch] [bp-2Ch]
  _BOOL4 v27; // [sp+20h] [bp-28h]
  char v28; // [sp+24h] [bp-24h]

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v6 = 0;
  v21 = v4;
  v22 = v5;
  v23 = 0;
  sub_602A38A4(a1, (float *)&v21);
  v8 = FIELD_U32(a3, 64);
  v9 = sub_6000ADDC(a1, v8);
  v11 = FIELD_U8(v8, 84);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613388892 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v8 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378);
    if ( v6 )
      v6 = v8;
  }
  if ( ((unsigned int)dword_60C907FC & ~(1613389016 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C907FC) )
  {
    dword_60C9083C = (int)"SE_EMY_DOWN_COMBO_1";
    dword_60C90840 = (int)"SE_EMY_DOWN_COMBO_2";
    dword_60C90844 = (int)"SE_EMY_DOWN_COMBO_3";
    dword_60C90848 = (int)"SE_EMY_DOWN_COMBO_4";
    dword_60C9084C = (int)"SE_EMY_DOWN_COMBO_5";
    dword_60C90850 = (int)"SE_EMY_DOWN_COMBO_6";
    dword_60C90854 = (int)"SE_EMY_DOWN_COMBO_7";
    dword_60C90858 = (int)"SE_EMY_DOWN_COMBO_7";
    dword_60C9085C = (int)"SE_EMY_DOWN_COMBO_7";
    _cxa_guard_release(dword_60C907FC);
  }
  v12 = FIELD_S8(v6, 1314);
  v13 = FIELD_S8(v6, 84);
  v21 = 60;
  v14 = sub_60002B90(v13, unk_60C26464);
  sub_602A358C((float *)a1, v12, (int)&dword_60C9083C, 9u, (int)v14);
  v15 = sub_602855F4(v8);
  v16 = sub_602856EC((int *)(a1 + 6292), v15);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613389268 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v18 = (char *)&unk_60C907F0 + 8 * v9;
  v19 = *((_DWORD *)v18 + 11);
  v22 = *((_DWORD *)v18 + 12);
  v21 = v19;
  v23 = -1065353216;
  v24 = unk_60C906E8;
  v25 = &stru_60C90710;
  v26 = v16;
  v27 = v9;
  v28 = v11;
  sub_602A852C(a1 + 6104, &v21);
  return 1;
}
