/* sub_6037EF94
 * address: 0x6037EF94   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037EF94(int a1)
{
  float v2; // s2
  float v3; // s6
  float v4; // s4
  float v5; // s18
  float v6; // s20
  TileCheck *v7; // r0
  float v8; // s22
  float v9; // s24
  float v10; // s18
  float v11; // s16
  TileCheck *v12; // r0
  float v13; // s20
  TileCheck *v14; // r0
  TileCheck *v15; // r0
  TileCheck *v16; // r0
  Vec2 positionOffset; // [sp+4h] [bp-94h] BYREF
  Vec2 a3; // [sp+Ch] [bp-8Ch] BYREF
  TileCheck v20; // [sp+14h] [bp-84h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 12456);
  v4 = FIELD_F32(a1, 12460);
  a3.x = FIELD_F32(a1, 108);
  a3.y = v2;
  v5 = v3 + a3.x;
  v6 = v4 + v2;
  positionOffset.x = v3 + a3.x;
  positionOffset.y = v4 + v2;
  v7 = sub_6015D0AC(&v20);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_C = a1 + 12468;
  TileCheck_check(v7, 0, &a3, &positionOffset, 15);
  v8 = FIELD_F32(a1, 12472);
  v9 = v5 - v8;
  v10 = v5 + v8;
  v11 = v6 + v8;
  a3.x = v9;
  positionOffset.x = v10;
  a3.y = v6 + v8;
  positionOffset.y = v6 + v8;
  v12 = sub_6015D0AC(&v20);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_C = a1 + 12468;
  TileCheck_check(v12, 0, &a3, &positionOffset, 15);
  v13 = v6 - v8;
  a3.x = v9;
  positionOffset.x = v10;
  a3.y = v13;
  positionOffset.y = v13;
  v14 = sub_6015D0AC(&v20);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_C = a1 + 12468;
  TileCheck_check(v14, 0, &a3, &positionOffset, 15);
  a3.x = v9;
  positionOffset.x = v9;
  a3.y = v11;
  positionOffset.y = v13;
  v15 = sub_6015D0AC(&v20);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_C = a1 + 12468;
  TileCheck_check(v15, 0, &a3, &positionOffset, 15);
  a3.x = v10;
  positionOffset.x = v10;
  a3.y = v11;
  positionOffset.y = v13;
  v16 = sub_6015D0AC(&v20);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_C = a1 + 12468;
  return TileCheck_check(v16, 0, &a3, &positionOffset, 15);
}
