/* sub_6044E360
 * address: 0x6044E360   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044E360(float *a1)
{
  int i; // r5
  int result; // r0
  unsigned int v4; // s12
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s10
  float v9; // s8
  float v10; // s7
  float v11; // s9
  float v12; // s4
  float v13; // s0
  unsigned int v14; // s12
  float v15; // s8
  float v16; // s10
  float v17; // s10
  float v18; // s6
  float v19; // s1
  float v20; // s14
  float v21; // s20
  float v22; // s22
  float v23; // s8
  float v24; // s26
  float v25; // s13
  float v26; // s11
  float v27; // s12
  float v28; // s28
  float v29; // s5
  float v30; // s7
  float v31; // s2
  float v32; // s10
  float v33; // s3
  float v34; // s24
  float v35; // s0
  float v36; // s15
  float v37; // s14
  float v38; // s9
  float v39; // s4
  unsigned int v40; // r0
  float v41[10]; // [sp+8h] [bp-288h] BYREF
  float v42; // [sp+30h] [bp-260h]
  float v43; // [sp+34h] [bp-25Ch]
  float v44; // [sp+38h] [bp-258h]
  float v45; // [sp+3Ch] [bp-254h]
  float v46; // [sp+40h] [bp-250h]
  float v47; // [sp+44h] [bp-24Ch]
  float v48; // [sp+48h] [bp-248h]
  float v49; // [sp+4Ch] [bp-244h]
  float v50; // [sp+90h] [bp-200h]
  float v51; // [sp+94h] [bp-1FCh]
  float v52; // [sp+98h] [bp-1F8h]
  int v53; // [sp+A8h] [bp-1E8h]
  int v54; // [sp+ACh] [bp-1E4h]
  float v55; // [sp+B8h] [bp-1D8h]
  float v56; // [sp+BCh] [bp-1D4h]
  float v57; // [sp+C0h] [bp-1D0h]
  float v58; // [sp+C4h] [bp-1CCh]
  float v59; // [sp+C8h] [bp-1C8h]
  float v60; // [sp+CCh] [bp-1C4h]
  float v61; // [sp+D0h] [bp-1C0h]
  float v62; // [sp+D4h] [bp-1BCh]
  float v63; // [sp+118h] [bp-178h]
  float v64; // [sp+11Ch] [bp-174h]
  float v65; // [sp+120h] [bp-170h]
  int v66; // [sp+130h] [bp-160h]
  int v67; // [sp+134h] [bp-15Ch]
  float v68; // [sp+140h] [bp-150h]
  float v69; // [sp+144h] [bp-14Ch]
  float v70; // [sp+148h] [bp-148h]
  float v71; // [sp+14Ch] [bp-144h]
  float v72; // [sp+150h] [bp-140h]
  float v73; // [sp+154h] [bp-13Ch]
  float v74; // [sp+158h] [bp-138h]
  float v75; // [sp+15Ch] [bp-134h]
  float v76; // [sp+1A0h] [bp-F0h]
  float v77; // [sp+1A4h] [bp-ECh]
  float v78; // [sp+1A8h] [bp-E8h]
  int v79; // [sp+1B8h] [bp-D8h]
  int v80; // [sp+1BCh] [bp-D4h]
  float v81; // [sp+1C8h] [bp-C8h]
  float v82; // [sp+1CCh] [bp-C4h]
  float v83; // [sp+1D0h] [bp-C0h]
  float v84; // [sp+1D4h] [bp-BCh]
  float v85; // [sp+1D8h] [bp-B8h]
  float v86; // [sp+1DCh] [bp-B4h]
  float v87; // [sp+1E0h] [bp-B0h]
  float v88; // [sp+1E4h] [bp-ACh]

  for ( i = 0; i != 160; i += 8 )
  {
    result = (int)&a1[i];
    if ( LOBYTE(a1[i + 19]) )
    {
      v4 = FIELD_U8(result, 68);
      v5 = FIELD_F32(result, 52);
      v6 = FIELD_F32(result, 60);
      v7 = FIELD_F32(result, 48);
      v8 = (float)FIELD_U8(result, 70) / 255.0;
      v9 = (float)FIELD_U8(result, 69) / 255.0;
      v10 = v6 + v5;
      v11 = v7 - v6;
      v12 = v7 + v6;
      v13 = v5 - v6;
      v46 = (float)FIELD_U8(result, 71) / 255.0;
      v47 = v8;
      v48 = v9;
      v49 = (float)v4 / 255.0;
      v59 = v46;
      v60 = v8;
      v61 = v9;
      v62 = v49;
      v72 = v46;
      v73 = v8;
      v74 = v9;
      v75 = v49;
      v85 = v46;
      v86 = v8;
      v87 = v9;
      v88 = v49;
      v14 = FIELD_U8(result, 72);
      v15 = (float)FIELD_U8(result, 74) / 255.0;
      v16 = (float)FIELD_U8(result, 73) / 255.0;
      v42 = (float)FIELD_U8(result, 75) / 255.0;
      v43 = v15;
      v44 = v16;
      v45 = (float)v14 / 255.0;
      v55 = v42;
      v56 = v15;
      v57 = v16;
      v58 = v45;
      v68 = v42;
      v69 = v15;
      v70 = v16;
      v71 = v45;
      v81 = v42;
      v82 = v15;
      v83 = v16;
      v84 = v45;
      v41[6] = 0.0;
      v41[7] = 0.0;
      v53 = 1065353216;
      v54 = 0;
      v66 = 1065353216;
      v67 = 1065353216;
      v79 = 0;
      v80 = 1065353216;
      v17 = a1[1];
      v18 = a1[3];
      v19 = a1[5];
      v20 = a1[4];
      v21 = a1[8];
      v22 = a1[9];
      v23 = a1[7];
      v24 = a1[11];
      v25 = v11 * *a1;
      v26 = v10 * v17;
      v27 = a1[2] * 0.0;
      v28 = v10 * v19;
      v29 = v12 * *a1;
      v30 = v10 * v22;
      v31 = v13 * v17;
      v32 = v13 * v19;
      v33 = a1[6] * 0.0;
      v34 = a1[10] * 0.0;
      v35 = v13 * v22;
      v41[0] = v18 + (float)((float)(v25 + v26) + v27);
      v36 = v11 * v20;
      v37 = v12 * v20;
      v38 = v11 * v21;
      v39 = v12 * v21;
      v41[1] = v23 + (float)((float)(v36 + v28) + v33);
      v41[2] = v24 + (float)((float)(v38 + v30) + v34);
      v50 = v18 + (float)((float)(v29 + v26) + v27);
      v51 = v23 + (float)((float)(v37 + v28) + v33);
      v52 = v24 + (float)((float)(v39 + v30) + v34);
      v63 = v18 + (float)((float)(v29 + v31) + v27);
      v64 = v23 + (float)((float)(v37 + v32) + v33);
      v65 = v24 + (float)((float)(v39 + v35) + v34);
      v76 = v18 + (float)((float)(v25 + v31) + v27);
      v77 = v23 + (float)((float)(v36 + v32) + v33);
      v78 = v24 + (float)((float)(v38 + v35) + v34);
      v40 = FIELD_U8(result, 65);
      if ( v40 >= 0xB )
        v40 = 11;
      result = sub_60450A48(dword_60C9CEF0, v41, 4, LODWORD(a1[v40 + 172]), 6);
    }
  }
  return result;
}
