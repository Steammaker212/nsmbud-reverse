/* sub_60155A60
 * address: 0x60155A60   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155A60(int a1, float *a2, float *r2_0, TileCheck_Result *a4)
{
  float v5; // r3
  float v6; // r1
  float v7; // s0
  TileCheck *v9; // r0
  Vec2 positionOffset; // [sp+8h] [bp-78h] BYREF
  Vec2 a3; // [sp+10h] [bp-70h] BYREF
  TileCheck v13; // [sp+18h] [bp-68h] BYREF
  TileCheck_Param v14; // [sp+64h] [bp-1Ch] BYREF

  v5 = *a2;
  v6 = a2[1];
  a3.x = v5;
  a3.y = v6;
  v7 = r2_0[1];
  positionOffset.x = *r2_0;
  positionOffset.y = v7;
  if ( v5 == positionOffset.x )
    return 0;
  *(_WORD *)&v14.field_0 = 0;
  v14.field_2 = **(_BYTE **)(a1 + 2212);
  v14.field_3 = **(_BYTE **)(a1 + 2216);
  v14.field_4 = 0;
  v14.field_8 = 0;
  v9 = TileCheck_ctor(&v13, &v14);
  return TileCheck_check(v9, a4, &a3, &positionOffset, 8);
}
