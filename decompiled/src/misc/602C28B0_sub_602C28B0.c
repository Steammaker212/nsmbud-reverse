/* sub_602C28B0
 * address: 0x602C28B0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C28B0(int a1, int a2, int a3)
{
  int v4; // r0
  float v5; // s16
  char v6; // r5
  float v7; // s2
  float v8; // s6
  float v9; // s4
  float v10; // s8
  _DWORD v12[5]; // [sp+0h] [bp-50h] BYREF
  char v13; // [sp+14h] [bp-3Ch]
  _BOOL4 v14; // [sp+18h] [bp-38h]
  char v15; // [sp+1Ch] [bp-34h]
  float v16[4]; // [sp+20h] [bp-30h] BYREF
  char v17; // [sp+30h] [bp-20h]
  char v18; // [sp+31h] [bp-1Fh]
  char v19; // [sp+32h] [bp-1Eh]
  char v20; // [sp+33h] [bp-1Dh]
  char v21; // [sp+34h] [bp-1Ch]
  char v22; // [sp+35h] [bp-1Bh]
  char v23; // [sp+36h] [bp-1Ah]

  v4 = FIELD_U32(a3, 64);
  v5 = FIELD_F32(v4, 120);
  v6 = FIELD_U8(v4, 84);
  Enemy__vf16C(a1);
  v7 = FIELD_F32(a1, 576);
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_F32(a1, 580);
  v10 = FIELD_F32(a1, 116);
  v16[0] = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v16[1] = (float)(v8 + v7) + 16.0;
  v16[2] = v10 + v9;
  LODWORD(v16[3]) = v5 < 0.0;
  v17 = 1;
  v18 = FIELD_U8(a1, 86);
  v19 = 0;
  v20 = 1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_60583000(dword_60CAF15C, v16, 3);
  v12[0] = dword_60AFE798[v5 < 0.0];
  v12[1] = 1069547520;
  v12[2] = -1077936128;
  v12[3] = -1115684864;
  v12[4] = &stru_60C90710;
  v13 = sub_602856C4((_DWORD *)(a1 + 6292));
  v14 = v5 < 0.0;
  v15 = v6;
  sub_602A852C(a1 + 6104, v12);
  return 1;
}
