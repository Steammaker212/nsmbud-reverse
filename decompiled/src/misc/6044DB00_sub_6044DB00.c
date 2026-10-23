/* sub_6044DB00
 * address: 0x6044DB00   size: 1912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044DB00(int a1, int a2, int a3)
{
  _DWORD *v6; // r9
  int v7; // r0
  int *v8; // r7
  int v9; // r0
  int v10; // r2
  int v11; // r1
  float v12; // s18
  unsigned int v13; // r2
  _DWORD *v14; // r10
  unsigned int v15; // r2
  _DWORD *v16; // r4
  int *v17; // r9
  int v18; // t1
  int v19; // r3
  float v20; // s22
  float v21; // s0
  unsigned int v22; // r2
  unsigned int v23; // r2
  float v24; // s3
  float v25; // s0
  float v26; // s7
  float v27; // s2
  float v28; // s4
  float v29; // s6
  float v30; // s8
  float v31; // s10
  float v32; // s12
  float v33; // s14
  float v34; // s1
  float v35; // s5
  float *v36; // r1
  float v37; // s11
  float v38; // s13
  float v39; // s15
  float v40; // s26
  float v41; // s11
  float v42; // s13
  float v43; // s11
  float v44; // s9
  float v45; // s13
  float v46; // s9
  float v47; // s11
  int v48; // r0
  float v49; // s6
  unsigned int v50; // s10
  float v51; // s2
  float v52; // s4
  unsigned int v53; // s3
  float v54; // s14
  float v55; // s1
  float v56; // s0
  float v57; // s2
  float v58; // s4
  float v59; // s6
  float v60; // s8
  float v61; // s10
  float v62; // s12
  float v63; // s14
  float v64; // s1
  float v65; // s3
  float v66; // s5
  float v67; // s7
  float *v68; // r1
  float v69; // s13
  float v70; // s11
  float v71; // s9
  float v72; // s13
  int v74; // [sp+10h] [bp+0h] BYREF
  int v75; // [sp+14h] [bp+4h]
  char v76; // [sp+39h] [bp+29h]
  char v77; // [sp+3Bh] [bp+2Bh]
  __int16 v78; // [sp+68h] [bp+58h]
  int v79; // [sp+78h] [bp+68h] BYREF
  int v80; // [sp+7Ch] [bp+6Ch]
  int v81; // [sp+80h] [bp+70h]
  _BYTE v82[12]; // [sp+84h] [bp+74h]
  float v83; // [sp+90h] [bp+80h]
  float v84; // [sp+94h] [bp+84h]
  float v85; // [sp+98h] [bp+88h]
  int v86; // [sp+9Ch] [bp+8Ch]
  float v87; // [sp+A0h] [bp+90h]
  float v88; // [sp+A4h] [bp+94h]
  float v89; // [sp+A8h] [bp+98h]
  float v90; // [sp+ACh] [bp+9Ch]
  float v91; // [sp+B0h] [bp+A0h]
  float v92; // [sp+B4h] [bp+A4h]
  float v93; // [sp+B8h] [bp+A8h]
  float v94; // [sp+BCh] [bp+ACh]
  int v95; // [sp+100h] [bp+F0h]
  int v96; // [sp+104h] [bp+F4h]
  int v97; // [sp+108h] [bp+F8h]
  float v98; // [sp+118h] [bp+108h]
  float v99; // [sp+11Ch] [bp+10Ch]
  float v100; // [sp+120h] [bp+110h]
  int v101; // [sp+124h] [bp+114h]
  float v102; // [sp+128h] [bp+118h]
  float v103; // [sp+12Ch] [bp+11Ch]
  float v104; // [sp+130h] [bp+120h]
  float v105; // [sp+134h] [bp+124h]
  float v106; // [sp+138h] [bp+128h]
  float v107; // [sp+13Ch] [bp+12Ch]
  float v108; // [sp+140h] [bp+130h]
  float v109; // [sp+144h] [bp+134h]
  int v110; // [sp+188h] [bp+178h]
  int v111; // [sp+18Ch] [bp+17Ch]
  int v112; // [sp+190h] [bp+180h]
  float v113; // [sp+1A0h] [bp+190h]
  float v114; // [sp+1A4h] [bp+194h]
  float v115; // [sp+1A8h] [bp+198h]
  int v116; // [sp+1ACh] [bp+19Ch]
  float v117; // [sp+1B0h] [bp+1A0h]
  float v118; // [sp+1B4h] [bp+1A4h]
  float v119; // [sp+1B8h] [bp+1A8h]
  float v120; // [sp+1BCh] [bp+1ACh]
  float v121; // [sp+1C0h] [bp+1B0h]
  float v122; // [sp+1C4h] [bp+1B4h]
  float v123; // [sp+1C8h] [bp+1B8h]
  float v124; // [sp+1CCh] [bp+1BCh]
  int v125; // [sp+210h] [bp+200h]
  int v126; // [sp+214h] [bp+204h]
  int v127; // [sp+218h] [bp+208h]
  float v128; // [sp+228h] [bp+218h]
  float v129; // [sp+22Ch] [bp+21Ch]
  float v130; // [sp+230h] [bp+220h]
  int v131; // [sp+234h] [bp+224h]
  float v132; // [sp+238h] [bp+228h]
  float v133; // [sp+23Ch] [bp+22Ch]
  float v134; // [sp+240h] [bp+230h]
  float v135; // [sp+244h] [bp+234h]
  float v136; // [sp+248h] [bp+238h]
  float v137; // [sp+24Ch] [bp+23Ch]
  float v138; // [sp+250h] [bp+240h]
  float v139; // [sp+254h] [bp+244h]

  *(_DWORD *)(FIELD_U32(dword_60C9CEF0, 52) + 28) = 2;
  sub_6090B350(&v74);
  v75 |= 1u;
  v76 = 5;
  v77 = 6;
  LOWORD(v74) = 1;
  v78 = 516;
  sub_60450C98(dword_60C9CEF0, &v74, 9);
  sub_6090B4B0(&v74, a2);
  v6 = (_DWORD *)(a1 + 8 * a3);
  v7 = v6[40];
  v8 = v6 + 39;
  v95 = v6[39];
  v96 = v7;
  v9 = 0;
  v97 = 0;
  v10 = FIELD_S16(a1, 115372);
  v11 = (a3 << 6) & 0x3C0;
  v12 = (float)(unsigned int)v11 / 1023.0;
  v98 = v12;
  v99 = (float)v10 / 1023.0;
  v100 = v12;
  v101 = 0;
  v14 = (_DWORD *)(a1 + 115356);
  v13 = FIELD_U32(a1, 115356);
  v102 = (float)HIBYTE(v13) / 255.0;
  v103 = (float)BYTE2(v13) / 255.0;
  v104 = (float)BYTE1(v13) / 255.0;
  v105 = (float)(unsigned __int8)v13 / 255.0;
  v16 = (_DWORD *)(a1 + 115360);
  v15 = FIELD_U32(a1, 115360);
  v106 = (float)HIBYTE(v15) / 255.0;
  v107 = (float)BYTE2(v15) / 255.0;
  v108 = (float)BYTE1(v15) / 255.0;
  v109 = (float)(unsigned __int8)v15 / 255.0;
  v18 = v6[14439];
  v17 = v6 + 14439;
  v19 = v17[1];
  v79 = v18;
  v80 = v19;
  v81 = 0;
  v20 = (float)(v11 | 0x3Fu) / 1023.0;
  v83 = v20;
  v84 = v99;
  v85 = v20;
  v86 = 0;
  v87 = v102;
  v88 = v103;
  v89 = v104;
  v90 = v105;
  v91 = v106;
  v92 = v107;
  v93 = v108;
  v94 = v109;
  v110 = *v8;
  v111 = -1056964608;
  v112 = 0;
  v21 = (float)FIELD_S16(a1, 115372);
  v113 = v12;
  v114 = (float)(v21 + 511.0) / 1023.0;
  v115 = v12;
  v116 = 1056948208;
  v22 = FIELD_U32(a1, 115356);
  v117 = (float)HIBYTE(v22) / 255.0;
  v118 = (float)BYTE2(v22) / 255.0;
  v119 = (float)BYTE1(v22) / 255.0;
  v120 = (float)(unsigned __int8)v22 / 255.0;
  v23 = FIELD_U32(a1, 115360);
  v121 = (float)HIBYTE(v23) / 255.0;
  v122 = (float)BYTE2(v23) / 255.0;
  v123 = (float)BYTE1(v23) / 255.0;
  v124 = (float)(unsigned __int8)v23 / 255.0;
  v125 = *v17;
  v126 = -1056964608;
  v127 = 0;
  v128 = v20;
  v129 = v114;
  v130 = v20;
  v131 = 1056948208;
  v132 = v117;
  v133 = v118;
  v134 = v119;
  v135 = v120;
  v136 = v121;
  v137 = v122;
  v138 = v123;
  v139 = v124;
  v24 = FIELD_F32(a1, 12);
  v25 = FIELD_F32(a1, 48);
  v26 = FIELD_F32(a1, 4);
  v27 = FIELD_F32(a1, 44);
  v28 = FIELD_F32(a1, 40);
  v29 = FIELD_F32(a1, 36);
  v30 = FIELD_F32(a1, 32);
  v31 = FIELD_F32(a1, 28);
  v32 = FIELD_F32(a1, 24);
  v33 = FIELD_F32(a1, 20);
  v34 = FIELD_F32(a1, 16);
  v35 = FIELD_F32(a1, 8);
  do
  {
    v36 = (float *)((char *)&v79 + v9);
    v9 += 136;
    v37 = v36[1];
    v38 = v36[2];
    v39 = (float)((float)(v37 * v35) + (float)(*v36 * v26)) + (float)(v38 * v24);
    v40 = v37 * v32;
    v41 = (float)((float)(v37 * v28) + (float)(*v36 * v29)) + (float)(v38 * v27);
    v42 = v30 + (float)((float)(v40 + (float)(*v36 * v33)) + (float)(v38 * v31));
    *v36 = v34 + v39;
    v36[1] = v42;
    v36[2] = v25 + v41;
    v43 = v36[4];
    v44 = v36[3];
    v45 = v36[5];
    v36[3] = (float)((float)(v43 * v35) + (float)(v44 * v26)) + (float)(v45 * v24);
    v36[4] = (float)((float)(v43 * v32) + (float)(v44 * v33)) + (float)(v45 * v31);
    v36[5] = (float)((float)(v43 * v28) + (float)(v44 * v29)) + (float)(v45 * v27);
  }
  while ( v9 != 544 );
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 9);
  sub_60450A48(dword_60C9CEF0, &v79, 4, FIELD_U32(a1, 60), 9);
  v46 = 0.0;
  v47 = -8.0;
  v48 = 0;
  v95 = *v8;
  v96 = -1056964608;
  v97 = 0;
  v49 = (float)FIELD_S16(a1, 115372);
  v98 = v12;
  v99 = (float)(v49 + 511.0) / 1023.0;
  v100 = v12;
  v101 = 1056948208;
  v50 = (unsigned __int8)*v14;
  v51 = (float)(unsigned __int8)BYTE2(*v14) / 255.0;
  v52 = (float)(unsigned __int8)BYTE1(*v14) / 255.0;
  v102 = (float)HIBYTE(*v14) / 255.0;
  v103 = v51;
  v104 = v52;
  v105 = (float)v50 / 255.0;
  v53 = (unsigned __int8)*v16;
  v54 = (float)(unsigned __int8)BYTE2(*v16) / 255.0;
  v55 = (float)(unsigned __int8)BYTE1(*v16) / 255.0;
  v106 = (float)HIBYTE(*v16) / 255.0;
  v107 = v54;
  v108 = v55;
  v109 = (float)v53 / 255.0;
  v79 = *v17;
  v80 = -1056964608;
  v81 = 0;
  v83 = v20;
  v84 = v99;
  v85 = v20;
  v86 = 1056948208;
  v87 = v102;
  v88 = v51;
  v89 = v52;
  v90 = v105;
  v91 = v106;
  v92 = v54;
  v93 = v55;
  v94 = v109;
  v110 = v95;
  v111 = -1048576000;
  v112 = 0;
  v113 = v12;
  v114 = (float)(v49 + 1023.0) / 1023.0;
  v115 = v12;
  v116 = 1065353216;
  v117 = v102;
  v118 = v51;
  v119 = v52;
  v120 = 0.0;
  v121 = v106;
  v122 = v54;
  v123 = v55;
  v124 = 0.0;
  v125 = v79;
  v126 = -1048576000;
  v127 = 0;
  v128 = v20;
  v129 = v114;
  v130 = v20;
  v131 = 1065353216;
  v132 = v102;
  v133 = v51;
  v134 = v52;
  v135 = 0.0;
  v136 = v106;
  v137 = v54;
  v138 = v55;
  v139 = 0.0;
  v56 = FIELD_F32(a1, 36);
  v57 = FIELD_F32(a1, 40);
  v58 = FIELD_F32(a1, 44);
  v59 = FIELD_F32(a1, 48);
  v60 = FIELD_F32(a1, 8);
  v61 = FIELD_F32(a1, 12);
  v62 = FIELD_F32(a1, 16);
  v63 = FIELD_F32(a1, 20);
  v64 = FIELD_F32(a1, 24);
  v65 = FIELD_F32(a1, 28);
  v66 = FIELD_F32(a1, 32);
  v67 = FIELD_F32(a1, 4);
  while ( 1 )
  {
    v68 = (float *)((char *)&v79 + v48);
    v69 = *(float *)((char *)&v79 + v48);
    *v68 = v62 + (float)((float)((float)(v47 * v60) + (float)(v69 * v67)) + (float)(v46 * v61));
    v68[1] = v66 + (float)((float)((float)(v47 * v64) + (float)(v69 * v63)) + (float)(v46 * v65));
    v68[2] = v59 + (float)((float)((float)(v47 * v57) + (float)(v69 * v56)) + (float)(v46 * v58));
    v70 = *(float *)&v82[v48 + 4];
    v71 = *(float *)&v82[v48];
    v72 = *(float *)&v82[v48 + 8];
    v68[3] = (float)((float)(v70 * v60) + (float)(v71 * v67)) + (float)(v72 * v61);
    v68[4] = (float)((float)(v70 * v64) + (float)(v71 * v63)) + (float)(v72 * v65);
    v68[5] = (float)((float)(v70 * v57) + (float)(v71 * v56)) + (float)(v72 * v58);
    if ( v48 == 408 )
      break;
    v47 = v68[35];
    v46 = v68[36];
    v48 += 136;
  }
  sub_60450CF0(dword_60C9CEF0, FIELD_U32(a1, 56), 9);
  return sub_60450A48(dword_60C9CEF0, &v79, 4, FIELD_U32(a1, 60), 9);
}
