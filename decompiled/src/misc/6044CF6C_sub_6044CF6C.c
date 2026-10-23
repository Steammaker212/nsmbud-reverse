/* sub_6044CF6C
 * address: 0x6044CF6C   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044CF6C(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r12
  int v6; // r2
  int v7; // r0
  int v8; // s0
  unsigned int v9; // t1
  unsigned int v10; // r2
  int v11; // r6
  float v12; // s8
  unsigned int v13; // r3
  unsigned int v14; // s4
  unsigned int v15; // s10
  unsigned int v16; // s3
  unsigned int v17; // s12
  unsigned int v18; // r3
  float v19; // s0
  float v20; // s10
  float v21; // s14
  float v22; // s1
  float v23; // s3
  float v24; // s5
  float v25; // s7
  float v26; // s2
  float v27; // s4
  float v28; // s6
  float v29; // s8
  float v30; // s12
  float *v31; // r2
  float v32; // s11
  float v33; // s13
  float v34; // s15
  float v35; // s16
  float v36; // s11
  float v37; // s13
  float v38; // s11
  float v39; // s9
  float v40; // s13
  _DWORD v42[6]; // [sp+8h] [bp-248h] BYREF
  float v43; // [sp+20h] [bp-230h]
  int v44; // [sp+24h] [bp-22Ch]
  float v45; // [sp+28h] [bp-228h]
  float v46; // [sp+2Ch] [bp-224h]
  float v47; // [sp+30h] [bp-220h]
  float v48; // [sp+34h] [bp-21Ch]
  float v49; // [sp+38h] [bp-218h]
  float v50; // [sp+3Ch] [bp-214h]
  float v51; // [sp+40h] [bp-210h]
  float v52; // [sp+44h] [bp-20Ch]
  float v53; // [sp+48h] [bp-208h]
  float v54; // [sp+4Ch] [bp-204h]
  int v55; // [sp+90h] [bp-1C0h]
  int v56; // [sp+94h] [bp-1BCh]
  int v57; // [sp+98h] [bp-1B8h]
  float v58; // [sp+A8h] [bp-1A8h]
  int v59; // [sp+ACh] [bp-1A4h]
  float v60; // [sp+B0h] [bp-1A0h]
  float v61; // [sp+B4h] [bp-19Ch]
  float v62; // [sp+B8h] [bp-198h]
  float v63; // [sp+BCh] [bp-194h]
  float v64; // [sp+C0h] [bp-190h]
  float v65; // [sp+C4h] [bp-18Ch]
  float v66; // [sp+C8h] [bp-188h]
  float v67; // [sp+CCh] [bp-184h]
  float v68; // [sp+D0h] [bp-180h]
  float v69; // [sp+D4h] [bp-17Ch]
  int v70; // [sp+118h] [bp-138h]
  int v71; // [sp+11Ch] [bp-134h]
  int v72; // [sp+120h] [bp-130h]
  float v73; // [sp+130h] [bp-120h]
  int v74; // [sp+134h] [bp-11Ch]
  float v75; // [sp+138h] [bp-118h]
  float v76; // [sp+13Ch] [bp-114h]
  float v77; // [sp+140h] [bp-110h]
  float v78; // [sp+144h] [bp-10Ch]
  float v79; // [sp+148h] [bp-108h]
  float v80; // [sp+14Ch] [bp-104h]
  float v81; // [sp+150h] [bp-100h]
  float v82; // [sp+154h] [bp-FCh]
  float v83; // [sp+158h] [bp-F8h]
  float v84; // [sp+15Ch] [bp-F4h]
  int v85; // [sp+1A0h] [bp-B0h]
  int v86; // [sp+1A4h] [bp-ACh]
  int v87; // [sp+1A8h] [bp-A8h]
  float v88; // [sp+1B8h] [bp-98h]
  int v89; // [sp+1BCh] [bp-94h]
  float v90; // [sp+1C0h] [bp-90h]
  float v91; // [sp+1C4h] [bp-8Ch]
  float v92; // [sp+1C8h] [bp-88h]
  float v93; // [sp+1CCh] [bp-84h]
  float v94; // [sp+1D0h] [bp-80h]
  float v95; // [sp+1D4h] [bp-7Ch]
  float v96; // [sp+1D8h] [bp-78h]
  float v97; // [sp+1DCh] [bp-74h]
  float v98; // [sp+1E0h] [bp-70h]
  float v99; // [sp+1E4h] [bp-6Ch]

  v3 = (_DWORD *)(a1 + 8 * a2);
  v4 = (16 * a2) & 0x3F0;
  v6 = v3[40];
  v55 = v3[39];
  v7 = 0;
  v56 = v6;
  v57 = 0;
  v58 = (float)(unsigned int)v4 / 1023.0;
  v59 = 0;
  v8 = FIELD_S16(a1, 115372);
  v60 = v58;
  v61 = (float)v8 / 1023.0;
  v9 = FIELD_U32(a1, 115356);
  v62 = (float)HIBYTE(v9) / 255.0;
  v63 = (float)BYTE2(v9) / 255.0;
  v64 = (float)BYTE1(v9) / 255.0;
  v65 = (float)(unsigned __int8)v9 / 255.0;
  v10 = FIELD_U32(a1, 115360);
  v66 = (float)HIBYTE(v10) / 255.0;
  v67 = (float)BYTE2(v10) / 255.0;
  v68 = (float)BYTE1(v10) / 255.0;
  v69 = (float)(unsigned __int8)v10 / 255.0;
  v11 = v3[14440];
  v42[0] = v3[14439];
  v42[1] = v11;
  v42[2] = 0;
  v43 = (float)(v4 | 0xFu) / 1023.0;
  v44 = 0;
  v45 = v43;
  v46 = v61;
  v47 = v62;
  v48 = v63;
  v49 = v64;
  v50 = v65;
  v51 = v66;
  v52 = v67;
  v53 = v68;
  v54 = v69;
  v70 = v3[39];
  v71 = -1038090240;
  v72 = 0;
  v73 = v58;
  v74 = 1065353216;
  v12 = (float)FIELD_S16(a1, 115372);
  v75 = v58;
  v76 = (float)(v12 + 1023.0) / 1023.0;
  v13 = FIELD_U32(a1, 115356);
  v14 = HIBYTE(v13);
  v15 = BYTE2(v13);
  v16 = (unsigned __int8)v13;
  v17 = BYTE1(v13);
  v77 = (float)HIBYTE(v13) / 255.0;
  v78 = (float)BYTE2(v13) / 255.0;
  v79 = (float)BYTE1(v13) / 255.0;
  v80 = (float)(unsigned __int8)v13 / 255.0;
  v18 = FIELD_U32(a1, 115360);
  v81 = (float)HIBYTE(v18) / 255.0;
  v82 = (float)BYTE2(v18) / 255.0;
  v83 = (float)BYTE1(v18) / 255.0;
  v84 = (float)(unsigned __int8)v18 / 255.0;
  v85 = v3[14439];
  v86 = -1038090240;
  v87 = 0;
  v88 = v43;
  v89 = 1065353216;
  v90 = v43;
  v91 = v76;
  v92 = (float)v14 / 255.0;
  v93 = (float)v15 / 255.0;
  v94 = (float)v17 / 255.0;
  v95 = (float)v16 / 255.0;
  v96 = (float)HIBYTE(v18) / 255.0;
  v97 = (float)BYTE2(v18) / 255.0;
  v98 = (float)BYTE1(v18) / 255.0;
  v99 = (float)(unsigned __int8)v18 / 255.0;
  v19 = FIELD_F32(a1, 48);
  v20 = FIELD_F32(a1, 28);
  v21 = FIELD_F32(a1, 20);
  v22 = FIELD_F32(a1, 16);
  v23 = FIELD_F32(a1, 12);
  v24 = FIELD_F32(a1, 8);
  v25 = FIELD_F32(a1, 4);
  v26 = FIELD_F32(a1, 44);
  v27 = FIELD_F32(a1, 40);
  v28 = FIELD_F32(a1, 36);
  v29 = FIELD_F32(a1, 32);
  v30 = FIELD_F32(a1, 24);
  do
  {
    v31 = (float *)&v42[v7];
    v7 += 34;
    v32 = v31[1];
    v33 = v31[2];
    v34 = (float)((float)(v32 * v24) + (float)(*v31 * v25)) + (float)(v33 * v23);
    v35 = v32 * v30;
    v36 = (float)((float)(v32 * v27) + (float)(*v31 * v28)) + (float)(v33 * v26);
    v37 = v29 + (float)((float)(v35 + (float)(*v31 * v21)) + (float)(v33 * v20));
    *v31 = v22 + v34;
    v31[1] = v37;
    v31[2] = v19 + v36;
    v38 = v31[4];
    v39 = v31[3];
    v40 = v31[5];
    v31[3] = (float)((float)(v38 * v24) + (float)(v39 * v25)) + (float)(v40 * v23);
    v31[4] = (float)((float)(v38 * v30) + (float)(v39 * v21)) + (float)(v40 * v20);
    v31[5] = (float)((float)(v38 * v27) + (float)(v39 * v28)) + (float)(v40 * v26);
  }
  while ( v7 != 136 );
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 8);
  return sub_60450A48(dword_60C9CEF0, v42, 4, FIELD_U32(a1, 60), 8);
}
