/* sub_6044BECC
 * address: 0x6044BECC   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044BECC(int a1)
{
  int v2; // r6
  unsigned int v3; // s8
  unsigned int v4; // s10
  unsigned int v5; // s12
  unsigned int v6; // s14
  unsigned int v7; // s1
  float v8; // s2
  float v9; // s6
  int result; // r0
  int v11; // r5
  int i; // r7
  float *v13; // r1
  float v14; // s12
  float v15; // s14
  float v16; // s15
  float v17; // s20
  float v18; // s24
  float v19; // s26
  float v20; // s28
  float v21; // s13
  float v22; // s22
  float v23; // s8
  float v24; // s6
  float v25; // s0
  float v26; // s1
  float v27; // s10
  float v28; // s5
  float v29; // s3
  float v30; // s4
  float v31; // s6
  float v32; // s9
  float v33; // s7
  float v34; // s30
  float v35; // s12
  float v36; // s24
  float v37; // s5
  float v38; // s4
  float v39; // s10
  float v40; // s14
  float v41; // s6
  float v42; // s2
  float v43; // s11
  float v44; // s28
  float v45; // s3
  float v46; // s8
  float v47[10]; // [sp+8h] [bp-280h] BYREF
  float v48; // [sp+30h] [bp-258h]
  float v49; // [sp+34h] [bp-254h]
  float v50; // [sp+38h] [bp-250h]
  float v51; // [sp+3Ch] [bp-24Ch]
  float v52; // [sp+40h] [bp-248h]
  float v53; // [sp+44h] [bp-244h]
  float v54; // [sp+48h] [bp-240h]
  float v55; // [sp+4Ch] [bp-23Ch]
  float v56; // [sp+90h] [bp-1F8h]
  float v57; // [sp+94h] [bp-1F4h]
  float v58; // [sp+98h] [bp-1F0h]
  int v59; // [sp+A8h] [bp-1E0h]
  int v60; // [sp+ACh] [bp-1DCh]
  float v61; // [sp+B8h] [bp-1D0h]
  float v62; // [sp+BCh] [bp-1CCh]
  float v63; // [sp+C0h] [bp-1C8h]
  float v64; // [sp+C4h] [bp-1C4h]
  float v65; // [sp+C8h] [bp-1C0h]
  float v66; // [sp+CCh] [bp-1BCh]
  float v67; // [sp+D0h] [bp-1B8h]
  float v68; // [sp+D4h] [bp-1B4h]
  float v69; // [sp+118h] [bp-170h]
  float v70; // [sp+11Ch] [bp-16Ch]
  float v71; // [sp+120h] [bp-168h]
  int v72; // [sp+130h] [bp-158h]
  int v73; // [sp+134h] [bp-154h]
  float v74; // [sp+140h] [bp-148h]
  float v75; // [sp+144h] [bp-144h]
  float v76; // [sp+148h] [bp-140h]
  float v77; // [sp+14Ch] [bp-13Ch]
  float v78; // [sp+150h] [bp-138h]
  float v79; // [sp+154h] [bp-134h]
  float v80; // [sp+158h] [bp-130h]
  float v81; // [sp+15Ch] [bp-12Ch]
  float v82; // [sp+1A0h] [bp-E8h]
  float v83; // [sp+1A4h] [bp-E4h]
  float v84; // [sp+1A8h] [bp-E0h]
  int v85; // [sp+1B8h] [bp-D0h]
  int v86; // [sp+1BCh] [bp-CCh]
  float v87; // [sp+1C8h] [bp-C0h]
  float v88; // [sp+1CCh] [bp-BCh]
  float v89; // [sp+1D0h] [bp-B8h]
  float v90; // [sp+1D4h] [bp-B4h]
  float v91; // [sp+1D8h] [bp-B0h]
  float v92; // [sp+1DCh] [bp-ACh]
  float v93; // [sp+1E0h] [bp-A8h]
  float v94; // [sp+1E4h] [bp-A4h]

  v2 = 0;
  v47[6] = 0.0;
  v47[7] = 0.0;
  v59 = 1065353216;
  v60 = 0;
  v72 = 1065353216;
  v73 = 1065353216;
  v85 = 0;
  v86 = 1065353216;
  v3 = FIELD_U8(a1, 156);
  v4 = FIELD_U8(a1, 163);
  v5 = FIELD_U8(a1, 162);
  v6 = FIELD_U8(a1, 161);
  v7 = FIELD_U8(a1, 160);
  v8 = (float)FIELD_U8(a1, 158) / 255.0;
  v9 = (float)FIELD_U8(a1, 157) / 255.0;
  v52 = (float)FIELD_U8(a1, 159) / 255.0;
  v53 = v8;
  v54 = v9;
  v55 = (float)v3 / 255.0;
  v48 = (float)v4 / 255.0;
  v49 = (float)v5 / 255.0;
  v50 = (float)v6 / 255.0;
  v51 = (float)v7 / 255.0;
  v65 = v52;
  v66 = v8;
  v67 = v9;
  v68 = v55;
  v61 = v48;
  v62 = v49;
  v63 = v50;
  v64 = v51;
  v78 = v52;
  v79 = v8;
  v80 = v9;
  v81 = v55;
  v74 = v48;
  v75 = v49;
  v76 = v50;
  v77 = v51;
  v91 = v52;
  v92 = v8;
  v93 = v9;
  v94 = v55;
  v87 = v48;
  v88 = v49;
  v89 = v50;
  v90 = v51;
  result = FIELD_U32(a1, 52);
  if ( result >= 1 )
  {
    v11 = 0;
    for ( i = 0; i < result; ++i )
    {
      v13 = *(float **)(a1 + 72);
      v14 = FIELD_F32(a1, 4);
      v15 = FIELD_F32(a1, 8);
      v16 = FIELD_F32(a1, 40);
      v17 = FIELD_F32(a1, 36);
      v18 = FIELD_F32(a1, 20);
      v19 = FIELD_F32(a1, 24);
      v20 = FIELD_F32(a1, 28);
      v21 = FIELD_F32(a1, 44);
      v22 = FIELD_F32(a1, 32);
      if ( FIELD_U32(a1, 68) > (unsigned int)i )
        v13 = (float *)((char *)v13 + v2);
      v23 = v13[2];
      v24 = v13[1];
      v25 = FIELD_F32(a1, 16);
      v26 = v23 * FIELD_F32(a1, 12);
      v27 = (float)((float)((float)((float)(i & 7) * 0.1) + 1.0) * v23) * *(float *)(FIELD_U32(a1, 184) + v11);
      v28 = *v13 - v27;
      v29 = v24 + v27;
      v30 = *v13 + v27;
      v31 = v24 - v27;
      v32 = v28 * v14;
      v33 = v29 * v15;
      v34 = v28 * v18;
      v35 = v30 * v14;
      v36 = v30 * v18;
      v37 = v28 * v17;
      v38 = v30 * v17;
      v39 = v31 * v15;
      v40 = v31 * v19;
      v41 = v31 * v16;
      v42 = FIELD_F32(a1, 48);
      v47[0] = v25 + (float)((float)(v32 + v33) + v26);
      v43 = v23 * v20;
      v44 = v29 * v19;
      v45 = v29 * v16;
      v46 = v23 * v21;
      v47[1] = v22 + (float)((float)(v34 + v44) + v43);
      v47[2] = v42 + (float)((float)(v37 + v45) + v46);
      v56 = v25 + (float)((float)(v35 + v33) + v26);
      v57 = v22 + (float)((float)(v36 + v44) + v43);
      v58 = v42 + (float)((float)(v38 + v45) + v46);
      v69 = v25 + (float)((float)(v35 + v39) + v26);
      v70 = v22 + (float)((float)(v36 + v40) + v43);
      v71 = v42 + (float)((float)(v38 + v41) + v46);
      v82 = v25 + (float)((float)(v32 + v39) + v26);
      v83 = v22 + (float)((float)(v34 + v40) + v43);
      v84 = v42 + (float)((float)(v37 + v41) + v46);
      sub_60450A48(dword_60C9CEF0, v47, 4, FIELD_U32(a1, 56), 1);
      result = FIELD_U32(a1, 52);
      v2 += 12;
      v11 += 4;
    }
  }
  return result;
}
