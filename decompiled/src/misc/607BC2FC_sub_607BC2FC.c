/* sub_607BC2FC
 * address: 0x607BC2FC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607BC2FC(int a1)
{
  unsigned int v2; // r1
  int v3; // r2
  float v4; // s0
  float v5; // r2
  float v6; // r1
  float v7; // s0
  int v8; // r0
  int v9; // r1
  unsigned int result; // r0
  TileCheck_Result v11; // [sp+0h] [bp-40h] BYREF
  float v12[5]; // [sp+2Ch] [bp-14h] BYREF

  FIELD_U32(a1, 11392) = 0;
  FIELD_U32(a1, 11396) = 0;
  FIELD_U32(a1, 12408) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 156) = 0;
  v2 = FIELD_U32(a1, 1212) & 0xE61FFFFF;
  FIELD_U32(a1, 1212) = v2;
  v3 = FIELD_U32(a1, 1216);
  FIELD_U32(a1, 1216) = v3 & 0xFFFFFFFB;
  if ( (v3 & 8) != 0 )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_F32(a1, 108);
    v6 = FIELD_F32(a1, 116);
    v11.field_C = 0;
    v11.field_10 = 0;
    v12[0] = v5;
    v12[1] = v4 + -5.0;
    v12[2] = v6;
    if ( sub_601559B8(a1 + 1328, v12, &v11, 64.0) == 1 )
    {
      v7 = v11.field_8;
      if ( FIELD_F32(a1, 112) <= v11.field_8 )
      {
        v8 = FIELD_U32(a1, 108);
        FIELD_F32(a1, 112) = v11.field_8;
        v9 = FIELD_U32(a1, 116);
        FIELD_U32(a1, 584) = v8;
        FIELD_F32(a1, 588) = v7;
        FIELD_U32(a1, 592) = v9;
        FIELD_U32(a1, 608) = v8;
        FIELD_F32(a1, 612) = v7;
        FIELD_U32(a1, 616) = v9;
      }
    }
    FIELD_U32(a1, 1216) &= ~8u;
    v2 = FIELD_U32(a1, 1212);
  }
  FIELD_U32(a1, 1228) &= 0xFFFDBBFF;
  result = FIELD_U32(a1, 1224) & 0xFFFFFFEF;
  FIELD_U32(a1, 1224) = result;
  if ( (v2 & 0x20000000) == 0 )
  {
    result = FIELD_U8(a1, 6902);
    if ( (result & 4) == 0 )
      return ((int (__fastcall *)(int))loc_607BC420)(a1);
  }
  return result;
}
