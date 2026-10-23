/* ShapedCollider_vf34
 * address: 0x60161FF8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall ShapedCollider_vf34(int a1)
{
  int v1; // r12
  float v2; // lr
  __int64 v3; // r2
  float v4; // s4
  float v5; // s2
  float v6; // s0
  float v7; // s6
  int v8; // r9
  int v9; // r10
  int v10; // r7
  unsigned int v11; // r5
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float v15; // s14
  unsigned int v16; // r0
  float v17; // r3
  float v18; // r2
  float v19; // r1
  float v20; // s0
  float v21; // s2
  float v22; // s4
  float v23; // s6
  int v24; // r4
  bool v25; // cc
  float v26; // s10
  float v27; // s8
  int v28; // r4
  float v29; // s10
  float v30; // s8
  float v31; // s14
  float v32; // s12

  v1 = FIELD_U32(a1, 348);
  v2 = 3.4028e38;
  if ( v1 < 1 )
  {
    v18 = -3.4028e38;
    v19 = 3.4028e38;
    v17 = -3.4028e38;
  }
  else
  {
    v3 = FIELD_U64(a1, 152);
    v4 = FIELD_F32(a1, 176);
    v5 = FIELD_F32(a1, 180);
    v6 = FIELD_F32(a1, 184);
    v7 = FIELD_F32(a1, 172);
    v8 = FIELD_U32(a1, 352);
    v9 = FIELD_U32(a1, 360);
    v10 = 0;
    v11 = 0;
    v12 = *(float *)HIDWORD(v3);
    v13 = *(float *)(HIDWORD(v3) + 4);
    v14 = *(float *)v3;
    v15 = FIELD_F32(v3, 4);
    v16 = FIELD_U32(a1, 356);
    v17 = -3.4028e38;
    v18 = -3.4028e38;
    v19 = 3.4028e38;
    v20 = v13 + v6;
    v21 = v12 + v5;
    v22 = v15 + v4;
    v23 = v14 + v7;
    do
    {
      v24 = v8;
      if ( v1 > v11 )
        v24 = v8 + v10;
      v25 = v16 > v11++;
      v26 = FIELD_F32(v24, 8);
      v27 = FIELD_F32(v24, 4);
      v28 = v9;
      if ( v25 )
        v28 = v9 + v10;
      v10 += 32;
      v29 = v22 + v26;
      v30 = v23 + v27;
      v31 = v20 + FIELD_F32(v28, 8);
      v32 = v21 + FIELD_F32(v28, 4);
      if ( v17 < v29 )
        v17 = v29;
      if ( v17 < v31 )
        v17 = v20 + FIELD_F32(v28, 8);
      if ( v18 < v30 )
        v18 = v30;
      if ( v18 < v32 )
        v18 = v21 + FIELD_F32(v28, 4);
      if ( v2 > v30 )
        v2 = v30;
      if ( v19 > v29 )
        v19 = v29;
      if ( v19 > v31 )
        v19 = v20 + FIELD_F32(v28, 8);
      if ( v2 > v32 )
        v2 = v21 + FIELD_F32(v28, 4);
    }
    while ( (int)v11 < v1 );
  }
  FIELD_F32(a1, 112) = v2;
  FIELD_F32(a1, 0x74) = v19;
  FIELD_F32(a1, 120) = v18;
  FIELD_F32(a1, 124) = v17;
  return (float *)(a1 + 0x74);
}
