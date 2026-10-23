/* sub_6039D624
 * address: 0x6039D624   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6039D624(int a1)
{
  int v1; // r4
  float v2; // s2
  float v3; // s0
  float v4; // s6
  TileCheck *v5; // r0
  int v6; // r5
  TileCheck_Result v8; // [sp+8h] [bp-A0h] BYREF
  TileCheck v9; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v10; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  v1 = FIELD_U32(a1, 80);
  v2 = FIELD_F32(a1, 108);
  v3 = 5.5 / fabsf(FIELD_F32(a1, 100));
  v4 = (float)byte_60AFE3F4[v1];
  a3.y = FIELD_F32(a1, 112) + 2.0;
  positionOffset.y = a3.y;
  v10.field_0 = 0;
  a3.x = v2 + (float)(v4 * 0.0);
  positionOffset.x = v2 + (float)(v4 * (float)((float)(v3 * 1.6) + 0.0));
  v10.field_2 = FIELD_U8(a1, 86);
  v10.field_3 = FIELD_U8(a1, 87);
  v10.field_4 = 0;
  v10.field_8 = 0;
  v5 = TileCheck_ctor(&v9, &v10);
  v8.field_C = 0;
  v8.field_10 = 0;
  v6 = 2;
  if ( !v1 )
    v6 = 1;
  return TileCheck_check(v5, &v8, &a3, &positionOffset, v6 | 8) == 1 && (unsigned __int8)(v8.field_0 & v6) != 0;
}
