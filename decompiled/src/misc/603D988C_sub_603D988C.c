/* sub_603D988C
 * address: 0x603D988C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D988C(int a1)
{
  float v2; // s2
  int *v3; // r2
  float v4; // s4
  float v5; // s4
  int v6; // r1
  int v7; // r1
  int v8; // r0
  int v9; // r5
  TileCheck v11; // [sp+4h] [bp-8Ch] BYREF
  TileCheck_Param v12; // [sp+50h] [bp-40h] BYREF
  int (**v13)(); // [sp+5Ch] [bp-34h] BYREF
  Vec2 a3; // [sp+60h] [bp-30h] BYREF
  Vec2 positionOffset; // [sp+68h] [bp-28h] BYREF
  Vec2 v16; // [sp+70h] [bp-20h] BYREF
  Vec2 v17; // [sp+78h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  positionOffset.x = FIELD_F32(a1, 108);
  positionOffset.y = v2 + -64.0;
  v3 = dword_603D99E0;
  v4 = FIELD_F32(a1, 11752);
  a3.x = positionOffset.x;
  a3.y = v2;
  if ( positionOffset.x < v4 )
    v3 = &dword_603D99E0[1];
  v5 = *(float *)v3;
  v13 = off_60BF83F8;
  *(_WORD *)&v12.field_0 = 256;
  v16.x = positionOffset.x + v5;
  v16.y = v2;
  v17.x = positionOffset.x + v5;
  v17.y = v2 + -64.0;
  v12.field_2 = FIELD_U8(a1, 86);
  v12.field_3 = FIELD_U8(a1, 87);
  v12.field_4 = 0;
  v12.field_8 = (int)&v13;
  TileCheck_ctor(&v11, &v12);
  v6 = v11.field_1C;
  if ( v11.field_1C < v11.field_14 )
  {
    ++v11.field_1C;
    v7 = v11.field_18 + v6;
    v8 = v7 - v11.field_14;
    if ( v7 < v11.field_14 )
      v8 = v7;
    *(_DWORD *)(v11.field_10 + 4 * v8) = a1;
  }
  v9 = 1;
  if ( !TileCheck_check(&v11, 0, &a3, &positionOffset, 15) && TileCheck_check(&v11, 0, &a3, &v16, 15) != 1 )
    return TileCheck_check(&v11, 0, &a3, &v17, 15);
  return v9;
}
