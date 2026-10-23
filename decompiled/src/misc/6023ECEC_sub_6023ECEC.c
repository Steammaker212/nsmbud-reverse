/* sub_6023ECEC
 * address: 0x6023ECEC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023ECEC(int a1)
{
  unsigned int v2; // r0
  int v3; // r3
  float v4; // s2
  float v5; // s3
  float v6; // s1
  int v7; // r1
  int v8; // r1
  int v9; // r0
  TileCheck v11; // [sp+Ch] [bp-84h] BYREF
  TileCheck_Param v12; // [sp+58h] [bp-38h] BYREF
  _DWORD v13[11]; // [sp+64h] [bp-2Ch] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = (v2 >> 20) & 0xFF0;
  v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v5 = FIELD_F32(a1, 112)
     - (float)((float)(*(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v4))
             * 16.0);
  v6 = FIELD_F32(a1, 108)
     + (float)((float)((float)(*(float *)((char *)&sinLutTable[2] + v3)
                             + (float)(v4 * *(float *)((char *)&sinLutTable[3] + v3)))
                     * 16.0)
             * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                     + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                             * 0.000000059605)));
  FIELD_F32(a1, 12656) = v6 + -20.0;
  FIELD_F32(a1, 12660) = v5 + 20.0;
  FIELD_F32(a1, 12688) = v6 + 20.0;
  FIELD_F32(a1, 12692) = v5 + 20.0;
  FIELD_F32(a1, 12664) = v6 + -20.0;
  FIELD_F32(a1, 12668) = v5 + -20.0;
  FIELD_F32(a1, 12696) = v6 + 20.0;
  FIELD_F32(a1, 12700) = v5 + -20.0;
  FIELD_F32(a1, 12672) = v6 + -20.0;
  FIELD_F32(a1, 12676) = v5 + -20.0;
  FIELD_F32(a1, 12704) = v6 + -20.0;
  FIELD_F32(a1, 12708) = v5 + 20.0;
  FIELD_F32(a1, 12680) = v6 + 20.0;
  FIELD_F32(a1, 12684) = v5 + -20.0;
  FIELD_F32(a1, 12712) = v6 + 20.0;
  FIELD_F32(a1, 12716) = v5 + 20.0;
  v13[0] = &off_60BD9910;
  v13[1] = a1;
  *(_WORD *)&v12.field_0 = 256;
  v12.field_2 = FIELD_U8(a1, 86);
  v12.field_3 = FIELD_U8(a1, 87);
  v12.field_4 = 0;
  v12.field_8 = (int)v13;
  TileCheck_ctor(&v11, &v12);
  v7 = v11.field_1C;
  if ( v11.field_1C < v11.field_14 )
  {
    ++v11.field_1C;
    v8 = v11.field_18 + v7;
    v9 = v8 - v11.field_14;
    if ( v8 < v11.field_14 )
      v9 = v8;
    *(_DWORD *)(v11.field_10 + 4 * v9) = a1;
  }
  TileCheck_check(&v11, 0, (Vec2 *)(a1 + 12656), (Vec2 *)(a1 + 12688), 15);
  TileCheck_check(&v11, 0, (Vec2 *)(a1 + 12664), (Vec2 *)(a1 + 12696), 15);
  TileCheck_check(&v11, 0, (Vec2 *)(a1 + 12672), (Vec2 *)(a1 + 12704), 15);
  return TileCheck_check(&v11, 0, (Vec2 *)(a1 + 12680), (Vec2 *)(a1 + 12712), 15);
}
