/* sub_60899E38
 * address: 0x60899E38   size: 3304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60899E38(int a1, float32x4_t *a2)
{
  float32x4_t v2; // q5
  unsigned __int64 v3; // d16
  unsigned __int64 v4; // d17
  float32x4_t *v5; // r4
  unsigned int v6; // r3
  int v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r7
  int v10; // r0
  unsigned int v11; // r2
  int v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r0
  float32x4_t v17; // q6
  float32x4_t *v18; // r12
  int v19; // r9
  int v20; // r8
  int v21; // r6
  _DWORD *v22; // r3
  int v23; // r0
  float v24; // s2
  __int32 v25; // lr
  float v26; // s0
  float v27; // s19
  float *v28; // r10
  float v29; // s16
  float *v30; // r5
  int v31; // r0
  unsigned int v32; // r3
  unsigned __int64 v33; // d17
  int v34; // r0
  void (__fastcall *v35)(_DWORD); // r2
  int v36; // r0
  float *v37; // r7
  int v38; // r0
  float v39; // r0
  float32x4_t v40; // q7
  float32x4_t v41; // q0
  int v42; // r0
  int v43; // r6
  int v44; // r9
  int v45; // r10
  float v46; // s16
  unsigned __int32 v47; // r3
  unsigned __int64 v48; // r4
  float v49; // r7
  int v50; // r3
  __int64 v51; // r4
  int v52; // r7
  int v53; // r2
  int v54; // r3
  __int64 v55; // r4
  int v56; // r7
  unsigned __int32 v57; // r3
  unsigned __int64 v58; // r4
  int v59; // r7
  int v60; // r3
  __int64 v61; // r4
  int v62; // r7
  int v63; // r2
  int v64; // r3
  int v65; // r4
  int v66; // r5
  int v67; // r7
  int v68; // r3
  int v69; // r4
  int v70; // r5
  int v71; // r7
  int v72; // r3
  int v73; // r4
  int v74; // r5
  int v75; // r7
  int v76; // r2
  int v77; // r3
  int v78; // r4
  int v79; // r5
  int v80; // r7
  int v81; // r3
  int v82; // r4
  int v83; // r5
  int v84; // r7
  int v85; // r3
  int v86; // r4
  int v87; // r5
  int v88; // r7
  int v89; // r1
  float v90; // s2
  int v91; // r0
  float32x2_t v92; // d2
  float32x2_t v93; // d3
  int v94; // r0
  float32x2_t v95; // d0
  float32x2_t v96; // d1
  int v97; // r12
  unsigned __int32 *v98; // r2
  unsigned __int32 *v99; // r1
  unsigned __int32 *v100; // r0
  float32x4_t v101; // q7
  float32x4_t v102; // q3
  float32x4_t v103; // q2
  float32x4_t v104; // q1
  bool v105; // zf
  int v106; // r0
  unsigned int v107; // d17.s[0]
  int v108; // r1
  float v109; // s0
  int v110; // r3
  int v111; // r2
  int v112; // lr
  int v113; // r4
  int v114; // r7
  int v115; // r12
  int v116; // lr
  int v117; // r3
  int v118; // r4
  int v119; // r5
  int v120; // r7
  int v121; // r2
  int v122; // r3
  int v123; // r4
  int v124; // r5
  int v125; // r7
  int v126; // r3
  int v127; // r4
  int v128; // r5
  int v129; // r7
  int v130; // r3
  int v131; // r4
  int v132; // r5
  int v133; // r7
  int v134; // r2
  int v135; // r3
  int v136; // r4
  int v137; // r5
  int v138; // r7
  float32x4_t v139; // q8
  float32x4_t v140; // q11
  float32x4_t v141; // q12
  float32x2_t v142; // d4
  float32x2_t v143; // d5
  float32x4_t v144; // q11
  float32x4_t v145; // q8
  float32x4_t v146; // q12
  int v147; // r8
  void (__fastcall *v148)(_DWORD, _DWORD, _DWORD, _DWORD); // r0
  __int32 v149; // r3
  int v150; // r0
  int v151; // r1
  float32x4_t *v152; // r2
  bool v153; // zf
  __int32 v154; // r3
  int v155; // lr
  __int32 v156; // r7
  int v157; // r3
  unsigned __int32 *v158; // r7
  unsigned __int64 v159; // d2
  unsigned __int64 v160; // d0
  unsigned __int64 v161; // d4
  unsigned __int32 *v162; // r5
  unsigned __int32 *v163; // r6
  int v164; // r6
  int v165; // r3
  float32x4_t v166; // q0
  int v167; // r7
  __int32 v168; // r2
  unsigned __int32 v169; // r0
  __int32 v170; // r6
  size_t v171; // r5
  void *v172; // r0
  void *v173; // r0
  float32x4_t *v174; // [sp+18h] [bp-1C0h]
  float32x4_t *v175; // [sp+1Ch] [bp-1BCh]
  float32x4_t *v176; // [sp+20h] [bp-1B8h]
  float32x4_t *v177; // [sp+24h] [bp-1B4h]
  float32x4_t *v178; // [sp+28h] [bp-1B0h]
  int v179; // [sp+34h] [bp-1A4h]
  int v180; // [sp+3Ch] [bp-19Ch]
  void (__fastcall *v181)(float32x4_t *, _DWORD, _DWORD, _DWORD *); // [sp+40h] [bp-198h]
  void (__fastcall *v182)(float32x4_t *); // [sp+44h] [bp-194h]
  void (__fastcall *v183)(float32x4_t *, _DWORD, void (__fastcall *)(_DWORD), unsigned int); // [sp+48h] [bp-190h]
  void (__fastcall *v184)(float32x4_t *); // [sp+4Ch] [bp-18Ch]
  float32x4_t v185; // [sp+50h] [bp-188h]
  float32x4_t v186; // [sp+60h] [bp-178h]
  float32x4_t v187; // [sp+70h] [bp-168h]
  float32x4_t *v188; // [sp+80h] [bp-158h]
  _BOOL4 v189; // [sp+84h] [bp-154h]
  _BOOL4 v190; // [sp+88h] [bp-150h]
  void (__fastcall *v192)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+90h] [bp-148h]
  int v193; // [sp+94h] [bp-144h]
  int v194; // [sp+94h] [bp-144h]
  void (__fastcall *v195)(_DWORD); // [sp+98h] [bp-140h]
  float32x4_t *v196; // [sp+A0h] [bp-138h]
  float32x4_t *v197; // [sp+A4h] [bp-134h]
  float32x4_t *v198; // [sp+A8h] [bp-130h]
  unsigned __int32 v199; // [sp+ACh] [bp-12Ch]
  int v200; // [sp+B0h] [bp-128h]
  unsigned int v201; // [sp+B4h] [bp-124h]
  int v202; // [sp+B4h] [bp-124h]
  float32x4_t *v203; // [sp+B8h] [bp-120h]
  float *v204; // [sp+BCh] [bp-11Ch]
  _DWORD *v205; // [sp+C0h] [bp-118h]
  float *v206; // [sp+C4h] [bp-114h]
  int v207; // [sp+C8h] [bp-110h]
  signed __int32 v208; // [sp+CCh] [bp-10Ch]
  float32x4_t v209; // [sp+D0h] [bp-108h] BYREF
  int v210; // [sp+E0h] [bp-F8h]
  int v211; // [sp+E4h] [bp-F4h]
  int v212; // [sp+E8h] [bp-F0h]
  __int64 v213; // [sp+ECh] [bp-ECh]
  int v214; // [sp+F4h] [bp-E4h]
  int v215; // [sp+F8h] [bp-E0h]
  int v216; // [sp+FCh] [bp-DCh]
  int v217; // [sp+100h] [bp-D8h]
  int v218; // [sp+104h] [bp-D4h]
  int v219; // [sp+108h] [bp-D0h]
  int v220; // [sp+10Ch] [bp-CCh]
  float32x4_t v221; // [sp+110h] [bp-C8h] BYREF
  float v222; // [sp+120h] [bp-B8h]
  int v223; // [sp+124h] [bp-B4h]
  int v224; // [sp+128h] [bp-B0h]
  __int64 v225; // [sp+12Ch] [bp-ACh]
  int v226; // [sp+134h] [bp-A4h]
  int v227; // [sp+138h] [bp-A0h]
  int v228; // [sp+13Ch] [bp-9Ch]
  int v229; // [sp+140h] [bp-98h]
  __int64 v230; // [sp+144h] [bp-94h]
  int v231; // [sp+14Ch] [bp-8Ch]
  __int64 v232; // [sp+150h] [bp-88h] BYREF
  unsigned __int64 v233; // [sp+158h] [bp-80h]
  float32x4_t v234; // [sp+160h] [bp-78h] BYREF
  float v235; // [sp+170h] [bp-68h] BYREF
  float v236[25]; // [sp+174h] [bp-64h] BYREF
  float32x4_t v237; // 0:q9.16
  float32x4_t v238; // 0:q13.16
  float32x4_t v239; // 0:q14.16
  float32x4_t v240; // 0:q14.16

  v5 = a2;
  v6 = 0;
  v7 = a2[44].n128_i32[2];
  if ( v7 )
  {
    v8 = FIELD_U32(v7, 32);
    v9 = FIELD_U32(v7, 36);
  }
  else
  {
    v9 = 0;
    v8 = 0;
  }
  v10 = a2[44].n128_i32[0];
  if ( v10 )
  {
    v11 = FIELD_U32(v10, 32);
    v6 = FIELD_U32(v10, 36);
  }
  else
  {
    v11 = 0;
  }
  v12 = a2[44].n128_i32[1];
  if ( v12 )
  {
    v13 = FIELD_U32(v12, 32);
    v14 = FIELD_U32(v12, 36);
  }
  else
  {
    v14 = 0;
    v13 = 0;
  }
  v15 = v9 | v6 | v14;
  v190 = v15 != 0;
  v16 = v8 | v11 | v13;
  v189 = v16 != 0;
  if ( v5[2].n128_i32[2] < 1 )
    goto LABEL_88;
  v17.n128_u32[3] = 0;
  v182 = (void (__fastcall *)(float32x4_t *))v8;
  v18 = v5 + 22;
  v19 = 264;
  v20 = 0;
  v21 = 0;
  v183 = (void (__fastcall *)(float32x4_t *, _DWORD, void (__fastcall *)(_DWORD), unsigned int))v9;
  v184 = (void (__fastcall *)(float32x4_t *))v6;
  v192 = (void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v13;
  v181 = (void (__fastcall *)(float32x4_t *, _DWORD, _DWORD, _DWORD *))v11;
  v188 = v5;
  v195 = (void (__fastcall *)(_DWORD))v14;
  v178 = v5 + 41;
  v203 = v5 + 22;
  v198 = v5 + 40;
  v197 = v5 + 39;
  v196 = v5 + 38;
  v177 = v5 + 37;
  v176 = v5 + 36;
  v175 = v5 + 35;
  v174 = v5 + 34;
  v199 = 0;
  v186.n128_u64[0] = v3;
  v186.n128_u64[1] = v4;
  v187.n128_u64[0] = v3;
  v187.n128_u64[1] = v4;
  v185.n128_u64[0] = v3;
  v185.n128_u64[1] = v4;
  do
  {
    v22 = (_DWORD *)(v5[9].n128_u32[1] + 24 * v21);
    if ( *v22 )
    {
      v23 = v5[9].n128_u32[1] + 24 * v21;
      v24 = v5[4].n128_f32[1];
      v25 = v5[9].n128_i32[2];
      v26 = FIELD_F32(v23, 8);
      v27 = FIELD_F32(v23, 12);
      v208 = v21;
      v28 = (float *)(v23 + 12);
      v204 = (float *)(v23 + 8);
      v205 = (_DWORD *)v23;
      v206 = (float *)(v23 + 12);
      v207 = v25;
      v29 = v24 - v26;
      if ( (float)(v24 - v26) >= v27 )
      {
        if ( v189 )
        {
          v221.n128_u32[2] = (unsigned __int32)v5;
          v221.n128_f32[3] = v24 - v26;
          v222 = v27;
          v223 = v21;
          v221.n128_u64[0] = FIELD_U64(v23, 16);
          v148 = v192;
          if ( v182 )
          {
            v182(&v221);
            v22 = v205;
            v25 = v207;
            v148 = v192;
          }
          if ( v181 )
          {
            v181(&v221, v181, 0, v22);
            v22 = v205;
            v25 = v207;
            v148 = v192;
          }
          if ( v148 )
          {
            v192(&v221, v192, 0, v22);
            v22 = v205;
            v25 = v207;
          }
          *(_DWORD *)(v5[9].n128_u32[1] + 24 * v21 + 20) = 0;
          *(_DWORD *)(v5[9].n128_u32[1] + 24 * v21 + 16) = 0;
          v18 = v203;
        }
        *v22 = 0;
      }
      else
      {
        v200 = v20;
        v30 = (float *)(v23 + 8);
        v31 = v5[18].n128_u32[1] + 16 * v21;
        v40.n128_u64[0] = *(_QWORD *)v31;
        v32 = FIELD_U32(v31, 8);
        v236[0] = v26;
        v235 = v27;
        v201 = v32;
        v33 = FIELD_U32(v31, 8);
        v234.n128_u64[0] = *(_QWORD *)v31;
        v234.n128_u64[1] = v33;
        v34 = v5[18].n128_u32[2] + 16 * v21;
        LODWORD(v33) = FIELD_U32(v34, 8);
        v232 = *(_QWORD *)v34;
        v233 = v33;
        sub_60883B64(a1, &v234, &v232, v236, v24 - v26, &v235, v5, v21, &v234, &v232);
        LODWORD(v33) = v234.n128_u32[2];
        v35 = v195;
        v36 = v5[18].n128_u32[1] + 16 * v21;
        *(_QWORD *)v36 = v234.n128_u64[0];
        FIELD_U32(v36, 8) = v33;
        LODWORD(v33) = v233;
        v37 = v28;
        v38 = v5[18].n128_u32[2] + 16 * v21;
        *(_QWORD *)v38 = v232;
        FIELD_U32(v38, 8) = v33;
        *v30 = v236[0];
        v39 = v235;
        *v28 = v235;
        v40.n128_u64[1] = v201;
        if ( v190 )
        {
          v221.n128_u64[1] = __PAIR64__(LODWORD(v29), (unsigned int)v5);
          v222 = v27;
          v223 = v21;
          v221.n128_u64[0] = *(_QWORD *)(v5[9].n128_u32[1] + 24 * v21 + 16);
          if ( v183 )
          {
            v183(&v221, v183, v195, v201);
            v35 = v195;
          }
          if ( v184 )
          {
            v184(&v221);
            v35 = v195;
          }
          if ( v35 )
            v195(&v221);
          *(_DWORD *)(v5[9].n128_u32[1] + 24 * v21 + 16) = v221.n128_u32[0];
          v39 = *v28;
        }
        v202 = v19;
        *(float *)(v5[18].n128_u32[1] + 16 * v21 + 12) = v39;
        *(float *)(v5[18].n128_u32[2] + 16 * v21 + 12) = *v30;
        v41 = vsubq_f32(v234, v40);
        if ( fabsf(v41.n128_f32[0]) > 0.01 || fabsf(v41.n128_f32[1]) > 0.01 || fabsf(v41.n128_f32[2]) > 0.01 )
        {
          v42 = v5[18].n128_u32[3] + 16 * v21;
          *(_QWORD *)v42 = v41.n128_u64[0];
          FIELD_U32(v42, 8) = v41.n128_u32[2];
        }
        v18 = v203;
        v25 = v207;
        v22 = v205;
        if ( *(int *)(v5[21].n128_u32[3] + 84) >= 1 )
        {
          v43 = v19;
          v44 = v20;
          v45 = 0;
          do
          {
            v147 = *(_DWORD *)(v25 + v44);
            if ( !v147 )
              break;
            if ( FIELD_U32(v147, 132) )
            {
              v89 = FIELD_U32(v147, 136);
              if ( !FIELD_U8(v89, 2020) )
              {
                if ( *v22 )
                {
                  v46 = *(float *)(v207 + 280 * v208 + 64);
                  if ( FIELD_F32(v147, 68) == 0.0 )
                  {
                    v193 = FIELD_U32(v147, 136);
                    if ( *(_BYTE *)(FIELD_U32(v147, 348) + 2) )
                    {
                      sub_608982F0(&v209, v147, &v221, &v209);
                      v47 = v221.n128_u32[1];
                      v48 = v221.n128_u64[1];
                      v49 = v222;
                      FIELD_U32(v147, 544) = v221.n128_u32[0];
                      FIELD_U32(v147, 548) = v47;
                      FIELD_U64(v147, 552) = v48;
                      FIELD_F32(v147, 560) = v49;
                      v50 = v224;
                      v51 = v225;
                      v52 = v226;
                      FIELD_U32(v147, 564) = v223;
                      FIELD_U32(v147, 568) = v50;
                      FIELD_U64(v147, 572) = v51;
                      FIELD_U32(v147, 580) = v52;
                      v53 = v228;
                      v54 = v229;
                      v55 = v230;
                      v56 = v231;
                      FIELD_U32(v147, 584) = v227;
                      FIELD_U32(v147, 588) = v53;
                      FIELD_U32(v147, 592) = v54;
                      FIELD_U64(v147, 596) = v55;
                      FIELD_U32(v147, 604) = v56;
                      v57 = v209.n128_u32[1];
                      v58 = v209.n128_u64[1];
                      v59 = v210;
                      FIELD_U32(v147, 608) = v209.n128_u32[0];
                      FIELD_U32(v147, 612) = v57;
                      FIELD_U64(v147, 616) = v58;
                      FIELD_U32(v147, 624) = v59;
                      v60 = v212;
                      v61 = v213;
                      v62 = v214;
                      FIELD_U32(v147, 628) = v211;
                      FIELD_U32(v147, 632) = v60;
                      FIELD_U64(v147, 636) = v61;
                      FIELD_U32(v147, 644) = v62;
                      v63 = v216;
                      v64 = v217;
                      v65 = v218;
                      v66 = v219;
                      v67 = v220;
                      FIELD_U32(v147, 648) = v215;
                    }
                    else
                    {
                      v68 = FIELD_U32(v147, 420);
                      v69 = FIELD_U32(v147, 424);
                      v70 = FIELD_U32(v147, 428);
                      v71 = FIELD_U32(v147, 432);
                      FIELD_U32(v147, 544) = FIELD_U32(v147, 416);
                      FIELD_U32(v147, 548) = v68;
                      FIELD_U32(v147, 552) = v69;
                      FIELD_U32(v147, 556) = v70;
                      FIELD_U32(v147, 560) = v71;
                      v72 = FIELD_U32(v147, 440);
                      v73 = FIELD_U32(v147, 444);
                      v74 = FIELD_U32(v147, 448);
                      v75 = FIELD_U32(v147, 452);
                      FIELD_U32(v147, 564) = FIELD_U32(v147, 436);
                      FIELD_U32(v147, 568) = v72;
                      FIELD_U32(v147, 572) = v73;
                      FIELD_U32(v147, 576) = v74;
                      FIELD_U32(v147, 580) = v75;
                      v76 = FIELD_U32(v147, 460);
                      v77 = FIELD_U32(v147, 464);
                      v78 = FIELD_U32(v147, 468);
                      v79 = FIELD_U32(v147, 472);
                      v80 = FIELD_U32(v147, 476);
                      FIELD_U32(v147, 584) = FIELD_U32(v147, 456);
                      FIELD_U32(v147, 588) = v76;
                      FIELD_U32(v147, 592) = v77;
                      FIELD_U32(v147, 596) = v78;
                      FIELD_U32(v147, 600) = v79;
                      FIELD_U32(v147, 604) = v80;
                      v81 = FIELD_U32(v147, 484);
                      v82 = FIELD_U32(v147, 488);
                      v83 = FIELD_U32(v147, 492);
                      v84 = FIELD_U32(v147, 496);
                      FIELD_U32(v147, 608) = FIELD_U32(v147, 480);
                      FIELD_U32(v147, 612) = v81;
                      FIELD_U32(v147, 616) = v82;
                      FIELD_U32(v147, 620) = v83;
                      FIELD_U32(v147, 624) = v84;
                      v85 = FIELD_U32(v147, 504);
                      v86 = FIELD_U32(v147, 508);
                      v87 = FIELD_U32(v147, 512);
                      v88 = FIELD_U32(v147, 516);
                      FIELD_U32(v147, 628) = FIELD_U32(v147, 500);
                      FIELD_U32(v147, 632) = v85;
                      FIELD_U32(v147, 636) = v86;
                      FIELD_U32(v147, 640) = v87;
                      FIELD_U32(v147, 644) = v88;
                      v63 = FIELD_U32(v147, 524);
                      v64 = FIELD_U32(v147, 528);
                      v65 = FIELD_U32(v147, 532);
                      v66 = FIELD_U32(v147, 536);
                      v67 = FIELD_U32(v147, 540);
                      FIELD_U32(v147, 648) = FIELD_U32(v147, 520);
                    }
                    FIELD_U32(v147, 652) = v63;
                    FIELD_U32(v147, 656) = v64;
                    FIELD_U32(v147, 660) = v65;
                    FIELD_U32(v147, 664) = v66;
                    FIELD_U32(v147, 668) = v67;
                    v5 = v188;
                    v18 = v203;
                    v22 = v205;
                    v37 = v206;
                    v25 = v207;
                    v89 = v193;
                  }
                  v90 = *v37 * (float)((float)FIELD_U32(v89, 2040) / 100.0);
                  if ( v90 <= v46 )
                  {
                    if ( FIELD_U8(v89, 2032) )
                    {
                      if ( (float)(v90 + (float)FIELD_U32(v89, 2044)) > v46 )
                        goto LABEL_41;
                    }
                    else if ( *v37 > v46 || !*(_BYTE *)v147 )
                    {
LABEL_41:
                      v91 = v5[18].n128_u32[1] + 16 * v208;
                      v92.n64_u64[0] = *(unsigned __int64 *)v91;
                      v93.n64_u64[0] = FIELD_U32(v91, 8);
                      v221.n128_u64[0] = *(_QWORD *)v91;
                      *(float32x2_t *)&v221.n128_i8[8] = v93;
                      v94 = v5[18].n128_u32[2] + 16 * v208;
                      v95.n64_u64[0] = *(unsigned __int64 *)v94;
                      v96.n64_u64[0] = FIELD_U32(v94, 8);
                      v209.n128_u64[0] = *(_QWORD *)v94;
                      *(float32x2_t *)&v209.n128_i8[8] = v96;
                      if ( *(_BYTE *)(v5[8].n128_u32[2] + 1875) == 1 )
                      {
                        v97 = v89;
                        v25 = v207;
                        v98 = (unsigned __int32 *)(v5[20].n128_u32[3] + 16 * v208);
                        v99 = (unsigned __int32 *)(v5[20].n128_u32[2] + 16 * v208);
                        v100 = (unsigned __int32 *)(v5[20].n128_u32[1] + 16 * v208);
                        v17.n128_u32[2] = *v98;
                        v101.n128_u32[1] = v99[1];
                        v17.n128_u32[1] = *v99;
                        v102.n128_u32[1] = v99[2];
                        v103.n128_u32[1] = v99[3];
                        v101.n128_u32[0] = v100[1];
                        v17.n128_u32[0] = *v100;
                        v102.n128_u32[0] = v100[2];
                        v103.n128_u32[0] = v100[3];
                        v101.n128_u64[1] = v98[1];
                        v102.n128_u64[1] = v98[2];
                        v103.n128_u64[1] = v98[3];
                        v221 = vaddq_f32(
                                 v103,
                                 vmlaq_lane_f32(
                                   vmlaq_lane_f32(vmulq_n_f32(v17, v92.n64_f32[0]), v101, v92, 1),
                                   v102,
                                   v93,
                                   0));
                        v102.n128_u64[0] = *(_QWORD *)v100;
                        v103.n128_u32[1] = v99[1];
                        v104.n128_u32[1] = v99[2];
                        v89 = v97;
                        v103.n128_u32[0] = v100[1];
                        v104.n128_u32[0] = v100[2];
                        v102.n128_u64[1] = *v98;
                        v103.n128_u64[1] = v98[1];
                        v104.n128_u64[1] = v98[2];
                        v209 = vaddq_f32(
                                 vmlaq_lane_f32(
                                   vmlaq_lane_f32(vmulq_n_f32(v102, v95.n64_f32[0]), v103, v95, 1),
                                   v104,
                                   v96,
                                   0),
                                 (float32x4_t)0);
                      }
                      FIELD_U32(v147, 1048) = &v221;
                      FIELD_U32(v147, 1052) = &v209;
                      FIELD_U32(v147, 1056) = v208;
                      v105 = v46 == 0.0;
                      if ( v46 != 0.0 )
                        v105 = FIELD_U8(v89, 2034) == 0;
                      if ( !v105 )
                      {
                        v106 = v5[18].n128_u32[3] + 16 * v208;
                        v107 = FIELD_U32(v106, 8);
                        FIELD_U64(v147, 688) = *(_QWORD *)v106;
                        FIELD_U64(v147, 696) = v107;
                      }
                      v108 = v25 + v43;
                      v109 = v5[4].n128_f32[2];
                      v37 = v206;
                      v110 = v25 + v44 + 200;
                      v111 = v25 + v44 + 136;
                      v112 = v25 + v44 + 72;
                      if ( *(_BYTE *)(FIELD_U32(v147, 136) + 1875) == 1 && *(_BYTE *)(v5[8].n128_u32[2] + 1875) != 1 )
                      {
                        v194 = v110;
                        v179 = v112;
                        v113 = FIELD_U32(v147, 420);
                        v114 = FIELD_U32(v147, 424);
                        v115 = FIELD_U32(v147, 428);
                        v116 = FIELD_U32(v147, 432);
                        FIELD_U32(v147, 544) = FIELD_U32(v147, 416);
                        FIELD_U32(v147, 548) = v113;
                        FIELD_U32(v147, 552) = v114;
                        FIELD_U32(v147, 556) = v115;
                        FIELD_U32(v147, 560) = v116;
                        v180 = v111;
                        v117 = FIELD_U32(v147, 440);
                        v118 = FIELD_U32(v147, 444);
                        v119 = FIELD_U32(v147, 448);
                        v120 = FIELD_U32(v147, 452);
                        FIELD_U32(v147, 564) = FIELD_U32(v147, 436);
                        FIELD_U32(v147, 568) = v117;
                        FIELD_U32(v147, 572) = v118;
                        FIELD_U32(v147, 576) = v119;
                        FIELD_U32(v147, 580) = v120;
                        v121 = FIELD_U32(v147, 460);
                        v122 = FIELD_U32(v147, 464);
                        v123 = FIELD_U32(v147, 468);
                        v124 = FIELD_U32(v147, 472);
                        v125 = FIELD_U32(v147, 476);
                        FIELD_U32(v147, 584) = FIELD_U32(v147, 456);
                        FIELD_U32(v147, 588) = v121;
                        FIELD_U32(v147, 592) = v122;
                        FIELD_U32(v147, 596) = v123;
                        FIELD_U32(v147, 600) = v124;
                        FIELD_U32(v147, 604) = v125;
                        v126 = FIELD_U32(v147, 484);
                        v127 = FIELD_U32(v147, 488);
                        v128 = FIELD_U32(v147, 492);
                        v129 = FIELD_U32(v147, 496);
                        FIELD_U32(v147, 608) = FIELD_U32(v147, 480);
                        FIELD_U32(v147, 612) = v126;
                        FIELD_U32(v147, 616) = v127;
                        FIELD_U32(v147, 620) = v128;
                        FIELD_U32(v147, 624) = v129;
                        v130 = FIELD_U32(v147, 504);
                        v131 = FIELD_U32(v147, 508);
                        v132 = FIELD_U32(v147, 512);
                        v133 = FIELD_U32(v147, 516);
                        FIELD_U32(v147, 628) = FIELD_U32(v147, 500);
                        FIELD_U32(v147, 632) = v130;
                        FIELD_U32(v147, 636) = v131;
                        FIELD_U32(v147, 640) = v132;
                        FIELD_U32(v147, 644) = v133;
                        v134 = FIELD_U32(v147, 524);
                        v135 = FIELD_U32(v147, 528);
                        v136 = FIELD_U32(v147, 532);
                        v137 = FIELD_U32(v147, 536);
                        v138 = FIELD_U32(v147, 540);
                        FIELD_U32(v147, 648) = FIELD_U32(v147, 520);
                        FIELD_U32(v147, 652) = v134;
                        FIELD_U32(v147, 656) = v135;
                        FIELD_U32(v147, 660) = v136;
                        FIELD_U32(v147, 664) = v137;
                        FIELD_U32(v147, 668) = v138;
                        v112 = v179;
                        v110 = v194;
                        v37 = v206;
                        v239 = *v177;
                        v139 = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmulq_n_f32(*v174, FIELD_F32(v147, 560)),
                                   *v175,
                                   *(float32x2_t *)(v147 + 560),
                                   1),
                                 *v176,
                                 *(float32x2_t *)(v147 + 568),
                                 0);
                        v140 = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmulq_n_f32(*v174, FIELD_F32(v147, 592)),
                                   *v175,
                                   *(float32x2_t *)(v147 + 592),
                                   1),
                                 *v176,
                                 *(float32x2_t *)(v147 + 600),
                                 0);
                        v141 = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmulq_n_f32(*v174, FIELD_F32(v147, 576)),
                                   *v175,
                                   *(float32x2_t *)(v147 + 576),
                                   1),
                                 *v176,
                                 *(float32x2_t *)(v147 + 584),
                                 0);
                        *(float32x4_t *)(v147 + 544) = vmlaq_lane_f32(
                                                         vmlaq_lane_f32(
                                                           vmulq_n_f32(*v174, FIELD_F32(v147, 544)),
                                                           *v175,
                                                           *(float32x2_t *)(v147 + 544),
                                                           1),
                                                         *v176,
                                                         *(float32x2_t *)(v147 + 552),
                                                         0);
                        *(float32x4_t *)(v147 + 560) = v139;
                        *(float32x4_t *)(v147 + 576) = v141;
                        *(float32x4_t *)(v147 + 592) = vaddq_f32(v239, v140);
                        v142.n64_u64[0] = *(unsigned __int64 *)(v147 + 656);
                        v143.n64_u64[0] = *(unsigned __int64 *)(v147 + 664);
                        v237 = *v197;
                        v144 = vmulq_n_f32(*v196, v142.n64_f32[0]);
                        v238 = *v198;
                        v240 = *v178;
                        v145 = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmulq_n_f32(*v196, FIELD_F32(v147, 624)),
                                   *v197,
                                   *(float32x2_t *)(v147 + 624),
                                   1),
                                 *v198,
                                 *(float32x2_t *)(v147 + 632),
                                 0);
                        v146 = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmulq_n_f32(*v196, FIELD_F32(v147, 640)),
                                   *v197,
                                   *(float32x2_t *)(v147 + 640),
                                   1),
                                 *v198,
                                 *(float32x2_t *)(v147 + 648),
                                 0);
                        *(float32x4_t *)(v147 + 608) = vmlaq_lane_f32(
                                                         vmlaq_lane_f32(
                                                           vmulq_n_f32(*v196, FIELD_F32(v147, 608)),
                                                           *v197,
                                                           *(float32x2_t *)(v147 + 608),
                                                           1),
                                                         *v198,
                                                         *(float32x2_t *)(v147 + 616),
                                                         0);
                        *(float32x4_t *)(v147 + 624) = v145;
                        *(float32x4_t *)(v147 + 640) = v146;
                        v111 = v180;
                        *(float32x4_t *)(v147 + 656) = vaddq_f32(
                                                         v240,
                                                         vmlaq_lane_f32(
                                                           vmlaq_lane_f32(v144, v237, v142, 1),
                                                           v238,
                                                           v143,
                                                           0));
                        v5 = v188;
                      }
                      ((void (__fastcall *)(_DWORD, int, int, int, float, int, int, _DWORD))loc_60898898)(
                        FIELD_U32(v147, 132),
                        v112,
                        v111,
                        v110,
                        v109,
                        v108,
                        v147,
                        0);
                      FIELD_U32(v147, 1048) = 0;
                      FIELD_U32(v147, 1052) = 0;
                      FIELD_U32(v147, 1056) = -1;
                      v18 = v203;
                      v25 = v207;
                      v22 = v205;
                      goto LABEL_54;
                    }
                    if ( !*(_BYTE *)(v25 + v43) )
                      goto LABEL_41;
                  }
                }
              }
            }
LABEL_54:
            ++v45;
            ++v43;
            v44 += 4;
          }
          while ( v45 < *(_DWORD *)(v5[21].n128_u32[3] + 84) );
        }
        v19 = v202;
        v20 = v200;
        v21 = v208;
        ++v199;
      }
      if ( v5[22].n128_u32[0] && *v22 )
      {
        v149 = v5[21].n128_i32[3];
        if ( FIELD_S32(v149, 84) >= 1 )
        {
          v150 = v25 + 280 * v208;
          v151 = 0;
          do
          {
            v152 = *(float32x4_t **)(v150 + 4 * v151);
            if ( v152 )
            {
              v153 = *(_BYTE *)(*(_DWORD *)(FIELD_U32(v18, 0x0)[v151] + 12) + 2020) == 0;
              if ( *(_BYTE *)(*(_DWORD *)(FIELD_U32(v18, 0x0)[v151] + 12) + 2020) )
                v153 = v152[8].n128_u32[1] == 0;
              if ( !v153 && v152[56].n128_u32[2] == v5[1].n128_u32[1] )
              {
                v152[57].n128_f32[3] = v5[4].n128_f32[1] - *v204;
                v152[57].n128_f32[1] = *v206;
                v154 = v5[8].n128_i32[2];
                v155 = FIELD_U8(v154, 1875);
                if ( FIELD_U8(v154, 1875) )
                {
                  v156 = v5[20].n128_i32[1];
                  if ( v156 )
                  {
                    v157 = v208;
                    if ( (signed __int32)v5[2].n128_u32[2] >= v208 )
                    {
                      v158 = (unsigned __int32 *)(v156 + 16 * v208);
                      LODWORD(v159) = v158[3];
                      LODWORD(v160) = v158[2];
                      v2.n128_u32[0] = *v158;
                      LODWORD(v161) = v158[1];
                      v162 = (unsigned __int32 *)(v5[20].n128_u32[3] + 16 * v208);
                      v163 = (unsigned __int32 *)(v5[20].n128_u32[2] + 16 * v208);
                      v2.n128_u32[2] = *v162;
                      HIDWORD(v159) = v163[3];
                      HIDWORD(v160) = v163[2];
                      v2.n128_u32[1] = *v163;
                      HIDWORD(v161) = v163[1];
                      v2.n128_u32[3] = 0;
                      v186.n128_u64[0] = v159;
                      v186.n128_u64[1] = v162[3];
                      v187.n128_u64[0] = v160;
                      v187.n128_u64[1] = v162[2];
                      v185.n128_u64[0] = v161;
                      v185.n128_u64[1] = v162[1];
                    }
                  }
                  else
                  {
                    v157 = v208;
                  }
                  v167 = v5[18].n128_u32[1] + 16 * v157;
                  v166.n128_u64[0] = *(_QWORD *)v167;
                  v166.n128_u64[1] = FIELD_U32(v167, 8);
                  if ( v155 == 1 )
                    v166 = vaddq_f32(
                             v186,
                             vmlaq_lane_f32(
                               vmlaq_lane_f32(vmulq_n_f32(v2, v166.n128_f32[0]), v185, (float32x2_t)v166.n128_u64[0], 1),
                               v187,
                               (float32x2_t)v166.n128_u32[2],
                               0));
                  v164 = v208;
                }
                else
                {
                  v164 = v208;
                  v165 = v5[18].n128_u32[1] + 16 * v208;
                  v166.n128_u64[0] = *(_QWORD *)v165;
                  v166.n128_u64[1] = FIELD_U32(v165, 8);
                }
                v152[63] = v166;
                v152[64] = vmlaq_lane_f32(
                             vmlaq_lane_f32(
                               vmulq_n_f32(*v196, *(float *)(v5[18].n128_u32[2] + 16 * v164)),
                               *v197,
                               *(float32x2_t *)(v5[18].n128_u32[2] + 16 * v164),
                               1),
                             *v198,
                             (float32x2_t)*(unsigned int *)(v5[18].n128_u32[2] + 16 * v164 + 8),
                             0);
                v149 = v5[21].n128_i32[3];
              }
            }
            ++v151;
          }
          while ( v151 < FIELD_U32(v149, 84) );
        }
        v21 = v208;
      }
    }
    v168 = v5[2].n128_i32[2];
    ++v21;
    v19 += 280;
    v20 += 280;
  }
  while ( v21 < v168 );
  v169 = v199;
  if ( !v199 )
  {
LABEL_88:
    v169 = 0;
    v168 = 0;
    v5[2].n128_u32[2] = 0;
    v5[21].n128_u32[2] = 0;
  }
  v5[2].n128_u32[3] = v169;
  if ( !*(_BYTE *)(v5[8].n128_u32[2] + 1874) )
  {
    v170 = v5[9].n128_i32[3];
    v171 = 16 * v168;
    qmemcpy(*(void **)v170, (const void *)v5[18].n128_u32[1], 16 * v168);
    qmemcpy(*(void **)(v170 + 4), (const void *)v5[18].n128_u32[2], v171);
    qmemcpy(*(void **)(v170 + 8), (const void *)v5[18].n128_u32[3], v171);
    qmemcpy(*(void **)(v170 + 16), (const void *)v5[19].n128_u32[1], v171);
    qmemcpy(*(void **)(v170 + 12), (const void *)v5[19].n128_u32[0], v171);
    qmemcpy(*(void **)(v170 + 20), (const void *)v5[19].n128_u32[2], v171);
    v172 = *(void **)(v170 + 24);
    if ( v172 )
    {
      qmemcpy(v172, (const void *)v5[19].n128_u32[3], v171);
      qmemcpy(*(void **)(v170 + 28), (const void *)v5[20].n128_u32[0], v171);
    }
    v173 = *(void **)(v170 + 32);
    if ( v173 )
    {
      qmemcpy(v173, (const void *)v5[20].n128_u32[1], v171);
      qmemcpy(*(void **)(v170 + 36), (const void *)v5[20].n128_u32[2], v171);
      qmemcpy(*(void **)(v170 + 40), (const void *)v5[20].n128_u32[3], v171);
    }
  }
}
