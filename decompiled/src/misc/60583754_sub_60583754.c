/* sub_60583754
 * address: 0x60583754   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60583754(int a1, float *a2)
{
  TileCheck *v3; // r0
  float v4; // r1
  float v5; // r2
  float v6; // s16
  float result; // s0
  TileCheck_Result v8; // [sp+8h] [bp-B8h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-90h] BYREF
  Vec2 v10; // [sp+38h] [bp-88h] BYREF
  Vec2 a3; // [sp+40h] [bp-80h] BYREF
  TileCheck v12; // [sp+48h] [bp-78h] BYREF
  TileCheck_Param v13; // [sp+94h] [bp-2Ch] BYREF

  v13.field_0 = 0;
  v13.field_1 = 1;
  v13.field_2 = 0;
  v13.field_3 = 3;
  v13.field_4 = 0;
  v13.field_8 = 0;
  v3 = TileCheck_ctor(&v12, &v13);
  v4 = *a2;
  v5 = a2[1];
  v8.field_C = 0;
  v8.field_10 = 0;
  a3.x = v4;
  a3.y = v5;
  positionOffset.x = v4 + 8.0;
  positionOffset.y = v5;
  v10.x = v4 + -8.0;
  v10.y = v5;
  if ( TileCheck_check(v3, &v8, &a3, &positionOffset, 3) == 1 )
    v6 = (float)(v8.field_4 - positionOffset.x) + 0.0;
  else
    v6 = 0.0;
  v8.field_C = 0;
  v8.field_10 = 0;
  if ( TileCheck_check(&v12, &v8, &a3, &v10, 3) == 1 )
    v6 = v6 + (float)(v8.field_4 - v10.x);
  result = v6 + *a2;
  *a2 = result;
  return result;
}
