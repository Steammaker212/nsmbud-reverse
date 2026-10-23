/* PlayerStates_updateModelAndAnims
 * address: 0x607E8220   size: 7736   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_updateModelAndAnims(int a1)
{
  int v1; // r9
  int result; // r0
  int v3; // r5
  int v4; // r8
  int v5; // r0
  int *v6; // r5
  int *v7; // r6
  int v8; // r11
  _DWORD *v9; // r4
  int *v10; // r2
  int v11; // r0
  _DWORD *v12; // r9
  int *v13; // r1
  int v14; // r4
  int v15; // r9
  size_t v16; // r4
  int v17; // r0
  int v18; // r1
  int *v19; // r7
  int v20; // r2
  int v21; // r3
  unsigned __int16 *v22; // r0
  size_t v23; // r6
  size_t v24; // r2
  int v25; // r0
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r0
  int v37; // r1
  int v38; // r1
  int v39; // r1
  int v40; // r1
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r1
  int *v45; // r11
  int **v46; // r3
  int v47; // r4
  int v48; // r0
  int v49; // r7
  int *v50; // r6
  int v51; // r0
  char *v52; // r2
  char *v53; // r2
  char *v54; // r1
  char v55; // r2
  int **v56; // r1
  int v57; // r4
  int v58; // r0
  int v59; // r6
  int v60; // r0
  char *v61; // r2
  char *v62; // r2
  char *v63; // r1
  char v64; // r2
  int v65; // r1
  _DWORD *v66; // r2
  _DWORD *v67; // r1
  int v68; // r0
  int v69; // r11
  int *v70; // r11
  int v71; // t1
  int v72; // r4
  int v73; // r7
  size_t v74; // r4
  int v75; // r0
  int v76; // r1
  int *v77; // r8
  int v78; // r2
  int v79; // r3
  unsigned __int16 *v80; // r0
  size_t v81; // r6
  size_t v82; // r2
  int v83; // r0
  int v84; // r1
  __int16 v85; // r0
  int v86; // r4
  int v87; // r5
  int *v88; // r7
  int v89; // r4
  int v90; // r1
  int v91; // r5
  int v92; // r4
  int v93; // r1
  int v94; // r0
  int v95; // r1
  int v96; // r4
  int v97; // r4
  ModelWrapper **v98; // r5
  ModelWrapper *v99; // t1
  int v100; // r0
  int **v101; // r1
  int v102; // r5
  int (__fastcall *v103)(int, __int64 *); // r2
  int v104; // r0
  int v105; // r5
  int v106; // r0
  int v107; // r1
  int v108; // r2
  float v109; // s2
  int v110; // r1
  int v111; // r5
  int v112; // r5
  int v113; // r0
  int v114; // r1
  float v115; // r2
  char *v116; // r12
  int v117; // r1
  unsigned int v118; // r11
  int v119; // r10
  int v120; // r5
  int v121; // r6
  int v122; // r7
  _BYTE *v123; // r4
  bool v124; // zf
  int **v125; // r1
  int v126; // r9
  int v127; // r8
  int v128; // r0
  int v129; // r4
  int v130; // r7
  int v131; // r4
  int v132; // r5
  int v133; // r6
  int v134; // r7
  int v135; // r4
  int v136; // r5
  unsigned int v137; // r6
  int v138; // r7
  int *v139; // r10
  int v140; // r5
  int **v141; // r1
  int v142; // r8
  int v143; // r9
  int v144; // r10
  int v145; // r5
  int *v146; // r6
  int i; // r7
  float v148; // s22
  float v149; // s24
  float v150; // s16
  float v151; // s20
  float v152; // s18
  int *v153; // r0
  int *v154; // r1
  int v155; // r2
  float v156; // s0
  unsigned int v157; // r2
  int v158; // r0
  int v159; // r0
  const char *v160; // r1
  int v161; // [sp+18h] [bp-160h]
  int v162; // [sp+1Ch] [bp-15Ch]
  _BYTE *v163; // [sp+24h] [bp-154h]
  int *v164; // [sp+28h] [bp-150h]
  int *v165; // [sp+44h] [bp-134h]
  int *v166; // [sp+48h] [bp-130h]
  _BYTE *v167; // [sp+50h] [bp-128h]
  int v168; // [sp+5Ch] [bp-11Ch]
  int *v169; // [sp+60h] [bp-118h]
  _BYTE *v170; // [sp+64h] [bp-114h]
  _DWORD *v171; // [sp+6Ch] [bp-10Ch]
  _DWORD *v172; // [sp+6Ch] [bp-10Ch]
  int *v173; // [sp+70h] [bp-108h]
  float *v174; // [sp+74h] [bp-104h]
  int v175; // [sp+78h] [bp-100h]
  float *v176; // [sp+78h] [bp-100h]
  float *v177; // [sp+7Ch] [bp-FCh]
  _DWORD *v178; // [sp+80h] [bp-F8h]
  int *v179; // [sp+80h] [bp-F8h]
  int v180; // [sp+80h] [bp-F8h]
  int *v181; // [sp+84h] [bp-F4h]
  int v182; // [sp+84h] [bp-F4h]
  int v183; // [sp+84h] [bp-F4h]
  _BYTE *v184; // [sp+88h] [bp-F0h]
  int v185; // [sp+88h] [bp-F0h]
  int *v186; // [sp+88h] [bp-F0h]
  int v187; // [sp+8Ch] [bp-ECh]
  int v188; // [sp+8Ch] [bp-ECh]
  _DWORD *v189; // [sp+90h] [bp-E8h]
  int v190; // [sp+90h] [bp-E8h]
  unsigned int v191; // [sp+94h] [bp-E4h]
  int v192; // [sp+94h] [bp-E4h]
  int v193; // [sp+98h] [bp-E0h]
  int v194; // [sp+9Ch] [bp-DCh] BYREF
  int v195; // [sp+A0h] [bp-D8h] BYREF
  int v196; // [sp+A4h] [bp-D4h] BYREF
  int v197; // [sp+A8h] [bp-D0h] BYREF
  int v198; // [sp+ACh] [bp-CCh] BYREF
  float v199; // [sp+B0h] [bp-C8h] BYREF
  char *v200; // [sp+B4h] [bp-C4h]
  int v201; // [sp+B8h] [bp-C0h]
  _BYTE v202[16]; // [sp+BCh] [bp-BCh] BYREF
  char nptr[16]; // [sp+CCh] [bp-ACh] BYREF
  __int64 v204; // [sp+DCh] [bp-9Ch] BYREF
  int v205; // [sp+E4h] [bp-94h]
  float v206[36]; // [sp+E8h] [bp-90h] BYREF

  v1 = a1;
  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( result )
    return result;
  v175 = dword_60CD0B40;
  v3 = off_60C5CB10(*(_DWORD *)(FIELD_U32(v1, 1724976) + 36 * FIELD_U32(v1, 1724988)));
  v4 = off_60C5CB10(*(_DWORD *)(FIELD_U32(v1, 1724976) + 36 * FIELD_U32(v1, 1724988) + 4));
  v5 = off_60C5CB10(*(_DWORD *)(FIELD_U32(v1, 1724976) + 36 * FIELD_U32(v1, 1724988) + 8));
  v168 = v1;
  v169 = (int *)(v1 + 1724984);
  if ( FIELD_U32(v1, 1724984) < v3 )
    goto LABEL_144;
  v164 = (int *)(v1 + 1724988);
  if ( v4 == 5 )
  {
    v6 = (int *)(v1 + 1724988);
    if ( !FIELD_U8(v1, 1729176) )
    {
      v85 = FIELD_U16(dword_60CC6D78, 109048);
      if ( (v85 & 0x80) == 0 )
      {
        v86 = dword_60CC62E4;
        if ( (v85 & 0x7F) != 0 )
        {
          PlayerStates_updateModelAndAnims_helper_40E87C(LevelInfo_instance);
          LODWORD(v204) = 2;
          HIDWORD(v204) = sub_600246FC;
          SceneMgr_doSceneChange(v86, v1, (int)&v204, 0, 0);
          FIELD_U32(dword_60CC6D78, 408) = 0;
          v6 = (int *)(v1 + 1724988);
        }
        else if ( FIELD_U8(dword_60C9A230, 2084) )
        {
          PlayerStates_updateModelAndAnims_helper_40C134(dword_60C9A230, v1);
        }
        else
        {
          LODWORD(v204) = 2;
          HIDWORD(v204) = CourseSelectTask_create;
          SceneMgr_doSceneChange(dword_60CC62E4, v1, (int)&v204, 0, 0);
        }
        FIELD_U32(v86, 108) = 2;
      }
    }
    goto LABEL_142;
  }
  v6 = (int *)(v1 + 1724988);
  if ( v4 != 1 )
    goto LABEL_142;
  v7 = (int *)(v1 + 1724992);
  if ( FIELD_U32(v1, 1724992) == v5 )
    goto LABEL_142;
  *v7 = v5;
  v171 = (_DWORD *)(v1 + 1724980);
  if ( FIELD_S32(v1, 1724980) <= 0 )
    goto LABEL_121;
  v173 = (int *)(v1 + 1724992);
  v8 = v1 + 4400;
  v9 = (_DWORD *)(v1 + 447028);
  v10 = (int *)(v1 + 4392);
  v11 = v1 + 556;
  v12 = (_DWORD *)(v1 + 4396);
  v166 = v10;
  v165 = (int *)(v11 + 446464);
  v191 = 0;
  do
  {
    v181 = (int *)v8;
    HIDWORD(v204) = v206;
    LODWORD(v204) = &BufferedSafeStringBase_char_vtable_probably;
    v205 = 64;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v204);
    v66 = v12;
    *(_BYTE *)HIDWORD(v204) = 0;
    v67 = v9;
    v189 = v9;
    LODWORD(v204) = &off_60BD4BF0;
    v68 = 32;
    do
    {
      *v66 = -1;
      *(v67 - 1) = -1;
      v66[1] = -1;
      *v67 = -1;
      v68 -= 2;
      v67 += 2;
      v66 += 2;
    }
    while ( v68 );
    v69 = v168 + 4 * v191;
    *(_BYTE *)(v168 + v191 + 4264) = 0;
    v184 = (_BYTE *)(v168 + v191);
    *(_BYTE *)(v168 + v191 + 446892) = 0;
    v71 = FIELD_U32(v69, 3424);
    v70 = (int *)(v69 + 3424);
    sub_608FDDF4(
      (int)&v204,
      "%03d_%s_%03d",
      FIELD_U16(dword_60CC6D78, 109048) & 0x7F,
      *(_DWORD *)(*(_DWORD *)(FIELD_U32(v71, 20) + 40) + 16) + 2,
      *v173);
    v72 = *(_DWORD *)(*v70 + 20);
    (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
    v73 = FIELD_U32(v72, 64);
    if ( !v73 )
      goto LABEL_114;
    v178 = v12;
    if ( HIDWORD(v204) )
      v74 = strlen((const char *)HIDWORD(v204));
    else
      v74 = 0;
    v75 = FIELD_U16(v73, 12);
    v77 = (int *)(v73 + 8 + 16 * v75);
    v76 = *v77;
    if ( FIELD_U32(v73, 8) < *v77 )
    {
      do
      {
        v78 = 0;
        if ( v74 > v76 >> 3 )
          v78 = (*(unsigned __int8 *)(HIDWORD(v204) + v74 + ~(v76 >> 3)) >> (v76 & 7)) & 1;
        v79 = *(_DWORD *)(v73 + 8 + 16 * v75);
        v75 = *(unsigned __int16 *)(v73 + 8 + 16 * v75 + 2 * v78 + 4);
        v77 = (int *)(v73 + 8 + 16 * v75);
        v76 = *v77;
      }
      while ( v79 < *v77 );
    }
    v80 = (unsigned __int16 *)v77[2];
    v81 = *v80;
    v82 = v81;
    if ( v74 < v81 )
      v82 = v74;
    if ( v82 )
    {
      v83 = memcmp(v80 + 1, (const void *)HIDWORD(v204), v82);
      if ( v74 < v81 || v83 )
        goto LABEL_114;
    }
    else if ( v74 < v81 )
    {
      goto LABEL_114;
    }
    v84 = 0;
    if ( v81 < v74 )
      v84 = -1;
    if ( v84 || (int)v77 - v73 - 24 < 0 )
    {
LABEL_114:
      v184[4008] = 0;
      v45 = v181;
      goto LABEL_115;
    }
    v13 = *(int **)(v168 + 3420);
    if ( FIELD_U32(v168, 3416) > v191 )
      v13 += v191;
    sub_6040F4B8(*v13, (int)&v204, 0, 1.0, 0.0);
    v184[4008] = 1;
    v163 = v184 + 4008;
    v14 = *(_DWORD *)(*v70 + 20);
    (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
    v15 = FIELD_U32(v14, 96);
    if ( v15 )
    {
      if ( HIDWORD(v204) )
        v16 = strlen((const char *)HIDWORD(v204));
      else
        v16 = 0;
      v17 = FIELD_U16(v15, 12);
      v19 = (int *)(v15 + 8 + 16 * v17);
      v18 = *v19;
      if ( FIELD_U32(v15, 8) < *v19 )
      {
        do
        {
          v20 = 0;
          if ( v16 > v18 >> 3 )
            v20 = (*(unsigned __int8 *)(HIDWORD(v204) + v16 + ~(v18 >> 3)) >> (v18 & 7)) & 1;
          v21 = *(_DWORD *)(v15 + 8 + 16 * v17);
          v17 = *(unsigned __int16 *)(v15 + 8 + 16 * v17 + 2 * v20 + 4);
          v19 = (int *)(v15 + 8 + 16 * v17);
          v18 = *v19;
        }
        while ( v21 < *v19 );
      }
      v22 = (unsigned __int16 *)v19[2];
      v23 = *v22;
      v24 = v23;
      if ( v16 < v23 )
        v24 = v16;
      if ( v24 )
      {
        v25 = memcmp(v22 + 1, (const void *)HIDWORD(v204), v24);
        v26 = 1;
        if ( v25 )
          v26 = v25;
        if ( v16 >= v23 && !v25 )
        {
LABEL_28:
          v26 = 0;
          if ( v23 < v16 )
            v26 = -1;
        }
        if ( !v26 && (int)v19 - v15 - 24 >= 0 )
        {
          v27 = FIELD_U32(v168, 3420);
          if ( FIELD_U32(v168, 3416) > v191 )
            v27 += 4 * v191;
          sub_6045195C(**(_DWORD **)(*(_DWORD *)v27 + 36), *v70, (const char **)&v204);
          v28 = FIELD_U32(v168, 3420);
          if ( FIELD_U32(v168, 3416) > v191 )
            v28 += 4 * v191;
          AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v28 + 36) + 4), 0);
          v29 = FIELD_U32(v168, 3420);
          if ( FIELD_U32(v168, 3416) > v191 )
            v29 += 4 * v191;
          v30 = **(_DWORD **)(*(_DWORD *)v29 + 36);
          FIELD_U32(v30, 20) = 0;
          FIELD_U32(v30, 28) |= 2u;
          v31 = FIELD_U32(v168, 3420);
          if ( FIELD_U32(v168, 3416) > v191 )
            v31 += 4 * v191;
          *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v31 + 36) + 24) = 1065353216;
          v32 = FIELD_U32(v168, 3420);
          if ( FIELD_U32(v168, 3416) > v191 )
            v32 += 4 * v191;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v32 + 36) + 4));
        }
        goto LABEL_43;
      }
      if ( v16 >= v23 )
        goto LABEL_28;
    }
LABEL_43:
    if ( sub_6043ADF8(*v70, &v204) >= 0 )
    {
      v33 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v33 += 4 * v191;
      TexAnim_play(**(_DWORD **)(*(_DWORD *)v33 + 20), *v70, &v204);
      v34 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v34 += 4 * v191;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v34 + 20) + 4), 0);
      v35 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v35 += 4 * v191;
      v36 = **(_DWORD **)(*(_DWORD *)v35 + 20);
      FIELD_U32(v36, 20) = 0;
      FIELD_U32(v36, 28) |= 2u;
      v37 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v37 += 4 * v191;
      *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v37 + 20) + 24) = 1065353216;
      v38 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v38 += 4 * v191;
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v38 + 20) + 4));
    }
    v12 = v178;
    if ( sub_6043AED0(*v70, &v204) >= 0 )
    {
      v39 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v39 += 4 * v191;
      sub_60446088(**(_DWORD **)(*(_DWORD *)v39 + 28), *v70, &v204);
      v40 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v40 += 4 * v191;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v40 + 28) + 4), 0);
      v41 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v41 += 4 * v191;
      v42 = **(_DWORD **)(*(_DWORD *)v41 + 28);
      FIELD_U32(v42, 20) = 0;
      FIELD_U32(v42, 28) |= 2u;
      v43 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v43 += 4 * v191;
      *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v43 + 28) + 24) = 1065353216;
      v44 = FIELD_U32(v168, 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v44 += 4 * v191;
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v44 + 28) + 4));
    }
    *(_BYTE *)(v168 + v191 + 4264) = 1;
    v45 = v181;
    if ( v184[4136] )
    {
      v46 = *(int ***)(v168 + 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v46 += v191;
      v47 = **v46;
      *v163 = 0;
      if ( v47 )
      {
        v48 = (*(int (__fastcall **)(int))(*(_DWORD *)v47 + 92))(v47);
        *v166 = v48;
        if ( v48 >= 2 )
        {
          v49 = 1;
          v50 = v181;
          do
          {
            v200 = v202;
            v199 = COERCE_FLOAT(&BufferedSafeStringBase_char_vtable_probably);
            v201 = 16;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v199);
            *v200 = 0;
            v199 = COERCE_FLOAT(&off_60BD54D4);
            v51 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v47 + 88))(v47, v49);
            sub_608FDDF4((int)&v199, "%s", v51 + 3);
            v52 = &byte_60B3BA34;
            if ( v201 > 0 )
              v52 = v200;
            nptr[0] = *v52;
            v53 = &byte_60B3BA34;
            if ( v201 > 1 )
              v53 = v200 + 1;
            v54 = &byte_60B3BA34;
            v55 = *v53;
            if ( v201 > 2 )
              v54 = v200 + 2;
            nptr[1] = v55;
            nptr[2] = *v54;
            nptr[3] = 0;
            *v50++ = atoi(nptr);
            ++v49;
          }
          while ( v49 < *v166 );
        }
      }
    }
    *(_BYTE *)(v168 + v191 + 446892) = 1;
    if ( v184[446764] )
    {
      v56 = *(int ***)(v168 + 3420);
      if ( FIELD_U32(v168, 3416) > v191 )
        v56 += v191;
      v57 = **v56;
      *v163 = 0;
      if ( v57 )
      {
        v58 = (*(int (__fastcall **)(int))(*(_DWORD *)v57 + 92))(v57);
        *v165 = v58;
        if ( v58 >= 2 )
        {
          v59 = 0;
          do
          {
            v200 = v202;
            v199 = COERCE_FLOAT(&BufferedSafeStringBase_char_vtable_probably);
            v201 = 16;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v199);
            *v200 = 0;
            v199 = COERCE_FLOAT(&off_60BD54D4);
            v60 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v57 + 88))(v57, v59 + 1);
            sub_608FDDF4((int)&v199, "%s", v60 + 3);
            v61 = &byte_60B3BA34;
            if ( v201 > 0 )
              v61 = v200;
            nptr[0] = *v61;
            v62 = &byte_60B3BA34;
            if ( v201 > 1 )
              v62 = v200 + 1;
            v63 = &byte_60B3BA34;
            v64 = *v62;
            if ( v201 > 2 )
              v63 = v200 + 2;
            nptr[1] = v64;
            nptr[2] = *v63;
            nptr[3] = 0;
            v189[v59] = atoi(nptr);
            v65 = v59 + 2;
            ++v59;
          }
          while ( v65 < *v165 );
        }
      }
      v12 = v178;
    }
LABEL_115:
    v8 = (int)(v45 + 32);
    v12 += 32;
    v9 = v189 + 32;
    ++v191;
  }
  while ( (signed int)v191 < *v171 );
  v1 = v168;
  v7 = v173;
LABEL_121:
  HIDWORD(v204) = v206;
  LODWORD(v204) = &BufferedSafeStringBase_char_vtable_probably;
  v205 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v204);
  *(_BYTE *)HIDWORD(v204) = 0;
  LODWORD(v204) = &off_60BD4BF0;
  sub_608FDDF4((int)&v204, "%03d_Camera_%03d", FIELD_U16(dword_60CC6D78, 109048) & 0x7F, *v7);
  v88 = (int *)(v1 + 1725000);
  v87 = FIELD_U32(v1, 1725000);
  (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
  if ( sub_607E73D4(v87, (const char *)HIDWORD(v204)) >= 0 )
  {
    v89 = *v88;
    (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
    v90 = *(_DWORD *)(*(_DWORD *)(*v88 + 120) + 104 * sub_607E73D4(v89, (const char *)HIDWORD(v204)) + 32);
    FIELD_U32(v1, 1725008) = v90;
    sub_60872B54(FIELD_U32(v1, 1725004), v90);
  }
  sub_608FDDF4((int)&v204, "%03d_dvCamera_%03d", FIELD_U16(dword_60CC6D78, 109048) & 0x7F, *v7);
  v91 = *v88;
  (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
  if ( sub_607E73D4(v91, (const char *)HIDWORD(v204)) >= 0 )
  {
    v92 = *v88;
    (*(void (__fastcall **)(__int64 *))(v204 + 12))(&v204);
    v93 = *(_DWORD *)(*(_DWORD *)(*v88 + 120) + 104 * sub_607E73D4(v92, (const char *)HIDWORD(v204)) + 32);
    FIELD_U32(v1, 1725080) = v93;
    sub_60872B54(FIELD_U32(v1, 1725076), v93);
  }
  v6 = v164;
  v94 = *v7;
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) == 0 )
  {
    switch ( v94 )
    {
      case 50:
        goto LABEL_132;
      case 40:
        sub_60426C24((_DWORD *)dword_60C9BBD4, FIELD_U32(v1, 1729132));
        sub_60426E38(dword_60C9BBD4, FIELD_U32(v1, 1729156));
        sub_60951E50(&v197);
        v95 = v197;
        break;
      case 20:
LABEL_132:
        sub_60426C24((_DWORD *)dword_60C9BBD4, FIELD_U32(v1, 1729128));
        sub_60426E38(dword_60C9BBD4, FIELD_U32(v1, 1729152));
        sub_60951E50(&v198);
        v95 = v198;
        break;
      default:
        if ( v94 < 62 )
          goto LABEL_142;
        sub_60426C24((_DWORD *)dword_60C9BBD4, FIELD_U32(v1, 1729136));
        sub_60426E38(dword_60C9BBD4, FIELD_U32(v1, 1729160));
        sub_60951E50(&v196);
        v95 = v196;
        break;
    }
LABEL_139:
    sub_60947118(v1 + 1726000, v95);
    goto LABEL_142;
  }
  if ( v94 == 30 )
  {
    sub_60951E50(&v194);
    v95 = v194;
    goto LABEL_139;
  }
  if ( v94 == 20 )
  {
    sub_60951E50(&v195);
    v95 = v195;
    goto LABEL_139;
  }
LABEL_142:
  if ( *v6 <= 500 )
    ++*v6;
LABEL_144:
  v167 = (_BYTE *)(v1 + 1729176);
  if ( !FIELD_U8(v1, 1729176) && !sub_607F6904(dword_60CC62E4) )
  {
    if ( FIELD_U8(dword_60C9A230, 2084) )
    {
      sub_6045B594();
      if ( sub_60454CB4()
        || sub_6045ADE4(dword_60C9CFB8, 0, 0xFFFFFFF, 0)
        || sub_6045ADE4(dword_60C9CFB8, 1, 0xFFFFFFF, 1)
        || sub_6045ADE4(dword_60C9CFB8, 2, 0xFFFFFFF, 1)
        || sub_6045ADE4(dword_60C9CFB8, 3, 0xFFFFFFF, 1)
        || sub_6045ADE4(dword_60C9CFB8, 4, 0xFFFFFFF, 0) )
      {
        PlayerStates_updateModelAndAnims_helper_40C134(dword_60C9A230, v1);
        *v167 = 1;
      }
    }
    else if ( FIELD_U8(dword_60CC6D78, 109048) == 10 )
    {
      v96 = dword_60CC62E4;
      if ( ((*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                      + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                      + 50)
           & 1) != 0
         || FIELD_U8(dword_60CC6D78, 109051))
        && (FIELD_U8(v1, 609) & 0xC) != 0 )
      {
        sub_60807EF0(SoundSystem_instance, "SE_SYS_SKIP_DEMO", 0, 1);
        PlayerStates_updateModelAndAnims_helper_40E87C(LevelInfo_instance);
        LODWORD(v204) = 2;
        HIDWORD(v204) = sub_600246FC;
        SceneMgr_doSceneChange(v96, v1, (int)&v204, 0, 0);
        FIELD_U32(dword_60CC6D78, 408) = 0;
        FIELD_U32(v96, 108) = 2;
        *v167 = 1;
      }
    }
  }
  v97 = FIELD_U32(v1, 3416);
  if ( v97 )
  {
    v98 = *(ModelWrapper ***)(v1 + 3420);
    do
    {
      ModelWrapper_updateAnims(*v98);
      v99 = *v98++;
      ModelWrapper_updateModel(v99);
      --v97;
    }
    while ( v97 );
  }
  if ( FIELD_U32(v1, 1729180)
    && (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) == 0
    && FIELD_U8(dword_60CC6D8C, 17)
    && *v169 < 2000 )
  {
    PlayerStates_updateModelAndAnims_helper_7EA13C(v1);
  }
  v100 = FIELD_U32(v1, 1729184);
  if ( v100 )
  {
    FIELD_U64(v1, 1729188) = 1065353216;
    FIELD_U64(v1, 1729196) = 0;
    FIELD_U64(v1, 1729204) = 0x3F80000000000000LL;
    FIELD_U64(v1, 1729212) = 0;
    FIELD_U64(v1, 1729220) = 0;
    FIELD_U64(v1, 1729228) = 1065353216;
    if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) == 0 )
    {
      v101 = *(int ***)(v1 + 3420);
      if ( FIELD_U32(v1, 3416) > 0x16u )
        v101 += 22;
      v102 = **v101;
      v103 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v102 + 84);
      LODWORD(v204) = &sead__SafeStringBase__vtable;
      HIDWORD(v204) = "smallhill";
      v104 = v103(v102, &v204);
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v102 + 108))(v102, v104, v1 + 1729188);
      v100 = FIELD_U32(v1, 1729184);
    }
    PlayerStates_updateModelAndAnims_helper(v100, v1);
  }
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v1 + 1725004) + 12))(FIELD_U32(v1, 1725004));
  v105 = *(_DWORD *)(FIELD_U32(v1, 1725004) + 4);
  *(float *)v105 = (*(float (__fastcall **)(_DWORD, float, float, float))(v105 + 16))(
                     FIELD_U32(v105, 20),
                     *(float *)v105 + FIELD_F32(v105, 12),
                     FIELD_F32(v105, 4),
                     FIELD_F32(v105, 8));
  v106 = *(_DWORD *)(FIELD_U32(v1, 1725004) + 48);
  FIELD_F32(v1, 1724996) = FIELD_F32(v106, 12) / 223.0;
  v107 = FIELD_U32(v106, 16);
  v108 = FIELD_U32(v106, 20);
  v109 = FIELD_F32(v106, 24);
  FIELD_U32(v1, 2848) = v107;
  FIELD_U32(v1, 2852) = v108;
  FIELD_F32(v1, 2856) = v109;
  FIELD_U32(v1, 2860) = v107;
  FIELD_U32(v1, 2864) = v108;
  FIELD_F32(v1, 2868) = v109 + -10000.0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(v1, 2796) + 16))(v1 + 2796, v1 + 2800);
  v177 = (float *)(v1 + 1724996);
  sub_6090C9A0(v1 + 2624);
  v110 = FIELD_U32(v175, 36);
  if ( FIELD_U32(v175, 32) > 7u )
    v110 += 28;
  *(_DWORD *)(*(_DWORD *)v110 + 76) = v1 + 2624;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v1 + 1725076) + 12))(FIELD_U32(v1, 1725076));
  v111 = *(_DWORD *)(FIELD_U32(v1, 1725076) + 4);
  *(float *)v111 = (*(float (__fastcall **)(_DWORD, float, float, float))(v111 + 16))(
                     FIELD_U32(v111, 20),
                     *(float *)v111 + FIELD_F32(v111, 12),
                     FIELD_F32(v111, 4),
                     FIELD_F32(v111, 8));
  v112 = *(_DWORD *)(FIELD_U32(v1, 1725076) + 48);
  sub_6090C42C(v1 + 3232);
  v113 = FIELD_U32(v112, 16);
  v114 = FIELD_U32(v112, 20);
  v115 = FIELD_F32(v112, 24);
  FIELD_U32(v1, 2936) = v113;
  FIELD_U32(v1, 2940) = v114;
  FIELD_F32(v1, 2944) = v115;
  FIELD_U32(v1, 2948) = v113;
  FIELD_U32(v1, 2952) = v114;
  FIELD_F32(v1, 2956) = v115 + -1.0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(v1, 2884) + 16))(v1 + 2884, v1 + 2888);
  v117 = FIELD_U32(v175, 36);
  if ( FIELD_U32(v175, 32) > 5u )
    v117 += 20;
  *(_DWORD *)(*(_DWORD *)v117 + 76) = v1 + 3232;
  v172 = (_DWORD *)(v1 + 1724980);
  if ( FIELD_S32(v1, 1724980) >= 1 )
  {
    v118 = 0;
    v176 = (float *)(v1 + 2852);
    v174 = (float *)(v1 + 2848);
    v119 = v1 + 463716;
    v120 = v1 + 447028;
    v121 = v1 + 20884;
    v122 = v1 + 4400;
    v192 = v1 + 9264;
    v162 = v1 + 147348;
    v190 = v1 + 10544;
    v161 = v1 + 180628;
    do
    {
      v123 = (_BYTE *)(v1 + v118);
      v124 = *(_BYTE *)(v1 + v118 + 4136) == 0;
      if ( *(_BYTE *)(v1 + v118 + 4136) )
        v124 = v123[4264] == 0;
      if ( !v124 )
      {
        v125 = *(int ***)(v1 + 3420);
        if ( FIELD_U32(v1, 3416) > v118 )
          v125 += v118;
        v126 = **v125;
        if ( ((unsigned int)&dword_60C80400 & ~(1618909600 << (char)v116) & 1) == 0
          && _cxa_guard_acquire(&dword_60C80400) )
        {
          dword_60C803FC = (int)&off_60BC3228;
          _cxa_guard_release(&dword_60C80400);
        }
        v187 = v119;
        v185 = v120;
        v182 = v121;
        v179 = (int *)v122;
        v170 = v123;
        if ( v126 )
        {
          v127 = (**(int (__fastcall ***)(int, int *))v126)(v126, &dword_60C803FC);
          if ( v127 )
            v127 = v126;
        }
        else
        {
          v127 = 0;
        }
        v128 = (*(int (__fastcall **)(int))(*(_DWORD *)v126 + 92))(v126);
        v129 = v128;
        if ( v128 >= 2 )
        {
          if ( v118 == 38 )
          {
            v134 = v128 - 1;
            v135 = v162;
            v136 = 0;
            do
            {
              v137 = v136++;
              if ( *(int *)(v192 + 4 * v137) >= 0
                && (*(_DWORD *)(FIELD_U32(v127, 44) + 4 * (v136 >> 5)) & (1 << (v136 & 0x1F))) != 0 )
              {
                (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v126 + 108))(v126, v136, &v204);
                if ( !FIELD_U8(dword_60CC6D8C, 17) || v137 >= 2 )
                  sub_602372C0(v135, *(_DWORD *)(v192 + 4 * v137), &v204, 0);
              }
              v135 += 104;
            }
            while ( v134 != v136 );
          }
          else if ( v118 == 48 )
          {
            v130 = v128 - 1;
            v131 = v161;
            v132 = 0;
            do
            {
              v133 = v132++;
              if ( *(int *)(v190 + 4 * v133) >= 0
                && (*(_DWORD *)(FIELD_U32(v127, 44) + 4 * (v132 >> 5)) & (1 << (v132 & 0x1F))) != 0 )
              {
                (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v126 + 108))(v126, v132, &v204);
                if ( v133 || !FIELD_U8(dword_60CC6D8C, 17) )
                  sub_602372C0(v131, *(_DWORD *)(v190 + 4 * v133), &v204, 0);
              }
              v131 += 104;
            }
            while ( v130 != v132 );
          }
          else
          {
            v138 = v121;
            v139 = v179;
            v140 = 1;
            do
            {
              if ( *v139 >= 0 && (*(_DWORD *)(FIELD_U32(v127, 44) + 4 * (v140 >> 5)) & (1 << (v140 & 0x1F))) != 0 )
              {
                (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v126 + 108))(v126, v140, &v204);
                sub_602372C0(v138, *v139, &v204, 0);
              }
              ++v140;
              v138 += 104;
              ++v139;
            }
            while ( v129 != v140 );
          }
        }
        v1 = v168;
        v119 = v187;
        v120 = v185;
        v121 = v182;
        v122 = (int)v179;
        v123 = v170;
      }
      if ( v123[446764] && v123[446892] && !*v167 )
      {
        v141 = *(int ***)(v1 + 3420);
        if ( FIELD_U32(v1, 3416) > v118 )
          v141 += v118;
        v142 = **v141;
        if ( ((unsigned int)&dword_60C80400 & ~(1618910324 << (char)v116) & 1) == 0
          && _cxa_guard_acquire(&dword_60C80400) )
        {
          dword_60C803FC = (int)&off_60BC3228;
          _cxa_guard_release(&dword_60C80400);
        }
        v188 = v119;
        v186 = (int *)v120;
        v183 = v121;
        v180 = v122;
        if ( v142 )
        {
          v143 = (**(int (__fastcall ***)(int, int *))v142)(v142, &dword_60C803FC);
          if ( v143 )
            v143 = v142;
        }
        else
        {
          v143 = 0;
        }
        v144 = (*(int (__fastcall **)(int))(*(_DWORD *)v142 + 92))(v142);
        if ( v144 >= 2 )
        {
          v145 = v188;
          v146 = v186;
          for ( i = 1; i != v144; ++i )
          {
            if ( *v146 >= 0
              && ((*(_DWORD *)(FIELD_U32(v143, 44) + 4 * (i >> 5)) & (1 << (i & 0x1F))) != 0
               || *v146 == 33 && FIELD_U8(dword_60CC6D8C, 17) && *v169 == 2903) )
            {
              (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v142 + 108))(v142, i, &v204);
              v148 = v206[0];
              v149 = v206[4];
              v150 = *v174;
              v151 = *v176;
              v152 = *v177;
              PlayerStates_updateModelAndAnims_helper_7EA278();
              v153 = dword_607EA104;
              v154 = dword_607EA10C;
              if ( v152 < 0.0 )
              {
                v153 = &dword_607EA104[1];
                v154 = &dword_607EA10C[1];
              }
              if ( !FIELD_U8(dword_60CC6D8C, 17) || (FIELD_U16(dword_60CC6D78, 109048) & 0x7F) != 0xA )
                goto LABEL_243;
              v155 = *v146;
              if ( *v169 == 2903 )
              {
                if ( v155 == 25 )
LABEL_242:
                  *(_DWORD *)nptr = "SE_DEMO_ED_C30_V_KO_L_HUM";
LABEL_243:
                if ( v193 == 2 )
                {
                  sub_60807EF0(SoundSystem_instance, *(_DWORD *)nptr, 0, 1);
                }
                else
                {
                  v156 = (float)(v149 - v151) / (float)(v152 * *(float *)v154);
                  if ( v193 == 1 )
                  {
                    v199 = (float)(v148 - v150) / (float)(v152 * *(float *)v153);
                    v200 = (char *)LODWORD(v156);
                    sub_60813574(v145, *(_DWORD *)nptr, &v199, 0);
                  }
                  else if ( !v193 )
                  {
                    v199 = (float)(v148 - v150) / (float)(v152 * *(float *)v153);
                    v200 = (char *)LODWORD(v156);
                    sub_60813570(v145, *(_DWORD *)nptr, &v199, 0);
                  }
                }
                goto LABEL_256;
              }
              v157 = v155 - 25;
              if ( v157 > 0xE )
                goto LABEL_243;
              v116 = nptr;
              if ( ((1 << v157) & 0x530A) == 0 )
              {
                if ( !v157 )
                  goto LABEL_242;
                goto LABEL_243;
              }
              v193 = 3;
            }
LABEL_256:
            v145 += 308;
            ++v146;
          }
        }
        v119 = v188;
        v120 = (int)v186;
        v121 = v183;
        v122 = v180;
        v1 = v168;
      }
      ++v118;
      v119 += 9856;
      v120 += 128;
      v121 += 3328;
      v122 += 128;
    }
    while ( (signed int)v118 < *v172 );
  }
  v158 = FIELD_U32(v1, 3936);
  if ( v158 )
    sub_6054D170(v158);
  if ( !*v167 )
  {
    v159 = FIELD_U16(dword_60CC6D78, 109048) & 0x7F;
    if ( v159 == 10 )
    {
      if ( *v169 != 1841 )
        goto LABEL_262;
      v160 = "STRM_BGM_DEMO_ED2";
    }
    else
    {
      if ( v159 || *v169 != 3016 )
        goto LABEL_262;
      v160 = "STRM_BGM_DEMO_OP2";
    }
    sub_60809028(SoundSystem_instance, v160);
  }
LABEL_262:
  ++*v169;
  return sub_60238B84(dword_60C8D9DC, 0);
}
