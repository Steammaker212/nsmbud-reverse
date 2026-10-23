/* sub_6078D94C
 * address: 0x6078D94C   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078D94C(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r4
  int v5; // r5
  int v6; // t1
  int v7; // r9
  int v8; // r8
  unsigned __int8 *v9; // r6
  size_t v10; // r5
  int v11; // r0
  int v12; // r3
  int *v13; // r4
  int v14; // r2
  int v15; // r7
  int v16; // r1
  unsigned __int16 *v17; // r0
  size_t v18; // r7
  size_t v19; // r2
  int v20; // r0
  int v21; // r1
  int v22; // r6
  int v23; // r10
  int v24; // r7
  int v25; // r4
  float v26; // s24
  float v27; // s20
  float v28; // s16
  float v29; // s16
  float v30; // s20
  float v31; // s18
  float v32; // s24
  float v33; // s22
  float v34; // s26
  float v35; // s16
  float v36; // s17
  float v37; // s0
  float v38; // s22
  float v39; // s19
  float v40; // s18
  float v41; // s0
  float v42; // s2
  float v43; // s2
  float v44; // r1
  float v45; // r2
  float v46; // r3
  int v47; // r0
  int v48; // r5
  float v49; // s6
  float v50; // s4
  float v51; // s12
  float v52; // s14
  float v53; // s1
  float v54; // s3
  float v55; // s2
  float v56; // s0
  int v57; // r0
  float v58; // s5
  float v59[12]; // [sp+4h] [bp-A4h] BYREF
  _DWORD v60[29]; // [sp+34h] [bp-74h] BYREF

  result = FIELD_U32(a1, 300);
  if ( result != 4 )
    return result;
  v3 = FIELD_U32(a1, 288);
  v4 = *(_DWORD *)(FIELD_U32(a1, 16) + 20);
  v6 = FIELD_U32(v3, 48);
  v5 = v3 + 48;
  (*(void (__fastcall **)(int))(v6 + 12))(v5);
  v7 = FIELD_U32(v4, 48);
  v8 = -1;
  if ( v7 )
  {
    v9 = *(unsigned __int8 **)(v5 + 4);
    if ( v9 )
      v10 = strlen(*(const char **)(v5 + 4));
    else
      v10 = 0;
    v11 = FIELD_U16(v7, 12);
    v13 = (int *)(v7 + 8 + 16 * v11);
    v12 = *v13;
    if ( FIELD_U32(v7, 8) < *v13 )
    {
      v14 = v7 + 8;
      do
      {
        v15 = 0;
        if ( v10 > v12 >> 3 )
          v15 = (v9[v10 + ~(v12 >> 3)] >> (v12 & 7)) & 1;
        v16 = *(_DWORD *)(v14 + 16 * v11);
        v11 = *(unsigned __int16 *)(v14 + 16 * v11 + 2 * v15 + 4);
        v13 = (int *)(v14 + 16 * v11);
        v12 = *v13;
      }
      while ( v16 < *v13 );
    }
    v17 = (unsigned __int16 *)v13[2];
    v18 = *v17;
    v19 = v18;
    if ( v10 < v18 )
      v19 = v10;
    if ( v19 )
    {
      v20 = memcmp(v17 + 1, v9, v19);
      v21 = v20;
      if ( !v20 )
        v21 = 1;
      if ( v10 < v18 || v20 )
        goto LABEL_22;
      goto LABEL_20;
    }
    if ( v10 >= v18 )
    {
LABEL_20:
      v21 = 0;
      if ( v18 < v10 )
        v21 = -1;
LABEL_22:
      if ( !v21 )
        v8 = ((int)v13 - v7 - 24) >> 4;
    }
  }
  v22 = 0;
  v23 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 20) + 40) + 120 * v8 + 32);
  do
  {
    result = a1 + 4 * dword_60B0C27C[v22];
    v24 = FIELD_U32(result, 308);
    if ( v24 != -1 )
    {
      v25 = FIELD_U32(v23, 24) + 96 * v24;
      v26 = FIELD_F32(v25, 68);
      v27 = FIELD_F32(v25, 72);
      v28 = FIELD_F32(v25, 76);
      if ( (FIELD_U8(v25, 53) & 0x70) != 0 )
      {
        v29 = v28 * 0.5;
        v30 = v27 * 0.5;
        v31 = cosf(v29);
        v32 = v26 * 0.5;
        v33 = cosf(v30);
        v34 = cosf(v32);
        v35 = sinf(v29);
        v36 = v33 * v35;
        v37 = sinf(v30);
        v38 = v31 * v33;
        v39 = v35 * v37;
        v40 = v31 * v37;
        v41 = sinf(v32);
        v28 = (float)(v34 * v36) - (float)(v40 * v41);
        v27 = (float)(v36 * v41) + (float)(v34 * v40);
        v26 = (float)(v38 * v41) - (float)(v34 * v39);
        v42 = (float)(v39 * v41) + (float)(v38 * v34);
      }
      else
      {
        v42 = FIELD_F32(v25, 80);
      }
      v43 = v42 + v42;
      v44 = FIELD_F32(v25, 84);
      v45 = FIELD_F32(v25, 88);
      v46 = FIELD_F32(v25, 92);
      v47 = FIELD_U32(v25, 60);
      v48 = FIELD_U32(v25, 64);
      v49 = v27 * (float)(v27 + v27);
      v50 = v28 * (float)(v28 + v28);
      v51 = v28 * v43;
      v52 = v27 * (float)(v26 + v26);
      v60[0] = FIELD_U32(v25, 56);
      v60[1] = v47;
      v60[2] = v48;
      v53 = v27 * v43;
      v54 = (float)(v26 + v26) * v28;
      v55 = v26 * v43;
      v56 = (float)(v27 + v27) * v28;
      v57 = **(_DWORD **)(a1 + 24);
      v59[0] = (float)(1.0 - v49) - v50;
      v59[1] = v52 - v51;
      v58 = 1.0 - (float)(v26 * (float)(v26 + v26));
      v59[2] = v54 + v53;
      v59[4] = v52 + v51;
      v59[5] = v58 - v50;
      v59[6] = v56 - v55;
      v59[8] = v54 - v53;
      v59[9] = v56 + v55;
      v59[10] = v58 - v49;
      v59[3] = v44;
      v59[7] = v45;
      v59[11] = v46;
      result = (*(int (__fastcall **)(int, int, float *, _DWORD *))(*(_DWORD *)v57 + 96))(v57, v24, v59, v60);
    }
    ++v22;
  }
  while ( v22 != 7 );
  return result;
}
