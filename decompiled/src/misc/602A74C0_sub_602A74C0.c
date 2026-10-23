/* sub_602A74C0
 * address: 0x602A74C0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A74C0(int a1)
{
  unsigned int U32; // r0
  int v3; // r0
  float v5; // [sp+0h] [bp-30h] BYREF
  float v6; // [sp+4h] [bp-2Ch]
  float v7; // [sp+8h] [bp-28h]
  unsigned int v8; // [sp+Ch] [bp-24h]
  int v9; // [sp+10h] [bp-20h]
  char v10; // [sp+14h] [bp-1Ch]
  char v11; // [sp+15h] [bp-1Bh]
  char v12; // [sp+16h] [bp-1Ah]
  int v13; // [sp+18h] [bp-18h]
  char v14; // [sp+1Ch] [bp-14h]

  sub_602F3750(a1 + 6152);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v5 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v6 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v7 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  v8 = U32 >> 31;
  v9 = 1;
  v10 = 0;
  v12 = 0;
  v11 = 0;
  sub_60583000(dword_60CAF15C, &v5, 3);
  v3 = FIELD_U32(a1, 6284);
  v8 = 0;
  v7 = 0.0;
  v6 = 0.0;
  v5 = 0.0;
  v9 = (int)&stru_60C9077C;
  v10 = -1;
  v13 = v3;
  v14 = FIELD_U8(a1, 0x54);
  return sub_602A852C(a1 + 6104, &v5);
}
