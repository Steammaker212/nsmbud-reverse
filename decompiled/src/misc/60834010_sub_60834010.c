/* sub_60834010
 * address: 0x60834010   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60834010(int result)
{
  int v1; // r1
  unsigned int v2; // r3
  unsigned int v3; // r5
  int v4; // r4
  signed int v5; // r2
  int v6; // r6
  float *v7; // lr
  unsigned int v8; // r2
  float *v9; // r10
  float *v10; // r8
  bool v11; // cc
  int v12; // r5
  int v13; // s2
  unsigned int v14; // s4
  unsigned int v15; // r6
  int v16; // r7
  float *v17; // r4
  float v18; // s2
  float v19; // s6
  float v20; // s4
  float v21; // s2
  float v22; // s6
  int v23; // r4
  float *v24; // r12
  int v25; // r2
  int v26; // r6
  float *v27; // lr
  float *v28; // r2
  int v29; // r4
  int v30; // s2
  unsigned int v31; // s4
  unsigned int v32; // r7
  int v33; // r6
  float *v34; // r3
  float v35; // s2
  float v36; // s6
  float v37; // s4
  float v38; // s2
  float v39; // s6
  int v40; // r5

  v1 = 0;
  v2 = 0;
LABEL_2:
  v3 = FIELD_U32(result, 28);
  v4 = 12 * v2 - 24;
  v5 = v3 - 2;
  while ( (int)v2 < v5 )
  {
    LOBYTE(v6) = FIELD_U8(result, 13);
    v4 += 24;
    v2 += 2;
    if ( (_BYTE)v6 )
    {
      v7 = *(float **)(result + 32);
      v8 = (v2 - 2) | 1;
      v9 = v7;
      if ( v3 > v8 )
        v9 = &v7[3 * v8];
      v10 = *(float **)(result + 32);
      if ( v3 > v2 - 2 )
        v10 = (float *)((char *)v7 + v4);
      v11 = v3 > v2;
      v12 = 0;
      if ( v11 )
        v7 = (float *)((char *)v7 + v4 + 24);
      do
      {
        v13 = v12++;
        v14 = (unsigned __int8)v6;
        v15 = (unsigned __int16)v1;
        v16 = 3 * (unsigned __int16)v1++;
        v17 = *(float **)(result + 40);
        v18 = (float)v13 / (float)v14;
        if ( FIELD_U32(result, 36) > v15 )
          v17 += v16;
        v19 = v18 * (float)(1.0 - v18);
        v20 = (float)(1.0 - v18) * (float)(1.0 - v18);
        v21 = v18 * v18;
        v22 = v19 + v19;
        *v17 = (float)((float)(*v9 * v22) + (float)(*v10 * v20)) + (float)(v21 * *v7);
        v23 = FIELD_U32(result, 40);
        if ( FIELD_U32(result, 36) > v15 )
          v23 += 4 * v16;
        FIELD_F32(v23, 4) = (float)((float)(v22 * v9[1]) + (float)(v20 * v10[1])) + (float)(v21 * v7[1]);
        v6 = FIELD_U8(result, 13);
      }
      while ( v12 < v6 );
      goto LABEL_2;
    }
  }
  if ( !FIELD_U8(result, 12) )
  {
    v24 = *(float **)(result + 32);
    v25 = 3 * v5;
    LOBYTE(v26) = FIELD_U8(result, 13);
    v27 = v24;
    if ( v3 > 1 )
      v27 = &v24[v25];
    v28 = *(float **)(result + 32);
    if ( v3 )
      v28 = &v24[3 * v3 - 3];
    if ( FIELD_U8(result, 13) )
    {
      v29 = 0;
      do
      {
        v30 = v29++;
        v31 = (unsigned __int8)v26;
        v32 = (unsigned __int16)v1;
        v33 = 3 * (unsigned __int16)v1++;
        v34 = *(float **)(result + 40);
        v35 = (float)v30 / (float)v31;
        if ( FIELD_U32(result, 36) > v32 )
          v34 += v33;
        v36 = v35 * (float)(1.0 - v35);
        v37 = (float)(1.0 - v35) * (float)(1.0 - v35);
        v38 = v35 * v35;
        v39 = v36 + v36;
        *v34 = (float)((float)(*v28 * v39) + (float)(*v27 * v37)) + (float)(v38 * *v24);
        v40 = FIELD_U32(result, 40);
        if ( FIELD_U32(result, 36) > v32 )
          v40 += 4 * v33;
        FIELD_F32(v40, 4) = (float)((float)(v39 * v28[1]) + (float)(v37 * v27[1])) + (float)(v38 * v24[1]);
        v26 = FIELD_U8(result, 13);
      }
      while ( v29 < v26 );
    }
  }
  return result;
}
