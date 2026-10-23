/* sub_60462F64
 * address: 0x60462F64   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60462F64(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  float v5; // r0
  int v6; // r2
  float result; // s0
  TileCheck_Result v8; // [sp+8h] [bp-B8h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-90h] BYREF
  Vec2 v10; // [sp+38h] [bp-88h] BYREF
  Vec2 a3; // [sp+40h] [bp-80h] BYREF
  Vec2 v12; // [sp+48h] [bp-78h] BYREF
  TileCheck v13; // [sp+50h] [bp-70h] BYREF
  TileCheck_Param v14; // [sp+9Ch] [bp-24h] BYREF

  *(_WORD *)&v14.field_0 = 256;
  v14.field_2 = FIELD_U8(a1, 86);
  v14.field_3 = FIELD_U8(a1, 87);
  v14.field_4 = 0;
  v14.field_8 = 0;
  TileCheck_ctor(&v13, &v14);
  v2 = v13.field_1C;
  if ( v13.field_1C < v13.field_14 )
  {
    ++v13.field_1C;
    v3 = v13.field_18 + v2;
    v4 = v3 - v13.field_14;
    if ( v3 < v13.field_14 )
      v4 = v3;
    *(_DWORD *)(v13.field_10 + 4 * v4) = a1;
  }
  v5 = FIELD_F32(a1, 6656);
  a3.x = FIELD_F32(a1, 6652);
  a3.y = v5;
  v6 = FIELD_U32(a1, 80);
  v8.field_C = 0;
  v8.field_10 = 0;
  v12.x = a3.x;
  v12.y = v5;
  positionOffset.x = a3.x + *(float *)&dword_60AF1EE8[v6];
  positionOffset.y = v5;
  v10.x = a3.x;
  v10.y = v5 + 16.0;
  if ( TileCheck_check(&v13, &v8, &a3, &positionOffset, 15) == 1 )
    FIELD_F32(a1, 108) = v8.field_4 + flt_60AF2160[FIELD_U32(a1, 80)];
  v8.field_C = 0;
  v8.field_10 = 0;
  if ( TileCheck_check(&v13, &v8, &v12, &v10, 15) == 1 )
  {
    result = v8.field_8 + -16.0;
    FIELD_F32(a1, 112) = v8.field_8 + -16.0;
  }
  return result;
}
