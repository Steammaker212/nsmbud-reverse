/* sub_604498E8
 * address: 0x604498E8   size: 1388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604498E8(int a1)
{
  int result; // r0
  unsigned int v3; // r10
  unsigned __int8 *v4; // r1
  unsigned __int8 *v5; // r2
  float *v6; // r6
  float *v7; // r5
  int v8; // r3
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // s6
  unsigned int v13; // s14
  float *v14; // r0
  float v15; // s10
  float v16; // s12
  unsigned int v17; // s14
  float v18; // s10
  float v19; // s12
  _DWORD *v20; // r1
  float v21; // s2
  float v22; // s4
  float v23; // s0
  float *v24; // r2
  float v25; // s8
  float v26; // s10
  float v27; // s8
  unsigned int v28; // r2
  float *v29; // r3
  float v30; // s14
  float v31; // s6
  float *v32; // r3
  float v33; // s14
  float v34; // s6
  unsigned int v35; // r1
  float *v36; // r2
  float v37; // s14
  float v38; // s4
  float *v39; // r1
  float v40; // s4
  float v41; // s6
  float v42; // s2
  float v43; // s0
  float v44; // s1
  float v45; // s5
  float v46; // s14
  float v47; // s10
  float v48; // s7
  float v49; // s12
  float v50; // s8
  float v51; // s3
  float v52; // s13
  float v53; // s11
  float v54; // s9
  float v55; // s13
  float v56; // s13
  float v57; // s11
  float v58; // s9
  float v59; // s13
  float v60; // s13
  float v61; // s24
  float v62; // s11
  float v63; // s5
  float v64; // s1
  float v65; // s6
  float v66; // s2
  int v67; // r0
  int v68; // r3
  float v69; // [sp+18h] [bp-270h] BYREF
  float v70; // [sp+1Ch] [bp-26Ch]
  float v71; // [sp+20h] [bp-268h]
  int v72; // [sp+30h] [bp-258h]
  int v73; // [sp+34h] [bp-254h]
  float v74; // [sp+A0h] [bp-1E8h]
  float v75; // [sp+A4h] [bp-1E4h]
  float v76; // [sp+A8h] [bp-1E0h]
  int v77; // [sp+B8h] [bp-1D0h]
  int v78; // [sp+BCh] [bp-1CCh]
  float v79; // [sp+128h] [bp-160h]
  float v80; // [sp+12Ch] [bp-15Ch]
  float v81; // [sp+130h] [bp-158h]
  int v82; // [sp+140h] [bp-148h]
  int v83; // [sp+144h] [bp-144h]
  float v84; // [sp+1B0h] [bp-D8h]
  float v85; // [sp+1B4h] [bp-D4h]
  float v86; // [sp+1B8h] [bp-D0h]
  int v87; // [sp+1C8h] [bp-C0h]
  int v88; // [sp+1CCh] [bp-BCh]

  result = FIELD_U32(a1, 52);
  if ( result >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(a1 + 144);
      if ( FIELD_U32(a1, 140) > v3 )
        v4 += 4 * v3;
      if ( !*v4 )
        goto LABEL_28;
      v5 = *(unsigned __int8 **)(a1 + 152);
      v6 = *(float **)(a1 + 80);
      v7 = *(float **)(a1 + 88);
      if ( FIELD_U32(a1, 148) > v3 )
        v5 += 4 * v3;
      v8 = 0;
      if ( FIELD_U32(a1, 76) > v3 )
        v6 += 3 * v3;
      if ( FIELD_U32(a1, 84) > v3 )
        v7 += 2 * v3;
      v9 = *v6;
      v10 = v6[1];
      v11 = *v7;
      v12 = v7[1];
      do
      {
        v13 = *v5;
        v14 = (float *)((char *)&v69 + v8);
        v8 += 136;
        v15 = (float)v5[2] / 255.0;
        v16 = (float)v5[1] / 255.0;
        v14[10] = (float)v5[3] / 255.0;
        v14[11] = v15;
        v14[12] = v16;
        v14[13] = (float)v13 / 255.0;
        v17 = *v4;
        v18 = (float)v4[2] / 255.0;
        v19 = (float)v4[1] / 255.0;
        v14[14] = (float)v4[3] / 255.0;
        v14[15] = v18;
        v14[16] = v19;
        v14[17] = (float)v17 / 255.0;
      }
      while ( v8 != 544 );
      v20 = *(_DWORD **)(a1 + 136);
      v21 = v9 + 0.0;
      v22 = v10 + 0.0;
      v23 = v11 + v12;
      if ( FIELD_U32(a1, 132) > v3 )
        v20 += v3;
      v24 = (float *)((char *)sinLutTable + ((*v20 >> 20) & 0xFF0));
      v25 = (float)(*v20 & 0xFFFFFF) * 0.000000059605;
      v26 = *v24 + (float)(v24[1] * v25);
      v27 = v22 + (float)(v23 * (float)(v24[2] + (float)(v25 * v24[3])));
      v69 = v21 + (float)(v23 * v26);
      v70 = v27;
      v71 = 0.0;
      v28 = *v20 + 0x40000000;
      v29 = (float *)((char *)sinLutTable + ((v28 >> 20) & 0xFF0));
      v30 = (float)(v28 & 0xFFFFFF) * 0.000000059605;
      v31 = v22 + (float)(v23 * (float)(v29[2] + (float)(v30 * v29[3])));
      v74 = v21 + (float)(v23 * (float)(*v29 + (float)(v29[1] * v30)));
      v75 = v31;
      v76 = 0.0;
      v32 = (float *)((char *)sinLutTable + ((*v20 >> 20) & 0xFF0 ^ 0x800));
      v33 = (float)(*v20 & 0xFFFFFF) * 0.000000059605;
      v34 = v22 + (float)(v23 * (float)(v32[2] + (float)(v33 * v32[3])));
      v79 = v21 + (float)(v23 * (float)(*v32 + (float)(v32[1] * v33)));
      v80 = v34;
      v81 = 0.0;
      v35 = *v20 - 0x40000000;
      v36 = (float *)((char *)sinLutTable + ((v35 >> 20) & 0xFF0));
      v37 = (float)(v35 & 0xFFFFFF) * 0.000000059605;
      v38 = v22 + (float)(v23 * (float)(v36[2] + (float)(v37 * v36[3])));
      v84 = v21 + (float)(v23 * (float)(*v36 + (float)(v36[1] * v37)));
      v85 = v38;
      v86 = 0.0;
      v72 = 1065353216;
      v73 = 1065353216;
      v77 = 0;
      v78 = 1065353216;
      v82 = 0;
      v83 = 0;
      v87 = 1065353216;
      v88 = 0;
      v39 = *(float **)(a1 + 72);
      v40 = FIELD_F32(a1, 36);
      v41 = FIELD_F32(a1, 40);
      v42 = FIELD_F32(a1, 44);
      v43 = FIELD_F32(a1, 48);
      v44 = FIELD_F32(a1, 4);
      v45 = FIELD_F32(a1, 8);
      v46 = FIELD_F32(a1, 12);
      v47 = FIELD_F32(a1, 16);
      v48 = FIELD_F32(a1, 24);
      v49 = FIELD_F32(a1, 28);
      v50 = FIELD_F32(a1, 32);
      v51 = FIELD_F32(a1, 20);
      if ( FIELD_U32(a1, 68) > v3 )
        v39 += 3 * v3;
      v69 = v69 + *v39;
      v70 = v70 + v39[1];
      v52 = v71 + v39[2];
      v53 = (float)((float)(v70 * v41) + (float)(v69 * v40)) + (float)(v52 * v42);
      v54 = v47 + (float)((float)((float)(v70 * v45) + (float)(v69 * v44)) + (float)(v52 * v46));
      v55 = v50 + (float)((float)((float)(v70 * v48) + (float)(v69 * v51)) + (float)(v52 * v49));
      v69 = v54;
      v70 = v55;
      v71 = v43 + v53;
      v74 = v74 + *v39;
      v75 = v75 + v39[1];
      v56 = v76 + v39[2];
      v57 = (float)((float)(v75 * v41) + (float)(v74 * v40)) + (float)(v56 * v42);
      v58 = v47 + (float)((float)((float)(v75 * v45) + (float)(v74 * v44)) + (float)(v56 * v46));
      v59 = v50 + (float)((float)((float)(v75 * v48) + (float)(v74 * v51)) + (float)(v56 * v49));
      v74 = v58;
      v75 = v59;
      v76 = v43 + v57;
      v79 = v79 + *v39;
      v80 = v80 + v39[1];
      v60 = v81 + v39[2];
      v61 = (float)((float)(v80 * v48) + (float)(v79 * v51)) + (float)(v60 * v49);
      v62 = (float)((float)(v80 * v41) + (float)(v79 * v40)) + (float)(v60 * v42);
      v79 = v47 + (float)((float)((float)(v80 * v45) + (float)(v79 * v44)) + (float)(v60 * v46));
      v80 = v50 + v61;
      v81 = v43 + v62;
      v84 = v84 + *v39;
      v85 = v85 + v39[1];
      v63 = (float)(v85 * v45) + (float)(v84 * v44);
      v64 = v86 + v39[2];
      v65 = (float)((float)(v85 * v41) + (float)(v84 * v40)) + (float)(v64 * v42);
      v66 = v50 + (float)((float)((float)(v85 * v48) + (float)(v84 * v51)) + (float)(v64 * v49));
      v84 = v47 + (float)(v63 + (float)(v64 * v46));
      v85 = v66;
      v86 = v43 + v65;
      v67 = (int)(3 * v3) / FIELD_U32(a1, 52);
      if ( v67 >= 2 )
        v67 = 2;
      if ( !v67 )
      {
        v68 = FIELD_U32(a1, 56);
        goto LABEL_26;
      }
      if ( v67 == 1 )
        break;
      if ( v67 == 2 )
      {
        v68 = FIELD_U32(a1, 64);
LABEL_26:
        sub_60450A48(dword_60C9CEF0, &v69, 4, v68, 3);
      }
      result = FIELD_U32(a1, 52);
LABEL_28:
      if ( (int)++v3 >= result )
        return result;
    }
    v68 = FIELD_U32(a1, 60);
    goto LABEL_26;
  }
  return result;
}
