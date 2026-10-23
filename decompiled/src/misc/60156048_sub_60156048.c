/* sub_60156048
 * address: 0x60156048   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60156048(int a1, float a2, int r1_0, float *a4, float *a5)
{
  float v6; // r1
  float v7; // r2
  int v8; // r5
  char v9; // r0
  TileCheck *v10; // r0
  int v11; // r0
  bool v12; // zf
  TileCheck v14; // [sp+4h] [bp-A4h] BYREF
  TileCheck_Result v15; // [sp+50h] [bp-58h] BYREF
  TileCheck_Param v16; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  v6 = *a5;
  v7 = a5[1];
  v8 = 0;
  *(_WORD *)&v16.field_0 = 0;
  a3.x = v6;
  a3.y = v7;
  positionOffset.x = v6;
  positionOffset.y = v7 - a2;
  v16.field_2 = **(_BYTE **)(a1 + 2212);
  v9 = **(_BYTE **)(a1 + 2216);
  v15.field_C = 0;
  v15.field_10 = 0;
  v16.field_3 = v9;
  v16.field_4 = 0;
  v16.field_8 = 0;
  v10 = TileCheck_ctor(&v14, &v16);
  v11 = TileCheck_check(v10, &v15, &a3, &positionOffset, 8);
  v12 = v11 == 1;
  if ( v11 == 1 )
    v12 = LOWORD(v15.field_18) == 0x14;
  if ( v12 )
  {
    v8 = 1;
    if ( a4 )
      *a4 = v15.field_8;
  }
  return v8;
}
