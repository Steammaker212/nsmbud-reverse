/* sub_603EF5E0
 * address: 0x603EF5E0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EF5E0(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s0
  int result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-78h] BYREF
  Vec2 a3; // [sp+10h] [bp-70h] BYREF
  _BYTE v8[4]; // [sp+18h] [bp-68h] BYREF
  int v9; // [sp+1Ch] [bp-64h]
  int v10; // [sp+20h] [bp-60h]
  TileCheck v11; // [sp+24h] [bp-5Ch] BYREF

  v2 = FIELD_F32(a1, 80) + FIELD_F32(a1, 36);
  FIELD_F32(a1, 36) = v2;
  v3 = FIELD_F32(a1, 48);
  if ( v2 < v3 )
  {
    FIELD_F32(a1, 36) = v3;
    v2 = v3;
  }
  FIELD_F32(a1, 20) = FIELD_F32(a1, 20) + FIELD_F32(a1, 32);
  FIELD_F32(a1, 24) = FIELD_F32(a1, 24) + v2;
  FIELD_F32(a1, 28) = FIELD_F32(a1, 28) + FIELD_F32(a1, 40);
  sub_6015D0AC(&v11);
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 1;
  v9 = 0;
  v10 = 0;
  sub_6015D144(&v11, (int)v8);
  v4 = FIELD_F32(a1, 24);
  a3.x = FIELD_F32(a1, 20);
  positionOffset.x = a3.x;
  a3.y = v4 + -4.0;
  positionOffset.y = v4 + 4.0;
  result = TileCheck_check(&v11, 0, &a3, &positionOffset, 15);
  if ( result == 1 )
    FIELD_U8(a1, 16) = 1;
  return result;
}
