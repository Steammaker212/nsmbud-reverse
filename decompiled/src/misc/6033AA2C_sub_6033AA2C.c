/* sub_6033AA2C
 * address: 0x6033AA2C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033AA2C(int a1)
{
  int v2; // r6
  unsigned int v3; // r0
  float v4; // s10
  float *v5; // r2
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s8
  float v10; // s0
  float v11; // s14
  float v12; // s12
  TileCheck *v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r7
  int v16; // r3
  float *v17; // r1
  int v18; // r2
  float v19; // s10
  float v20; // s1
  float v21; // s4
  float v22; // s8
  float v23; // s10
  float v24; // s12
  float v25; // s8
  float v26; // s2
  float v27; // s0
  float v28; // s6
  TileCheck *v29; // r0
  TileCheck v31; // [sp+8h] [bp-90h] BYREF
  TileCheck_Param v32; // [sp+54h] [bp-44h] BYREF
  Vec2 positionOffset; // [sp+60h] [bp-38h] BYREF
  Vec2 a3; // [sp+68h] [bp-30h] BYREF
  Vec2 position; // [sp+70h] [bp-28h] BYREF

  v2 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    position.x = 30.0;
    position.y = -30.0;
    v3 = sub_6014C4A4(a1 + 648);
    v2 = 0;
    v4 = *(&position.x + FIELD_U32(a1, 80));
    v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[3];
    v10 = (float)(v3 & 0xFFFFFF);
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_F32(a1, 108);
    *(_WORD *)&v32.field_0 = 0;
    a3.x = v12 + (float)(v4 * (float)(v8 + (float)((float)(v10 * v9) * 0.000000059605)));
    a3.y = (float)(v11 + 10.0) + (float)(v4 * (float)(v6 + (float)((float)(v10 * v7) * 0.000000059605)));
    positionOffset.x = a3.x;
    positionOffset.y = a3.y + -16.0;
    v32.field_2 = FIELD_U8(a1, 86);
    v32.field_3 = FIELD_U8(a1, 87);
    v32.field_4 = 0;
    v32.field_8 = 0;
    v13 = TileCheck_ctor(&v31, &v32);
    if ( !TileCheck_check(v13, 0, &a3, &positionOffset, 8) )
    {
      v14 = sub_6014C4A4(a1 + 648);
      v15 = ((v14 - 0x40000000) >> 20) & 0xFF0;
      v16 = (v14 - 0x40000000) & 0xFFFFFF;
      v17 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
      v18 = FIELD_U32(a1, 80);
      v19 = (float)(v14 & 0xFFFFFF);
      v20 = v17[2] + (float)((float)(v19 * v17[3]) * 0.000000059605);
      v21 = FIELD_F32(a1, 108);
      v22 = v19 * v17[1];
      v23 = flt_60AF20B0[v18];
      v24 = *v17 + (float)(v22 * 0.000000059605);
      v25 = flt_60AF20B0[1 - v18];
      v26 = (float)(*(float *)((char *)sinLutTable + v15)
                  + (float)((float)((float)(unsigned int)v16 * *(float *)((char *)&sinLutTable[1] + v15))
                          * 0.000000059605))
          * 4.0;
      v27 = (float)((float)(*(float *)((char *)&sinLutTable[2] + v15)
                          + (float)((float)((float)(unsigned int)v16 * *(float *)((char *)&sinLutTable[3] + v15))
                                  * 0.000000059605))
                  * 4.0)
          + (float)(v23 * v20);
      v28 = FIELD_F32(a1, 112);
      *(_WORD *)&v32.field_0 = 0;
      position.x = v21 + v27;
      position.y = v28 + (float)(v26 + (float)(v23 * v24));
      a3.x = (float)(v21 + v27) + (float)(v25 * v20);
      a3.y = position.y + (float)(v25 * v24);
      v32.field_2 = FIELD_U8(a1, 86);
      v32.field_3 = FIELD_U8(a1, 87);
      v32.field_4 = 0;
      v32.field_8 = 0;
      v29 = TileCheck_ctor(&v31, &v32);
      return TileCheck_check(v29, 0, &position, &a3, 8) ^ 1;
    }
  }
  return v2;
}
