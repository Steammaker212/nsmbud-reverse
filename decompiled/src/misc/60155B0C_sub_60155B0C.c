/* sub_60155B0C
 * address: 0x60155B0C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155B0C(int a1, float *a2, float *r2_0, int a4, float s0_0)
{
  int v10; // r5
  int a5; // r6
  float v12; // r1
  char v13; // r0
  int (**v14)(); // r0
  TileCheck *v15; // r7
  TileCheck v17; // [sp+4h] [bp-C4h] BYREF
  TileCheck_Result v18; // [sp+50h] [bp-78h] BYREF
  _DWORD v19[2]; // [sp+7Ch] [bp-4Ch] BYREF
  TileCheck_Param v20; // [sp+84h] [bp-44h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-38h] BYREF
  Vec2 a3; // [sp+98h] [bp-30h] BYREF

  if ( s0_0 > 0.0001 || (v10 = 0, s0_0 < -0.0001) )
  {
    sub_6014F61C(a1);
    a5 = 1;
    v10 = 0;
    FIELD_U8(a1, 5) = 1;
    v12 = a2[1];
    a3.x = *a2;
    a3.y = v12;
    *(_WORD *)&v20.field_0 = 256;
    positionOffset.x = a3.x + s0_0;
    positionOffset.y = v12;
    v20.field_2 = **(_BYTE **)(a1 + 2212);
    v13 = **(_BYTE **)(a1 + 2216);
    v18.field_C = 0;
    v18.field_10 = 0;
    v20.field_3 = v13;
    v20.field_4 = 0;
    v20.field_8 = 0;
    v14 = off_60BD4520;
    v19[0] = off_60BD4520;
    if ( a4 == 1 )
      v14 = (int (**)())v19;
    v19[1] = a1;
    v15 = (TileCheck *)(a1 + 4);
    if ( a4 == 1 )
      v20.field_8 = (int)v14;
    TileCheck_ctor(&v17, &v20);
    if ( s0_0 < 0.0 )
      a5 = 2;
    if ( TileCheck_check(v15, &v18, &a3, &positionOffset, a5) == 1 )
    {
      v10 = 1;
      if ( r2_0 )
        *r2_0 = v18.field_4;
    }
  }
  return v10;
}
