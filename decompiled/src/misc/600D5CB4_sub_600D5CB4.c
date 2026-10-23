/* sub_600D5CB4
 * address: 0x600D5CB4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D5CB4(int a1)
{
  float v1; // r2
  float v2; // r1
  int v3; // r4
  TileCheck *v4; // r0
  Actor *v5; // r0
  bool v6; // zf
  TileCheck_Result v8; // [sp+8h] [bp-98h] BYREF
  TileCheck v9; // [sp+30h] [bp-70h] BYREF
  TileCheck_Param v10; // [sp+7Ch] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-18h] BYREF
  Vec2 a3; // [sp+90h] [bp-10h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 108);
  v3 = 0;
  *(_WORD *)&v10.field_0 = 0;
  a3.x = v2;
  a3.y = v1;
  positionOffset.x = v2;
  positionOffset.y = v1 + -1.0;
  v10.field_2 = FIELD_U8(a1, 86);
  v10.field_3 = FIELD_U8(a1, 87);
  v10.field_4 = 0;
  v10.field_8 = 0;
  v4 = TileCheck_ctor(&v9, &v10);
  v8.field_C = 0;
  v8.field_10 = 0;
  if ( TileCheck_check(v4, &v8, &a3, &positionOffset, 8) == 1 )
  {
    v5 = (Actor *)v8.field_20;
    v6 = v8.field_20 == 0;
    if ( v8.field_20 )
    {
      v5 = *(Actor **)(v8.field_20 + 144);
      v6 = v5 == 0;
    }
    if ( v6 )
    {
      return 1;
    }
    else if ( Actor__getProfileId(v5) != 371 )
    {
      return 1;
    }
  }
  return v3;
}
