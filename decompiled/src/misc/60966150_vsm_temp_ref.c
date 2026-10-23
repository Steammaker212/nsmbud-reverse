/* vsm_temp_ref
 * address: 0x60966150   size: 3108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall vsm_temp_ref(int a1, int a2)
{
  int v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r9
  int v8; // r0
  int v9; // r1
  int *v10; // r7
  _BYTE *v11; // r5
  int *v12; // r8
  int v13; // r0
  int v14; // r1
  int *v15; // r1
  int v16; // r1
  int v17; // r4
  int v18; // r0
  unsigned __int8 *v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r0
  float v23; // s0
  int v24; // r2
  float v25; // r1
  float v26; // s2
  float v27; // r3
  float v28; // r7
  float v29; // r6
  int v30; // r0
  float v31; // s18
  int v32; // r6
  int v33; // r9
  int *v34; // r4
  unsigned int *v35; // r10
  float v36; // s16
  float v37; // s20
  unsigned int *v38; // r8
  _DWORD *v39; // r0
  int v40; // r7
  _DWORD *v41; // r0
  unsigned int v42; // r0
  int v43; // r4
  int v44; // r3
  int v45; // r5
  int v46; // r6
  int v47; // r7
  int v48; // r3
  int v49; // r5
  int v50; // r6
  int v51; // r7
  int v52; // r3
  int v53; // r5
  int v54; // r6
  int v55; // r7
  __int16 v56; // r2
  unsigned int v57; // r0
  int v58; // r6
  unsigned int v59; // r0
  unsigned int v60; // r0
  int v61; // r4
  int v62; // r7
  int v63; // r9
  int v64; // r6
  __int64 v65; // r0
  int v66; // r0
  int v67; // r9
  _DWORD *v68; // r0
  unsigned int v69; // r1
  unsigned int v70; // r0
  int v71; // r6
  int v72; // r3
  int v73; // r4
  int v74; // r5
  int v75; // r7
  int v76; // r3
  int v77; // r4
  int v78; // r5
  int v79; // r7
  int v80; // r3
  int v81; // r4
  int v82; // r5
  int v83; // r7
  __int16 v84; // r2
  unsigned int v85; // r0
  unsigned int v86; // r0
  int v87; // r6
  unsigned int v88; // r0
  int v89; // r4
  int v90; // r7
  int v91; // r9
  int v92; // r6
  int v93; // r0
  int v94; // r1
  int v95; // r0
  int v96; // r7
  _DWORD *v97; // r0
  unsigned int v98; // r1
  unsigned int v99; // r0
  int v100; // r4
  int v101; // r3
  int v102; // r5
  int v103; // r6
  int v104; // r7
  int v105; // r3
  int v106; // r5
  int v107; // r6
  int v108; // r7
  int v109; // r3
  int v110; // r5
  int v111; // r6
  int v112; // r7
  __int16 v113; // r2
  unsigned int v114; // r0
  unsigned int v115; // r0
  unsigned int v116; // r0
  int v117; // r4
  int v118; // r7
  int v119; // r9
  int v120; // r6
  int v121; // r0
  int v122; // r1
  int result; // r0
  int v124; // r1
  int v125; // r1
  int v126; // r1
  int v127; // [sp+0h] [bp-168h]
  int v128; // [sp+0h] [bp-168h]
  int v129; // [sp+0h] [bp-168h]
  __int64 v130; // [sp+0h] [bp-168h]
  __int64 v131; // [sp+0h] [bp-168h]
  int v132; // [sp+4h] [bp-164h]
  unsigned int v133; // [sp+24h] [bp-144h]
  unsigned int v134; // [sp+5Ch] [bp-10Ch]
  unsigned int v135; // [sp+60h] [bp-108h]
  int v136; // [sp+64h] [bp-104h]
  int v137; // [sp+68h] [bp-100h]
  int v138; // [sp+6Ch] [bp-FCh]
  int v139; // [sp+70h] [bp-F8h]
  int *v140; // [sp+74h] [bp-F4h]
  int v141; // [sp+78h] [bp-F0h]
  int v142; // [sp+7Ch] [bp-ECh]
  _DWORD *v143; // [sp+80h] [bp-E8h]
  _WORD *v145; // [sp+88h] [bp-E0h]
  int i; // [sp+8Ch] [bp-DCh]
  float v147; // [sp+90h] [bp-D8h] BYREF
  float v148; // [sp+94h] [bp-D4h]
  float v149; // [sp+98h] [bp-D0h]
  int v150; // [sp+9Ch] [bp-CCh]
  _BYTE v151[24]; // [sp+A0h] [bp-C8h] BYREF
  int (**v152)(); // [sp+B8h] [bp-B0h] BYREF
  unsigned int v153; // [sp+BCh] [bp-ACh]
  unsigned int v154; // [sp+D4h] [bp-94h]

  v3 = FIELD_U32(a1, 324);
  v4 = FIELD_U8(a1, 172);
  v5 = sub_609200B8(v3);
  v6 = FIELD_U16(v3, 28);
  v7 = v4 ^ 1;
  if ( v5 > v6 )
    v6 = v5;
  v137 = v6;
  v8 = *(unsigned __int16 *)(FIELD_U32(a1, 324) + 34);
  if ( v8 == 1 )
  {
    v10 = (int *)(a1 + 76);
    v14 = FIELD_U32(a1, 76);
    v11 = (_BYTE *)(a1 + 156);
    v12 = (int *)(a1 + 60);
    v128 = FIELD_U32(a1, 60);
    if ( FIELD_U8(a1, 156) )
    {
      v152 = &sead__SafeStringBase__vtable;
      v153 = (unsigned int)"vsm";
      v136 = 0;
      v13 = sub_6093E948(dword_60CD09F8, a2, (int)&v152, 38, v128, v14, 1, 0, v4 ^ 1, 1, 0);
    }
    else
    {
      v152 = &sead__SafeStringBase__vtable;
      v153 = (unsigned int)"vsm";
      v136 = 0;
      v13 = sub_6093E338(dword_60CD09F8, a2, (int)&v152, 38, v128, v14, 1, 0);
    }
  }
  else
  {
    if ( v8 != 4 )
    {
      v15 = *(int **)(a1 + 680);
      v10 = (int *)(a1 + 76);
      v12 = (int *)(a1 + 60);
      v11 = (_BYTE *)(a1 + 156);
      v136 = 1;
      goto LABEL_13;
    }
    v10 = (int *)(a1 + 76);
    v9 = FIELD_U32(a1, 76);
    v11 = (_BYTE *)(a1 + 156);
    v12 = (int *)(a1 + 60);
    v127 = FIELD_U32(a1, 60);
    v136 = 1;
    if ( FIELD_U8(a1, 156) )
    {
      v152 = &sead__SafeStringBase__vtable;
      v153 = (unsigned int)"vsm";
      v13 = sub_6093E9B0(dword_60CD09F8, a2, (int)&v152, 38, v127, v9, v137, 1, 0, v4 ^ 1, 1, 0);
    }
    else
    {
      v152 = &sead__SafeStringBase__vtable;
      v153 = (unsigned int)"vsm";
      v13 = sub_6093E7C0(dword_60CD09F8, a2, (int)&v152, 38, v127, v9, v137, 1, 0, v4 ^ 1, 1, 0);
    }
  }
  v15 = (int *)v13;
  FIELD_U32(a1, 680) = v13;
LABEL_13:
  sub_60920EC8(a1 + 688, v15);
  FIELD_U32(a1, 320) = a1 + 688;
  v16 = *v10;
  v129 = *v12;
  if ( *v11 )
  {
    v152 = &sead__SafeStringBase__vtable;
    v153 = (unsigned int)"vsm_temp";
    v17 = a2;
    v18 = sub_6093E948(dword_60CD09F8, a2, (int)&v152, 38, v129, v16, 1, 0, v7, 1, 0);
  }
  else
  {
    v152 = &sead__SafeStringBase__vtable;
    v153 = (unsigned int)"vsm_temp";
    v17 = a2;
    v18 = sub_6093E338(dword_60CD09F8, a2, (int)&v152, 38, v129, v16, 1, 0);
  }
  v139 = v18;
  FIELD_U8(a1, 3664) = *v11;
  v19 = (unsigned __int8 *)sub_6090B350((int)&v152);
  v20 = 3;
  v154 = v154 & 0xFFFFFFF0 | 3;
  LOWORD(v152) = 0;
  v153 &= ~1u;
  sub_6090B4B0(v19, v17);
  v21 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v151, a1 + 2080);
  v142 = a1 + 2080;
  sub_6090E560(v21, v17, (float *)(a1 + 2080));
  sub_60922278(dword_60CD0A28 + 2712, v17);
  v22 = *v12;
  v23 = (float)*v12;
  v24 = *v10;
  v25 = v23;
  v26 = (float)*v10;
  v27 = v23;
  if ( *v12 > 0 )
    v27 = 0.0;
  v28 = (float)*v10;
  FIELD_F32(a1, 2092) = v27;
  v29 = v26;
  if ( v24 > 0 )
    v29 = 0.0;
  if ( v22 <= 0 )
    v25 = 0.0;
  FIELD_F32(a1, 2096) = v29;
  if ( v24 <= 0 )
    v28 = 0.0;
  FIELD_F32(a1, 2100) = v25;
  FIELD_F32(a1, 2104) = v28;
  FIELD_F32(a1, 2084) = v23;
  FIELD_F32(a1, 2088) = v26;
  if ( v137 <= 0 )
  {
    v32 = a2;
    v33 = a1 + 2144;
  }
  else
  {
    v30 = 1;
    v31 = v26 / v23;
    v32 = a2;
    v33 = a1 + 2144;
    v34 = (int *)(a1 + 2832);
    v35 = (unsigned int *)(a1 + 2416);
    v143 = (_DWORD *)(a1 + 2144);
    v140 = (int *)(a1 + 2832);
    v36 = 1.0 / v26;
    v37 = 1.0 / v23;
    if ( v136 )
    {
      v30 = 2;
      v20 = 4;
    }
    v134 = v30;
    v135 = v20;
    v145 = (_WORD *)(a1 + 2420);
    v38 = (unsigned int *)(a1 + 3160);
    v141 = a1 + 2208;
    v133 = -(v136 ^ 1);
    for ( i = 0; i < v137; ++i )
    {
      v39 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 420) + 4);
      if ( v136 )
      {
        v40 = v39[5];
        if ( v39[4] > v133 )
          v40 += 936 * (__int16)v133;
      }
      else
      {
        v40 = v39[3];
      }
      sub_6091DD8C(v40, v32);
      v41 = *(_DWORD **)(v40 + 612);
      if ( FIELD_U32(v40, 608) > 1u )
        v41 += 3;
      v147 = (float)i;
      if ( *v41 != -1 )
        sub_6091B890(v41, v32, 1, (int)&v147);
      sub_60920EC8((int)v34, *(int **)(a1 + 324));
      FIELD_U16(a1, 3148) = 0;
      FIELD_U8(a1, 3150) = 0;
      do
        v42 = __ldrex(v38);
      while ( __strex(v42 | 4, v38) );
      sub_60920FDC(v34, v32, *(char **)(v40 + 636));
      v43 = FIELD_U32(a1, 680);
      v44 = FIELD_U32(v43, 4);
      v45 = FIELD_U32(v43, 8);
      v46 = FIELD_U32(v43, 12);
      v47 = FIELD_U32(v43, 16);
      *(_DWORD *)v33 = *(_DWORD *)v43;
      FIELD_U32(v33, 4) = v44;
      FIELD_U32(v33, 8) = v45;
      FIELD_U32(v33, 12) = v46;
      FIELD_U32(v33, 16) = v47;
      v48 = FIELD_U32(v43, 24);
      v49 = FIELD_U32(v43, 28);
      v50 = FIELD_U32(v43, 32);
      v51 = FIELD_U32(v43, 36);
      FIELD_U32(v33, 20) = FIELD_U32(v43, 20);
      FIELD_U32(v33, 24) = v48;
      FIELD_U32(v33, 28) = v49;
      FIELD_U32(v33, 32) = v50;
      FIELD_U32(v33, 36) = v51;
      v52 = FIELD_U32(v43, 44);
      v53 = FIELD_U32(v43, 48);
      v54 = FIELD_U32(v43, 52);
      v55 = FIELD_U32(v43, 56);
      FIELD_U32(v33, 40) = FIELD_U32(v43, 40);
      FIELD_U32(v33, 44) = v52;
      FIELD_U32(v33, 48) = v53;
      FIELD_U32(v33, 52) = v54;
      FIELD_U32(v33, 56) = v55;
      v56 = FIELD_U16(v43, 60);
      FIELD_U8(v33, 62) = FIELD_U8(v43, 62);
      FIELD_U16(v33, 60) = v56;
      sub_60917754(v141, v43 + 64);
      FIELD_U32(a1, 2408) = FIELD_U32(v43, 264);
      do
        v57 = __ldrex(v35);
      while ( __strex(v57 | 4, v35) );
      v58 = a2;
      if ( (unsigned __int16)*v145 != i )
      {
        do
          v59 = __ldrex(v35);
        while ( __strex(v59 | 2, v35) );
        *v145 = i;
      }
      if ( FIELD_U8(a1, 2422) )
      {
        do
          v60 = __ldrex(v35);
        while ( __strex(v60 | 1, v35) );
        FIELD_U8(a1, 2422) = 0;
      }
      sub_6091AC94(v33);
      FIELD_U32(a1, 2108) = v33;
      FIELD_U32(a1, 2140) = 0;
      sub_6090B260(v142);
      v61 = dword_60CD0A0C;
      v62 = FIELD_U32(dword_60CD0A0C, 920);
      if ( v62 )
      {
        v63 = FIELD_U32(a2, 192);
        v64 = FIELD_U32(dword_60CD0A0C, 904);
        v65 = dword_60CC746C(dword_60CD0A0C + 928);
        v132 = HIDWORD(v65);
        HIDWORD(v65) = v64;
        v58 = a2;
        dword_60CC7874(v63, HIDWORD(v65), FIELD_U32(v61, 900), v62, v65, v132);
      }
      v66 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 420) + 4);
      v67 = FIELD_U32(v66, 20);
      if ( FIELD_U32(v66, 16) > v134 )
        v67 += 936 * (__int16)v134;
      sub_6091DD8C(v67, v58);
      v147 = v37;
      v148 = 0.0;
      v149 = v31;
      v150 = 1065353216;
      v68 = *(_DWORD **)(v67 + 612);
      if ( *v68 != -1 )
      {
        sub_6091B890(v68, v58, 4, (int)&v147);
        v68 = *(_DWORD **)(v67 + 612);
      }
      v69 = FIELD_U32(v67, 608);
      v147 = (float)i;
      if ( v69 > 1 )
        v68 += 3;
      if ( *v68 != -1 )
        sub_6091B890(v68, v58, 1, (int)&v147);
      sub_60920EC8((int)v140, *(int **)(a1 + 680));
      FIELD_U16(a1, 3148) = 257;
      FIELD_U8(a1, 3150) = 0;
      do
        v70 = __ldrex(v38);
      while ( __strex(v70 | 4, v38) );
      sub_60920FDC(v140, v58, *(char **)(v67 + 636));
      v71 = (unsigned __int16)*v145;
      v138 = FIELD_U8(a1, 2422);
      v72 = FIELD_U32(v139, 4);
      v73 = FIELD_U32(v139, 8);
      v74 = FIELD_U32(v139, 12);
      v75 = FIELD_U32(v139, 16);
      *v143 = *(_DWORD *)v139;
      FIELD_U32(a1, 2148) = v72;
      FIELD_U32(a1, 2152) = v73;
      FIELD_U32(a1, 2156) = v74;
      FIELD_U32(a1, 2160) = v75;
      v76 = FIELD_U32(v139, 24);
      v77 = FIELD_U32(v139, 28);
      v78 = FIELD_U32(v139, 32);
      v79 = FIELD_U32(v139, 36);
      FIELD_U32(a1, 2164) = FIELD_U32(v139, 20);
      FIELD_U32(a1, 2168) = v76;
      FIELD_U32(a1, 2172) = v77;
      FIELD_U32(a1, 2176) = v78;
      FIELD_U32(a1, 2180) = v79;
      v80 = FIELD_U32(v139, 44);
      v81 = FIELD_U32(v139, 48);
      v82 = FIELD_U32(v139, 52);
      v83 = FIELD_U32(v139, 56);
      FIELD_U32(a1, 2184) = FIELD_U32(v139, 40);
      FIELD_U32(a1, 2188) = v80;
      FIELD_U32(a1, 2192) = v81;
      FIELD_U32(a1, 2196) = v82;
      FIELD_U32(a1, 2200) = v83;
      v84 = FIELD_U16(v139, 60);
      FIELD_U8(a1, 2206) = FIELD_U8(v139, 62);
      FIELD_U16(a1, 2204) = v84;
      sub_60917754(v141, v139 + 64);
      FIELD_U32(a1, 2408) = FIELD_U32(v139, 264);
      do
        v85 = __ldrex(v35);
      while ( __strex(v85 | 4, v35) );
      v33 = a1 + 2144;
      if ( (unsigned __int16)*v145 != v71 )
      {
        do
          v86 = __ldrex(v35);
        while ( __strex(v86 | 2, v35) );
        *v145 = v71;
      }
      v87 = a2;
      if ( FIELD_U8(a1, 2422) != v138 )
      {
        do
          v88 = __ldrex(v35);
        while ( __strex(v88 | 1, v35) );
        FIELD_U8(a1, 2422) = v138;
      }
      sub_6091AC94((int)v143);
      FIELD_U32(a1, 2108) = v143;
      FIELD_U32(a1, 2140) = 0;
      sub_6090B260(v142);
      v89 = dword_60CD0A0C;
      v90 = FIELD_U32(dword_60CD0A0C, 920);
      if ( v90 )
      {
        v91 = FIELD_U32(a2, 192);
        v92 = FIELD_U32(dword_60CD0A0C, 904);
        v130 = dword_60CC746C(dword_60CD0A0C + 928);
        v93 = v91;
        v94 = v92;
        v33 = a1 + 2144;
        v87 = a2;
        dword_60CC7874(v93, v94, FIELD_U32(v89, 900), v90, v130, HIDWORD(v130));
      }
      v95 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 420) + 4);
      v96 = FIELD_U32(v95, 20);
      if ( FIELD_U32(v95, 16) > v135 )
        v96 += 936 * (__int16)v135;
      sub_6091DD8C(v96, v87);
      v147 = 0.0;
      v148 = v36;
      v149 = v31;
      v150 = 1065353216;
      v97 = *(_DWORD **)(v96 + 612);
      if ( *v97 != -1 )
      {
        sub_6091B890(v97, v87, 4, (int)&v147);
        v97 = *(_DWORD **)(v96 + 612);
      }
      v98 = FIELD_U32(v96, 608);
      v147 = (float)i;
      if ( v98 > 1 )
        v97 += 3;
      if ( *v97 != -1 )
        sub_6091B890(v97, v87, 1, (int)&v147);
      sub_60920EC8((int)v140, (int *)v139);
      FIELD_U16(a1, 3148) = 257;
      FIELD_U8(a1, 3150) = 0;
      do
        v99 = __ldrex(v38);
      while ( __strex(v99 | 4, v38) );
      sub_60920FDC(v140, v87, *(char **)(v96 + 636));
      v100 = FIELD_U32(a1, 680);
      v101 = FIELD_U32(v100, 4);
      v102 = FIELD_U32(v100, 8);
      v103 = FIELD_U32(v100, 12);
      v104 = FIELD_U32(v100, 16);
      *(_DWORD *)v33 = *(_DWORD *)v100;
      FIELD_U32(v33, 4) = v101;
      FIELD_U32(v33, 8) = v102;
      FIELD_U32(v33, 12) = v103;
      FIELD_U32(v33, 16) = v104;
      v105 = FIELD_U32(v100, 24);
      v106 = FIELD_U32(v100, 28);
      v107 = FIELD_U32(v100, 32);
      v108 = FIELD_U32(v100, 36);
      FIELD_U32(v33, 20) = FIELD_U32(v100, 20);
      FIELD_U32(v33, 24) = v105;
      FIELD_U32(v33, 28) = v106;
      FIELD_U32(v33, 32) = v107;
      FIELD_U32(v33, 36) = v108;
      v109 = FIELD_U32(v100, 44);
      v110 = FIELD_U32(v100, 48);
      v111 = FIELD_U32(v100, 52);
      v112 = FIELD_U32(v100, 56);
      FIELD_U32(v33, 40) = FIELD_U32(v100, 40);
      FIELD_U32(v33, 44) = v109;
      FIELD_U32(v33, 48) = v110;
      FIELD_U32(v33, 52) = v111;
      FIELD_U32(v33, 56) = v112;
      v113 = FIELD_U16(v100, 60);
      FIELD_U8(v33, 62) = FIELD_U8(v100, 62);
      FIELD_U16(v33, 60) = v113;
      sub_60917754(v141, v100 + 64);
      FIELD_U32(a1, 2408) = FIELD_U32(v100, 264);
      do
        v114 = __ldrex(v35);
      while ( __strex(v114 | 4, v35) );
      v32 = a2;
      if ( (unsigned __int16)*v145 != i )
      {
        do
          v115 = __ldrex(v35);
        while ( __strex(v115 | 2, v35) );
        *v145 = i;
      }
      if ( FIELD_U8(a1, 2422) )
      {
        do
          v116 = __ldrex(v35);
        while ( __strex(v116 | 1, v35) );
        FIELD_U8(a1, 2422) = 0;
      }
      sub_6091AC94(v33);
      FIELD_U32(a1, 2108) = v33;
      FIELD_U32(a1, 2140) = 0;
      sub_6090B260(v142);
      v117 = dword_60CD0A0C;
      v118 = FIELD_U32(dword_60CD0A0C, 920);
      if ( v118 )
      {
        v119 = FIELD_U32(a2, 192);
        v120 = FIELD_U32(dword_60CD0A0C, 904);
        v131 = dword_60CC746C(dword_60CD0A0C + 928);
        v121 = v119;
        v122 = v120;
        v33 = a1 + 2144;
        v32 = a2;
        dword_60CC7874(v121, v122, FIELD_U32(v117, 900), v118, v131, HIDWORD(v131));
      }
      v34 = (int *)(a1 + 2832);
    }
  }
  sub_6091ADF4(v33, v32);
  result = sub_6093EA98(dword_60CD09F8, v139);
  v124 = FIELD_U32(a1, 324);
  if ( v124 )
  {
    sub_6093EA98(dword_60CD09F8, v124);
    result = 0;
    FIELD_U32(a1, 324) = 0;
  }
  v125 = FIELD_U32(a1, 1032);
  if ( v125 )
  {
    sub_6093EA98(dword_60CD09F8, v125);
    result = 0;
    FIELD_U32(a1, 1032) = 0;
  }
  v126 = FIELD_U32(a1, 1384);
  if ( v126 )
  {
    sub_6093EA98(dword_60CD09F8, v126);
    FIELD_U32(a1, 1384) = 0;
    return 0;
  }
  return result;
}
