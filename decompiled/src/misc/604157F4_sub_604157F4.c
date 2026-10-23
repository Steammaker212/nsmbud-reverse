/* sub_604157F4
 * address: 0x604157F4   size: 4104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604157F4(_DWORD *a1, int a2, int a3, float *a4, int a5)
{
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  float v11; // s0
  int v12; // r8
  int v13; // r11
  int v14; // r5
  float v15; // s6
  float v16; // s2
  unsigned int v17; // r0
  float *v18; // r1
  float v19; // s0
  float v20; // s5
  float v21; // s3
  float v22; // r0
  float v23; // s0
  float v24; // s14
  float v25; // s10
  float v26; // s0
  unsigned int v27; // r2
  _DWORD *v28; // r0
  _DWORD *v29; // r1
  _DWORD *v30; // r1
  _DWORD *v31; // r1
  int v32; // r9
  int v33; // r10
  __int64 v34; // r0
  _DWORD *v35; // r7
  int v36; // r3
  _DWORD *v37; // r0
  float v38; // s0
  int v39; // r8
  int v40; // r6
  int v41; // r5
  float v42; // s6
  float v43; // s2
  unsigned int v44; // r0
  float *v45; // r1
  float v46; // s0
  float v47; // s5
  float v48; // s3
  float v49; // r0
  float v50; // s0
  float v51; // s14
  float v52; // s10
  float v53; // s0
  unsigned int v54; // r2
  _DWORD *v55; // r0
  _DWORD *v56; // r1
  _DWORD *v57; // r1
  _DWORD *v58; // r1
  int v59; // r9
  int v60; // r10
  __int64 v61; // r0
  _DWORD *v62; // r7
  int v63; // r3
  _DWORD *v64; // r0
  float v65; // s0
  int v66; // r8
  int v67; // r11
  int v68; // r6
  unsigned int v69; // r0
  float *v70; // r1
  float v71; // s8
  float v72; // s2
  float v73; // s0
  bool v74; // fzf
  bool v75; // fnf
  int v76; // r4
  float v77; // s0
  float v78; // s2
  unsigned int v79; // r0
  float v80; // s6
  float v81; // s2
  float *v82; // r1
  float v83; // s10
  float v84; // s8
  float v85; // r0
  float v86; // s10
  float v87; // s1
  float v88; // s12
  float v89; // s3
  float v90; // s0
  unsigned int v91; // r2
  _DWORD *v92; // r0
  _DWORD *v93; // r1
  _DWORD *v94; // r1
  _DWORD *v95; // r1
  _DWORD *v96; // r1
  int v97; // r9
  int v98; // r10
  __int64 v99; // r0
  int v100; // r4
  _DWORD *v101; // r7
  int v102; // r3
  _DWORD *v103; // r0
  float v104; // s0
  int v105; // r8
  int v106; // r6
  int result; // r0
  int v108; // r5
  float v109; // s0
  float v110; // r1
  float v111; // r0
  unsigned int v112; // r2
  _DWORD *v113; // r0
  _DWORD *v114; // r1
  _DWORD *v115; // r1
  _DWORD *v116; // r1
  int v117; // r9
  int v118; // r10
  __int64 v119; // r0
  _DWORD *v120; // [sp+10h] [bp-158h]
  int v121; // [sp+14h] [bp-154h]
  _DWORD *v122; // [sp+1Ch] [bp-14Ch]
  _DWORD *v123; // [sp+24h] [bp-144h]
  float *v124; // [sp+2Ch] [bp-13Ch]
  _DWORD *v125; // [sp+30h] [bp-138h]
  int v126; // [sp+34h] [bp-134h]
  float v127[4]; // [sp+38h] [bp-130h] BYREF
  float v128; // [sp+48h] [bp-120h] BYREF
  int v129; // [sp+4Ch] [bp-11Ch]
  int v130; // [sp+50h] [bp-118h]
  int v131; // [sp+54h] [bp-114h]
  float v132; // [sp+58h] [bp-110h] BYREF
  float v133; // [sp+5Ch] [bp-10Ch]
  float v134; // [sp+60h] [bp-108h]
  float v135; // [sp+64h] [bp-104h]
  float v136; // [sp+68h] [bp-100h]
  float v137; // [sp+6Ch] [bp-FCh]
  float v138; // [sp+70h] [bp-F8h]
  float v139; // [sp+74h] [bp-F4h]
  float v140; // [sp+78h] [bp-F0h]
  float v141; // [sp+7Ch] [bp-ECh]
  float v142; // [sp+80h] [bp-E8h]
  int v143; // [sp+84h] [bp-E4h]
  float v144; // [sp+88h] [bp-E0h] BYREF
  float v145; // [sp+8Ch] [bp-DCh]
  int v146; // [sp+90h] [bp-D8h]
  __int16 v147; // [sp+98h] [bp-D0h] BYREF
  char v148; // [sp+9Ah] [bp-CEh]
  int v149; // [sp+9Ch] [bp-CCh]
  int v150; // [sp+B4h] [bp-B4h]
  char v151; // [sp+C0h] [bp-A8h]
  char v152; // [sp+C1h] [bp-A7h]
  char v153; // [sp+C2h] [bp-A6h]
  char v154; // [sp+C3h] [bp-A5h]
  char v155; // [sp+C4h] [bp-A4h]
  char v156; // [sp+C5h] [bp-A3h]
  char v157; // [sp+F0h] [bp-78h]
  char v158; // [sp+F1h] [bp-77h]

  sub_6090B350(&v147);
  v121 = a3;
  if ( !a3 )
    v150 = 7;
  v149 |= 1u;
  v155 = 1;
  v156 = 1;
  v151 = 5;
  v152 = 5;
  v153 = 2;
  v154 = 2;
  v158 = 0;
  v147 = 1;
  v157 = 5;
  v148 = 0;
  sub_6090B4B0(&v147, a2);
  v9 = (_DWORD *)a1[88];
  sub_6091DD8C(v9, a2, 1);
  sub_60920EC8(a1 + 2, a5);
  sub_6091D95C(v9);
  v120 = a1 + 2;
  sub_60920FDC(a1 + 2, a2, v9[159], -1, 0);
  sub_6090BE54(a4);
  v10 = (_DWORD *)v9[153];
  if ( *v10 != -1 )
  {
    ((void (*)(void))sub_6091B890)();
    v10 = (_DWORD *)v9[153];
  }
  v124 = a4;
  v11 = a4[40] - a4[39];
  v132 = a4[42] - a4[41];
  v133 = v11;
  if ( v9[152] > 2u )
    v10 += 6;
  if ( *v10 != -1 )
    ((void (*)(void))sub_6091B890)();
  v12 = sub_60414320(dword_60C9A698, 0, a3);
  v13 = FIELD_U32(v12, 4);
  v125 = a1;
  v122 = a1 + 174;
  sub_60922278(a1 + 174, a2);
  v126 = a2;
  if ( v13 != v12 )
  {
    v14 = v13 - 76;
    v123 = a1 + 266;
    do
    {
      v15 = (float)(-0.00030118 * 0.0) + 1.0;
      v144 = (float)(*(float *)v14 - v124[41]) - (float)((float)(v124[42] - v124[41]) * 0.5);
      v145 = (float)(FIELD_F32(v14, 4) + v124[39]) + (float)((float)(v124[40] - v124[39]) * 0.5);
      v146 = FIELD_U32(v14, 8);
      v16 = (float)(0.024541 * 0.0) + 0.0;
      v17 = -FIELD_U32(v14, 48);
      v18 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
      v19 = (float)(v17 & 0xFFFFFF);
      v20 = FIELD_F32(v14, 32);
      v21 = FIELD_F32(v14, 4);
      v22 = *(float *)v14;
      v23 = v19 * 0.000000059605;
      v24 = v18[2] + (float)(v23 * v18[3]);
      v25 = *v18 + (float)(v23 * v18[1]);
      v26 = v20 * FIELD_F32(v14, 68);
      v132 = v26 * (float)(v15 * v24);
      v136 = v26 * (float)(v15 * v25);
      v140 = -(float)(v26 * v16);
      v133 = v20 * (float)((float)((float)(v16 * v16) * v24) - (float)(v15 * v25));
      v137 = v20 * (float)((float)(v15 * v24) + (float)((float)(v16 * v16) * v25));
      v141 = v20 * (float)(v16 * v15);
      v134 = (float)(v16 * (float)(v15 * v24)) + (float)(v16 * v25);
      v138 = (float)(v16 * (float)(v15 * v25)) - (float)(v16 * v24);
      v142 = v15 * v15;
      v135 = v22;
      v139 = -v21;
      v143 = -963350528;
      v27 = v9[152];
      v28 = (_DWORD *)v9[153];
      v29 = v28;
      if ( v27 > 1 )
        v29 = v28 + 3;
      if ( *v29 != -1 )
      {
        sub_6091B890(v29, a2, 12, &v132);
        v27 = v9[152];
        v28 = (_DWORD *)v9[153];
      }
      v30 = v28;
      if ( v27 > 4 )
        v30 = v28 + 12;
      if ( *v30 != -1 )
      {
        sub_6091B890(v30, a2, 4, &v144);
        v27 = v9[152];
        v28 = (_DWORD *)v9[153];
      }
      v31 = v28;
      if ( v27 > 3 )
        v31 = v28 + 9;
      if ( *v31 != -1 )
      {
        sub_6091B890(v31, a2, 4, v14 + 12);
        v27 = v9[152];
        v28 = (_DWORD *)v9[153];
      }
      if ( v27 > 5 )
        v28 += 15;
      v128 = 1.0 / FIELD_F32(v14, 32);
      v129 = FIELD_U32(v14, 36);
      v130 = FIELD_U32(v14, 28);
      v131 = 0;
      if ( *v28 != -1 )
        sub_6091B890(v28, a2, 4, &v128);
      v32 = FIELD_U32(v126, 192);
      v33 = v125[260];
      v34 = ((__int64 (__fastcall *)(_DWORD *))dword_60CC746C)(v123);
      a2 = v126;
      dword_60CC7874(v32, v33, v125[259], 18, v34, HIDWORD(v34));
      v13 = FIELD_U32(v13, 4);
      v14 = v13 - 76;
    }
    while ( v13 - 76 != v12 - 76 );
  }
  v35 = (_DWORD *)v125[89];
  sub_6091DD8C(v35, a2, 1);
  sub_60920EC8(v120, a5);
  sub_6091D95C(v35);
  sub_60920FDC(v120, a2, v35[159], -1, 0);
  v36 = sub_6090BE54(v124);
  v37 = (_DWORD *)v35[153];
  if ( *v37 != -1 )
  {
    sub_6091B890(v37, a2, 16, v36);
    v37 = (_DWORD *)v35[153];
  }
  v38 = v124[40] - v124[39];
  v132 = v124[42] - v124[41];
  v133 = v38;
  if ( v35[152] > 2u )
    v37 += 6;
  if ( *v37 != -1 )
    sub_6091B890(v37, a2, 2, &v132);
  v39 = sub_60414320(dword_60C9A698, 1u, v121);
  v40 = FIELD_U32(v39, 4);
  sub_60922278(v122, a2);
  if ( v40 != v39 )
  {
    v41 = v40 - 76;
    do
    {
      v42 = (float)(-0.00030118 * 0.0) + 1.0;
      v144 = (float)(*(float *)v41 - v124[41]) - (float)((float)(v124[42] - v124[41]) * 0.5);
      v145 = (float)(FIELD_F32(v41, 4) + v124[39]) + (float)((float)(v124[40] - v124[39]) * 0.5);
      v146 = FIELD_U32(v41, 8);
      v43 = (float)(0.024541 * 0.0) + 0.0;
      v44 = -FIELD_U32(v41, 48);
      v45 = (float *)((char *)sinLutTable + ((v44 >> 20) & 0xFF0));
      v46 = (float)(v44 & 0xFFFFFF);
      v47 = FIELD_F32(v41, 32);
      v48 = FIELD_F32(v41, 4);
      v49 = *(float *)v41;
      v50 = v46 * 0.000000059605;
      v51 = v45[2] + (float)(v50 * v45[3]);
      v52 = *v45 + (float)(v50 * v45[1]);
      v53 = v47 * FIELD_F32(v41, 68);
      v132 = v53 * (float)(v42 * v51);
      v136 = v53 * (float)(v42 * v52);
      v140 = -(float)(v53 * v43);
      v133 = v47 * (float)((float)((float)(v43 * v43) * v51) - (float)(v42 * v52));
      v137 = v47 * (float)((float)(v42 * v51) + (float)((float)(v43 * v43) * v52));
      v141 = v47 * (float)(v43 * v42);
      v134 = (float)(v43 * (float)(v42 * v51)) + (float)(v43 * v52);
      v138 = (float)(v43 * (float)(v42 * v52)) - (float)(v43 * v51);
      v142 = v42 * v42;
      v135 = v49;
      v139 = -v48;
      v143 = -963350528;
      v54 = v35[152];
      v55 = (_DWORD *)v35[153];
      v56 = v55;
      if ( v54 > 1 )
        v56 = v55 + 3;
      if ( *v56 != -1 )
      {
        sub_6091B890(v56, a2, 12, &v132);
        v54 = v35[152];
        v55 = (_DWORD *)v35[153];
      }
      v57 = v55;
      if ( v54 > 4 )
        v57 = v55 + 12;
      if ( *v57 != -1 )
      {
        sub_6091B890(v57, a2, 4, &v144);
        v54 = v35[152];
        v55 = (_DWORD *)v35[153];
      }
      v58 = v55;
      if ( v54 > 3 )
        v58 = v55 + 9;
      if ( *v58 != -1 )
      {
        sub_6091B890(v58, a2, 4, v41 + 12);
        v54 = v35[152];
        v55 = (_DWORD *)v35[153];
      }
      if ( v54 > 5 )
        v55 += 15;
      v128 = 1.0 / FIELD_F32(v41, 32);
      v129 = FIELD_U32(v41, 36);
      v130 = FIELD_U32(v41, 28);
      v131 = FIELD_U32(v41, 52);
      if ( *v55 != -1 )
        sub_6091B890(v55, a2, 4, &v128);
      v59 = FIELD_U32(v126, 192);
      v60 = v125[260];
      v61 = ((__int64 (__fastcall *)(_DWORD *))dword_60CC746C)(v125 + 266);
      a2 = v126;
      dword_60CC7874(v59, v60, v125[259], 18, v61, HIDWORD(v61));
      v40 = FIELD_U32(v40, 4);
      v41 = v40 - 76;
    }
    while ( v40 - 76 != v39 - 76 );
  }
  v62 = (_DWORD *)v125[90];
  sub_6091DD8C(v62, a2, 1);
  sub_60920EC8(v120, a5);
  sub_6091D95C(v62);
  sub_60920FDC(v120, a2, v62[159], -1, 0);
  v63 = sub_6090BE54(v124);
  v64 = (_DWORD *)v62[153];
  if ( *v64 != -1 )
  {
    sub_6091B890(v64, a2, 16, v63);
    v64 = (_DWORD *)v62[153];
  }
  v65 = v124[40] - v124[39];
  v132 = v124[42] - v124[41];
  v133 = v65;
  if ( v62[152] > 2u )
    v64 += 6;
  if ( *v64 != -1 )
    sub_6091B890(v64, a2, 2, &v132);
  v66 = sub_60414320(dword_60C9A698, 2u, v121);
  v67 = FIELD_U32(v66, 4);
  sub_60922278(v125 + 360, a2);
  if ( v67 != v66 )
  {
    v68 = v67 - 76;
    do
    {
      v144 = (float)(*(float *)v68 - v124[41]) - (float)((float)(v124[42] - v124[41]) * 0.5);
      v145 = (float)(FIELD_F32(v68, 4) + v124[39]) + (float)((float)(v124[40] - v124[39]) * 0.5);
      v146 = FIELD_U32(v68, 8);
      v69 = (int)(float)((float)FIELD_S32(v68, 44) * 0.5);
      v70 = (float *)((char *)sinLutTable + ((v69 >> 20) & 0xFF0));
      v71 = (float)(v69 & 0xFFFFFF) * 0.000000059605;
      v72 = v70[2] + (float)(v70[3] * v71);
      v73 = *v70 + (float)(v70[1] * v71);
      if ( v72 > 0.00000011921 || v72 < -0.00000011921 )
      {
        v78 = v73 / v72;
        v76 = v126;
        v77 = 0.0;
        if ( v78 >= 0.0 )
        {
          v77 = v78;
          if ( v78 > 10000.0 )
            v77 = 10000.0;
        }
      }
      else
      {
        v74 = v73 == 0.0;
        v75 = v73 < 0.0;
        v76 = v126;
        v77 = 0.0;
        if ( !v75 && !v74 )
          v77 = 10000.0;
      }
      v79 = -FIELD_U32(v68, 48);
      v80 = (float)(-0.00030118 * 0.0) + 1.0;
      v81 = (float)(0.024541 * 0.0) + 0.0;
      v82 = (float *)((char *)sinLutTable + ((v79 >> 20) & 0xFF0));
      v83 = (float)(v79 & 0xFFFFFF);
      v84 = FIELD_F32(v68, 4);
      v85 = *(float *)v68;
      v86 = v83 * 0.000000059605;
      v87 = v82[2] + (float)(v86 * v82[3]);
      v88 = *v82 + (float)(v86 * v82[1]);
      v89 = FIELD_F32(v68, 32);
      v90 = v77 * v89;
      v132 = v89 * (float)(v80 * v87);
      v136 = v89 * (float)(v80 * v88);
      v140 = -(float)(v89 * v81);
      v133 = v90 * (float)((float)((float)(v81 * v81) * v87) - (float)(v80 * v88));
      v137 = v90 * (float)((float)(v80 * v87) + (float)((float)(v81 * v81) * v88));
      v141 = v90 * (float)(v81 * v80);
      v134 = (float)(v81 * (float)(v80 * v87)) + (float)(v81 * v88);
      v138 = (float)(v81 * (float)(v80 * v88)) - (float)(v81 * v87);
      v142 = v80 * v80;
      v135 = v85;
      v139 = -v84;
      v143 = -963350528;
      v91 = v62[152];
      v92 = (_DWORD *)v62[153];
      v93 = v92;
      if ( v91 > 1 )
        v93 = v92 + 3;
      if ( *v93 != -1 )
      {
        sub_6091B890(v93, v76, 12, &v132);
        v91 = v62[152];
        v92 = (_DWORD *)v62[153];
      }
      v94 = v92;
      if ( v91 > 4 )
        v94 = v92 + 12;
      if ( *v94 != -1 )
      {
        sub_6091B890(v94, v76, 4, &v144);
        v91 = v62[152];
        v92 = (_DWORD *)v62[153];
      }
      v95 = v92;
      if ( v91 > 3 )
        v95 = v92 + 9;
      if ( *v95 != -1 )
      {
        sub_6091B890(v95, v76, 4, v68 + 12);
        v91 = v62[152];
        v92 = (_DWORD *)v62[153];
      }
      v128 = 1.0 / FIELD_F32(v68, 32);
      v129 = FIELD_U32(v68, 36);
      v130 = FIELD_U32(v68, 28);
      v131 = FIELD_U32(v68, 52);
      v96 = v92;
      if ( v91 > 5 )
        v96 = v92 + 15;
      if ( *v96 != -1 )
      {
        sub_6091B890(v96, v76, 4, &v128);
        v91 = v62[152];
        v92 = (_DWORD *)v62[153];
      }
      if ( v91 > 6 )
        v92 += 18;
      v127[0] = (float)((float)FIELD_S32(v68, 48) * 3.1416) / 2147500000.0;
      v127[1] = (float)((float)((float)FIELD_S32(v68, 44) * 3.1416) / 2147500000.0) * 0.5;
      if ( *v92 != -1 )
        sub_6091B890(v92, v76, 4, v127);
      v97 = FIELD_U32(v76, 192);
      v98 = v125[446];
      v99 = ((__int64 (__fastcall *)(_DWORD *))dword_60CC746C)(v125 + 452);
      dword_60CC7874(v97, v98, v125[445], 3, v99, HIDWORD(v99));
      v67 = FIELD_U32(v67, 4);
      v68 = v67 - 76;
    }
    while ( v67 - 76 != v66 - 76 );
  }
  v100 = v126;
  v101 = (_DWORD *)v125[91];
  sub_6091DD8C(v101, v126, 1);
  sub_60920EC8(v120, a5);
  sub_6091D95C(v101);
  sub_60920FDC(v120, v126, v101[159], -1, 0);
  v102 = sub_6090BE54(v124);
  v103 = (_DWORD *)v101[153];
  if ( *v103 != -1 )
  {
    sub_6091B890(v103, v126, 16, v102);
    v103 = (_DWORD *)v101[153];
  }
  v104 = v124[40] - v124[39];
  v132 = v124[42] - v124[41];
  v133 = v104;
  if ( v101[152] > 2u )
    v103 += 6;
  if ( *v103 != -1 )
    sub_6091B890(v103, v126, 2, &v132);
  v105 = sub_60414320(dword_60C9A698, 3u, v121);
  v106 = FIELD_U32(v105, 4);
  result = sub_60922278(v125 + 546, v126);
  if ( v106 != v105 )
  {
    v108 = v106 - 76;
    do
    {
      v144 = (float)(*(float *)v108 - v124[41]) - (float)((float)(v124[42] - v124[41]) * 0.5);
      v145 = (float)(FIELD_F32(v108, 4) + v124[39]) + (float)((float)(v124[40] - v124[39]) * 0.5);
      v146 = FIELD_U32(v108, 8);
      v109 = FIELD_F32(v108, 4);
      v110 = FIELD_F32(v108, 32);
      v111 = *(float *)v108;
      v132 = FIELD_F32(v108, 64);
      v136 = 0.0;
      v140 = 0.0;
      v133 = 0.0;
      v137 = v110;
      v141 = 0.0;
      v134 = 0.0;
      v138 = 0.0;
      v142 = 1.0;
      v135 = v111;
      v139 = -v109;
      v143 = -963350528;
      v112 = v101[152];
      v113 = (_DWORD *)v101[153];
      v114 = v113;
      if ( v112 > 1 )
        v114 = v113 + 3;
      if ( *v114 != -1 )
      {
        sub_6091B890(v114, v100, 12, &v132);
        v112 = v101[152];
        v113 = (_DWORD *)v101[153];
      }
      v115 = v113;
      if ( v112 > 4 )
        v115 = v113 + 12;
      if ( *v115 != -1 )
      {
        sub_6091B890(v115, v100, 4, &v144);
        v112 = v101[152];
        v113 = (_DWORD *)v101[153];
      }
      v116 = v113;
      if ( v112 > 3 )
        v116 = v113 + 9;
      if ( *v116 != -1 )
      {
        sub_6091B890(v116, v100, 4, v108 + 12);
        v112 = v101[152];
        v113 = (_DWORD *)v101[153];
      }
      if ( v112 > 5 )
        v113 += 15;
      v128 = 1.0 / FIELD_F32(v108, 32);
      v129 = FIELD_U32(v108, 36);
      v130 = FIELD_U32(v108, 28);
      v131 = 0;
      if ( *v113 != -1 )
        sub_6091B890(v113, v100, 4, &v128);
      v117 = FIELD_U32(v126, 192);
      v118 = v125[632];
      v119 = ((__int64 (__fastcall *)(_DWORD *))dword_60CC746C)(v125 + 638);
      v100 = v126;
      dword_60CC7874(v117, v118, v125[631], 6, v119, HIDWORD(v119));
      v106 = FIELD_U32(v106, 4);
      result = v105 - 76;
      v108 = v106 - 76;
    }
    while ( v106 - 76 != v105 - 76 );
  }
  return result;
}
