/* sub_602D1614
 * address: 0x602D1614   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1614(int a1, int a2, int r2_0, int a4, float a5, float a6, float a7, int a8)
{
  float *v9; // r0
  int v10; // r1
  int v11; // r2
  float v12; // s1
  float v13; // s3
  float v14; // s5
  float v15; // s6
  float v16; // s2
  float v17; // s4
  float v18; // s8
  TileCheck *v19; // r0
  TileCheck_Result v21; // [sp+8h] [bp-A8h] BYREF
  TileCheck v22; // [sp+30h] [bp-80h] BYREF
  TileCheck_Param v23; // [sp+7Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-28h] BYREF
  Vec2 a3; // [sp+90h] [bp-20h] BYREF

  *(_DWORD *)a1 = &off_60BE63B4;
  v9 = (float *)(a1 + 8);
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 20) = a2;
  *v9 = a5;
  v9[1] = a6;
  v9[2] = a7;
  FIELD_U32(a1, 24) = r2_0;
  FIELD_U32(a1, 28) = a4;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  v10 = FIELD_U32(a1, 12);
  v11 = FIELD_U32(a1, 16);
  FIELD_U32(a1, 44) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 48) = v10;
  FIELD_U32(a1, 52) = v11;
  FIELD_U32(a1, 80) = FIELD_U32(a8, 8);
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 1;
  FIELD_U8(a1, 104) = 1;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U8(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  sub_60832684((int)&v22, (unsigned int *)(a1 + 24));
  *(float *)&v22.field_C = *(float *)&v22.field_C
                         + (float)((float)((float)(*(float *)&v22.field_4 * 0.0) + (float)(*(float *)&v22.field_0 * 0.0))
                                 + (float)(*(float *)&v22.field_8 * 5.0));
  *(float *)&v22.field_1C = *(float *)&v22.field_1C
                          + (float)((float)((float)(*(float *)&v22.field_14 * 0.0)
                                          + (float)(*(float *)&v22.field_10 * 0.0))
                                  + (float)(*(float *)&v22.field_18 * 5.0));
  v12 = FIELD_F32(a1, 8);
  v13 = FIELD_F32(a1, 12);
  v14 = FIELD_F32(a1, 16);
  v15 = *(float *)&v22.field_1C + v13;
  v16 = v12 - *(float *)&v22.field_C;
  v17 = v13 - *(float *)&v22.field_1C;
  v18 = *(float *)&v22.field_2C
      + (float)((float)((float)(*(float *)&v22.field_24 * 0.0) + (float)(*(float *)&v22.field_20 * 0.0))
              + (float)(*(float *)&v22.field_28 * 5.0));
  FIELD_F32(a1, 56) = *(float *)&v22.field_C + v12;
  FIELD_F32(a1, 60) = v15;
  FIELD_F32(a1, 64) = v18 + v14;
  FIELD_F32(a1, 68) = v16;
  FIELD_F32(a1, 72) = v17;
  FIELD_F32(a1, 76) = v14 - v18;
  a3.x = v12;
  a3.y = v13 + 24.0;
  positionOffset.x = v12;
  *(_WORD *)&v23.field_0 = 0;
  positionOffset.y = v13 + -32.0;
  v23.field_2 = FIELD_U8(a8, 86);
  v23.field_3 = FIELD_U8(a8, 87);
  v23.field_4 = 0;
  v23.field_8 = 0;
  v19 = TileCheck_ctor(&v22, &v23);
  v21.field_C = 0;
  v21.field_10 = 0;
  if ( TileCheck_check(v19, &v21, &a3, &positionOffset, 8) == 1 )
    FIELD_F32(a1, 12) = v21.field_8;
  return a1;
}
