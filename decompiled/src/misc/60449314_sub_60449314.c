/* sub_60449314
 * address: 0x60449314   size: 1256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60449314(int a1)
{
  int result; // r0
  unsigned int v3; // r8
  unsigned __int8 *v4; // r1
  unsigned __int8 v5; // r7
  unsigned __int8 *v6; // r2
  float *v7; // r6
  float *v8; // r0
  int v9; // r3
  float v10; // s2
  float v11; // s4
  float v12; // s0
  float *v13; // r0
  float v14; // s8
  float v15; // s10
  unsigned int v16; // s12
  float v17; // s8
  float v18; // s10
  _DWORD *v19; // r2
  float v20; // s2
  float v21; // s4
  float v22; // s15
  float v23; // s24
  float v24; // s26
  float *v25; // r0
  int v26; // r1
  float v27; // s6
  float v28; // s12
  unsigned int v29; // r0
  float *v30; // r3
  float v31; // s14
  float v32; // s6
  float *v33; // r3
  float v34; // s14
  float v35; // s6
  unsigned int v36; // r0
  float *v37; // r2
  float v38; // s10
  float v39; // s12
  float v40; // s14
  float *v41; // r2
  float v42; // s0
  float v43; // s2
  float v44; // s4
  float v45; // s6
  float v46; // s8
  float v47; // s10
  float v48; // s12
  float v49; // s14
  float v50; // s1
  float v51; // s3
  float v52; // s5
  float v53; // s7
  float v54; // s9
  float v55; // s11
  float v56; // s13
  float *v57; // r2
  float v58; // s28
  float v59; // s30
  float v60; // s17
  float v61; // s19
  float v62; // s21
  float v63; // s30
  float v64; // s28
  float v65; // s17
  int v66; // r0
  int v67; // r3
  float v68[162]; // [sp+18h] [bp-288h] BYREF

  result = FIELD_U32(a1, 52);
  if ( result >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(a1 + 144);
      if ( FIELD_U32(a1, 140) > v3 )
        v4 += 4 * v3;
      v5 = *v4;
      if ( !*v4 )
        goto LABEL_32;
      v6 = *(unsigned __int8 **)(a1 + 152);
      v7 = *(float **)(a1 + 80);
      v8 = *(float **)(a1 + 88);
      if ( FIELD_U32(a1, 148) > v3 )
        v6 += 4 * v3;
      v9 = 0;
      if ( FIELD_U32(a1, 76) > v3 )
        v7 += 3 * v3;
      if ( FIELD_U32(a1, 84) > v3 )
        v8 += 2 * v3;
      v10 = *v7;
      v11 = v7[1];
      v12 = *v8;
      while ( 1 )
      {
        v13 = &v68[v9];
        v14 = (float)v4[2] / 255.0;
        v15 = (float)v4[1] / 255.0;
        v13[14] = (float)v4[3] / 255.0;
        v13[15] = v14;
        v13[16] = v15;
        v13[17] = (float)v5 / 255.0;
        v16 = *v6;
        v17 = (float)v6[2] / 255.0;
        v18 = (float)v6[1] / 255.0;
        v13[10] = (float)v6[3] / 255.0;
        v13[11] = v17;
        v13[12] = v18;
        v13[13] = (float)v16 / 255.0;
        if ( v9 == 102 )
          break;
        v5 = *v4;
        v9 += 34;
      }
      v19 = *(_DWORD **)(a1 + 136);
      v20 = v10 + 0.0;
      v21 = v11 + 0.0;
      v22 = 0.0;
      v23 = 1.0;
      v24 = 0.0;
      if ( FIELD_U32(a1, 132) > v3 )
        v19 += v3;
      v25 = (float *)((char *)sinLutTable + ((*v19 >> 20) & 0xFF0));
      v26 = 0;
      v27 = (float)(*v19 & 0xFFFFFF) * 0.000000059605;
      v28 = v25[2] + (float)(v27 * v25[3]);
      v68[0] = v20 + (float)(v12 * (float)(*v25 + (float)(v25[1] * v27)));
      v68[1] = v21 + (float)(v12 * v28);
      v68[2] = 0.0;
      v29 = *v19 + 0x40000000;
      v30 = (float *)((char *)sinLutTable + ((v29 >> 20) & 0xFF0));
      v31 = (float)(v29 & 0xFFFFFF) * 0.000000059605;
      v32 = v21 + (float)(v12 * (float)(v30[2] + (float)(v31 * v30[3])));
      v68[34] = v20 + (float)(v12 * (float)(*v30 + (float)(v30[1] * v31)));
      v68[35] = v32;
      v68[36] = 0.0;
      v33 = (float *)((char *)sinLutTable + ((*v19 >> 20) & 0xFF0 ^ 0x800));
      v34 = (float)(*v19 & 0xFFFFFF) * 0.000000059605;
      v35 = v21 + (float)(v12 * (float)(v33[2] + (float)(v34 * v33[3])));
      v68[68] = v20 + (float)(v12 * (float)(*v33 + (float)(v33[1] * v34)));
      v68[69] = v35;
      v68[70] = 0.0;
      v36 = *v19 - 0x40000000;
      v37 = (float *)((char *)sinLutTable + ((v36 >> 20) & 0xFF0));
      v38 = v37[2];
      v39 = v37[3];
      v40 = (float)(v36 & 0xFFFFFF) * 0.000000059605;
      v68[102] = v20 + (float)(v12 * (float)(*v37 + (float)(v37[1] * v40)));
      v68[103] = v21 + (float)(v12 * (float)(v38 + (float)(v40 * v39)));
      v68[104] = 0.0;
      v68[3] = 0.0;
      v68[4] = 1.0;
      v68[5] = 0.0;
      v68[37] = 0.0;
      v68[38] = 1.0;
      v68[71] = -0.0;
      v68[72] = 1.0;
      v68[73] = -0.0;
      v68[105] = -0.0;
      v68[106] = 1.0;
      v68[107] = 0.0;
      v68[6] = 1.0;
      v68[7] = 1.0;
      v68[39] = -0.0;
      v68[40] = 0.0;
      v68[41] = 1.0;
      v68[74] = 0.0;
      v68[75] = 0.0;
      v68[108] = 1.0;
      v68[109] = 0.0;
      v41 = *(float **)(a1 + 72);
      v42 = FIELD_F32(a1, 36);
      v43 = FIELD_F32(a1, 40);
      v44 = FIELD_F32(a1, 44);
      v45 = FIELD_F32(a1, 48);
      v46 = FIELD_F32(a1, 4);
      v47 = FIELD_F32(a1, 8);
      v48 = FIELD_F32(a1, 12);
      v49 = FIELD_F32(a1, 16);
      v50 = FIELD_F32(a1, 20);
      v51 = FIELD_F32(a1, 28);
      v52 = FIELD_F32(a1, 32);
      v53 = FIELD_F32(a1, 24);
      if ( FIELD_U32(a1, 68) > v3 )
        v41 += 3 * v3;
      v54 = *v41;
      v55 = v41[1];
      v56 = v41[2];
      while ( 1 )
      {
        v57 = &v68[v26];
        v58 = v68[v26];
        v59 = v68[v26 + 1];
        v60 = v68[v26 + 2];
        v61 = v58 * 0.0;
        v62 = v59 * 0.0;
        v63 = v55 + (float)((float)((float)(v58 * 0.0) + v59) + (float)(v60 * 0.0));
        v64 = v54 + (float)((float)(v58 + v62) + (float)(v60 * 0.0));
        v65 = v56 + (float)(v60 + (float)(v62 - v61));
        *v57 = v49 + (float)((float)((float)(v47 * v63) + (float)(v46 * v64)) + (float)(v48 * v65));
        v57[1] = v52 + (float)((float)((float)(v53 * v63) + (float)(v50 * v64)) + (float)(v51 * v65));
        v57[2] = v45 + (float)((float)((float)(v43 * v63) + (float)(v42 * v64)) + (float)(v44 * v65));
        v57[3] = (float)(v24 + (float)(v23 * 0.0)) + (float)(v22 * 0.0);
        v57[4] = (float)((float)(v24 * 0.0) + v23) + (float)(v22 * 0.0);
        v57[5] = v22 + (float)((float)(v23 * 0.0) - (float)(v24 * 0.0));
        if ( v26 == 102 )
          break;
        v24 = v57[37];
        v23 = v57[38];
        v22 = v57[39];
        v26 += 34;
      }
      v66 = (int)(3 * v3) / FIELD_U32(a1, 52);
      if ( v66 >= 2 )
        v66 = 2;
      if ( !v66 )
      {
        v67 = FIELD_U32(a1, 56);
        goto LABEL_30;
      }
      if ( v66 == 1 )
        break;
      if ( v66 == 2 )
      {
        v67 = FIELD_U32(a1, 64);
LABEL_30:
        sub_60450A48(dword_60C9CEF0, v68, 4, v67, 2);
      }
      result = FIELD_U32(a1, 52);
LABEL_32:
      if ( (int)++v3 >= result )
        return result;
    }
    v67 = FIELD_U32(a1, 60);
    goto LABEL_30;
  }
  return result;
}
