/* sub_6003A7CC
 * address: 0x6003A7CC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003A7CC(int a1)
{
  float v2; // r0
  float v3; // r1
  TileCheck *v4; // r0
  int result; // r0
  TileCheck_Result v6; // [sp+8h] [bp-A8h] BYREF
  TileCheck v7; // [sp+34h] [bp-7Ch] BYREF
  TileCheck_Param v8; // [sp+80h] [bp-30h] BYREF
  int (**v9)(); // [sp+8Ch] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-20h] BYREF
  Vec2 a3; // [sp+98h] [bp-18h] BYREF

  sub_60045DB4(a1, 1, 0, 1, 0.0, 1.0);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  *(_WORD *)&v8.field_0 = 0;
  a3.x = v2;
  positionOffset.x = v2;
  a3.y = v3;
  positionOffset.y = v3 + -200.0;
  v9 = off_60BC30C8;
  v8.field_2 = FIELD_U8(a1, 86);
  v8.field_3 = FIELD_U8(a1, 87);
  v8.field_4 = 0;
  v8.field_8 = (int)&v9;
  v4 = TileCheck_ctor(&v7, &v8);
  v6.field_C = 0;
  v6.field_10 = 0;
  TileCheck_check(v4, &v6, &a3, &positionOffset, 8);
  result = LODWORD(v6.field_8);
  FIELD_F32(a1, 11584) = v6.field_8;
  return result;
}
