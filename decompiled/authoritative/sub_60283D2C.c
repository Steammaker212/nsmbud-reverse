int __fastcall sub_60283D2C(int a1)
{
  float32x2_t v1; // d10
  float v3; // s16
  float v4; // s0
  float v5; // s28
  int v6; // r7
  float v7; // s26
  float v8; // s0
  int v9; // r4
  float v10; // s0
  float v11; // s19
  float v12; // s26
  int v13; // r0
  int v14; // r1
  bool v15; // zf
  float v16; // s0
  int v17; // r0
  float v18; // s24
  float v19; // s17
  int v20; // r10
  int v21; // r4
  int v22; // r8
  unsigned int v23; // r6
  unsigned int U32; // r7
  int *v25; // r0
  unsigned int v26; // r1
  unsigned int *v27; // r2
  unsigned int v28; // r2
  float v29; // s19
  float v30; // s18
  unsigned int v31; // r0
  float *v32; // r1
  float v33; // s22
  int v34; // r0
  float *v35; // r1
  float *v36; // r0
  unsigned int v37; // r1
  float *v38; // r2
  float v39; // s8
  float v40; // s2
  int *v41; // r1
  unsigned int v42; // r0
  float32x2_t v43; // d0
  float32x2_t v44; // d1
  unsigned int *v45; // r1
  float *v46; // r0
  float v47; // s0
  _DWORD *v48; // r0
  float32x2_t v49; // d16
  float *v50; // r0
  int *v51; // r0
  float *v52; // r0
  int *v53; // r0
  int *v54; // r0
  int v55; // r5
  int v56; // r0
  float *v57; // r1
  float v58; // s2
  float *v59; // r0
  float v60; // s0
  float v61; // s28
  float v62; // s2
  float v63; // s29
  float v64; // r12
  float v65; // s27
  int v66; // r0
  int v67; // r1
  float v68; // r7
  float v69; // s17
  float v70; // s22
  int *v71; // r0
  unsigned int v72; // r1
  int *v73; // r2
  int *v74; // r0
  int v75; // r0
  bool v76; // zf
  float *v77; // r0
  int *v78; // r0
  bool v79; // cc
  int v80; // r1
  int *v81; // r0
  float v82; // s0
  int *v83; // r0
  int v84; // r0
  bool v85; // zf
  float *v86; // r0
  int *v87; // r0
  int v88; // r0
  bool v89; // zf
  float v90; // r5
  float v91; // s22
  float *v92; // r0
  int *v93; // r0
  float v94; // s0
  int *v95; // r0
  unsigned int *v96; // r0
  float *v97; // r2
  float v98; // s0
  float *v99; // r2
  float v100; // s2
  float v101; // s4
  int v102; // r1
  _DWORD *v103; // r0
  float v104; // s2
  float *v105; // r0
  int *v106; // r0
  int v107; // r0
  bool v108; // zf
  float32x2_t v109; // d0
  int *v110; // r0
  float *v111; // r0
  float *v112; // r7
  int *v113; // r0
  float v114; // s19
  float v115; // s24
  float v116; // s17
  float v117; // s0
  float v118; // s6
  float v119; // s2
  float v120; // s4
  float v121; // s6
  float v122; // s4
  float *v123; // r0
  float v124; // s8
  int *v125; // r0
  int v126; // r1
  int *v127; // r0
  int v128; // r1
  float *v129; // r0
  int *v130; // r3
  unsigned int v131; // r2
  int *v132; // r0
  int *v133; // r1
  unsigned int v134; // r1
  unsigned __int8 v135; // r3
  unsigned int v136; // s0
  int v137; // r3
  float *v138; // r0
  unsigned int *v139; // r0
  int *v140; // r0
  int v141; // r1
  int v142; // r1
  __int64 v143; // d17
  __int64 v144; // d17
  __int64 v145; // d17
  float *v147; // [sp+0h] [bp-118h]
  float *x; // [sp+4h] [bp-114h]
  int v149; // [sp+8h] [bp-110h]
  int v150; // [sp+Ch] [bp-10Ch]
  float v151; // [sp+10h] [bp-108h]
  int v152; // [sp+14h] [bp-104h]
  _DWORD *v153; // [sp+20h] [bp-F8h]
  _BYTE *v154; // [sp+24h] [bp-F4h]
  float v155; // [sp+30h] [bp-E8h]
  float **v156; // [sp+34h] [bp-E4h]
  unsigned int *v157; // [sp+38h] [bp-E0h]
  float *v158; // [sp+3Ch] [bp-DCh]
  float *v159; // [sp+40h] [bp-D8h]
  float *v160; // [sp+44h] [bp-D4h]
  float v161; // [sp+48h] [bp-D0h]
  float *v162; // [sp+4Ch] [bp-CCh]
  unsigned int *v163; // [sp+50h] [bp-C8h]
  unsigned int *v164; // [sp+54h] [bp-C4h]
  unsigned int **v165; // [sp+58h] [bp-C0h]
  unsigned int *v166; // [sp+5Ch] [bp-BCh]
  _DWORD **v167; // [sp+60h] [bp-B8h]
  float *v168; // [sp+64h] [bp-B4h]
  unsigned int *v169; // [sp+68h] [bp-B0h]
  float **v170; // [sp+6Ch] [bp-ACh]
  unsigned int *v171; // [sp+70h] [bp-A8h]
  int **v172; // [sp+74h] [bp-A4h]
  float **v173; // [sp+78h] [bp-A0h]
  float *v174; // [sp+7Ch] [bp-9Ch]
  unsigned int *v175; // [sp+84h] [bp-94h]
  unsigned int **v176; // [sp+88h] [bp-90h]
  unsigned int *v177; // [sp+8Ch] [bp-8Ch]
  float **v178; // [sp+90h] [bp-88h]
  unsigned int *v179; // [sp+94h] [bp-84h]
  float **v180; // [sp+98h] [bp-80h]
  unsigned int *v181; // [sp+9Ch] [bp-7Ch]
  int **v182; // [sp+A0h] [bp-78h]
  int v183; // [sp+A4h] [bp-74h]
  unsigned int *v184; // [sp+A8h] [bp-70h]
  int **v185; // [sp+ACh] [bp-6Ch]

  v162 = (float *)(a1 + 6468);
  v3 = *(float *)(a1 + 6468);
  v4 = *(float *)(dword_60CC6484 + 112);
  if ( (float)(v4 + *(float *)(dword_60CC6484 + 104)) >= (float)(v3 + -64.0) )
  {
    v5 = *(float *)(a1 + 6476) - v3;
    if ( (float)((float)(v3 + v5) + 64.0) >= v4 )
    {
      v160 = (float *)(a1 + 6476);
      v174 = (float *)dword_60CC6484;
      v1.n64_u32[0] = 1.0;
      v6 = 0;
      v159 = (float *)(a1 + 6472);
      v7 = *(float *)(a1 + 6472);
      v158 = (float *)(a1 + 6480);
      v8 = *(float *)(a1 + 6480);
      *(_DWORD *)(a1 + 6356) = 75;
      v9 = a1 + 6484;
      v10 = v8 - v7;
      v11 = v10 / 150.0;
      v12 = v7 + (float)(v10 * 0.5);
      while ( 1 )
      {
        v13 = *(_DWORD *)(PlayerMgr_instance + v6 + 32);
        if ( !v13 || (*(_BYTE *)(v13 + 1219) & 8) != 0 )
          goto LABEL_15;
        v14 = *(_DWORD *)(v13 + 1212);
        v15 = (v14 & 0x40) == 0;
        if ( (v14 & 0x40) == 0 )
          v15 = (*(_BYTE *)(v13 + 1207) & 8) == 0;
        if ( !v15 )
          break;
        if ( (v14 & 0x100) != 0 || *(_DWORD *)(v13 + 1208) & 0x8000000 | v14 & 0x10 )
        {
          v17 = v9 + v6;
          v16 = 0.3;
          goto LABEL_14;
        }
        *(_DWORD *)(v9 + v6) = 0;
LABEL_15:
        v6 += 4;
        if ( v6 == 16 )
        {
          v18 = v3 + (float)(v5 * 0.5);
          v19 = 8.0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v150 = a1;
          v152 = a1 + 7116;
          x = (float *)(a1 + 8948);
          v151 = v18;
          v147 = (float *)(a1 + 8944);
          v154 = (_BYTE *)(a1 + 8941);
          v153 = (_DWORD *)(a1 + 9000);
          v172 = (int **)(a1 + 6416);
          v171 = (unsigned int *)(a1 + 6412);
          v170 = (float **)(a1 + 6384);
          v169 = (unsigned int *)(a1 + 6380);
          v178 = (float **)(a1 + 6392);
          v177 = (unsigned int *)(a1 + 6388);
          v167 = (_DWORD **)(a1 + 6440);
          v166 = (unsigned int *)(a1 + 6436);
          v165 = (unsigned int **)(a1 + 6432);
          v164 = (unsigned int *)(a1 + 6428);
          v168 = (float *)(a1 + 6500);
          v155 = (float)((float)(v5 / 150.0) + v11) * 35.0;
          v180 = (float **)(a1 + 6376);
          v179 = (unsigned int *)(a1 + 6372);
          v173 = (float **)(a1 + 6408);
          v163 = (unsigned int *)(a1 + 6404);
          v157 = (unsigned int *)(a1 + 6396);
          v182 = (int **)(a1 + 6456);
          v181 = (unsigned int *)(a1 + 6452);
          v176 = (unsigned int **)(a1 + 6448);
          v175 = (unsigned int *)(a1 + 6444);
          v185 = (int **)(a1 + 6424);
          v184 = (unsigned int *)(a1 + 6420);
          v156 = (float **)(a1 + 6400);
          v183 = 0;
          v149 = 0;
          while ( 1 )
          {
            U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
            v25 = *v185;
            v26 = *v184;
            v27 = (unsigned int *)*v185;
            if ( *v184 > v23 )
              v27 = (unsigned int *)((char *)v27 + v21);
            v28 = *v27;
            if ( v28 > 0x14 )
              goto LABEL_79;
            if ( ((1 << v28) & 0x100C04) == 0 )
            {
              if ( v28 )
              {
                if ( v28 != 1 )
                {
                  v29 = 0.0;
                  goto LABEL_164;
                }
              }
              else
              {
                LODWORD(v30) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
                v31 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
                v32 = *v156;
                v33 = (float)((float)(v30 + -1.0) * 0.9) + 0.1;
                v34 = (v31 >> 9) | 0x3F800000;
                if ( *v157 > v23 )
                  v32 = (float *)((char *)v32 + v21);
                *v32 = v33 * 0.5;
                v35 = *v173;
                if ( *v163 > v23 )
                  v35 = (float *)((char *)v35 + v21);
                *v35 = (float)((float)(*(float *)&v34 + -1.0) * 0.2) * 0.8;
                v36 = *v180;
                v37 = (unsigned int)(float)((float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 65535.0)
                                          * 65535.0);
                v38 = (float *)((char *)sinLutTable + ((v37 >> 20) & 0xFF0));
                if ( *v179 > v23 )
                  v36 = (float *)((char *)v36 + v22);
                v39 = (float)(v37 & 0xFFFFFF);
                v40 = (float)(v38[2] + (float)((float)(v39 * v38[3]) * 0.000000059605))
                    * (float)((float)(*v158 - *v159) * 0.5);
                *v36 = v18
                     + (float)(v33
                             * (float)((float)(*v38 + (float)((float)(v39 * v38[1]) * 0.000000059605))
                                     * (float)((float)(*v160 - *v162) * 0.5)));
                v36[1] = v12 + (float)(v33 * v40);
                v36[2] = v33;
                *v168 = 1.0;
                v41 = *v182;
                if ( *v181 > v23 )
                  v41 = (int *)((char *)v41 + v21);
                *v41 = 255;
                v42 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
                v45 = *v165;
                if ( *v164 > v23 )
                  v45 = (unsigned int *)((char *)v45 + v21);
                *v45 = v42;
                v46 = *v173;
                if ( *v163 > v23 )
                  v46 = (float *)((char *)v46 + v21);
                v47 = *v46;
                v48 = *v167;
                v43.n64_f32[0] = v47 * 65536.0;
                if ( *v166 > v23 )
                  v48 = (_DWORD *)((char *)v48 + v21);
                *v48 = (int)(float)(v43.n64_f32[0] * 65536.0);
                v44.n64_f32[0] = v155 * (float)((float)((float)(1.0 - v33) * 0.5) + 0.5);
                v43.n64_u32[0] = 1112014848;
                v49.n64_u64[0] = vmin_f32(v44, v43).n64_u64[0];
                v43.n64_u32[0] = 20.0;
                v50 = *v178;
                v43.n64_u32[0] = vmax_f32(v49, v43).n64_u32[0];
                if ( *v177 > v23 )
                  v50 = (float *)((char *)v50 + v20);
                *v50 = v43.n64_f32[0];
                v50[1] = 0.0;
                v51 = *v185;
                if ( *v184 > v23 )
                  v51 = (int *)((char *)v51 + v21);
                ++*v51;
              }
              v52 = *v170;
              if ( *v169 > v23 )
                v52 = (float *)((char *)v52 + v22);
              *v52 = 0.0;
              v52[1] = 0.0;
              v52[2] = 0.0;
              v53 = *v172;
              if ( *v171 > v23 )
                v53 = (int *)((char *)v53 + v21);
              *v53 = 0;
              v54 = *v185;
              if ( *v184 > v23 )
                v54 = (int *)((char *)v54 + v21);
              ++*v54;
              v25 = *v185;
              v26 = *v184;
            }
            v55 = v183;
            if ( v26 > v23 )
              v25 = (int *)((char *)v25 + v21);
            v56 = *v25;
            v57 = *v178;
            if ( *v177 > v23 )
              v57 = (float *)((char *)v57 + v20);
            if ( v56 < 3 )
              v55 = v183 + 1;
            v58 = v174[28];
            v59 = *v180;
            v60 = *v57 + v57[1];
            if ( *v179 > v23 )
              v59 = (float *)((char *)v59 + v22);
            v61 = *v59;
            v183 = v55;
            if ( *v59 >= (float)(v58 - v60) )
            {
              if ( v61 <= (float)(v60 + (float)(v58 + v174[26])) )
              {
                v62 = v174[31];
                v63 = v59[1];
                if ( v63 <= (float)(v60 + v62) && v63 >= (float)((float)(v62 - v174[27]) - v60) )
                {
                  v64 = v59[2];
                  v65 = v19;
                  v29 = *v168;
                  v66 = *v153 & 3;
                  v67 = *(_DWORD *)(PlayerMgr_instance + 4 * v66 + 32);
                  v161 = v64;
                  if ( v67 && (*(_BYTE *)(v67 + 1219) & 8) == 0 )
                  {
                    v68 = *(float *)(v67 + 108);
                    v69 = *(float *)(v67 + 112) + 10.0;
                    v70 = (float)((float)((float)(v69 - v63) * (float)(v69 - v63))
                                + (float)((float)(v68 - v61) * (float)(v68 - v61)))
                        + (float)((float)(v64 - v64) * (float)(v64 - v64));
                    if ( sqrtf(v70) >= 30.0 )
                    {
                      v18 = v151;
                      if ( sqrtf(v70) < (float)((float)(*(float *)(v150 + 4 * v66 + 6484) * 120.0) + 30.0) )
                      {
                        v81 = *v172;
                        v82 = sqrtf(v70) / -120.0;
                        if ( *v171 > v23 )
                          v81 = (int *)((char *)v81 + v21);
                        *v81 = (int)(float)((float)((float)(v82 + 1.0) + 1.0) * 400.0);
                        v83 = *v185;
                        if ( *v184 > v23 )
                          v83 = (int *)((char *)v83 + v21);
                        v84 = *v83;
                        v85 = v84 == 10;
                        if ( v84 != 10 )
                          v85 = v84 == 20;
                        if ( !v85 )
                        {
                          v86 = (float *)(v152 + v22);
                          *(v86 - 1) = v68;
                          *v86 = v69;
                          v86[1] = v64;
                          v78 = *v185;
                          v79 = *v184 > v23;
                          v80 = 10;
LABEL_89:
                          if ( v79 )
                            v78 = (int *)((char *)v78 + v21);
                          *v78 = v80;
                        }
                      }
                    }
                    else
                    {
                      v18 = v151;
                      v71 = *v185;
                      v72 = *v184;
                      v73 = *v185;
                      if ( *v184 > v23 )
                        v73 = (int *)((char *)v73 + v21);
                      if ( *v73 != 10 )
                      {
                        v74 = *v172;
                        if ( *v171 > v23 )
                          v74 = (int *)((char *)v74 + v21);
                        *v74 = 600;
                        v71 = *v185;
                        v72 = *v184;
                      }
                      if ( v72 > v23 )
                        v71 = (int *)((char *)v71 + v21);
                      v75 = *v71;
                      v76 = v75 == 10;
                      if ( v75 != 10 )
                        v76 = v75 == 20;
                      if ( !v76 )
                      {
                        v77 = (float *)(v152 + v22);
                        *(v77 - 1) = v68;
                        *v77 = v69;
                        v77[1] = v64;
                        v78 = *v185;
                        v79 = *v184 > v23;
                        v80 = 20;
                        goto LABEL_89;
                      }
                    }
                  }
                  v19 = v65;
                  if ( *v154 )
                  {
                    v87 = *v185;
                    if ( *v184 > v23 )
                      v87 = (int *)((char *)v87 + v21);
                    v88 = *v87;
                    v89 = v88 == 10;
                    if ( v88 != 10 )
                      v89 = v88 == 20;
                    if ( !v89 )
                    {
                      v90 = *x;
                      v91 = (float)((float)((float)(v63 - *x) * (float)(v63 - *x))
                                  + (float)((float)(v61 - *v147) * (float)(v61 - *v147)))
                          + (float)((float)(v64 - v64) * (float)(v64 - v64));
                      if ( sqrtf(v91) < 60.0 )
                      {
                        v92 = (float *)(v152 + v22);
                        *(v92 - 1) = *v147;
                        *v92 = v90;
                        v92[1] = v64;
                        v93 = *v172;
                        v94 = sqrtf(v91) / -60.0;
                        if ( *v171 > v23 )
                          v93 = (int *)((char *)v93 + v21);
                        *v93 = (int)(float)((float)((float)(v94 + 1.0) + 1.0) * 400.0);
                        v95 = *v185;
                        if ( *v184 > v23 )
                          v95 = (int *)((char *)v95 + v21);
                        *v95 = 10;
                      }
                    }
                  }
                  v96 = *v165;
                  v97 = *v173;
                  if ( *v164 > v23 )
                    v96 = (unsigned int *)((char *)v96 + v21);
                  if ( *v163 > v23 )
                    v97 = (float *)((char *)v97 + v21);
                  v98 = *v97;
                  v99 = (float *)((char *)sinLutTable + ((*v96 >> 20) & 0xFF0));
                  v100 = *v99;
                  v101 = v99[1];
                  v102 = *v96 & 0xFFFFFF;
                  *v96 += (unsigned int)(float)(v98 * 65536000.0);
                  v103 = *v167;
                  if ( *v166 > v23 )
                    v103 = (_DWORD *)((char *)v103 + v21);
                  v104 = v100 + (float)((float)((float)(unsigned int)v102 * v101) * 0.000000059605);
                  *v103 = (int)(float)((float)(v104 * 8000.1) * 65536.0);
                  v105 = *v178;
                  if ( *v177 > v23 )
                    v105 = (float *)((char *)v105 + v20);
                  v105[1] = v104 * (float)(*v105 * 0.15);
                  v106 = *v185;
                  if ( *v184 > v23 )
                    v106 = (int *)((char *)v106 + v21);
                  v107 = *v106;
                  v108 = v107 == 20;
                  if ( v107 != 20 )
                    v108 = v107 == 10;
                  if ( v108 )
                  {
                    if ( sub_60284E48() == 1 )
                    {
                      v64 = v161;
                      v110 = *v182;
                      if ( *v181 > v23 )
                        v110 = (int *)((char *)v110 + v21);
                      if ( *(_BYTE *)v110 )
                      {
                        v111 = *v180;
                        if ( *v179 > v23 )
                          v111 = (float *)((char *)v111 + v22);
                        if ( fabsf(v18 - *v111) <= v65 && fabsf(v12 - v111[1]) <= v65 )
                          v149 = 1;
                      }
                    }
                    else
                    {
                      v64 = v161;
                    }
                    v112 = (float *)(v152 + v22);
                    v112[1] = v64;
                    v109.n64_f32[0] = sqrtf(
                                        (float)((float)((float)(v63 - *v112) * (float)(v63 - *v112))
                                              + (float)((float)(v61 - *(v112 - 1)) * (float)(v61 - *(v112 - 1))))
                                      + (float)((float)(v64 - v64) * (float)(v64 - v64)));
                    v113 = *v185;
                    if ( *v184 > v23 )
                      v113 = (int *)((char *)v113 + v21);
                    if ( *v113 == 10 )
                    {
                      v109.n64_f32[0] = v109.n64_f32[0] / 150.0;
                      v114 = *v112 - v63;
                      v115 = 1.0 - vmin_f32(v109, v1).n64_f32[0];
                      v116 = *(v112 - 1) - v61;
                      v117 = sqrtf(
                               (float)((float)(v114 * v114) + (float)(v116 * v116))
                             + (float)((float)(v112[1] - v64) * (float)(v112[1] - v64)));
                      v118 = 0.0;
                      v119 = (float)(v115 * 0.7) + 0.3;
                      v120 = 0.0;
                      if ( v117 != 0.0 )
                      {
                        v120 = v114 / v117;
                        v118 = v116 / v117;
                      }
                      v19 = v65;
                      v121 = v118 * 5.0;
                      v122 = v120 * 5.0;
                      v123 = *v170;
                      if ( *v169 > v23 )
                        v123 = (float *)((char *)v123 + v22);
                      v124 = v123[1] - (float)(v119 * v122);
                      *v123 = *v123 - (float)(v119 * v121);
                      v123[1] = v124;
                      v18 = v151;
                    }
                    v125 = *v182;
                    if ( *v181 > v23 )
                      v125 = (int *)((char *)v125 + v21);
                    v126 = *v125 + 239;
                    if ( (unsigned __int8)*v125 < 0x12u )
                      LOBYTE(v126) = 0;
                    *(_BYTE *)v125 = v126;
                    v127 = *v172;
                    if ( *v171 > v23 )
                      v127 = (int *)((char *)v127 + v21);
                    v29 = (float)(unsigned __int8)v126 / 255.0;
                    if ( *v127 )
                    {
                      v128 = *v127 - 1;
                    }
                    else
                    {
                      v129 = *v170;
                      if ( *v169 > v23 )
                        v129 = (float *)((char *)v129 + v22);
                      *v129 = 0.0;
                      v129[1] = 0.0;
                      v129[2] = 0.0;
                      v127 = *v185;
                      v128 = 11;
                      if ( *v184 > v23 )
                        v127 = (int *)((char *)v127 + v21);
                    }
                    *v127 = v128;
                  }
                  v130 = *v185;
                  if ( *v184 > v23 )
                    v130 = (int *)((char *)v130 + v21);
                  if ( *v130 == 11 )
                  {
                    v131 = *v181;
                    v132 = *v182;
                    v133 = *v182;
                    if ( *v181 > v23 )
                      v133 = (int *)((char *)v133 + v21);
                    v134 = *v133;
                    if ( (unsigned __int8)v134 < 0xFDu )
                    {
                      v135 = v134 + 2;
                    }
                    else
                    {
                      *v130 = 1;
                      v135 = -1;
                      v132 = *v182;
                      v131 = *v181;
                    }
                    v136 = v135;
                    v137 = v135 | (v134 >> 8 << 8);
                    if ( v131 > v23 )
                      v132 = (int *)((char *)v132 + v21);
                    *v132 = v137;
                    v29 = (float)v136 / 255.0;
                  }
                  v138 = *v180;
                  if ( *v179 > v23 )
                    v138 = (float *)((char *)v138 + v22);
                  v138[2] = v64;
                  *v138 = v61;
                  v138[1] = v63;
                  goto LABEL_164;
                }
LABEL_79:
                v29 = 0.0;
                goto LABEL_164;
              }
              v29 = 0.0;
            }
            else
            {
              v29 = 0.0;
            }
LABEL_164:
            v20 += 8;
            v22 += 12;
            v139 = *v176;
            if ( *v175 > v23 )
              v139 = (unsigned int *)((char *)v139 + v21);
            *v139 = (unsigned int)(float)(v29 * 255.0)
                  | ((unsigned __int8)byte_60C8F103 << 24)
                  | ((unsigned __int8)byte_60C8F102 << 16)
                  | ((unsigned __int8)byte_60C8F101 << 8);
            v140 = *v182;
            v79 = *v181 > v23++;
            if ( v79 )
              v140 = (int *)((char *)v140 + v21);
            v21 += 4;
            v141 = *(unsigned __int8 *)v140
                 | ((unsigned __int8)byte_60C8F107 << 24)
                 | ((unsigned __int8)byte_60C8F106 << 16)
                 | ((unsigned __int8)byte_60C8F105 << 8);
            *v140 = v141;
            if ( v21 == 300 )
            {
              sub_60284F44(v150, v141, v183, v149);
              *(_DWORD *)(v150 + 8936) = v183;
              *(_DWORD *)(v150 + 108) = 0;
              *(_DWORD *)(v150 + 112) = 0;
              v142 = *(_DWORD *)(v150 + 8920);
              *(_DWORD *)(v150 + 116) = v142;
              *(_DWORD *)(v150 + 8952) = 1065353216;
              *(_DWORD *)(v150 + 8956) = 0;
              *(_DWORD *)(v150 + 8960) = 0;
              *(_DWORD *)(v150 + 8968) = 0;
              *(_DWORD *)(v150 + 8972) = 1065353216;
              *(_DWORD *)(v150 + 8976) = 0;
              *(_DWORD *)(v150 + 8984) = 0;
              *(_DWORD *)(v150 + 8988) = 0;
              *(_DWORD *)(v150 + 8992) = 1065353216;
              *(_DWORD *)(v150 + 8964) = 0;
              *(_DWORD *)(v150 + 8980) = 0;
              *(_DWORD *)(v150 + 8996) = v142;
              v143 = *(_QWORD *)(v150 + 8960);
              *(_QWORD *)(v150 + 6308) = *(_QWORD *)(v150 + 8952);
              *(_QWORD *)(v150 + 6316) = v143;
              v144 = *(_QWORD *)(v150 + 8976);
              *(_QWORD *)(v150 + 6324) = *(_QWORD *)(v150 + 8968);
              *(_QWORD *)(v150 + 6332) = v144;
              v145 = *(_QWORD *)(v150 + 8992);
              *(_QWORD *)(v150 + 6340) = *(_QWORD *)(v150 + 8984);
              *(_QWORD *)(v150 + 6348) = v145;
              ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v168, 1.0, 0.1, 0.01, 0.0001);
              return 1;
            }
          }
        }
      }
      v16 = 1.0;
      v17 = v9 + v6;
LABEL_14:
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v17, v16, 0.25, 0.1, 0.00001);
      goto LABEL_15;
    }
  }
  return 1;
}
