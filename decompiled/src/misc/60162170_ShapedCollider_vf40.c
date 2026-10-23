/* ShapedCollider_vf40
 * address: 0x60162170   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ShapedCollider_vf40(int a1)
{
  unsigned int v2; // r0
  float v3; // r10
  float v4; // r11
  float *v5; // r1
  float v6; // s0
  float v7; // s2
  float v8; // r1
  int v9; // r7
  int v10; // r8
  unsigned int v11; // r5
  unsigned int v12; // r0
  int *v13; // r1
  int v14; // r6
  int *v15; // r2
  unsigned int v16; // r2
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r1
  bool v21; // cc
  int v22; // r1
  int v23; // r8
  int v24; // r5
  unsigned int v25; // r6
  int v26; // r11
  unsigned int v27; // r2
  int *v28; // r7
  int *v29; // r3
  int v30; // r4
  unsigned int v31; // r3
  int v32; // r0
  int v33; // r2
  bool v34; // zf
  float v35; // s0
  float v36; // s4
  float result; // s0
  float v38; // [sp+4h] [bp-3Ch]
  int v39; // [sp+8h] [bp-38h]
  ColliderNodeUnk1 v40; // [sp+Ch] [bp-34h] BYREF

  v39 = FIELD_U32(a1, 348);
  ColliderNodeUnk1_ctor(&v40);
  v2 = FIELD_U32(a1, 244);
  v3 = 0.0;
  v4 = 0.0;
  if ( v2 )
  {
    v5 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
    v6 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
    v7 = *v5 + (float)(v6 * v5[1]);
    v8 = v5[2] + (float)(v6 * v5[3]);
    FIELD_F32(a1, 228) = v8;
    FIELD_U8(a1, 232) = LOBYTE(v7);
    FIELD_U8(a1, 235) = (LODWORD(v7) ^ 0x80000000) >> 24;
    FIELD_U8(a1, 234) = (LODWORD(v7) ^ 0x80000000) >> 16;
    FIELD_U8(a1, 233) = BYTE1(v7);
    FIELD_F32(a1, 236) = v7;
    FIELD_F32(a1, 240) = v8;
  }
  if ( v39 <= 0 )
  {
    v19 = FIELD_U32(a1, 348);
  }
  else if ( v2 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = FIELD_U32(a1, 340);
      v13 = *(int **)(a1 + 344);
      v14 = v11 + 1;
      v15 = v13;
      if ( v12 > v11 )
        v15 = &v13[v9];
      v40.field_0 = *v15;
      v40.field_4 = v15[1];
      v16 = 0;
      if ( v14 < v39 )
        v16 = v11 + 1;
      if ( v12 > v16 )
        v13 += 2 * v16;
      LODWORD(v40.field_8) = *v13;
      v40.field_C = v13[1];
      sub_60166A4C(&v40, a1 + 228, a1 + 188);
      v17 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v11 )
        v17 += v10;
      *(ColliderNodeUnk1 *)(v17 + 4) = v40;
      v18 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v11 )
        v18 += v10;
      sub_6015DFC0(v18);
      v19 = FIELD_U32(a1, 348);
      v20 = FIELD_U32(a1, 352);
      v9 += 2;
      v21 = v19 > v11++;
      if ( v21 )
        v20 += v10;
      v10 += 32;
      v4 = v4 + FIELD_F32(v20, 8);
      v3 = v3 + FIELD_F32(v20, 4);
    }
    while ( v39 != v14 );
  }
  else
  {
    v19 = FIELD_U32(a1, 348);
    v22 = FIELD_U32(a1, 352);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    do
    {
      v38 = v4;
      v26 = v25 + 1;
      v27 = FIELD_U32(a1, 340);
      v28 = *(int **)(a1 + 344);
      v29 = v28;
      if ( v27 > v25 )
        v29 = &v28[v23];
      v30 = *v29;
      v40.field_0 = *v29;
      v40.field_4 = v29[1];
      v31 = 0;
      if ( v26 < v39 )
        v31 = v25 + 1;
      if ( v27 > v31 )
        v28 += 2 * v31;
      if ( v19 > v25 )
        v22 += v24;
      LODWORD(v40.field_8) = *v28;
      v40.field_C = v28[1];
      FIELD_U32(v22, 4) = v30;
      FIELD_U32(v22, 8) = v40.field_4;
      FIELD_F32(v22, 12) = v40.field_8;
      FIELD_U32(v22, 16) = v40.field_C;
      v32 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v25 )
        v32 += v24;
      sub_6015DFC0(v32);
      v19 = FIELD_U32(a1, 348);
      v22 = FIELD_U32(a1, 352);
      v23 += 2;
      v21 = v19 > v25;
      v33 = v22;
      ++v25;
      if ( v21 )
        v33 = v22 + v24;
      v24 += 32;
      v34 = v39 == v26;
      v3 = v3 + FIELD_F32(v33, 4);
      v4 = v38 + FIELD_F32(v33, 8);
    }
    while ( !v34 );
  }
  v35 = 1.0 / (float)(int)v19;
  v36 = v3 * v35;
  result = v4 * v35;
  FIELD_F32(a1, 204) = v36;
  FIELD_F32(a1, 208) = result;
  return result;
}
