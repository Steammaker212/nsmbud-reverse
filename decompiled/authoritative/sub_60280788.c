int __fastcall sub_60280788(int a1, double a2)
{
  float32x2_t v2; // d10
  int v3; // r5
  int v4; // r9
  float v5; // s2
  float v6; // s4
  float v7; // s28
  float v8; // s0
  int v9; // s0
  int v10; // r7
  int v11; // r4
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  float v15; // s0
  int v16; // r0
  int v17; // r6
  int v18; // r2
  float v19; // s24
  float *v20; // r0
  float v21; // s0
  int v22; // r10
  int v23; // r5
  int v24; // r4
  unsigned int v25; // r8
  float v26; // s23
  unsigned int *v27; // r12
  int **v28; // lr
  unsigned int *v29; // r11
  float *v30; // r3
  int *v31; // r0
  unsigned int v32; // r0
  float v33; // s30
  int v34; // r4
  unsigned int U32; // r6
  unsigned int v36; // r7
  unsigned int v37; // r0
  float *v38; // r1
  float *v39; // r1
  float v40; // s22
  float v41; // s18
  float v42; // s30
  unsigned int v43; // r6
  float v44; // s26
  float v45; // s17
  float v46; // s2
  float *v47; // r0
  float v48; // s30
  float v49; // s0
  float v50; // s17
  float v51; // s30
  float v52; // s18
  float v53; // s19
  float v54; // s26
  float v55; // r1
  _DWORD *v56; // r0
  unsigned int v57; // r0
  unsigned int *v58; // r1
  float *v59; // r0
  _DWORD *v60; // r1
  int *v61; // r0
  float *v62; // r0
  int *v63; // r0
  float v64; // s0
  float *v65; // r0
  bool v66; // cc
  float *v67; // r1
  int *v68; // r0
  unsigned int *v69; // r0
  unsigned int v70; // r0
  float *v71; // r1
  float v72; // s2
  float v73; // s4
  float *v74; // r1
  float v75; // s0
  float *v76; // r0
  unsigned int v77; // r1
  float *v78; // r2
  float v79; // r9
  int *v80; // r2
  float *v81; // r2
  float v82; // s0
  int *v83; // r0
  float v84; // s2
  float v85; // s0
  int *v86; // r1
  float v87; // s2
  float v88; // s2
  int v89; // r7
  int v90; // r0
  float *v91; // r1
  int v92; // r6
  float v93; // s17
  float v94; // r5
  float v95; // s19
  float v96; // s22
  unsigned int v97; // r1
  int *v98; // r0
  int *v99; // r2
  int v100; // r2
  int *v101; // r0
  float v102; // s0
  int *v103; // r0
  int v104; // r0
  bool v105; // zf
  int *v106; // r0
  int v107; // r1
  int *v108; // r0
  int v109; // r0
  bool v110; // zf
  int *v111; // r0
  int v112; // r0
  bool v113; // zf
  float v114; // r4
  float v115; // s22
  int *v116; // r0
  int v117; // s0
  int *v118; // r0
  float *v119; // r4
  unsigned int *v120; // r0
  float *v121; // r2
  float v122; // s0
  float *v123; // r2
  float v124; // s2
  float v125; // s4
  int v126; // r1
  _DWORD *v127; // r0
  int *v128; // r0
  int v129; // r0
  bool v130; // zf
  int *v131; // r0
  float v132; // s30
  float v133; // s19
  float v134; // s22
  float v135; // s6
  float v136; // s2
  float v137; // s4
  float v138; // s6
  float v139; // s4
  float *v140; // r0
  float v141; // s8
  int *v142; // r0
  int v143; // r1
  int *v144; // r0
  int v145; // r1
  float *v146; // r0
  int *v147; // r3
  int *v148; // r0
  unsigned int v149; // r2
  int *v150; // r1
  unsigned int v151; // r1
  unsigned __int8 v152; // r3
  unsigned int v153; // s0
  int v154; // r3
  float v155; // s0
  float *v156; // r0
  float *v157; // r10
  int v158; // r4
  int v159; // r7
  int v160; // r0
  char *v161; // r1
  char *v162; // r3
  int v163; // r2
  int v164; // r1
  int v165; // r3
  float *v166; // r6
  int v167; // r1
  char *v168; // r3
  unsigned int v169; // r0
  unsigned int *v170; // r1
  unsigned int *v171; // r0
  float *v172; // r5
  int v173; // r2
  unsigned __int8 v174; // r3
  unsigned __int8 v175; // r7
  unsigned int v176; // r2
  int v177; // r0
  float v178; // s0
  int v179; // r1
  float *v181; // [sp+4h] [bp-10Ch]
  float *v182; // [sp+8h] [bp-108h]
  float v183; // [sp+Ch] [bp-104h]
  float *v184; // [sp+20h] [bp-F0h]
  float *v185; // [sp+24h] [bp-ECh]
  int v186; // [sp+3Ch] [bp-D4h]
  float **v187; // [sp+48h] [bp-C8h]
  unsigned int *v188; // [sp+4Ch] [bp-C4h]
  unsigned int *v189; // [sp+50h] [bp-C0h]
  _DWORD **v190; // [sp+54h] [bp-BCh]
  unsigned int *v191; // [sp+58h] [bp-B8h]
  float **v192; // [sp+5Ch] [bp-B4h]
  unsigned int *v193; // [sp+68h] [bp-A8h]
  int **v194; // [sp+6Ch] [bp-A4h]
  char v196; // [sp+74h] [bp-9Ch]
  int v197; // [sp+7Ch] [bp-94h]
  int v198; // [sp+90h] [bp-80h]
  _BYTE *v199; // [sp+94h] [bp-7Ch]
  float *v200; // [sp+98h] [bp-78h]
  unsigned int *v201; // [sp+9Ch] [bp-74h]
  float **v202; // [sp+A0h] [bp-70h]
  unsigned int *v203; // [sp+A4h] [bp-6Ch]
  unsigned int **v204; // [sp+A8h] [bp-68h]
  unsigned int *v205; // [sp+ACh] [bp-64h]
  float **v206; // [sp+B0h] [bp-60h]
  int v207; // [sp+B4h] [bp-5Ch]
  float v208; // [sp+C0h] [bp-50h]
  unsigned int *v209; // [sp+C4h] [bp-4Ch]
  float **v210; // [sp+C8h] [bp-48h]
  float v211; // [sp+CCh] [bp-44h]
  int v212; // [sp+CCh] [bp-44h]
  float *v213; // [sp+D0h] [bp-40h]
  int v214; // [sp+D4h] [bp-3Ch]
  int **v215; // [sp+D8h] [bp-38h]
  int v216; // [sp+DCh] [bp-34h]
  __int64 v217; // [sp+F8h] [bp-18h]
  __int64 v218; // [sp+108h] [bp-8h]

  v3 = 500;
  *(float *)&v186 = 70.0;
  v4 = dword_60CC6484;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v7 = 96.0;
  }
  else
  {
    v5 = *(float *)(dword_60CC6484 + 112);
    v6 = *(float *)(a1 + 6464);
    if ( (float)(v5 + *(float *)(dword_60CC6484 + 104)) < (float)(v6 + -64.0) )
      return 1;
    v7 = 64.0;
    v8 = *(float *)(a1 + 6472) - v6;
    if ( (float)((float)(v6 + v8) + 64.0) < v5 )
      return 1;
    if ( v8 < 1000.0 )
    {
      if ( *(_BYTE *)(a1 + 6505) == 7 )
      {
        v9 = (int)(float)(v8 * 0.25);
      }
      else
      {
        v9 = (int)(float)(v8 + v8);
        *(float *)&v186 = 40.0;
      }
      v3 = v9;
    }
  }
  v2.n64_u32[0] = 1.0;
  v10 = 0;
  v197 = dword_60CC6484;
  v11 = a1 + 6480;
  do
  {
    v12 = *(_DWORD *)(PlayerMgr_instance + v10 + 32);
    if ( v12 && (*(_BYTE *)(v12 + 1219) & 8) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 1212);
      v14 = (v13 & 0x40) == 0;
      if ( (v13 & 0x40) == 0 )
        v14 = (*(_BYTE *)(v12 + 1207) & 8) == 0;
      if ( v14 )
      {
        if ( (v13 & 0x100) == 0 && !(*(_DWORD *)(v12 + 1208) & 0x8000000 | v13 & 0x10) )
        {
          *(_DWORD *)(v11 + v10) = 0;
          goto LABEL_20;
        }
        v16 = v11 + v10;
        v15 = 0.3;
      }
      else
      {
        v15 = 1.0;
        v16 = v11 + v10;
      }
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v16, v15, 0.25, 0.1, 0.00001);
      v4 = v197;
    }
LABEL_20:
    v10 += 4;
  }
  while ( v10 != 16 );
  v17 = a1;
  if ( v3 >= 500 )
    v3 = 500;
  v18 = *(_DWORD *)(a1 + 20) & 0x100;
  if ( v18 )
    v19 = 32.0;
  else
    v19 = *(float *)&v186;
  if ( (*(_DWORD *)(a1 + 20) & 0x100) != 0 )
    v3 = 250;
  *(_DWORD *)(a1 + 6356) = v3;
  v198 = v3;
  if ( v3 > 0 )
  {
    v20 = &flt_60280C1C;
    v21 = 30.0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v207 = v18;
    if ( !v18 )
      v20 = &flt_60280C20;
    v26 = *v20;
    v213 = (float *)(a1 + 10508);
    v194 = (int **)(a1 + 6416);
    v182 = (float *)(a1 + 16536);
    if ( v18 )
      v21 = 0.0;
    v193 = (unsigned int *)(a1 + 6412);
    v181 = (float *)(a1 + 16532);
    v192 = (float **)(a1 + 6384);
    v183 = v21;
    v191 = (unsigned int *)(a1 + 6380);
    v190 = (_DWORD **)(a1 + 6440);
    v202 = (float **)(a1 + 6392);
    v189 = (unsigned int *)(a1 + 6436);
    v201 = (unsigned int *)(a1 + 6388);
    v204 = (unsigned int **)(a1 + 6432);
    v203 = (unsigned int *)(a1 + 6428);
    v200 = (float *)(a1 + 6496);
    v206 = (float **)(a1 + 6376);
    v205 = (unsigned int *)(a1 + 6372);
    v185 = (float *)(a1 + 6476);
    v184 = (float *)(a1 + 6468);
    v188 = (unsigned int *)(a1 + 6396);
    v210 = (float **)(a1 + 6408);
    v209 = (unsigned int *)(a1 + 6404);
    v27 = (unsigned int *)(a1 + 6452);
    v28 = (int **)(a1 + 6456);
    v199 = (_BYTE *)(a1 + 6505);
    v215 = (int **)(a1 + 6424);
    v29 = (unsigned int *)(a1 + 6420);
    v187 = (float **)(a1 + 6400);
    v196 = 0;
    while ( 1 )
    {
      v30 = (float *)v4;
      v31 = *v215;
      if ( *v29 > v25 )
        v31 = (int *)((char *)v31 + v24);
      v32 = *v31;
      v216 = v24;
      v214 = v23;
      if ( v32 > 0x14 )
      {
        v33 = 1.0;
      }
      else
      {
        if ( ((1 << v32) & 0x100C04) == 0 )
        {
          if ( v32 )
          {
            v33 = 1.0;
            if ( v32 != 1 )
              goto LABEL_205;
          }
          else
          {
            v34 = v17;
            U32 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
            v36 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
            v37 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
            v38 = *v187;
            if ( *v188 > v25 )
              v38 = (float *)((char *)v38 + v216);
            *v38 = (float)((float)(COERCE_FLOAT((v37 >> 9) | 0x3F800000) + -1.0) * 0.8) + 0.6;
            v39 = *v210;
            if ( *v209 > v25 )
              v39 = (float *)((char *)v39 + v216);
            v40 = (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.9) + 0.1;
            *v39 = (float)((float)(COERCE_FLOAT((v36 >> 9) | 0x3F800000) + -1.0) * 0.5) + 0.5;
            if ( v207 )
            {
              v50 = *(float *)(v197 + 104);
              v51 = *(float *)(v197 + 112);
              LODWORD(v52) = (sead::Random::getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
              v53 = *v184;
              v54 = *v185;
              LODWORD(v55) = (sead::Random::getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
              v47 = *v206;
              v48 = v51 + (float)(v50 * (float)((float)(v52 + -1.0) * 1.8));
              if ( *v205 > v25 )
                v47 = (float *)((char *)v47 + v23);
              v49 = (float)((float)(v54 + 8.0) + -24.0)
                  + (float)((float)(v54 - v53) * (float)((float)(v55 + -1.0) * -0.25));
            }
            else
            {
              v41 = *(float *)(a1 + 6472);
              v42 = *(float *)(a1 + 6464);
              v43 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
              v44 = *v184;
              v45 = *v185;
              v46 = COERCE_FLOAT((sead::Random::getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0;
              v47 = *v206;
              v48 = v42 + (float)((float)(v41 - v42) * (float)(COERCE_FLOAT((v43 >> 9) | 0x3F800000) + -1.0));
              if ( *v205 > v25 )
                v47 = (float *)((char *)v47 + v23);
              v49 = (float)(v45 + -32.0) - (float)((float)(v45 - v44) * v46);
            }
            v17 = v34;
            *v47 = v48;
            v47[1] = v49;
            v47[2] = v40;
            *v200 = 1.0;
            v56 = *(_DWORD **)(a1 + 6456);
            if ( *(_DWORD *)(a1 + 6452) > v25 )
              v56 = (_DWORD *)((char *)v56 + v216);
            *v56 = 255;
            v57 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
            v27 = (unsigned int *)(a1 + 6452);
            v28 = (int **)(a1 + 6456);
            v58 = *v204;
            if ( *v203 > v25 )
              v58 = (unsigned int *)((char *)v58 + v216);
            *v58 = v57;
            v59 = *v210;
            if ( *v209 > v25 )
              v59 = (float *)((char *)v59 + v216);
            v60 = *v190;
            if ( *v189 > v25 )
              v60 = (_DWORD *)((char *)v60 + v216);
            *v60 = (int)(float)((float)(*v59 * 65536.0) * 65536.0);
            v61 = *v215;
            if ( *v29 > v25 )
              v61 = (int *)((char *)v61 + v216);
            ++*v61;
            v30 = (float *)v197;
            v196 = 1;
          }
          v62 = *v192;
          if ( *v191 > v25 )
            v62 = (float *)((char *)v62 + v23);
          *v62 = 0.0;
          v62[1] = 0.0;
          v62[2] = 0.0;
          v24 = v216;
          v63 = *v194;
          if ( *v193 > v25 )
            v63 = (int *)((char *)v63 + v216);
          *v63 = 0;
          if ( v207 )
          {
            v67 = *v210;
            if ( *v209 > v25 )
              v67 = (float *)((char *)v67 + v216);
            v64 = (float)(v19 * *v67) + 24.0;
            v65 = *v202;
            v66 = *v201 > v25;
          }
          else
          {
            v64 = *(float *)&v186;
            v65 = *v202;
            v66 = *v201 > v25;
          }
          if ( v66 )
            v65 = (float *)((char *)v65 + v22);
          *v65 = v64;
          v65[1] = v64;
          v68 = *v215;
          if ( *v29 > v25 )
            v68 = (int *)((char *)v68 + v216);
          ++*v68;
        }
        v69 = *v204;
        if ( *v203 > v25 )
          v69 = (unsigned int *)((char *)v69 + v24);
        v70 = *v69;
        v71 = (float *)((char *)sinLutTable + ((v70 >> 17) & 0xFF0));
        v72 = *v71;
        v73 = v71[1];
        v74 = *v202;
        if ( *v201 > v25 )
          v74 = (float *)((char *)v74 + v22);
        v75 = v19
            + (float)((float)(v19 * 0.08)
                    * (float)(v72 + (float)((float)(v73 * (float)((8 * v70) & 0xFFFFF8)) * 0.000000059605)));
        *v74 = v75;
        v74[1] = v75;
        v76 = *v206;
        v77 = *v205;
        v78 = *v206;
        if ( *v205 > v25 )
          v78 = (float *)((char *)v78 + v23);
        v79 = *v78;
        v211 = v78[1];
        v208 = v78[2];
        if ( v207 )
        {
          v80 = *v215;
          if ( *v29 > v25 )
            v80 = (int *)((char *)v80 + v24);
          if ( *v80 == 2 )
          {
            v81 = *v187;
            if ( *v188 > v25 )
              v81 = (float *)((char *)v81 + v24);
            v82 = v79 - *v81;
            v79 = v82;
            if ( (v196 & 1) == 0 && v82 <= (float)(v30[28] - v7) )
            {
              v83 = *v28;
              if ( *v27 > v25 )
                v83 = (int *)((char *)v83 + v24);
              v84 = v7 + (float)(v7 + v30[26]);
              *v83 |= 0xFFu;
              v85 = v82 + v84;
              v86 = *v215;
              if ( *v29 > v25 )
                v86 = (int *)((char *)v86 + v24);
              v79 = v85;
              *v86 = 1;
              v76 = *v206;
              v77 = *v205;
            }
            if ( v77 > v25 )
              v76 = (float *)((char *)v76 + v23);
            *v76 = v79;
            v76[1] = v211;
            v76[2] = v208;
          }
          v33 = *v200;
          if ( (v196 & 1) != 0 )
          {
LABEL_108:
            v89 = v17;
            if ( (*(_BYTE *)(v17 + 21) & 1) == 0 )
            {
              v90 = *(_DWORD *)(a1 + 16540) & 3;
              v91 = (float *)(v17 + 4 * v90 + 6480);
              v92 = *(_DWORD *)(PlayerMgr_instance + 4 * v90 + 32);
              if ( v207 )
                v93 = (float)(*v91 * 100.0) + 0.0;
              else
                v93 = (float)(*v91 * 120.0) + 30.0;
              if ( !v92 || (*(_BYTE *)(v92 + 1219) & 8) != 0 )
                goto LABEL_146;
              v94 = *(float *)(v92 + 108);
              v95 = *(float *)(v92 + 112) + 10.0;
              v96 = (float)((float)((float)(v95 - v211) * (float)(v95 - v211))
                          + (float)((float)(v94 - v79) * (float)(v94 - v79)))
                  + (float)((float)(v208 - v208) * (float)(v208 - v208));
              if ( sqrtf(v96) >= v183 )
              {
                if ( sqrtf(v96) < v93 )
                {
                  v101 = *v194;
                  v102 = sqrtf(v96) / -120.0;
                  if ( *v193 > v25 )
                    v101 = (int *)((char *)v101 + v216);
                  *v101 = (int)(float)((float)((float)(v102 + 1.0) + 1.0) * 400.0);
                  v103 = *v215;
                  if ( *v29 > v25 )
                    v103 = (int *)((char *)v103 + v216);
                  v104 = *v103;
                  v105 = v104 == 10;
                  if ( v104 != 10 )
                    v105 = v104 == 20;
                  if ( !v105 )
                  {
                    *v213 = v94;
                    v213[1] = v95;
                    v213[2] = v208;
                    v106 = *v215;
                    if ( *v29 > v25 )
                      v106 = (int *)((char *)v106 + v216);
                    v107 = 10;
                    goto LABEL_145;
                  }
                }
              }
              else
              {
                v97 = *v29;
                v98 = *v215;
                v99 = *v215;
                if ( *v29 > v25 )
                  v99 = (int *)((char *)v99 + v216);
                v100 = *v99;
                if ( *v199 == 4 )
                {
                  if ( v100 != 20 && v100 != 10 )
                  {
                    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v92 + 1172))(v92, 0, 16);
                    v27 = (unsigned int *)(a1 + 6452);
                    v28 = (int **)(a1 + 6456);
                    v30 = (float *)v197;
                  }
                  goto LABEL_146;
                }
                if ( v100 != 10 )
                {
                  v108 = *v194;
                  if ( *v193 > v25 )
                    v108 = (int *)((char *)v108 + v216);
                  *v108 = 600;
                  v97 = *v29;
                  v98 = *v215;
                }
                if ( v97 > v25 )
                  v98 = (int *)((char *)v98 + v216);
                v109 = *v98;
                v110 = v109 == 10;
                if ( v109 != 10 )
                  v110 = v109 == 20;
                if ( !v110 )
                {
                  *v213 = v94;
                  v213[1] = v95;
                  v213[2] = v208;
                  v106 = *v215;
                  if ( *v29 > v25 )
                    v106 = (int *)((char *)v106 + v216);
                  v107 = 20;
LABEL_145:
                  *v106 = v107;
                }
              }
LABEL_146:
              if ( *(_BYTE *)(a1 + 16528) )
              {
                v111 = *v215;
                if ( *v29 > v25 )
                  v111 = (int *)((char *)v111 + v216);
                v112 = *v111;
                v113 = v112 == 10;
                if ( v112 != 10 )
                  v113 = v112 == 20;
                if ( !v113 )
                {
                  v114 = *v182;
                  v115 = (float)((float)((float)(v211 - *v182) * (float)(v211 - *v182))
                               + (float)((float)(v79 - *v181) * (float)(v79 - *v181)))
                       + (float)((float)(v208 - v208) * (float)(v208 - v208));
                  if ( sqrtf(v115) < 60.0 )
                  {
                    *v213 = *v181;
                    v213[1] = v114;
                    v213[2] = v208;
                    v116 = *v194;
                    v117 = (int)(float)((float)((float)((float)(sqrtf(v115) / -80.0) + 1.0) + 1.0) * 400.0);
                    if ( *v193 > v25 )
                      v116 = (int *)((char *)v116 + v216);
                    *v116 = v117;
                    v118 = *v215;
                    if ( *v29 > v25 )
                      v118 = (int *)((char *)v118 + v216);
                    *v118 = 10;
                  }
                }
              }
            }
            v119 = v30;
            v120 = *v204;
            v121 = *v210;
            if ( *v203 > v25 )
              v120 = (unsigned int *)((char *)v120 + v216);
            if ( *v209 > v25 )
              v121 = (float *)((char *)v121 + v216);
            v122 = *v121;
            v123 = (float *)((char *)sinLutTable + ((*v120 >> 20) & 0xFF0));
            v124 = *v123;
            v125 = v123[1];
            v126 = *v120 & 0xFFFFFF;
            *v120 += (unsigned int)(float)(v26 * v122) << 16;
            v127 = *v190;
            if ( *v189 > v25 )
              v127 = (_DWORD *)((char *)v127 + v216);
            *v127 = (int)(float)((float)((float)(v124
                                               + (float)((float)((float)(unsigned int)v126 * v125) * 0.000000059605))
                                       * 5461.1)
                               * 65536.0);
            v128 = *v215;
            if ( *v29 > v25 )
              v128 = (int *)((char *)v128 + v216);
            v129 = *v128;
            v130 = v129 == 20;
            if ( v129 != 20 )
              v130 = v129 == 10;
            if ( v130 )
            {
              v213[2] = v208;
              *(float *)&a2 = sqrtf(
                                (float)((float)((float)(v211 - v213[1]) * (float)(v211 - v213[1]))
                                      + (float)((float)(v79 - *v213) * (float)(v79 - *v213)))
                              + (float)((float)(v208 - v208) * (float)(v208 - v208)));
              v131 = *v215;
              if ( *v29 > v25 )
                v131 = (int *)((char *)v131 + v216);
              if ( *v131 == 10 )
              {
                *(float *)&a2 = *(float *)&a2 / 150.0;
                v132 = v213[1] - v211;
                a2 = vmin_f32(*(float32x2_t *)&a2, v2).n64_f64[0];
                v133 = 1.0 - *(float *)&a2;
                v134 = *v213 - v79;
                *(float *)&a2 = sqrtf(
                                  (float)((float)(v132 * v132) + (float)(v134 * v134))
                                + (float)((float)(v213[2] - v208) * (float)(v213[2] - v208)));
                v135 = 0.0;
                v136 = (float)(v133 * 0.7) + 0.3;
                v137 = 0.0;
                if ( *(float *)&a2 != 0.0 )
                {
                  v137 = v132 / *(float *)&a2;
                  v135 = v134 / *(float *)&a2;
                }
                v138 = v135 * 5.0;
                v139 = v137 * 5.0;
                v140 = *v192;
                if ( *v191 > v25 )
                  v140 = (float *)((char *)v140 + v214);
                v141 = v140[1] - (float)(v136 * v139);
                *v140 = *v140 - (float)(v136 * v138);
                v140[1] = v141;
              }
              v142 = *v28;
              if ( *v27 > v25 )
                v142 = (int *)((char *)v142 + v216);
              v143 = *v142 + 248;
              if ( (unsigned __int8)*v142 < 9u )
                LOBYTE(v143) = 0;
              *(_BYTE *)v142 = v143;
              v144 = *v194;
              if ( *v193 > v25 )
                v144 = (int *)((char *)v144 + v216);
              v33 = (float)(unsigned __int8)v143 / 255.0;
              if ( *v144 )
              {
                v145 = *v144 - 1;
              }
              else
              {
                v146 = *v192;
                if ( *v191 > v25 )
                  v146 = (float *)((char *)v146 + v214);
                *v146 = 0.0;
                v146[1] = 0.0;
                v146[2] = 0.0;
                v144 = *v215;
                v145 = 11;
                if ( *v29 > v25 )
                  v144 = (int *)((char *)v144 + v216);
              }
              *v144 = v145;
            }
            v147 = *v215;
            if ( *v29 > v25 )
              v147 = (int *)((char *)v147 + v216);
            if ( *v147 == 11 )
            {
              v148 = *v28;
              v149 = *v27;
              v150 = *v28;
              if ( *v27 > v25 )
                v150 = (int *)((char *)v150 + v216);
              v151 = *v150;
              if ( (unsigned __int8)v151 < 0xFDu )
              {
                v152 = v151 + 2;
              }
              else
              {
                *v147 = 1;
                v152 = -1;
                v148 = *v28;
                v149 = *v27;
              }
              v153 = v152;
              v154 = v152 | (v151 >> 8 << 8);
              v155 = (float)v153;
              if ( v149 > v25 )
                v148 = (int *)((char *)v148 + v216);
              v33 = v155 / 255.0;
              *v148 = v154;
            }
            v17 = v89;
            v30 = v119;
            v156 = *v206;
            if ( *v205 > v25 )
              v156 = (float *)((char *)v156 + v214);
            *v156 = v79;
            v156[1] = v211;
            v156[2] = v208;
            goto LABEL_205;
          }
        }
        else
        {
          v33 = *v200;
        }
        v87 = v30[28];
        if ( v79 >= (float)(v87 - v7) )
        {
          if ( v79 <= (float)(v7 + (float)(v87 + v30[26])) )
          {
            v88 = v30[31];
            if ( v211 <= (float)(v7 + v88) && v211 >= (float)((float)(v88 - v30[27]) - v7) )
              goto LABEL_108;
            v33 = 0.0;
          }
          else
          {
            v33 = 0.0;
          }
        }
        else
        {
          v33 = 0.0;
        }
      }
LABEL_205:
      v212 = v22;
      v157 = v30;
      v158 = v17;
      v159 = *(_DWORD *)(v17 + 20);
      v160 = (unsigned __int8)*v199;
      v161 = (char *)&dword_60C8F0C8 + 3;
      v162 = (char *)&dword_60C8F0C8 + 2;
      v163 = v160 & 0xFE;
      if ( v160 == 7 )
        v161 = &byte_60C8F0BB;
      if ( v163 == 4 )
        v161 = &byte_60C8F0C3;
      if ( v160 == 7 )
        v162 = &byte_60C8F0BA;
      v164 = (unsigned __int8)*v161;
      if ( v163 == 4 )
        v162 = &byte_60C8F0C2;
      v165 = (unsigned __int8)*v162;
      v166 = &flt_60281D5C;
      if ( (v159 & 0x100) == 0 )
        v166 = &flt_60281D60;
      v167 = (v165 << 16) | (v164 << 24);
      v168 = (char *)&dword_60C8F0C8 + 1;
      if ( v160 == 7 )
        v168 = &byte_60C8F0B9;
      if ( v163 == 4 )
        v168 = &byte_60C8F0C1;
      v169 = v167 | ((unsigned __int8)*v168 << 8) | (unsigned int)(float)(v33 * *v166);
      v170 = *(unsigned int **)(a1 + 6448);
      if ( *(_DWORD *)(a1 + 6444) > v25 )
        v170 = (unsigned int *)((char *)v170 + v216);
      *v170 = v169;
      v171 = (unsigned int *)*v28;
      if ( *v27 > v25 )
        v171 = (unsigned int *)((char *)v171 + v216);
      v172 = *v210;
      if ( *v209 > v25 )
        v172 = (float *)((char *)v172 + v216);
      v173 = (unsigned __int8)*v199;
      if ( v173 == 7 )
      {
        v4 = (int)v157;
        v17 = v158;
        v174 = byte_60C8F0BD;
        v175 = byte_60C8F0BE;
        v176 = (unsigned __int8)byte_60C8F0BF;
      }
      else
      {
        if ( (v173 & 0xFE) == 4 )
        {
          v174 = byte_60C8F0C5;
          v175 = byte_60C8F0C6;
          v176 = (unsigned __int8)byte_60C8F0C7;
        }
        else
        {
          v176 = (unsigned int)(float)((float)(HIBYTE(dword_60C8F0C8) - (unsigned __int8)byte_60C8F0CF) * *v172)
               + (unsigned __int8)byte_60C8F0CF;
          v175 = (unsigned int)(float)(*v172 * (float)(BYTE2(dword_60C8F0C8) - (unsigned __int8)byte_60C8F0CE))
               + byte_60C8F0CE;
          v174 = (unsigned int)(float)(*v172 * (float)(BYTE1(dword_60C8F0C8) - (unsigned __int8)byte_60C8F0CD))
               + byte_60C8F0CD;
        }
        v17 = a1;
        v4 = (int)v157;
      }
      v29 = (unsigned int *)(a1 + 6420);
      ++v25;
      v22 = v212 + 8;
      v23 = v214 + 12;
      v24 = v216 + 4;
      *v171 = *(unsigned __int8 *)v171 | (v174 << 8) | (v175 << 16) | (v176 << 24);
      v28 = (int **)(a1 + 6456);
      v27 = (unsigned int *)(a1 + 6452);
      v213 += 3;
      if ( v198 == v25 )
      {
        v177 = a1 + 6496;
        goto LABEL_234;
      }
    }
  }
  v177 = a1 + 6496;
LABEL_234:
  *(_DWORD *)(v17 + 108) = 0;
  v178 = *(float *)(v4 + 316) + 0.0;
  *(float *)(v17 + 112) = v178;
  v179 = *(_DWORD *)(v17 + 16516);
  *(_DWORD *)(v17 + 116) = v179;
  LODWORD(v217) = 0;
  LODWORD(v218) = 1065353216;
  *((float *)&v217 + 1) = v178;
  HIDWORD(v218) = v179;
  *(_QWORD *)(v17 + 6308) = 1065353216;
  *(_QWORD *)(v17 + 6316) = 0;
  *(_QWORD *)(v17 + 6324) = 0x3F80000000000000LL;
  *(_QWORD *)(v17 + 6332) = v217;
  *(_QWORD *)(v17 + 6340) = 0;
  *(_QWORD *)(v17 + 6348) = v218;
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v177, 1.0, 0.1, 0.01, 0.0001);
  return 1;
}
