/* sub_603467A4
 * address: 0x603467A4   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603467A4(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // s4
  int v5; // r1
  int v6; // r1
  int v7; // r0
  int v8; // r4
  TileCheck v10; // [sp+8h] [bp-A0h] BYREF
  Vec2 positionOffset; // [sp+54h] [bp-54h] BYREF
  Vec2 v12; // [sp+5Ch] [bp-4Ch] BYREF
  Vec2 v13; // [sp+64h] [bp-44h] BYREF
  Vec2 a3; // [sp+6Ch] [bp-3Ch] BYREF
  Vec2 v15; // [sp+74h] [bp-34h] BYREF
  Vec2 v16; // [sp+7Ch] [bp-2Ch] BYREF
  TileCheck_Param v17; // [sp+84h] [bp-24h] BYREF

  *(_WORD *)&v17.field_0 = 256;
  v17.field_2 = FIELD_U8(a1, 86);
  v17.field_3 = FIELD_U8(a1, 87);
  v17.field_4 = 0;
  v17.field_8 = 0;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 7080);
  a3.x = v3 + -8.0;
  positionOffset.x = v3 + -8.0;
  a3.y = v2 + (float)(v4 + 23.0);
  positionOffset.y = a3.y + 8.0;
  v15.x = v3 + 8.0;
  v15.y = a3.y;
  v12.x = v3 + 8.0;
  v12.y = a3.y + 8.0;
  v16.x = v3;
  v13.x = v3;
  v16.y = a3.y;
  v13.y = a3.y + 8.0;
  TileCheck_ctor(&v10, &v17);
  v5 = v10.field_1C;
  if ( v10.field_1C < v10.field_14 )
  {
    ++v10.field_1C;
    v6 = v10.field_18 + v5;
    v7 = v6 - v10.field_14;
    if ( v6 < v10.field_14 )
      v7 = v6;
    *(_DWORD *)(v10.field_10 + 4 * v7) = a1;
  }
  v8 = 1;
  if ( !TileCheck_check(&v10, 0, &a3, &positionOffset, 15) && TileCheck_check(&v10, 0, &v15, &v12, 15) != 1 )
    return TileCheck_check(&v10, 0, &v16, &v13, 15);
  return v8;
}
