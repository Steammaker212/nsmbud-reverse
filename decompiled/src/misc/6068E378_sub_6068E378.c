/* sub_6068E378
 * address: 0x6068E378   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068E378(int a1)
{
  Vec2 *v2; // r5
  TileCheck *v3; // r0
  float v4; // s2
  int result; // r0
  _BYTE *v6; // r1
  TileCheck *v7; // r0
  float v8; // s2
  Vec2 positionOffset; // [sp+8h] [bp-98h] BYREF
  TileCheck_Result v10; // [sp+10h] [bp-90h] BYREF
  TileCheck v11; // [sp+38h] [bp-68h] BYREF
  TileCheck_Param v12[2]; // [sp+84h] [bp-1Ch] BYREF

  v2 = (Vec2 *)(a1 + 6152);
  if ( (FIELD_U8(a1, 24) & 0xF) != 0 )
  {
    *(_WORD *)&v12[0].field_0 = 0;
    *(_WORD *)&v12[0].field_2 = FIELD_U16(a1, 86);
    v12[0].field_4 = 0;
    v12[0].field_8 = a1 + 6836;
    v3 = TileCheck_ctor(&v11, v12);
    v10.field_C = 0;
    v10.field_10 = 0;
    v4 = FIELD_F32(a1, 6156);
    positionOffset.x = FIELD_F32(v2, 0x0);
    positionOffset.y = v4 + -512.0;
    result = TileCheck_check(v3, &v10, v2, &positionOffset, 8);
    v6 = (_BYTE *)(a1 + 6162);
    if ( result == 1 )
    {
      *v6 = 1;
LABEL_7:
      result = LODWORD(v10.field_8);
      FIELD_F32(a1, 6176) = v10.field_8;
      return result;
    }
    *v6 = 0;
  }
  else
  {
    v7 = sub_6015D0AC(&v11);
    v10.field_C = 0;
    v10.field_10 = 0;
    v11.field_2 = FIELD_U8(a1, 86);
    v11.field_3 = FIELD_U8(a1, 87);
    v8 = FIELD_F32(a1, 6156);
    *(float *)&v12[0].field_0 = FIELD_F32(v2, 0x0);
    *(float *)&v12[0].field_4 = v8 + -512.0;
    if ( TileCheck_check(v7, &v10, v2, (Vec2 *)v12, 8) == 1 && (v10.field_18 & 0xFFFFFF) == 0x4000D )
    {
      FIELD_U8(a1, 6162) = 1;
      goto LABEL_7;
    }
    FIELD_U8(a1, 6162) = 0;
    return 6162;
  }
  return result;
}
