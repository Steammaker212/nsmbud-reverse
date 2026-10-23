/* sub_6068C8E0
 * address: 0x6068C8E0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068C8E0(int a1, float *a2, float *r2_0)
{
  float v5; // r0
  float v6; // r1
  float v7; // r0
  float v8; // r1
  TileCheck *v9; // r0
  int v10; // r0
  float v11; // r1
  float v12; // r0
  float v13; // r1
  TileCheck *v14; // r0
  Vec2 positionOffset; // [sp+8h] [bp-94h] BYREF
  Vec2 a3; // [sp+10h] [bp-8Ch] BYREF
  TileCheck_Result v18; // [sp+18h] [bp-84h] BYREF
  TileCheck v19; // [sp+44h] [bp-58h] BYREF
  TileCheck_Param v20; // [sp+90h] [bp-Ch] BYREF
  int (**v21)(); // [sp+9Ch] [bp+0h] BYREF

  v5 = *a2;
  v6 = a2[1];
  a3.x = v5;
  a3.y = v6;
  v7 = *r2_0;
  v8 = r2_0[1];
  v20.field_0 = 0;
  v20.field_1 = 0;
  positionOffset.x = v7;
  positionOffset.y = v8;
  v21 = off_60C17534;
  v20.field_2 = 2;
  v20.field_3 = 1;
  v20.field_4 = 0;
  v20.field_8 = (int)&v21;
  v9 = TileCheck_ctor(&v19, &v20);
  v18.field_C = 0;
  v18.field_10 = 0;
  v10 = TileCheck_check(v9, &v18, &a3, &positionOffset, 3);
  if ( v10 != 1 )
    return sub_6068CA40(v10, a2, r2_0);
  v11 = a2[1];
  a3.x = *a2;
  a3.y = v11;
  v12 = *r2_0;
  v13 = r2_0[1];
  v20.field_0 = 0;
  v20.field_1 = 0;
  v20.field_2 = 0;
  v20.field_3 = 1;
  v20.field_4 = 0;
  v20.field_8 = (int)&v21;
  positionOffset.x = v12;
  positionOffset.y = v13;
  v21 = off_60C17534;
  v14 = TileCheck_ctor(&v19, &v20);
  v18.field_C = 0;
  v18.field_10 = 0;
  return TileCheck_check(v14, &v18, &a3, &positionOffset, 3) ^ 1;
}
