/* sub_6004816C
 * address: 0x6004816C   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004816C(int a1)
{
  int v2; // r0
  float *v3; // r2
  float v4; // r5
  float *v5; // r2
  float v6; // s16
  float v7; // s18
  float v8; // s0
  float v9; // s0
  char v10; // r1
  int v11; // r5
  int v12; // r0
  int result; // r0
  Actor *v14; // r0
  bool v15; // zf
  TileCheck_Result v16; // [sp+8h] [bp-120h] BYREF
  TileCheck v17; // [sp+34h] [bp-F4h] BYREF
  TileCheck v18; // [sp+80h] [bp-A8h] BYREF
  TileCheck_Param v19; // [sp+CCh] [bp-5Ch] BYREF
  TileCheck_Param v20; // [sp+D8h] [bp-50h] BYREF
  int (**v21)(); // [sp+E4h] [bp-44h] BYREF
  Vec2 positionOffset; // [sp+E8h] [bp-40h] BYREF
  Vec2 a3[7]; // [sp+F0h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 11468);
  v3 = (float *)(a1 + 11364);
  if ( !v2 )
    v3 = (float *)(a1 + 11256);
  v4 = *v3;
  v5 = (float *)(a1 + 11360);
  if ( !v2 )
    v5 = (float *)(a1 + 11252);
  a3[0].x = *v5;
  a3[0].y = v4;
  v6 = FIELD_F32(a1, 11172);
  v7 = FIELD_F32(a1, 11168);
  v8 = sqrtf((float)((float)(v6 * v6) + (float)(v7 * v7)) + (float)(FIELD_F32(a1, 11176) * FIELD_F32(a1, 11176)));
  if ( v8 > 0.0 )
  {
    v9 = 1.0 / v8;
    v6 = v6 * v9;
    v7 = v7 * v9;
  }
  *(_WORD *)&v20.field_0 = 0;
  v21 = off_60BC30C8;
  positionOffset.x = a3[0].x + (float)(v7 * 16.0);
  positionOffset.y = v4 + (float)(v6 * 16.0);
  v20.field_2 = FIELD_U8(a1, 86);
  v10 = FIELD_U8(a1, 87);
  v19.field_0 = 0;
  v19.field_1 = 0;
  v19.field_2 = v20.field_2;
  v20.field_3 = v10;
  v19.field_3 = v10;
  v20.field_4 = 0;
  v19.field_4 = 0;
  v20.field_8 = (int)&v21;
  v19.field_8 = 0;
  TileCheck_ctor(&v18, &v20);
  TileCheck_ctor(&v17, &v19);
  v16.field_C = 0;
  v16.field_10 = 0;
  v11 = TileCheck_check(&v18, &v16, a3, &positionOffset, 8);
  v12 = ((int (__fastcall *)(TileCheck *, TileCheck_Result *, Vec2 *, Vec2 *, int))loc_6015D2DC)(
          &v17,
          &v16,
          a3,
          &positionOffset,
          8);
  if ( v11 == 1 )
  {
    result = 1;
    if ( v16.field_20 )
    {
      v14 = *(Actor **)(v16.field_20 + 144);
      return !v14 || Actor__getProfileId(v14) != 371;
    }
  }
  else
  {
    v15 = (v11 | v12) == 0;
    result = 1;
    if ( v15 )
    {
      result = FIELD_U8(a1, 11682);
      if ( FIELD_U8(a1, 11682) )
        return 1;
    }
  }
  return result;
}
