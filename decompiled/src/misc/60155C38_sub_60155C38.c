/* sub_60155C38
 * address: 0x60155C38   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155C38(int a1, float *a2, float *r2_0, int a4, float a5)
{
  int v6; // r5
  float v7; // s2
  _DWORD *v8; // r1
  int v9; // r2
  TileCheck *v10; // r0
  TileCheck v12; // [sp+4h] [bp-B4h] BYREF
  TileCheck_Result v13; // [sp+50h] [bp-68h] BYREF
  _DWORD v14[2]; // [sp+7Ch] [bp-3Ch] BYREF
  _DWORD v15[2]; // [sp+84h] [bp-34h] BYREF
  TileCheck_Param v16; // [sp+8Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+98h] [bp-20h] BYREF
  Vec2 a3; // [sp+A0h] [bp-18h] BYREF

  if ( a5 > 0.0001 || (v6 = 0, a5 < -0.0001) )
  {
    v6 = 0;
    v7 = a2[1];
    a3.x = *a2;
    a3.y = v7;
    positionOffset.x = a3.x;
    *(_WORD *)&v16.field_0 = 256;
    positionOffset.y = v7 + a5;
    v16.field_2 = **(_BYTE **)(a1 + 2212);
    v16.field_3 = **(_BYTE **)(a1 + 2216);
    v16.field_4 = 0;
    v15[0] = off_60BD4530;
    v15[1] = a1;
    v14[0] = off_60BD4520;
    v14[1] = a1;
    v8 = v14;
    v9 = FIELD_U8(dword_60CC6D8C, 17);
    if ( a4 )
      v8 = v15;
    v13.field_C = 0;
    v13.field_10 = 0;
    if ( v9 )
      v8 = v15;
    v16.field_8 = (int)v8;
    v10 = TileCheck_ctor(&v12, &v16);
    if ( TileCheck_check(v10, &v13, &a3, &positionOffset, 4) == 1 )
    {
      v6 = 1;
      if ( r2_0 )
        *r2_0 = v13.field_8;
    }
  }
  return v6;
}
