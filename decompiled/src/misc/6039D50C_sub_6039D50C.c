/* sub_6039D50C
 * address: 0x6039D50C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6039D50C(int a1)
{
  float v1; // s16
  _BOOL4 result; // r0
  TileCheck *v3; // r0
  int v4; // r1
  TileCheck_Result v5; // [sp+8h] [bp-A0h] BYREF
  TileCheck v6; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v7; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 112) + 1.0;
  a3.x = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 8.0);
  a3.y = v1;
  positionOffset.y = v1;
  positionOffset.x = a3.x;
  positionOffset.y = FIELD_F32(AreaTask_intance, 1816);
  if ( v1 < positionOffset.y )
    return 1;
  *(_WORD *)&v7.field_0 = 0;
  v7.field_2 = FIELD_U8(a1, 86);
  v7.field_3 = FIELD_U8(a1, 87);
  v7.field_4 = 0;
  v7.field_8 = 0;
  v3 = TileCheck_ctor(&v6, &v7);
  v5.field_C = 0;
  v5.field_10 = 0;
  v4 = TileCheck_check(v3, &v5, &a3, &positionOffset, 8);
  result = 1;
  if ( v4 == 1 )
    return fabsf(v5.field_8 - v1) > 96.0;
  return result;
}
