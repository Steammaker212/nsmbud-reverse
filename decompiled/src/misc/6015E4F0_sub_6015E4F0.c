/* sub_6015E4F0
 * address: 0x6015E4F0   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6015E4F0(int a1)
{
  unsigned int v2; // r1
  float v3; // r4
  float v4; // r11
  float *v5; // r0
  float v6; // s0
  float v7; // s2
  float v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r5
  unsigned int v12; // r8
  int *v13; // r1
  unsigned int v14; // r0
  int *v15; // r3
  int v16; // r7
  int v17; // r3
  int v18; // r1
  int v19; // r0
  int v20; // r1
  bool v21; // cc
  int v22; // r2
  int v23; // r10
  int v24; // r6
  unsigned int v25; // r7
  int v26; // r8
  int *v27; // r3
  unsigned int v28; // r2
  int *v29; // r4
  int v30; // r12
  int v31; // r0
  int v32; // r2
  int v33; // r2
  bool v34; // zf
  int v35; // r0
  float v36; // s0
  float v37; // s2
  float result; // s0
  float v39; // [sp+0h] [bp-38h]
  ColliderNodeUnk1 v40; // [sp+4h] [bp-34h] BYREF

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
  v9 = FIELD_U32(a1, 348);
  if ( v9 <= 0 )
  {
    v20 = FIELD_U32(a1, 352);
  }
  else if ( v2 )
  {
    v10 = 0;
    v11 = 2;
    v12 = 0;
    do
    {
      v13 = *(int **)(a1 + 344);
      v14 = FIELD_U32(a1, 340);
      v15 = v13;
      if ( v14 > v12 )
        v15 = &v13[v11 - 2];
      v40.field_0 = *v15;
      v16 = v12 + 1;
      v17 = v15[1];
      if ( v14 > v12 + 1 )
        v13 = (int *)((char *)v13 + v11 * 4);
      v40.field_4 = v17;
      LODWORD(v40.field_8) = *v13;
      v40.field_C = v13[1];
      sub_60166A4C(&v40, a1 + 228, a1 + 188);
      v18 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v12 )
        v18 += v10;
      *(ColliderNodeUnk1 *)(v18 + 4) = v40;
      v19 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v12 )
        v19 += v10;
      sub_6015DFC0(v19);
      v9 = FIELD_U32(a1, 348);
      v20 = FIELD_U32(a1, 352);
      v11 += 2;
      v21 = v9 > v12;
      v22 = v20;
      ++v12;
      if ( v21 )
        v22 = v20 + v10;
      v10 += 32;
      v4 = v4 + FIELD_F32(v22, 8);
      v3 = v3 + FIELD_F32(v22, 4);
    }
    while ( v16 < v9 );
  }
  else
  {
    v20 = FIELD_U32(a1, 352);
    v23 = 2;
    v24 = 0;
    v25 = 0;
    do
    {
      v39 = v3;
      v26 = v25 + 1;
      v27 = *(int **)(a1 + 344);
      v28 = FIELD_U32(a1, 340);
      v29 = v27;
      if ( v28 > v25 )
        v29 = &v27[v23 - 2];
      v30 = *v29;
      if ( v28 > v26 )
        v27 = (int *)((char *)v27 + v23 * 4);
      if ( v9 > v25 )
        v20 += v24;
      v40.field_0 = *v29;
      v40.field_4 = v29[1];
      LODWORD(v40.field_8) = *v27;
      v40.field_C = v27[1];
      FIELD_U32(v20, 4) = v30;
      FIELD_U32(v20, 8) = v40.field_4;
      FIELD_F32(v20, 12) = v40.field_8;
      FIELD_U32(v20, 16) = v40.field_C;
      v31 = FIELD_U32(a1, 352);
      if ( FIELD_U32(a1, 348) > v25 )
        v31 += v24;
      sub_6015DFC0(v31);
      v9 = FIELD_U32(a1, 348);
      v20 = FIELD_U32(a1, 352);
      v23 += 2;
      v21 = v9 > v25;
      v32 = v20;
      ++v25;
      if ( v21 )
        v32 = v20 + v24;
      v24 += 32;
      v4 = v4 + FIELD_F32(v32, 8);
      v3 = v39 + FIELD_F32(v32, 4);
    }
    while ( v26 < v9 );
  }
  v33 = v20 + 32 * v9;
  v34 = v9 == 0;
  v35 = v9 + 1;
  if ( !v34 )
    v20 = v33 - 32;
  v36 = 1.0 / (float)v35;
  v37 = v36 * (float)(v3 + FIELD_F32(v20, 12));
  result = v36 * (float)(v4 + FIELD_F32(v20, 16));
  FIELD_F32(a1, 204) = v37;
  FIELD_F32(a1, 208) = result;
  return result;
}
