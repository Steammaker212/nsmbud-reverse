/* sub_6057D26C
 * address: 0x6057D26C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057D26C(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  float v5; // r0
  float v6; // r1
  int v7; // r5
  TileCheck_Result v9; // [sp+8h] [bp-C0h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-98h] BYREF
  Vec2 v11; // [sp+38h] [bp-90h] BYREF
  Vec2 v12; // [sp+40h] [bp-88h] BYREF
  Vec2 v13; // [sp+48h] [bp-80h] BYREF
  Vec2 a3; // [sp+50h] [bp-78h] BYREF
  TileCheck v15; // [sp+58h] [bp-70h] BYREF
  TileCheck_Param v16; // [sp+A4h] [bp-24h] BYREF

  *(_WORD *)&v16.field_0 = 256;
  v16.field_2 = FIELD_U8(a1, 86);
  v16.field_3 = FIELD_U8(a1, 87);
  v16.field_4 = 0;
  v16.field_8 = 0;
  TileCheck_ctor(&v15, &v16);
  v2 = v15.field_1C;
  if ( v15.field_1C < v15.field_14 )
  {
    ++v15.field_1C;
    v3 = v15.field_18 + v2;
    v4 = v3 - v15.field_14;
    if ( v3 < v15.field_14 )
      v4 = v3;
    *(_DWORD *)(v15.field_10 + 4 * v4) = a1;
  }
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v9.field_C = 0;
  v9.field_10 = 0;
  positionOffset.x = v5;
  a3.x = v5;
  a3.y = v6;
  positionOffset.y = v6 + 8.0;
  v11.x = v5 + 8.0;
  v11.y = v6;
  v12.x = v5;
  v12.y = v6 + -8.0;
  v13.x = v5 + -8.0;
  v13.y = v6;
  v7 = 1;
  if ( !TileCheck_check(&v15, &v9, &a3, &positionOffset, 15) )
  {
    v9.field_C = 0;
    v9.field_10 = 0;
    if ( TileCheck_check(&v15, &v9, &a3, &v11, 15) != 1 )
    {
      v9.field_C = 0;
      v9.field_10 = 0;
      if ( !TileCheck_check(&v15, &v9, &a3, &v12, 15) )
      {
        v9.field_C = 0;
        v9.field_10 = 0;
        return TileCheck_check(&v15, &v9, &a3, &v13, 15);
      }
    }
  }
  return v7;
}
