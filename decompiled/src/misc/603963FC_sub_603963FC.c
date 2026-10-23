/* sub_603963FC
 * address: 0x603963FC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603963FC(int a1)
{
  int v2; // r0
  float v3; // s2
  float v4; // s4
  float v5; // s0
  int *v6; // r0
  float v7; // s16
  TileCheck *v8; // r0
  int *result; // r0
  float v10; // s2
  float v11; // r0
  TileCheck *v12; // r0
  TileCheck_Result v13; // [sp+8h] [bp-A8h] BYREF
  TileCheck v14; // [sp+30h] [bp-80h] BYREF
  TileCheck_Param v15; // [sp+7Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-28h] BYREF
  Vec2 a3[4]; // [sp+90h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  v2 = sub_60378E30(a1 + 6444);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(v2, 16) - v3;
  a3[0].x = v3;
  v6 = dword_6039654C;
  *(_WORD *)&v15.field_0 = 0;
  if ( v5 >= 0.0 )
    v6 = &dword_6039654C[1];
  v7 = *(float *)v6;
  a3[0].y = v4 + 16.0;
  positionOffset.x = v7 + v3;
  positionOffset.y = v4 + 16.0;
  v15.field_2 = FIELD_U8(a1, 86);
  v15.field_3 = FIELD_U8(a1, 87);
  v15.field_4 = 0;
  v15.field_8 = 0;
  v8 = TileCheck_ctor(&v14, &v15);
  v13.field_C = 0;
  v13.field_10 = 0;
  result = (int *)TileCheck_check(v8, &v13, a3, &positionOffset, 3);
  if ( !result )
  {
    v10 = FIELD_F32(a1, 112);
    v11 = FIELD_F32(a1, 108);
    *(_WORD *)&v15.field_0 = 0;
    a3[0].x = v11;
    a3[0].y = v10 + 32.0;
    positionOffset.x = v7 + v11;
    positionOffset.y = v10 + 32.0;
    v15.field_2 = FIELD_U8(a1, 86);
    v15.field_3 = FIELD_U8(a1, 87);
    v15.field_4 = 0;
    v15.field_8 = 0;
    v12 = TileCheck_ctor(&v14, &v15);
    v13.field_C = 0;
    v13.field_10 = 0;
    result = (int *)TileCheck_check(v12, &v13, a3, &positionOffset, 3);
    if ( result != (int *)1 )
    {
      FIELD_U32(a1, 6392) = &dword_60C971A0;
      return &dword_60C971A0;
    }
  }
  return result;
}
