/* sub_6061AC10
 * address: 0x6061AC10   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061AC10(int a1)
{
  Actor *v1; // r5
  char v3; // r0
  TileCheck *v4; // r0
  float v5; // s0
  int result; // r0
  bool v7; // zf
  Vec2 positionOffset; // [sp+4h] [bp-A4h] BYREF
  Vec2 a3; // [sp+Ch] [bp-9Ch] BYREF
  TileCheck v10; // [sp+14h] [bp-94h] BYREF
  TileCheck_Result v11; // [sp+60h] [bp-48h] BYREF
  TileCheck_Param v12; // [sp+8Ch] [bp-1Ch] BYREF

  v1 = 0;
  *(_WORD *)&v12.field_0 = 0;
  v12.field_2 = FIELD_U8(a1, 86);
  v3 = FIELD_U8(a1, 87);
  v11.field_C = 0;
  v11.field_10 = 0;
  v12.field_3 = v3;
  v12.field_4 = 0;
  v12.field_8 = 0;
  v4 = TileCheck_ctor(&v10, &v12);
  v5 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  positionOffset.x = a3.x;
  a3.y = v5 + -1.0;
  positionOffset.y = v5 + -256.0;
  result = TileCheck_check(v4, &v11, &a3, &positionOffset, 15);
  FIELD_U8(a1, 6844) = 0;
  if ( result == 1 )
  {
    FIELD_F32(a1, 112) = v11.field_8;
    FIELD_U8(a1, 6844) = 1;
    result = v11.field_20;
    v7 = v11.field_20 == 0;
    if ( v11.field_20 )
    {
      v1 = *(Actor **)(v11.field_20 + 144);
      v7 = v1 == 0;
    }
    if ( !v7 )
    {
      result = Actor__getProfileId(v1);
      if ( result == 283 )
      {
        result = FIELD_U32(v1, 0x8);
        FIELD_U32(a1, 6864) = result;
      }
    }
  }
  return result;
}
