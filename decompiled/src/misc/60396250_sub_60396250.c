/* sub_60396250
 * address: 0x60396250   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60396250(int a1)
{
  int v2; // r0
  float v3; // s2
  float v4; // s4
  float v5; // s0
  int *v6; // r0
  float v7; // s4
  TileCheck *v8; // r0
  int *result; // r0
  TileCheck_Result v10; // [sp+8h] [bp-A0h] BYREF
  TileCheck v11; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v12; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  v2 = sub_60378E30(a1 + 6444);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(v2, 16) - v3;
  a3.x = v3;
  v6 = dword_60396324;
  v7 = v4 + 24.0;
  *(_WORD *)&v12.field_0 = 0;
  a3.y = v7;
  if ( v5 >= 0.0 )
    v6 = &dword_60396324[1];
  positionOffset.x = v3 + *(float *)v6;
  positionOffset.y = v7;
  v12.field_2 = FIELD_U8(a1, 86);
  v12.field_3 = FIELD_U8(a1, 87);
  v12.field_4 = 0;
  v12.field_8 = 0;
  v8 = TileCheck_ctor(&v11, &v12);
  v10.field_C = 0;
  v10.field_10 = 0;
  result = (int *)TileCheck_check(v8, &v10, &a3, &positionOffset, 3);
  if ( !result )
  {
    FIELD_U32(a1, 6392) = &dword_60C971A0;
    return &dword_60C971A0;
  }
  return result;
}
