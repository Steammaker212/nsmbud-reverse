/* sub_60394850
 * address: 0x60394850   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60394850(int a1)
{
  bool v2; // fnf
  int v3; // r1
  float v4; // r5
  float v5; // s0
  int v6; // r9
  float v7; // r0
  TileCheck *v8; // r0
  int *result; // r0
  TileCheck_Result v10; // [sp+8h] [bp-B0h] BYREF
  TileCheck v11; // [sp+30h] [bp-88h] BYREF
  TileCheck_Param v12; // [sp+7Ch] [bp-3Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-30h] BYREF
  Vec2 a3; // [sp+90h] [bp-28h] BYREF

  v2 = *(float *)(sub_60378E30(a1 + 6444) + 16) < FIELD_F32(a1, 108);
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = (int)(float)((float)(2147500000.0 * (float)((float)v3 * 60.0)) / 180.0);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v4 = FIELD_F32(a1, 6364);
  v5 = FIELD_F32(a1, 6368);
  v6 = FIELD_U32(a1, 6372);
  a3.x = v4;
  a3.y = v5 + 2.0;
  positionOffset.y = v5 + 2.0;
  positionOffset.x = v4;
  positionOffset.y = FIELD_F32(AreaTask_intance, 1816);
  if ( (float)(v5 + 2.0) >= positionOffset.y )
  {
    *(_WORD *)&v12.field_0 = 0;
    v12.field_2 = FIELD_U8(a1, 86);
    v12.field_3 = FIELD_U8(a1, 87);
    v12.field_4 = 0;
    v12.field_8 = 0;
    v8 = TileCheck_ctor(&v11, &v12);
    v10.field_C = 0;
    v10.field_10 = 0;
    if ( TileCheck_check(v8, &v10, &a3, &positionOffset, 8) == 1 )
    {
      v7 = v10.field_8;
    }
    else
    {
      v6 = FIELD_U32(a1, 6372);
      v4 = FIELD_F32(a1, 6364);
      v7 = FIELD_F32(a1, 6368);
    }
  }
  else
  {
    v7 = v5;
  }
  FIELD_F32(a1, 108) = v4;
  FIELD_F32(a1, 112) = v7;
  FIELD_U32(a1, 116) = v6;
  result = (int *)dword_60CC6484;
  if ( (float)((float)(v4 + FIELD_F32(a1, 304)) + -20.0) <= FIELD_F32(dword_60CC6484, 48) )
  {
    FIELD_U32(a1, 6392) = &dword_60C971A0;
    return &dword_60C971A0;
  }
  return result;
}
