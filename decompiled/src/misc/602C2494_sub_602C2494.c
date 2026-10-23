/* sub_602C2494
 * address: 0x602C2494   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C2494(int a1)
{
  unsigned int v2; // r0
  float *v3; // r1
  float v4; // r2
  float v5; // s16
  float v6; // s0
  float v7; // s18
  float v8; // s2
  float v9; // s4
  float v10; // s18
  float v11; // s16
  TileCheck *v12; // r0
  float v13; // s0
  float v14; // s2
  TileCheck *v15; // r0
  TileCheck_Result v17; // [sp+8h] [bp-B8h] BYREF
  TileCheck v18; // [sp+30h] [bp-90h] BYREF
  TileCheck_Param v19; // [sp+7Ch] [bp-44h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-38h] BYREF
  Vec2 a3[6]; // [sp+90h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 164) + 0x40000000;
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = FIELD_F32(a1, 112);
  v5 = *v3;
  v6 = v3[1];
  v7 = v3[2];
  v8 = v3[3];
  a3[0].x = FIELD_F32(a1, 108);
  a3[0].y = v4;
  v9 = (float)(v2 & 0xFFFFFF);
  *(_WORD *)&v19.field_0 = 0;
  v10 = v7 + (float)((float)(v8 * v9) * 0.000000059605);
  v11 = v5 + (float)((float)(v9 * v6) * 0.000000059605);
  positionOffset.x = a3[0].x + (float)(v10 * 100.0);
  positionOffset.y = v4 + (float)(v11 * 100.0);
  v19.field_2 = FIELD_U8(a1, 86);
  v19.field_3 = FIELD_U8(a1, 87);
  v19.field_4 = 0;
  v19.field_8 = 0;
  v12 = TileCheck_ctor(&v18, &v19);
  v17.field_C = 0;
  v17.field_10 = 0;
  v18.field_0 = 1;
  TileCheck_check(v12, &v17, a3, &positionOffset, 15);
  FIELD_F32(a1, 6432) = v17.field_4;
  FIELD_F32(a1, 6436) = v17.field_8;
  v13 = FIELD_F32(a1, 6432);
  v14 = FIELD_F32(a1, 6436);
  *(_WORD *)&v19.field_0 = 0;
  a3[0].x = v10 + v13;
  a3[0].y = v11 + v14;
  positionOffset.x = (float)(v10 + v13) + (float)(v10 * 32.0);
  positionOffset.y = (float)(v11 + v14) + (float)(v11 * 32.0);
  v19.field_2 = FIELD_U8(a1, 86);
  v19.field_3 = FIELD_U8(a1, 87);
  v19.field_4 = 0;
  v19.field_8 = 0;
  v15 = TileCheck_ctor(&v18, &v19);
  v17.field_C = 0;
  v17.field_10 = 0;
  v18.field_0 = 1;
  return TileCheck_check(v15, &v17, a3, &positionOffset, 15);
}
