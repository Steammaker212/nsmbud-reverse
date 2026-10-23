/* sub_601559B8
 * address: 0x601559B8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601559B8(int a1, float *a2, TileCheck_Result *r2_0, float a4)
{
  float v5; // s2
  int v6; // r1
  TileCheck *v7; // r0
  Vec2 positionOffset; // [sp+8h] [bp-70h] BYREF
  Vec2 a3; // [sp+10h] [bp-68h] BYREF
  TileCheck v11; // [sp+18h] [bp-60h] BYREF
  TileCheck_Param v12; // [sp+64h] [bp-14h] BYREF

  v5 = a2[1];
  a3.x = *a2;
  a3.y = v5;
  positionOffset.x = a3.x;
  positionOffset.y = v5 - a4;
  v6 = 0;
  if ( v5 != (float)(v5 - a4) )
  {
    *(_WORD *)&v12.field_0 = 0;
    v12.field_2 = **(_BYTE **)(a1 + 2212);
    v12.field_3 = **(_BYTE **)(a1 + 2216);
    v12.field_4 = 0;
    v12.field_8 = 0;
    v7 = TileCheck_ctor(&v11, &v12);
    return TileCheck_check(v7, r2_0, &a3, &positionOffset, 8);
  }
  return v6;
}
