int __fastcall sub_605C4308(
        int a1,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float32x2_t a9)
{
  float v9; // s19
  float v10; // s16
  int v11; // r9
  int v12; // r8
  int v13; // r5
  unsigned int v14; // r6
  float **v15; // r12
  int v16; // r11
  unsigned int **v17; // r10
  unsigned int *v18; // r4
  int *v19; // r0
  unsigned int v20; // r2
  void *v21; // r0
  unsigned int U32; // r0
  float *v23; // r1
  int v24; // r1
  bool v25; // zf
  void *v26; // r0
  unsigned int v27; // r0
  float *v28; // r1
  int v29; // r1
  bool v30; // zf
  void *v31; // r0
  unsigned int v32; // r0
  unsigned int *v33; // r1
  unsigned int *v34; // r0
  unsigned int *v35; // r0
  _DWORD *v36; // r1
  unsigned int *v37; // r0
  unsigned int *v38; // r0
  int v39; // r0
  unsigned int *v40; // r0
  int v41; // r4
  float *v42; // r7
  float *v43; // r1
  float v44; // s2
  float v45; // s4
  float v46; // s24
  unsigned int v47; // r2
  float v48; // s6
  int v49; // r3
  int v50; // r2
  float *v51; // r3
  float **v52; // r7
  float v53; // s6
  float v54; // s8
  unsigned int v55; // r10
  float *v56; // r0
  float *v57; // r3
  float v58; // s12
  float v59; // s2
  float v60; // s10
  int v61; // r0
  float *v62; // r0
  float *v63; // r0
  float v64; // s24
  unsigned __int8 *v65; // r0
  unsigned int *v66; // r0
  unsigned int v67; // s0
  unsigned int *v68; // r0
  float *v69; // r2
  char *v70; // r0
  float *v71; // r0
  float *v72; // r1
  float v73; // s2
  float v74; // s8
  float v75; // s2
  float *v76; // r1
  float v77; // s14
  _DWORD *v78; // r0
  _DWORD *v79; // r0
  _DWORD *v80; // r0
  int v81; // r1
  bool v82; // zf
  void *v83; // r0
  unsigned int v84; // r0
  float *v85; // r1
  int v86; // r1
  bool v87; // zf
  void *v88; // r0
  unsigned int v89; // r0
  unsigned int *v90; // r1
  int *v91; // r0
  unsigned int *v92; // r0
  unsigned int *v93; // r0
  _DWORD *v94; // r1
  unsigned int *v95; // r0
  unsigned int *v96; // r0
  int *v97; // r0
  unsigned int v98; // r1
  int v99; // r3
  unsigned int *v100; // r0
  unsigned int *v101; // r4
  int v102; // r0
  float v103; // s24
  unsigned int *v104; // r0
  unsigned int v105; // r7
  float *v106; // r2
  unsigned int v107; // r1
  float v108; // s4
  float v109; // s6
  int v110; // s2
  float *v111; // r0
  float v112; // s2
  float *v113; // r2
  float v114; // s30
  float v115; // s17
  float v116; // r2
  float v117; // s31
  float v118; // s17
  int v119; // r1
  bool v120; // zf
  void *v121; // r0
  unsigned int v122; // r0
  float *v123; // r0
  float v124; // s23
  float v125; // s27
  unsigned int v126; // r11
  float *v127; // r0
  unsigned int *v128; // r0
  _DWORD *v129; // r0
  unsigned int v130; // r1
  float *v131; // r0
  float v132; // s2
  float v133; // s4
  float v134; // r0
  float v135; // s0
  unsigned int v136; // r1
  float *v137; // r0
  float v138; // s2
  float v139; // s4
  float v140; // s16
  float *v141; // r7
  float *v142; // r4
  float v143; // s19
  float v144; // s30
  int v145; // r0
  int v146; // r10
  float v147; // s0
  float v148; // s2
  float v149; // s30
  float v150; // s19
  unsigned int v151; // r0
  int v152; // r1
  float *v153; // r1
  float v154; // s18
  float v155; // s24
  float v156; // s23
  float v157; // s0
  float v158; // s0
  int v159; // r1
  bool v160; // zf
  float *v161; // r0
  float *v162; // r2
  float v163; // s24
  int v164; // r1
  float v165; // s0
  int v166; // r3
  float *v167; // r1
  float v168; // s12
  float v169; // s14
  float v170; // s1
  float v171; // s6
  float *v172; // r1
  float v173; // s0
  float *v174; // r2
  char *v175; // r0
  _DWORD *v176; // r0
  _DWORD *v177; // r0
  unsigned int *v178; // r0
  __int64 v179; // d17
  __int64 v180; // d17
  __int64 v181; // d17
  unsigned int *v183; // [sp+54h] [bp-ACh]
  float **v184; // [sp+58h] [bp-A8h]
  unsigned int *v185; // [sp+74h] [bp-8Ch]
  float **v186; // [sp+78h] [bp-88h]
  unsigned int *v187; // [sp+7Ch] [bp-84h]
  unsigned int **v188; // [sp+80h] [bp-80h]
  int v189; // [sp+84h] [bp-7Ch]
  unsigned int *v191; // [sp+8Ch] [bp-74h]
  int **v192; // [sp+90h] [bp-70h]
  unsigned int *v193; // [sp+94h] [bp-6Ch]
  unsigned int **v194; // [sp+98h] [bp-68h]
  int v195; // [sp+9Ch] [bp-64h]
  float *v196; // [sp+A0h] [bp-60h]
  unsigned int v197; // [sp+A4h] [bp-5Ch]
  unsigned int *v198; // [sp+A8h] [bp-58h]
  unsigned int *v199; // [sp+ACh] [bp-54h]
  int *v200; // [sp+B0h] [bp-50h]
  int v201; // [sp+B4h] [bp-4Ch]
  unsigned int *v202; // [sp+B8h] [bp-48h]
  unsigned int **v203; // [sp+BCh] [bp-44h]
  float **v204; // [sp+C0h] [bp-40h]
  unsigned int *v205; // [sp+C4h] [bp-3Ch]
  _DWORD **v206; // [sp+C8h] [bp-38h]
  char v207; // [sp+CCh] [bp-34h] BYREF
  char v208; // [sp+D0h] [bp-30h] BYREF
  char v209; // [sp+D4h] [bp-2Ch] BYREF
  float v210; // [sp+D8h] [bp-28h] BYREF
  float v211; // [sp+DCh] [bp-24h]
  int v212; // [sp+E0h] [bp-20h]
  char v213; // [sp+E4h] [bp-1Ch] BYREF
  float v214; // [sp+E8h] [bp-18h] BYREF
  float v215; // [sp+ECh] [bp-14h] BYREF
  float v216; // [sp+F0h] [bp-10h] BYREF
  float v217; // [sp+F4h] [bp-Ch] BYREF
  float v218; // [sp+F8h] [bp-8h] BYREF
  int v219; // [sp+FCh] [bp-4h]

  v9 = 1.0;
  v10 = 0.5;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = (float **)(a1 + 6400);
  v201 = dword_60CC6484;
  v216 = *(float *)(TileMgr_instance + 24);
  v16 = a1 + 16060;
  v192 = (int **)(a1 + 6416);
  v191 = (unsigned int *)(a1 + 6412);
  v186 = (float **)(a1 + 6392);
  v185 = (unsigned int *)(a1 + 6388);
  v200 = (int *)(a1 + 6376);
  v199 = (unsigned int *)(a1 + 6372);
  v194 = (unsigned int **)(a1 + 6456);
  v193 = (unsigned int *)(a1 + 6452);
  v17 = (unsigned int **)(a1 + 6448);
  v18 = (unsigned int *)(a1 + 6444);
  v203 = (unsigned int **)(a1 + 6432);
  v202 = (unsigned int *)(a1 + 6428);
  v184 = (float **)(a1 + 6408);
  v183 = (unsigned int *)(a1 + 6404);
  v198 = (unsigned int *)(a1 + 6396);
  v206 = (_DWORD **)(a1 + 6424);
  v205 = (unsigned int *)(a1 + 6420);
  v187 = (unsigned int *)(a1 + 6444);
  v188 = (unsigned int **)(a1 + 6448);
  v189 = a1 + 16060;
  v204 = (float **)(a1 + 6400);
  while ( 2 )
  {
    v79 = *v206;
    if ( *v205 > v14 )
      v79 = (_DWORD *)((char *)v79 + v13);
    switch ( *v79 )
    {
      case 0:
        if ( !*(_BYTE *)(v16 + v14 + 2400) )
          goto LABEL_213;
        v159 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v159 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
          {
LABEL_10:
            v21 = (void *)(dword_60C9CF0C + 1340);
LABEL_11:
            U32 = sead__Random__getU32(v21);
            v23 = *v204;
            if ( *v198 > v14 )
              v23 = (float *)((char *)v23 + v13);
            *v23 = (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.2;
            v24 = *(unsigned __int8 *)(LevelInfo_instance + 16);
            if ( v24 == 2 )
            {
              if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
              {
LABEL_21:
                v26 = (void *)(dword_60C9CF0C + 1340);
LABEL_22:
                v27 = sead__Random__getU32(v26);
                v28 = *v184;
                if ( *v183 > v14 )
                  v28 = (float *)((char *)v28 + v13);
                *v28 = (float)((float)(COERCE_FLOAT((v27 >> 9) | 0x3F800000) + -1.0) * 0.2) + 0.8;
                v29 = *(unsigned __int8 *)(LevelInfo_instance + 16);
                if ( v29 == 2 )
                {
                  if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
                  {
LABEL_32:
                    v31 = (void *)(dword_60C9CF0C + 1340);
                    goto LABEL_33;
                  }
                }
                else
                {
                  v30 = v29 == 0;
                  if ( !*(_BYTE *)(LevelInfo_instance + 16) )
                    v30 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
                  if ( !v30 )
                    goto LABEL_32;
                }
                v31 = (void *)sead::GlobalRandom::sInstance;
LABEL_33:
                v32 = sead__Random__getU32(v31);
                v33 = *v203;
                if ( *v202 > v14 )
                  v33 = (unsigned int *)((char *)v33 + v13);
                *v33 = v32;
                v34 = *v17;
                if ( *v18 > v14 )
                  v34 = (unsigned int *)((char *)v34 + v13);
                *v34 = -256;
                v35 = *v194;
                if ( *v193 > v14 )
                  v35 = (unsigned int *)((char *)v35 + v13);
                *v35 = -256;
                v36 = *v206;
                if ( *v205 > v14 )
                  v36 = (_DWORD *)((char *)v36 + v13);
                *v36 = 1;
                v37 = *v17;
                if ( *v18 > v14 )
                  v37 = (unsigned int *)((char *)v37 + v13);
                *v37 = 2140779008;
                v38 = *v194;
                if ( *v193 > v14 )
                  v38 = (unsigned int *)((char *)v38 + v13);
                *v38 = -256;
                v15 = v204;
                goto LABEL_46;
              }
            }
            else
            {
              v25 = v24 == 0;
              if ( !*(_BYTE *)(LevelInfo_instance + 16) )
                v25 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
              if ( !v25 )
                goto LABEL_21;
            }
            v26 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_22;
          }
        }
        else
        {
          v160 = v159 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v160 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( !v160 )
            goto LABEL_10;
        }
        v21 = (void *)sead::GlobalRandom::sInstance;
        goto LABEL_11;
      case 1:
LABEL_46:
        a9.n64_u32[0] = 1036831949;
        v39 = *v200;
        if ( *v199 > v14 )
          v39 += v11;
        *(float *)&a2 = *(float *)(v16 + v12 - 9600) / 9.0;
        v217 = *(float *)v39;
        v218 = *(float *)(v39 + 4);
        v219 = *(_DWORD *)(v39 + 8);
        LODWORD(a2) = vmax_f32(*(float32x2_t *)&a2, a9).n64_u32[0];
        v40 = *v203;
        if ( *v202 > v14 )
          v40 = (unsigned int *)((char *)v40 + v13);
        v41 = *v40;
        v42 = *v184;
        if ( *v183 > v14 )
          v42 = (float *)((char *)v42 + v13);
        v43 = *v15;
        v44 = *v42;
        if ( *v198 > v14 )
          v43 = (float *)((char *)v43 + v13);
        v45 = *v43;
        v46 = (float)((float)(*v43
                            * (float)(*(float *)&a2
                                    * (float)(*(float *)((char *)sinLutTable + ((*v40 >> 20) & 0xFF0))
                                            + (float)((float)((float)(*v40 & 0xFFFFFF)
                                                            * *(float *)((char *)&sinLutTable[1] + ((*v40 >> 20) & 0xFF0)))
                                                    * 0.000000059605))))
                    * v44)
            * 0.8;
        if ( v41 < 0 )
        {
          v48 = (float)v41 + (float)v41;
          v47 = (int)v48;
          if ( v48 < -2147500000.0 )
            v47 = 0;
        }
        else
        {
          v47 = 2 * v41;
        }
        v49 = (v47 >> 20) & 0xFF0;
        v50 = v47 & 0xFFFFFF;
        v51 = (float *)((char *)sinLutTable + v49);
        v52 = v15;
        v53 = *v51;
        v54 = v51[1];
        v55 = (int)(float)((float)(v45 * 20972000.0) * v44) + v41;
        *v40 = v55;
        v56 = *v15;
        v57 = *v184;
        if ( *v198 > v14 )
          v56 = (float *)((char *)v56 + v13);
        if ( *v183 > v14 )
          v57 = (float *)((char *)v57 + v13);
        v58 = v217 + (float)((float)(v46 * *v56) * *v57);
        v217 = v58;
        v59 = (float)((float)(v53 + (float)((float)((float)(unsigned int)v50 * v54) * 0.000000059605)) * v45) * v44;
        v218 = v218 + (float)((float)((float)(*(float *)&a2 * *v56) * *v57) * 4.2);
        v60 = v218
            + (float)((float)((float)((float)((float)(*(float *)&a2 * v59) + (float)(*(float *)&a2 * v59)) * 4.2) * 0.1)
                    * (float)((float)(*(float *)&a2 * *v56) * *v57));
        v218 = v60;
        v61 = *v200;
        if ( *v199 > v14 )
          v61 += v11;
        *(_DWORD *)(v61 + 8) = v219;
        *(float *)v61 = v58;
        *(float *)(v61 + 4) = v60;
        v62 = *v15;
        if ( *v198 > v14 )
          v62 = (float *)((char *)v62 + v13);
        v210 = *v62;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v210, v9, 0.025, 0.01, 0.001);
        v63 = *v52;
        v64 = fabsf(v46);
        if ( *v198 > v14 )
          v63 = (float *)((char *)v63 + v13);
        *v63 = v210;
        v65 = (unsigned __int8 *)*v188;
        if ( *v187 > v14 )
          v65 += v13;
        v214 = (float)*v65;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(
          &v214,
          (float)((float)(v210 * v64) * 0.0) + 128.0,
          v10,
          100.0,
          0.1);
        v66 = *v188;
        if ( *v187 > v14 )
          v66 = (unsigned int *)((char *)v66 + v13);
        v67 = (unsigned int)v214;
        *v66 = (unsigned int)v214 | 0x7F99B200;
        v68 = *v194;
        if ( *v193 > v14 )
          v68 = (unsigned int *)((char *)v68 + v13);
        *v68 = v67 | 0xFFFFFF00;
        if ( (float)(v218 + -32.0) <= (float)(*(float *)(v201 + 124) - *(float *)(v201 + 108)) )
        {
          v70 = &v209;
          v69 = &v217;
        }
        else
        {
          v69 = &v210;
          v210 = v217;
          v211 = v218 + -32.0;
          v212 = v219;
          v70 = &v213;
        }
        ((void (__fastcall *)(char *, float *, float *, _DWORD))checkLiquidCollisions)(v70, &v216, v69, 0);
        v15 = v204;
        *(float *)&a2 = v9;
        if ( v218 > (float)(v216 + -32.0) )
          *(float *)&a2 = v9 + (float)((float)(v218 - (float)(v216 + -32.0)) * -0.03125);
        v71 = (float *)((char *)sinLutTable + ((v55 >> 18) & 0xFF0));
        v72 = *v204;
        v73 = (float)((4 * v55) & 0xFFFFFC);
        if ( *v198 > v14 )
          v72 = (float *)((char *)v72 + v13);
        *((float *)&a2 + 1) = *v72;
        v74 = v73 * v71[1];
        v75 = v73 * v71[3];
        v76 = *v186;
        if ( *v185 > v14 )
          v76 = (float *)((char *)v76 + v12);
        v77 = *(float *)(a1 + v12 + 6464)
            + (float)((float)(*((float *)&a2 + 1) * (float)(*(float *)(a1 + v12 + 6464) * 0.2))
                    * (float)(v71[2] + (float)(v75 * 0.000000059605)));
        *(float *)&a2 = (float)((float)(v64 * 0.6) + 0.4) * *(float *)&a2;
        *v76 = *(float *)&a2
             * (float)(*(float *)(v16 + v12 - 9600)
                     + (float)((float)((float)(*(float *)(v16 + v12 - 9600) * 0.2) * *((float *)&a2 + 1))
                             * (float)(*v71 + (float)(v74 * 0.000000059605))));
        v76[1] = *(float *)&a2 * v77;
        v18 = v187;
        v17 = v188;
        v16 = v189;
        if ( v218 <= *(float *)(v201 + 124) && v218 <= (float)(v216 + -4.0) )
          goto LABEL_213;
        v78 = *v206;
        if ( *v205 > v14 )
          v78 = (_DWORD *)((char *)v78 + v13);
        *v78 = 5;
LABEL_91:
        *(_BYTE *)(v16 + v14 + 2400) = 0;
        v80 = *v206;
        if ( *v205 > v14 )
          v80 = (_DWORD *)((char *)v80 + v13);
        *v80 = 0;
        goto LABEL_213;
      case 2:
      case 5:
      case 8:
      case 0xB:
      case 0xE:
      case 0x11:
        goto LABEL_91;
      case 3:
      case 6:
      case 9:
      case 0xC:
      case 0xF:
        v81 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v81 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) == 20 )
            goto LABEL_101;
        }
        else
        {
          v82 = v81 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v82 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( v82 )
          {
LABEL_101:
            v83 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_103;
          }
        }
        v83 = (void *)(dword_60C9CF0C + 1340);
LABEL_103:
        v84 = sead__Random__getU32(v83);
        v85 = *v204;
        if ( *v198 > v14 )
          v85 = (float *)((char *)v85 + v13);
        *v85 = (float)((float)(COERCE_FLOAT((v84 >> 9) | 0x3F800000) + -1.0) * 0.3) + 0.7;
        v86 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v86 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) == 20 )
            goto LABEL_112;
        }
        else
        {
          v87 = v86 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v87 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( v87 )
          {
LABEL_112:
            v88 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_114;
          }
        }
        v88 = (void *)(dword_60C9CF0C + 1340);
LABEL_114:
        v89 = sead__Random__getU32(v88);
        v90 = *v203;
        if ( *v202 > v14 )
          v90 = (unsigned int *)((char *)v90 + v13);
        *v90 = v89;
        v91 = *v192;
        if ( *v191 > v14 )
          v91 = (int *)((char *)v91 + v13);
        *v91 = 8;
        v92 = *v17;
        if ( *v18 > v14 )
          v92 = (unsigned int *)((char *)v92 + v13);
        *v92 = -256;
        v93 = *v194;
        if ( *v193 > v14 )
          v93 = (unsigned int *)((char *)v93 + v13);
        *v93 = -256;
        v94 = *v206;
        if ( *v205 > v14 )
          v94 = (_DWORD *)((char *)v94 + v13);
        ++*v94;
        v95 = *v17;
        if ( *v18 > v14 )
          v95 = (unsigned int *)((char *)v95 + v13);
        *v95 = 2140779008;
        v96 = *v194;
        if ( *v193 > v14 )
          v96 = (unsigned int *)((char *)v96 + v13);
        *v96 = -256;
        v15 = v204;
LABEL_129:
        a9.n64_u32[0] = 1036831949;
        v97 = *v192;
        if ( *v191 > v14 )
          v97 = (int *)((char *)v97 + v13);
        v196 = (float *)(v16 + v12 - 9600);
        v98 = *v18;
        v99 = *v97;
        v100 = *v17;
        v101 = v198;
        if ( v98 > v14 )
          v100 = (unsigned int *)((char *)v100 + v13);
        v197 = *v100;
        v102 = *v200;
        if ( *v199 > v14 )
          v102 += v11;
        *(float *)&a2 = *(float *)(v16 + v12 - 9600) / 7.2;
        LODWORD(v103) = vmax_f32(*(float32x2_t *)&a2, a9).n64_u32[0];
        v217 = *(float *)v102;
        v218 = *(float *)(v102 + 4);
        v219 = *(_DWORD *)(v102 + 8);
        v104 = *v203;
        if ( *v202 > v14 )
          v104 = (unsigned int *)((char *)v104 + v13);
        v105 = *v104;
        v106 = (float *)((char *)sinLutTable + ((*v104 >> 20) & 0xFF0));
        v107 = *v198;
        v108 = *v106;
        v109 = v106[1];
        v110 = *v104 & 0xFFFFFF;
        v111 = *v15;
        v112 = (float)(unsigned int)v110;
        v113 = *v15;
        if ( *v198 > v14 )
          v113 = (float *)((char *)v113 + v13);
        v114 = *v113;
        v195 = v99;
        v215 = *v113;
        v115 = v103 * (float)(v108 + (float)((float)(v112 * v109) * 0.000000059605));
        if ( v99 <= 0 )
        {
          ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v215, 0.0, 0.6, 0.018, 0.014);
          v15 = v204;
          v107 = *v198;
          v116 = v215;
          v111 = *v204;
        }
        else
        {
          v116 = v114;
        }
        v117 = v114 * v115;
        if ( v107 > v14 )
          v111 = (float *)((char *)v111 + v13);
        *v111 = v116;
        if ( *(_BYTE *)(v16 + v14 + 3000) )
          v118 = 0.85;
        else
          v118 = v9;
        if ( !*(_BYTE *)(v16 + v14 + 3000) )
          goto LABEL_158;
        v119 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v119 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) == 20 )
            goto LABEL_155;
        }
        else
        {
          v120 = v119 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v120 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( v120 )
          {
LABEL_155:
            v121 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_157;
          }
        }
        v121 = (void *)(dword_60C9CF0C + 1340);
LABEL_157:
        v122 = sead__Random__getU32(v121);
        v15 = v204;
        if ( v195 <= (6 * (unsigned __int64)v122) >> 32 )
        {
          v127 = *v204;
          v118 = 0.7;
          v124 = -0.4;
          if ( *v198 > v14 )
            v127 = (float *)((char *)v127 + v13);
          v125 = v117 * 6.0;
          v126 = v105 - (int)(float)(*v127 * 103220000.0);
        }
        else
        {
LABEL_158:
          v123 = *v15;
          v124 = v9;
          v125 = v117;
          if ( *v198 > v14 )
            v123 = (float *)((char *)v123 + v13);
          v126 = (int)(float)(*v123 * 223640000.0) + v105;
        }
        v128 = *v203;
        if ( *v202 > v14 )
          v128 = (unsigned int *)((char *)v128 + v13);
        *v128 = v126;
        v129 = *v206;
        if ( *v205 > v14 )
          v129 = (_DWORD *)((char *)v129 + v13);
        switch ( *v129 )
        {
          case 4:
            v130 = *v198;
            v131 = *v15;
            v132 = v217;
            v133 = 3.8;
            goto LABEL_172;
          case 7:
            v130 = *v198;
            v131 = *v15;
            v132 = v217;
            v133 = -3.8;
LABEL_172:
            if ( v130 > v14 )
              v131 = (float *)((char *)v131 + v13);
            v217 = v132 + (float)(v124 * (float)(v125 * *v131));
            v135 = v218 + (float)(v124 * (float)((float)(v103 * *v131) * v133));
            goto LABEL_193;
          case 0xA:
            v136 = *v198;
            v137 = *v15;
            v138 = v217;
            v139 = 3.8;
            goto LABEL_177;
          case 0xD:
            v136 = *v198;
            v137 = *v15;
            v138 = v217;
            v139 = -3.8;
LABEL_177:
            if ( v136 > v14 )
              v137 = (float *)((char *)v137 + v13);
            v217 = v138 + (float)(v124 * (float)((float)(v103 * *v137) * v139));
            v218 = v218 + (float)(v124 * (float)(v125 * *v137));
            v135 = v218 + (float)((float)(v9 - v215) * 1.4);
            goto LABEL_193;
          case 0x10:
            v140 = v9;
            v141 = (float *)(a1 + v12 + 11260);
            v142 = (float *)(a1 + v12 + 11264);
            v143 = *v142;
            v144 = *v141;
            v145 = ActorMgrRelated_getById(ActorMgr::instance + 27168, *(_DWORD *)(v189 + v13));
            v146 = v145;
            if ( v145 )
            {
              v147 = v215;
              v148 = (float)(v215 * 0.7) + 0.3;
              v149 = v144 + (float)(v124 * (float)(v148 * 3.0));
              v150 = v143 + (float)(v124 * (float)(v125 * v148));
              *v141 = v149;
              *v142 = v150;
              v151 = *(_DWORD *)(v145 + 164);
              v152 = (v151 >> 20) & 0xFF0;
              v151 &= 0xFFFFFFu;
              v153 = (float *)((char *)sinLutTable + v152);
              v154 = v153[2] + (float)((float)((float)v151 * v153[3]) * 0.000000059605);
              v155 = *v153 + (float)((float)((float)v151 * v153[1]) * 0.000000059605);
              v156 = powf(v147, 3.3);
              ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(
                &v217,
                *(float *)(v146 + 108) + (float)((float)(v150 * v154) - (float)(v149 * v155)),
                v140,
                v156 * 10.0,
                v156 * 0.0001);
              v157 = (float)(v149 * v154) + (float)(v150 * v155);
              v9 = v140;
              ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(
                &v218,
                v157 + *(float *)(v146 + 112),
                v140,
                v156 * 10.0,
                v156 * 0.0001);
              v101 = v198;
              v15 = v204;
              v158 = (float)((float)(v140 - v156)
                           * fabsf(
                               *(float *)((char *)sinLutTable + ((*(_DWORD *)(v146 + 164) >> 20) & 0xFF0))
                             + (float)((float)((float)(*(_DWORD *)(v146 + 164) & 0xFFFFFF)
                                             * *(float *)((char *)&sinLutTable[1]
                                                        + ((*(_DWORD *)(v146 + 164) >> 20) & 0xFF0)))
                                     * 0.000000059605)))
                   * 2.5;
            }
            else
            {
              v101 = v198;
              v15 = v204;
              v9 = v140;
              v161 = *v204;
              if ( *v198 > v14 )
                v161 = (float *)((char *)v161 + v13);
              v217 = v217 + (float)((float)(v103 * *v161) * -3.8);
              v158 = v125 * *v161;
            }
            v10 = 0.5;
            v135 = v158 + v218;
LABEL_193:
            v134 = v135;
            v218 = v135;
            break;
          default:
            v134 = v218;
            break;
        }
        v162 = *v15;
        v163 = fabsf(v117);
        v164 = *v200;
        if ( *v101 > v14 )
          v162 = (float *)((char *)v162 + v13);
        v165 = v9 - *v162;
        v166 = v219;
        if ( *v199 > v14 )
          v164 += v11;
        *(float *)v164 = v217;
        *(float *)(v164 + 4) = v134;
        *(_DWORD *)(v164 + 8) = v166;
        v167 = (float *)((char *)sinLutTable + ((v126 >> 18) & 0xFF0));
        v168 = v167[2];
        v169 = v167[3];
        v170 = *(float *)(a1 + v12 + 6464);
        v171 = v9 - (float)(v165 * v165);
        v172 = *v186;
        if ( *v185 > v14 )
          v172 = (float *)((char *)v172 + v12);
        v173 = (float)(v163 * 0.7) + 0.3;
        *v172 = v118
              * (float)(v173
                      * (float)(v171
                              * (float)(*v196
                                      + (float)((float)(v171 * (float)(*v196 * 0.2))
                                              * (float)(*(float *)((char *)sinLutTable + ((v126 >> 17) & 0xFF0))
                                                      + (float)((float)((float)((8 * v126) & 0xFFFFF8)
                                                                      * *(float *)((char *)&sinLutTable[1]
                                                                                 + ((v126 >> 17) & 0xFF0)))
                                                              * 0.000000059605))))));
        v172[1] = v118
                * (float)(v173
                        * (float)(v171
                                * (float)(v170
                                        + (float)((float)(v171 * (float)(v170 * 0.2))
                                                * (float)(v168
                                                        + (float)((float)((float)((4 * v126) & 0xFFFFFC) * v169)
                                                                * 0.000000059605))))));
        if ( (float)(v218 + -32.0) <= (float)(*(float *)(v201 + 124) - *(float *)(v201 + 108)) )
        {
          v175 = &v207;
          v174 = &v217;
        }
        else
        {
          v174 = &v210;
          v210 = v217;
          v211 = v218 + -32.0;
          v212 = v219;
          v175 = &v208;
        }
        ((void (__fastcall *)(char *, float *, float *, _DWORD))checkLiquidCollisions)(v175, &v216, v174, 0);
        v18 = v187;
        v17 = v188;
        v16 = v189;
        LOBYTE(v20) = v197;
        if ( v218 > *(float *)(v201 + 124) || v218 > (float)(v216 + -4.0) )
          goto LABEL_205;
        if ( v195 )
        {
          v19 = *v192;
          if ( *v191 > v14 )
            v19 = (int *)((char *)v19 + v13);
          *v19 = v195 - 1;
          v210 = (float)(unsigned __int8)v197;
          ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(
            &v210,
            (float)(v163 * 0.0) + 148.0,
            v10,
            100.0,
            v9);
          v20 = (unsigned int)v210;
        }
        else
        {
          v20 = (unsigned int)(float)((float)((float)(v163 * 0.0) + 148.0) * v215);
          if ( v20 <= 8 )
          {
LABEL_205:
            v176 = *v206;
            if ( *v205 > v14 )
              v176 = (_DWORD *)((char *)v176 + v13);
            ++*v176;
          }
        }
        v177 = *v188;
        v15 = v204;
        if ( *v187 > v14 )
          v177 = (_DWORD *)((char *)v177 + v13);
        *v177 = (unsigned __int8)v20 | 0x7F99B200;
        v178 = *v194;
        if ( *v193 > v14 )
          v178 = (unsigned int *)((char *)v178 + v13);
        *v178 = v20 | 0xFFFFFF00;
LABEL_213:
        v13 += 4;
        v11 += 12;
        v12 += 8;
        ++v14;
        if ( v13 != 2400 )
          continue;
        *(_DWORD *)(a1 + 19732) = 1065353216;
        *(_DWORD *)(a1 + 19736) = 0;
        *(_DWORD *)(a1 + 19740) = 0;
        *(_DWORD *)(a1 + 19748) = 0;
        *(_DWORD *)(a1 + 19752) = 1065353216;
        *(_DWORD *)(a1 + 19756) = 0;
        *(_DWORD *)(a1 + 19764) = 0;
        *(_DWORD *)(a1 + 19768) = 0;
        *(_DWORD *)(a1 + 19772) = 1065353216;
        *(_DWORD *)(a1 + 19744) = 0;
        *(_DWORD *)(a1 + 19760) = 0;
        *(_DWORD *)(a1 + 19776) = 1163165696;
        v179 = *(_QWORD *)(a1 + 19740);
        *(_QWORD *)(a1 + 6308) = *(_QWORD *)(a1 + 19732);
        *(_QWORD *)(a1 + 6316) = v179;
        v180 = *(_QWORD *)(a1 + 19756);
        *(_QWORD *)(a1 + 6324) = *(_QWORD *)(a1 + 19748);
        *(_QWORD *)(a1 + 6332) = v180;
        v181 = *(_QWORD *)(a1 + 19772);
        *(_QWORD *)(a1 + 6340) = *(_QWORD *)(a1 + 19764);
        *(_QWORD *)(a1 + 6348) = v181;
        return a1 + 6340;
      case 4:
      case 7:
      case 0xA:
      case 0xD:
      case 0x10:
        goto LABEL_129;
      default:
        goto LABEL_213;
    }
  }
}
