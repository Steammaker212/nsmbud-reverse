/* sub_602C2720
 * address: 0x602C2720   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C2720(int a1, int a2, int a3)
{
  _BYTE *v3; // r6
  _BOOL4 v6; // r5
  float v7; // r1
  char v8; // r8
  char v9; // r12
  signed int v10; // r0
  _DWORD v12[5]; // [sp+4h] [bp-44h] BYREF
  char v13; // [sp+18h] [bp-30h]
  _BOOL4 v14; // [sp+1Ch] [bp-2Ch]
  char v15; // [sp+20h] [bp-28h]
  float v16[9]; // [sp+24h] [bp-24h] BYREF

  v3 = *(_BYTE **)(a3 + 64);
  v6 = sub_6000ADDC(a1, (int)v3);
  v7 = FIELD_F32(a2, 88);
  v8 = v3[84];
  v16[0] = FIELD_F32(a2, 84);
  v16[1] = v7;
  v16[2] = 4500.0;
  sub_602A38A4(a1, v16);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613506428 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v3 && (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C7B378) == 1 )
  {
    v10 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v3 + 1192))(v3);
    SE_EMY_KAME_HIT_ref((int)v3, v10, 0);
  }
  v12[0] = dword_60AFE798[v6];
  v12[1] = 1069547520;
  v12[2] = -1077936128;
  v12[3] = -1115684864;
  v12[4] = &stru_60C90710;
  v13 = sub_60285510((int)v3);
  v14 = v6;
  v15 = v8;
  sub_602A852C(a1 + 6104, v12);
  return 1;
}
