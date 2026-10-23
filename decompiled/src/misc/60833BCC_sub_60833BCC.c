/* sub_60833BCC
 * address: 0x60833BCC   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60833BCC(int result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // t1
  int v4; // r1
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r3
  float *v8; // r1
  _DWORD *v9; // r3
  unsigned int v10; // r12
  _DWORD *v11; // r2
  unsigned int v12; // r3
  _DWORD *v13; // r4
  int v14; // r12
  _DWORD *v15; // r2
  int v16; // r3
  _DWORD *v17; // r4
  unsigned int v18; // lr
  unsigned int v19; // r1
  int v20; // r12
  int v21; // r9
  unsigned int v22; // r3
  _DWORD *v23; // r6
  _DWORD *v24; // r4
  unsigned int v25; // r8
  float *v26; // r6
  unsigned int v27; // r7
  float *v28; // r5
  float *v29; // r4
  float *v30; // r2
  float v31; // s10
  float v32; // s12
  bool v33; // cc
  float v34; // s4
  float v35; // s6
  float v36; // s2
  float v37; // s8
  float v38; // s4
  float v39; // s10
  float v40; // s6
  float v41; // s12
  float *v42; // r1
  _DWORD *v43; // r2
  _DWORD *v44; // r7
  unsigned int v45; // r3
  _DWORD *v46; // r7
  int v47; // r1
  int v48; // r1
  unsigned int v49; // r3
  float *v50; // r7
  int v51; // r6
  bool v52; // zf
  float *v53; // r1
  float v54; // s2
  float v55; // s4
  float v56; // s6
  float *v57; // r6
  float v58; // s10
  float v59; // s12
  _DWORD *v60; // r1
  int v61; // r2
  _DWORD *v62; // r3
  unsigned int v63; // lr
  unsigned int v64; // r1
  int v65; // r12
  int v66; // r9
  unsigned int v67; // r3
  _DWORD *v68; // r6
  _DWORD *v69; // r4
  unsigned int v70; // r8
  float *v71; // r6
  unsigned int v72; // r7
  float *v73; // r5
  float *v74; // r4
  float *v75; // r2
  float v76; // s10
  float v77; // s12
  float v78; // s4
  float v79; // s6

  v1 = (int *)(result + 20);
  v2 = FIELD_U32(result, 20);
  if ( v2 > 3 )
  {
    v8 = *(float **)(result + 24);
    if ( FIELD_U8(result, 12) == 1 )
    {
      v9 = *(_DWORD **)(result + 32);
      *v9 = *(_DWORD *)v8;
      v9[1] = *((_DWORD *)v8 + 1);
      v9[2] = *((_DWORD *)v8 + 2);
      v10 = FIELD_U32(result, 20);
      v11 = *(_DWORD **)(result + 24);
      v12 = FIELD_U32(result, 28);
      v13 = *(_DWORD **)(result + 32);
      if ( v12 > 1 )
        v13 = &v13[3 * v12 - 6];
      if ( v10 > 1 )
        v11 = &v11[3 * v10 - 6];
      *v13 = *v11;
      v13[1] = v11[1];
      v13[2] = v11[2];
      v14 = FIELD_U32(result, 20);
      v15 = *(_DWORD **)(result + 24);
      v16 = FIELD_U32(result, 28);
      v17 = *(_DWORD **)(result + 32);
      if ( v16 )
        v17 = &v17[3 * v16 - 3];
      if ( v14 )
        v15 = &v15[3 * v14 - 3];
      *v17 = *v15;
      v17[1] = v15[1];
      v17[2] = v15[2];
      v18 = FIELD_U32(result, 20);
      if ( (int)(v18 - 2) >= 2 )
      {
        v19 = 1;
        v20 = 3;
        v21 = 6;
        v22 = 2;
        do
        {
          v23 = *(_DWORD **)(result + 32);
          v24 = *(_DWORD **)(result + 24);
          v25 = v19 + 1;
          if ( FIELD_U32(result, 28) > v22 - 1 )
            v23 = &v23[v21 - 3];
          if ( v18 > v19 )
            v24 = (_DWORD *)((char *)v24 + v20 * 4);
          *v23 = *v24;
          v23[1] = v24[1];
          v23[2] = v24[2];
          v26 = *(float **)(result + 24);
          v27 = FIELD_U32(result, 20);
          v28 = *(float **)(result + 32);
          v29 = &v26[v20];
          v30 = v26;
          v20 += 3;
          if ( v27 > v25 )
            v30 = v29 + 3;
          if ( v27 > v19 )
            v26 = v29;
          v31 = v30[1];
          v32 = v30[2];
          v33 = FIELD_U32(result, 28) > v22;
          v22 += 2;
          v34 = v26[1];
          v35 = v26[2];
          if ( v33 )
            v28 = (float *)((char *)v28 + v21 * 4);
          v21 += 6;
          *v28 = (float)(*v26 + *v30) * 0.5;
          v28[1] = (float)(v34 + v31) * 0.5;
          v28[2] = (float)(v35 + v32) * 0.5;
          v18 = FIELD_U32(result, 20);
          ++v19;
        }
        while ( (int)v25 < (int)(v18 - 2) );
      }
    }
    else
    {
      v36 = *v8;
      v37 = v8[3];
      v38 = v8[1];
      v39 = v8[4];
      v40 = v8[2];
      v41 = v8[5];
      v42 = *(float **)(result + 32);
      *v42 = (float)(v36 + v37) * 0.5;
      v42[1] = (float)(v38 + v39) * 0.5;
      v42[2] = (float)(v40 + v41) * 0.5;
      v43 = *(_DWORD **)(result + 24);
      v44 = *(_DWORD **)(result + 32);
      if ( FIELD_U32(result, 28) > 1u )
        v44 += 3;
      if ( FIELD_U32(result, 20) > 1u )
        v43 += 3;
      *v44 = *v43;
      v44[1] = v43[1];
      v44[2] = v43[2];
      v45 = FIELD_U32(result, 28);
      v46 = *(_DWORD **)(result + 32);
      v47 = FIELD_U32(result, 24) + 12 * FIELD_U32(result, 20);
      if ( v45 > 2 )
        v46 = &v46[3 * v45 - 9];
      *v46 = *(_DWORD *)(v47 - 12);
      v46[1] = *(_DWORD *)(v47 - 8);
      v46[2] = *(_DWORD *)(v47 - 4);
      v48 = FIELD_U32(result, 20);
      v49 = FIELD_U32(result, 28);
      v50 = *(float **)(result + 32);
      v51 = 3 * v48;
      v52 = v48 == 0;
      v53 = *(float **)(result + 24);
      v54 = *v53;
      v55 = v53[1];
      v56 = v53[2];
      v57 = &v53[v51];
      if ( !v52 )
        v53 = v57 - 3;
      v58 = v53[1];
      v59 = v53[2];
      if ( v49 > 1 )
        v50 = &v50[3 * v49 - 6];
      *v50 = (float)(*v53 + v54) * 0.5;
      v50[1] = (float)(v58 + v55) * 0.5;
      v50[2] = (float)(v59 + v56) * 0.5;
      v60 = *(_DWORD **)(result + 24);
      v61 = FIELD_U32(result, 28);
      v62 = *(_DWORD **)(result + 32);
      if ( v61 )
        v62 = &v62[3 * v61 - 3];
      *v62 = *v60;
      v62[1] = v60[1];
      v62[2] = v60[2];
      v63 = FIELD_U32(result, 20);
      if ( (int)(v63 - 1) >= 2 )
      {
        v64 = 1;
        v65 = 3;
        v66 = 6;
        v67 = 2;
        do
        {
          v68 = *(_DWORD **)(result + 32);
          v69 = *(_DWORD **)(result + 24);
          v70 = v64 + 1;
          if ( FIELD_U32(result, 28) > v67 - 1 )
            v68 = &v68[v66 - 3];
          if ( v63 > v64 )
            v69 = (_DWORD *)((char *)v69 + v65 * 4);
          *v68 = *v69;
          v68[1] = v69[1];
          v68[2] = v69[2];
          v71 = *(float **)(result + 24);
          v72 = FIELD_U32(result, 20);
          v73 = *(float **)(result + 32);
          v74 = &v71[v65];
          v75 = v71;
          v65 += 3;
          if ( v72 > v70 )
            v75 = v74 + 3;
          if ( v72 > v64 )
            v71 = v74;
          v76 = v75[1];
          v77 = v75[2];
          v33 = FIELD_U32(result, 28) > v67;
          v67 += 2;
          v78 = v71[1];
          v79 = v71[2];
          if ( v33 )
            v73 = (float *)((char *)v73 + v66 * 4);
          v66 += 6;
          *v73 = (float)(*v71 + *v75) * 0.5;
          v73[1] = (float)(v78 + v76) * 0.5;
          v73[2] = (float)(v79 + v77) * 0.5;
          v63 = FIELD_U32(result, 20);
          ++v64;
        }
        while ( (int)v70 < (int)(v63 - 1) );
      }
    }
  }
  else
  {
    v3 = FIELD_U32(result, 28);
    result += 28;
    if ( v2 >= v3 )
      v1 = (int *)result;
    v4 = *v1;
    if ( v4 >= 1 )
    {
      v5 = FIELD_U32(result, 4);
      result = *(_DWORD *)(result - 4) + 8;
      v6 = (_DWORD *)(v5 + 8);
      do
      {
        --v4;
        *(v6 - 2) = *(_DWORD *)(result - 8);
        *(v6 - 1) = *(_DWORD *)(result - 4);
        v7 = *(_DWORD *)result;
        result += 12;
        *v6 = v7;
        v6 += 3;
      }
      while ( v4 );
    }
  }
  return result;
}
