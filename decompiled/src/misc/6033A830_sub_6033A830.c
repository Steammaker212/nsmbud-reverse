/* sub_6033A830
 * address: 0x6033A830   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033A830(int a1)
{
  float v2; // s0
  float v3; // s2
  __int16 v4; // r0
  int v5; // r1
  int v6; // r5
  int v7; // r0
  int v8; // r2
  unsigned int v9; // r3
  TileCheck_Result v11; // [sp+8h] [bp-138h] BYREF
  TileCheck_Result v12; // [sp+30h] [bp-110h] BYREF
  TileCheck v13; // [sp+5Ch] [bp-E4h] BYREF
  TileCheck v14; // [sp+A8h] [bp-98h] BYREF
  TileCheck_Param v15; // [sp+F4h] [bp-4Ch] BYREF
  Vec2 v16; // [sp+100h] [bp-40h] BYREF
  Vec2 position; // [sp+108h] [bp-38h] BYREF
  Vec2 positionOffset; // [sp+110h] [bp-30h] BYREF
  Vec2 a3; // [sp+118h] [bp-28h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  a3.x = v2 + 1.5;
  positionOffset.x = v2 + 1.5;
  a3.y = v3 + 4.0;
  positionOffset.y = v3 + -6.0;
  position.x = v2 + -1.5;
  v16.x = v2 + -1.5;
  position.y = v3 + 4.0;
  v16.y = v3 + -6.0;
  v4 = sub_607160F4(
         TileMgr_instance,
         (int)(float)(v2 + *(float *)&dword_60AFFAE4[FIELD_U32(a1, 80)]),
         (unsigned __int16)(int)(float)-(float)(v3 + -2.0),
         FIELD_U8(a1, 86),
         1);
  v5 = 0;
  if ( v4 == 0x14 )
    return v5;
  *(_WORD *)&v15.field_0 = 0;
  v15.field_2 = FIELD_U8(a1, 86);
  v15.field_3 = FIELD_U8(a1, 87);
  v15.field_4 = 0;
  v15.field_8 = 0;
  TileCheck_ctor(&v14, &v15);
  TileCheck_ctor(&v13, &v15);
  v12.field_C = 0;
  v11.field_C = 0;
  v12.field_10 = 0;
  v11.field_10 = 0;
  v6 = TileCheck_check(&v14, &v12, &a3, &positionOffset, 8);
  v7 = TileCheck_check(&v13, &v11, &position, &v16, 8);
  v8 = FIELD_U32(a1, 80);
  if ( v8 )
  {
    if ( v7 != 1 )
      goto LABEL_12;
    v9 = v11.field_C;
    if ( v11.field_C < 0 )
      goto LABEL_8;
    goto LABEL_10;
  }
  if ( v6 == 1 )
  {
    v9 = v12.field_C;
    if ( v12.field_C < 0 )
    {
LABEL_8:
      if ( v9 == 0x80000000 )
        return sub_6033AA2C(a1, 756416512) ^ 1;
      v9 = -v9;
    }
LABEL_10:
    if ( v9 > 0x2D160000 )
      return sub_6033AA2C(a1, 756416512) ^ 1;
LABEL_12:
    v5 = 1;
    if ( v6 == v7 || !v8 && (v6 ^ 1) != 1 )
      return v5;
    goto LABEL_17;
  }
  v5 = 1;
  if ( !v7 )
    return v5;
LABEL_17:
  if ( v8 != 1 )
    v8 = 0;
  return v7 & v8;
}
