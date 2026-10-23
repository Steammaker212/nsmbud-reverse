/* sub_6037FF44
 * address: 0x6037FF44   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6037FF44(int a1)
{
  float v2; // s0
  float v3; // r0
  float v4; // s2
  TileCheck *v5; // r0
  float result; // s0
  TileCheck_Result v7; // [sp+8h] [bp-A0h] BYREF
  TileCheck v8; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v9; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  if ( (FIELD_U8(a1, 2872) & 1) == 0 || (FIELD_U32(a1, 5956) & 0xFF00) != 0x300 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_F32(a1, 108);
    v4 = FIELD_F32(a1, 6372);
    *(_WORD *)&v9.field_0 = 0;
    a3.x = v3;
    positionOffset.x = v3;
    a3.y = v2 + (float)(v4 * -8.0);
    positionOffset.y = a3.y + (float)(v4 * 48.0);
    v9.field_2 = FIELD_U8(a1, 86);
    v9.field_3 = FIELD_U8(a1, 87);
    v9.field_4 = 0;
    v9.field_8 = 0;
    v5 = TileCheck_ctor(&v8, &v9);
    v7.field_C = 0;
    v7.field_10 = 0;
    if ( TileCheck_check(v5, &v7, &a3, &positionOffset, 15) == 1 )
    {
      result = v7.field_8 + (float)(FIELD_F32(a1, 6372) * -4.0);
      FIELD_F32(a1, 112) = result;
    }
  }
  return result;
}
