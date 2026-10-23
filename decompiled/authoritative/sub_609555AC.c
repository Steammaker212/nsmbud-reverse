int __fastcall sub_609555AC(int a1, _DWORD *a2, int a3, int a4)
{
  char v4; // r12
  _DWORD *v9; // r0
  __int16 v10; // r3
  __int16 v11; // r6
  int v12; // r6
  int v13; // r6
  int v14; // t1
  const char *v15; // r3
  __int16 v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r6
  _BOOL4 v20; // r1
  bool v21; // zf
  int v22; // r0
  unsigned int v23; // r1
  float v24; // s0
  float *v25; // r2
  float *v26; // r1
  float *v27; // r0
  bool v28; // zf
  int v29; // r1
  int v30; // r2
  __int16 v31; // r0
  float v32; // s0
  float *v33; // r1
  int v34; // r0
  float v35; // s0
  int v36; // r1
  float v37; // s0
  int v38; // r0
  _DWORD *v39; // r1
  int v40; // r2
  __int16 v41; // r0
  float *v42; // r0
  float v43; // s2
  float v44; // s4
  _DWORD *v45; // r2
  float *v46; // r7
  float v47; // s16
  void *v48; // r5
  unsigned int U32; // r6
  float v50; // s18
  float v51; // s24
  float v52; // s20
  unsigned int v53; // r0
  float v54; // r6
  float v55; // s16
  float v56; // s18
  float v57; // s20
  float v58; // s0
  float v59; // s0
  float *v60; // r0
  float v61; // s2
  float v62; // s4
  float *v63; // r0
  float v64; // s0
  float v65; // s2
  float *v66; // r0
  float v67; // s0
  float v68; // s2
  float *v69; // r5
  float v70; // r0
  float v71; // r1
  float v72; // s0
  float v73; // r1
  float v74; // s0
  float v75; // s0
  int v76; // r5
  int v77; // r0
  float v78; // s22
  float v79; // s16
  float v80; // s18
  float v81; // s20
  float v82; // s16
  float v83; // s22
  float v84; // s0
  int v85; // r0
  __int64 v86; // d17
  __int64 v87; // d17
  __int64 v88; // d17
  _DWORD *v89; // r0
  float *v90; // r0
  float v91; // s8
  float v92; // s4
  float v93; // s6
  _DWORD *v94; // r0
  _DWORD *v95; // r0
  float *v96; // r0
  float v97; // r1
  float v98; // r2
  float v99; // r0
  float v100; // s0
  float v101; // s0
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r0
  char v106; // r12
  int (__fastcall ***v107)(_DWORD, int *); // r5
  int v108; // r0
  int v109; // r1
  _DWORD *v110; // r12
  __int64 v111; // d17
  __int64 v112; // d17
  __int64 v113; // d17
  __int64 v114; // d17
  __int64 v115; // d17
  __int64 v116; // d17
  __int64 v117; // d17
  __int64 v118; // d17
  _QWORD *v119; // r2
  _DWORD *v120; // r1
  int v121; // r3
  int v122; // r7
  int v123; // r2
  int v124; // r3
  int v125; // r5
  int v126; // r6
  int v127; // r7
  int v128; // r0
  int v129; // r0
  int v130; // r0
  int v131; // r1
  char v132; // r12
  int (__fastcall ***v133)(_DWORD, int *); // r6
  int v134; // r8
  int v135; // r5
  int v136; // r0
  int v137; // r0
  __int64 v138; // d17
  __int64 v139; // d17
  __int64 v140; // d17
  __int64 v141; // d17
  __int64 v142; // d17
  __int64 v143; // d17
  __int64 v144; // d17
  __int64 v145; // d17
  int v146; // r2
  int v147; // r3
  int v148; // r6
  int v149; // r7
  int v150; // r5
  int v151; // r6
  int v152; // r7
  int v153; // r0
  int v154; // r0
  int v155; // r0
  int v156; // r0
  float v157; // s0
  int v158; // r0
  __int16 v159; // r0
  float *v160; // r1
  float v161; // s0
  float v162; // s4
  float v163; // s2
  float v164; // s6
  float v165; // r0
  float v166; // r1
  float v167; // r3
  float v168; // r2
  float v169; // s4
  float v170; // s8
  float v171; // s0
  float v172; // s10
  float v173; // s2
  int v174; // r6
  int v175; // r5
  _DWORD v177[262]; // [sp+Ch] [bp-41Ch] BYREF
  int v178; // [sp+424h] [bp-4h] BYREF

  v9 = *(_DWORD **)(a1 + 412);
  if ( !v9 )
  {
    v25 = (float *)(a1 + 40);
    v26 = (float *)(a1 + 32);
    v27 = (float *)(a1 + 28);
    goto LABEL_111;
  }
  if ( *v9 )
  {
    v10 = *(_WORD *)(a1 + 80);
    v11 = v10 & 0xFFEF;
    if ( *v9 % 20 > 9 )
      v11 = v10 | 0x10;
    *(_WORD *)(a1 + 80) = v11;
    v21 = (*v9)-- == 1;
    if ( v21 )
      *(_WORD *)(a1 + 80) &= ~0x10u;
  }
  if ( (*(_BYTE *)(a1 + 80) & 0x40) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 412);
    v14 = *(_DWORD *)(v12 + 916);
    v13 = v12 + 916;
    (*(void (__fastcall **)(int))(v14 + 12))(v13);
    v15 = ", ";
    if ( !**(_BYTE **)(*(_DWORD *)(a1 + 412) + 920) )
      v15 = &byte_60ABC94D;
    sub_604209A4(v177, "%s%sOrder = %d", *(const char **)(v13 + 4), v15, ~*(_DWORD *)(a1 + 92));
    sub_60969510(a1 + 16, v177);
    *(_WORD *)(a1 + 80) &= ~0x40u;
  }
  v16 = *(_WORD *)(a1 + 82);
  if ( (v16 & 2) != 0 )
  {
    if ( (v16 & 1) == 0 )
    {
LABEL_59:
      if ( (v16 & 0x20) != 0 )
      {
        v76 = *(_DWORD *)(a1 + 72);
        if ( ((unsigned int)&dword_60C9CD0C & ~(1620400988 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD0C) )
        {
          dword_60C9CD08 = (int)&off_60BFAD80;
          _cxa_guard_release(&dword_60C9CD0C);
        }
        if ( v76 && (**(int (__fastcall ***)(int, int *))v76)(v76, &dword_60C9CD08) == 1 )
        {
          v77 = *(_DWORD *)(a1 + 412);
          v78 = *(float *)(v77 + 876);
          v79 = *(float *)(v77 + 880) * 0.017453;
          v80 = cosf(v79);
          v81 = v78 * 0.017453;
          v82 = sinf(v79);
          v83 = sinf(v78 * 0.017453);
          v84 = cosf(v81);
          v85 = *(_DWORD *)(a1 + 412);
          v86 = *(_QWORD *)(v76 + 12);
          *(_QWORD *)(v85 + 8) = *(_QWORD *)(v76 + 4);
          *(_QWORD *)(v85 + 16) = v86;
          v87 = *(_QWORD *)(v76 + 28);
          *(_QWORD *)(v85 + 24) = *(_QWORD *)(v76 + 20);
          *(_QWORD *)(v85 + 32) = v87;
          v88 = *(_QWORD *)(v76 + 44);
          *(_QWORD *)(v85 + 40) = *(_QWORD *)(v76 + 36);
          *(_QWORD *)(v85 + 48) = v88;
          *(_DWORD *)(v85 + 56) = *(_DWORD *)(v76 + 52);
          *(_DWORD *)(v85 + 60) = *(_DWORD *)(v76 + 56);
          *(_DWORD *)(v85 + 64) = *(_DWORD *)(v76 + 60);
          *(_DWORD *)(v85 + 68) = *(_DWORD *)(v76 + 64);
          *(_DWORD *)(v85 + 72) = *(_DWORD *)(v76 + 68);
          *(_DWORD *)(v85 + 76) = *(_DWORD *)(v76 + 72);
          *(_DWORD *)(v85 + 80) = *(_DWORD *)(v76 + 76);
          *(_DWORD *)(v85 + 84) = *(_DWORD *)(v76 + 80);
          *(_DWORD *)(v85 + 88) = *(_DWORD *)(v76 + 84);
          v89 = *(_DWORD **)(a1 + 412);
          v89[17] = v89[215];
          v89[18] = v89[216];
          v89[19] = v89[217];
          v90 = *(float **)(a1 + 412);
          v91 = v90[218];
          v92 = v90[216] + (float)(v82 * v91);
          v93 = v90[217] + (float)((float)(v80 * v84) * v91);
          v90[14] = v90[215] + (float)((float)(v80 * v83) * v91);
          v90[15] = v92;
          v90[16] = v93;
          (*(void (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 412) + 4) + 16))(
            *(_DWORD *)(a1 + 412) + 4,
            *(_DWORD *)(a1 + 412) + 8);
          v94 = *(_DWORD **)(a1 + 412);
          *(_DWORD *)(v76 + 64) = v94[17];
          *(_DWORD *)(v76 + 68) = v94[18];
          *(_DWORD *)(v76 + 72) = v94[19];
          v95 = *(_DWORD **)(a1 + 412);
          *(_DWORD *)(v76 + 52) = v95[14];
          *(_DWORD *)(v76 + 56) = v95[15];
          *(_DWORD *)(v76 + 60) = v95[16];
          v96 = *(float **)(a1 + 412);
          v97 = v96[20];
          *(float *)(v76 + 76) = v97;
          v98 = v96[21];
          *(float *)(v76 + 80) = v98;
          v99 = v96[22];
          *(float *)(v76 + 84) = v99;
          v100 = sqrtf((float)((float)(v98 * v98) + (float)(v97 * v97)) + (float)(v99 * v99));
          if ( v100 > 0.0 )
          {
            v101 = 1.0 / v100;
            *(float *)(v76 + 76) = v101 * *(float *)(v76 + 76);
            *(float *)(v76 + 80) = v101 * *(float *)(v76 + 80);
            *(float *)(v76 + 84) = v101 * *(float *)(v76 + 84);
          }
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v76 + 16))(v76, v76 + 4);
        }
      }
      goto LABEL_68;
    }
    if ( !a2 )
      goto LABEL_50;
    v17 = a2[68];
    v18 = a2[1];
    v19 = 0;
    v20 = (v17 & 0x2000) == 0;
    v21 = (v18 & 0x4000) == 0;
    if ( (v18 & 0x4000) != 0 )
      v21 = v20;
    if ( !v21 )
      goto LABEL_23;
    if ( (v17 & 0x4000) == 0 )
      v19 = 1;
    if ( (v18 & 0x2000) != 0 && !v19 )
    {
LABEL_23:
      *(_DWORD *)(*(_DWORD *)(a1 + 412) + 184) = 0;
      v22 = *(_DWORD *)(a1 + 412);
      v23 = *(_DWORD *)(v22 + 912) | 1;
LABEL_24:
      *(_DWORD *)(v22 + 912) = v23;
      goto LABEL_25;
    }
    v29 = (v17 & 0x4000) != 0 || v20;
    v28 = v29 == 0;
    if ( v29 )
      v28 = (((v17 & 0x2000) != 0) | v19) == 0;
    if ( v28 )
    {
      v30 = *(_DWORD *)(a1 + 412);
      if ( (*(_BYTE *)(v30 + 912) & 1) == 0 )
      {
        v31 = a2[3] | v18;
        v32 = 0.017453;
        v21 = (v31 & 0x4000) == 0;
        v33 = (float *)&dword_60955844;
        v34 = v31 & 0x2000;
        if ( !v21 )
          v33 = (float *)&unk_60955848;
        if ( !v34 )
          v32 = *v33;
        v35 = v32 + *(float *)(v30 + 184);
        v36 = (int)(float)(v35 * 0.15915);
        if ( (float)v36 != (float)(v35 * 0.15915) )
          --v36;
        if ( (float)(v35 * 0.15915) >= 0.0 )
          v36 = (int)(float)(v35 * 0.15915);
        v37 = v35 - (float)((float)v36 * 6.2832);
        if ( v37 >= 6.2832 )
          v37 = 0.0;
        *(float *)(v30 + 184) = v37;
        if ( a4 == 1 )
        {
LABEL_26:
          v24 = *(float *)(*(_DWORD *)(a1 + 412) + 184);
          if ( a3 == 1 )
            goto LABEL_48;
LABEL_46:
          if ( !a3 )
          {
            v38 = *(_DWORD *)(a1 + 412);
            v39 = a2;
            v40 = 0;
LABEL_49:
            ((void (__fastcall *)(int, _DWORD *, int, float))loc_6093C014)(v38 + 92, v39, v40, v24);
          }
LABEL_50:
          nullsub_125(*(_DWORD *)(a1 + 412) + 92, *(_DWORD *)(a1 + 412) + 896, a1 + 24);
          v41 = *(_WORD *)(a1 + 82);
          if ( (v41 & 0x10) != 0 )
          {
            v42 = *(float **)(a1 + 412);
            v43 = v42[37] - v42[40];
            v44 = v42[38] - v42[41];
            v42[36] = v42[36] - v42[39];
            v42[37] = v43;
            v42[38] = v44;
            v45 = *(_DWORD **)(a1 + 412);
            v45[39] = 0;
            v45[40] = 0;
            v45[41] = 0;
            v41 = *(_WORD *)(a1 + 82);
          }
          if ( (v41 & 0x100) != 0 )
          {
            v46 = *(float **)(a1 + 412);
            v47 = v46[227];
            v48 = (void *)sead::GlobalRandom::sInstance;
            U32 = sead::Random::getU32((void *)sead::GlobalRandom::sInstance);
            v50 = *(float *)(*(_DWORD *)(a1 + 412) + 908);
            LODWORD(v51) = (sead::Random::getU32(v48) >> 9) | 0x3F800000;
            v52 = *(float *)(*(_DWORD *)(a1 + 412) + 908);
            v53 = sead::Random::getU32(v48);
            v46[36] = v47 * (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0);
            v46[37] = v50 * (float)(v51 + -1.0);
            v46[38] = v52 * (float)(COERCE_FLOAT((v53 >> 9) | 0x3F800000) + -1.0);
            LODWORD(v54) = (sead::Random::getU32(v48) >> 9) | 0x3F800000;
            v55 = (float)(COERCE_FLOAT((sead::Random::getU32(v48) >> 9) | 0x3F800000) + -1.0) + -0.5;
            v56 = (float)(v54 + -1.0) + -0.5;
            v57 = (float)(COERCE_FLOAT((sead::Random::getU32(v48) >> 9) | 0x3F800000) + -1.0) + -0.5;
            v58 = sqrtf((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v57 * v57));
            if ( v58 > 0.0 )
            {
              v59 = 1.0 / v58;
              v57 = v59 * v57;
              v55 = v59 * v55;
              v56 = v59 * v56;
            }
            v60 = *(float **)(a1 + 412);
            v61 = v55 + v60[37];
            v62 = v57 + v60[38];
            v60[39] = v56 + v60[36];
            v60[40] = v61;
            v60[41] = v62;
          }
          (*(void (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 412) + 92) + 16))(
            *(_DWORD *)(a1 + 412) + 92,
            *(_DWORD *)(a1 + 412) + 96);
          v63 = *(float **)(a1 + 412);
          v64 = v63[40] + v63[48];
          v65 = v63[41] + v63[49];
          v63[17] = v63[39] + v63[47];
          v63[18] = v64;
          v63[19] = v65;
          v66 = *(float **)(a1 + 412);
          v67 = v66[37] + v66[48];
          v68 = v66[38] + v66[49];
          v66[14] = v66[36] + v66[47];
          v66[15] = v67;
          v66[16] = v68;
          v69 = *(float **)(a1 + 412);
          v70 = v69[42];
          v69[20] = v70;
          v71 = v69[43];
          v69[21] = v71;
          v72 = v71;
          v73 = v69[44];
          v69[22] = v73;
          v74 = sqrtf((float)((float)(v72 * v72) + (float)(v70 * v70)) + (float)(v73 * v73));
          if ( v74 > 0.0 )
          {
            v75 = 1.0 / v74;
            v69[20] = v75 * v69[20];
            v69[21] = v75 * v69[21];
            v69[22] = v75 * v69[22];
          }
          (*(void (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 412) + 4) + 16))(
            *(_DWORD *)(a1 + 412) + 4,
            *(_DWORD *)(a1 + 412) + 8);
          v16 = *(_WORD *)(a1 + 82);
          goto LABEL_59;
        }
LABEL_45:
        v24 = 0.0;
        if ( a3 == 1 )
        {
LABEL_48:
          v38 = *(_DWORD *)(a1 + 412);
          v39 = a2;
          v40 = 1;
          goto LABEL_49;
        }
        goto LABEL_46;
      }
    }
    else if ( (v17 & 0x6000) == 0 )
    {
      v22 = *(_DWORD *)(a1 + 412);
      v23 = *(_DWORD *)(v22 + 912) & 0xFFFFFFFE;
      goto LABEL_24;
    }
LABEL_25:
    if ( a4 == 1 )
      goto LABEL_26;
    goto LABEL_45;
  }
LABEL_68:
  v102 = *(_DWORD *)(a1 + 76);
  if ( v102 )
  {
    if ( (*(_BYTE *)(a1 + 84) & 2) != 0 )
    {
      v105 = (*(int (__fastcall **)(int))(*(_DWORD *)v102 + 40))(v102);
      v107 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 76);
      if ( v105 == 1 )
      {
        if ( ((unsigned int)&dword_60C8D9F4 & ~(1620401788 << v106) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
        {
          dword_60C8D9F0 = (int)&off_60BD9634;
          _cxa_guard_release(&dword_60C8D9F4);
        }
        v108 = (**v107)(v107, &dword_60C8D9F0);
        v109 = *(_DWORD *)(a1 + 412);
        if ( v108 )
          v108 = (int)v107;
        v110 = (_DWORD *)(v109 + 800);
        *(_WORD *)(v109 + 668) = *(_WORD *)(v108 + 4);
        v111 = *(_QWORD *)(v108 + 16);
        *(_QWORD *)(v109 + 672) = *(_QWORD *)(v108 + 8);
        *(_QWORD *)(v109 + 680) = v111;
        v112 = *(_QWORD *)(v108 + 32);
        *(_QWORD *)(v109 + 688) = *(_QWORD *)(v108 + 24);
        *(_QWORD *)(v109 + 696) = v112;
        v113 = *(_QWORD *)(v108 + 48);
        *(_QWORD *)(v109 + 704) = *(_QWORD *)(v108 + 40);
        *(_QWORD *)(v109 + 712) = v113;
        v114 = *(_QWORD *)(v108 + 64);
        *(_QWORD *)(v109 + 720) = *(_QWORD *)(v108 + 56);
        *(_QWORD *)(v109 + 728) = v114;
        v115 = *(_QWORD *)(v108 + 80);
        *(_QWORD *)(v109 + 736) = *(_QWORD *)(v108 + 72);
        *(_QWORD *)(v109 + 744) = v115;
        v116 = *(_QWORD *)(v108 + 96);
        *(_QWORD *)(v109 + 752) = *(_QWORD *)(v108 + 88);
        *(_QWORD *)(v109 + 760) = v116;
        v117 = *(_QWORD *)(v108 + 112);
        *(_QWORD *)(v109 + 768) = *(_QWORD *)(v108 + 104);
        *(_QWORD *)(v109 + 776) = v117;
        v118 = *(_QWORD *)(v108 + 128);
        v119 = (_QWORD *)(v109 + 784);
        v120 = (_DWORD *)(v109 + 812);
        *v119 = *(_QWORD *)(v108 + 120);
        v119[1] = v118;
        v121 = *(_DWORD *)(v108 + 140);
        v122 = *(_DWORD *)(v108 + 144);
        *v110 = *(_DWORD *)(v108 + 136);
        v110[1] = v121;
        v110[2] = v122;
        v123 = *(_DWORD *)(v108 + 152);
        v124 = *(_DWORD *)(v108 + 156);
        v125 = *(_DWORD *)(v108 + 160);
        v126 = *(_DWORD *)(v108 + 164);
        v127 = *(_DWORD *)(v108 + 168);
        *v120 = *(_DWORD *)(v108 + 148);
        v120[1] = v123;
        v120[2] = v124;
        v120[3] = v125;
        v120[4] = v126;
        v120[5] = v127;
        v128 = *(_DWORD *)(a1 + 412);
        *(_DWORD *)(v128 + 812) = *(_DWORD *)(v128 + 212);
        *(_BYTE *)(v128 + 668) = 1;
        v129 = *(_DWORD *)(a1 + 412);
        *(_DWORD *)(v129 + 816) = *(_DWORD *)(v129 + 216);
        *(_BYTE *)(v129 + 668) = 1;
        v130 = *(_DWORD *)(a1 + 412);
        v131 = v130 + 664;
      }
      else
      {
        if ( ((unsigned int)&dword_60C8D9E4 & ~(1620402120 << v106) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9E4) )
        {
          dword_60C8D9E0 = (int)&off_60BD9634;
          _cxa_guard_release(&dword_60C8D9E4);
        }
        if ( v107 && (**v107)(v107, &dword_60C8D9E0) == 1 )
        {
          v133 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 76);
          if ( ((unsigned int)&dword_60C8D9E4 & ~(1620402240 << v132) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9E4) )
          {
            dword_60C8D9E0 = (int)&off_60BD9634;
            _cxa_guard_release(&dword_60C8D9E4);
          }
          if ( v133 )
          {
            v134 = (**v133)(v133, &dword_60C8D9E0);
            if ( v134 )
              v134 = (int)v133;
          }
          else
          {
            v134 = 0;
          }
          v137 = *(_DWORD *)(a1 + 412);
          *(_WORD *)(v137 + 244) = *(_WORD *)(v134 + 4);
          v138 = *(_QWORD *)(v134 + 16);
          *(_QWORD *)(v137 + 248) = *(_QWORD *)(v134 + 8);
          *(_QWORD *)(v137 + 256) = v138;
          v139 = *(_QWORD *)(v134 + 32);
          *(_QWORD *)(v137 + 264) = *(_QWORD *)(v134 + 24);
          *(_QWORD *)(v137 + 272) = v139;
          v140 = *(_QWORD *)(v134 + 48);
          *(_QWORD *)(v137 + 280) = *(_QWORD *)(v134 + 40);
          *(_QWORD *)(v137 + 288) = v140;
          v141 = *(_QWORD *)(v134 + 64);
          *(_QWORD *)(v137 + 296) = *(_QWORD *)(v134 + 56);
          *(_QWORD *)(v137 + 304) = v141;
          v142 = *(_QWORD *)(v134 + 80);
          *(_QWORD *)(v137 + 312) = *(_QWORD *)(v134 + 72);
          *(_QWORD *)(v137 + 320) = v142;
          v143 = *(_QWORD *)(v134 + 96);
          *(_QWORD *)(v137 + 328) = *(_QWORD *)(v134 + 88);
          *(_QWORD *)(v137 + 336) = v143;
          v144 = *(_QWORD *)(v134 + 112);
          *(_QWORD *)(v137 + 344) = *(_QWORD *)(v134 + 104);
          *(_QWORD *)(v137 + 352) = v144;
          v145 = *(_QWORD *)(v134 + 128);
          *(_QWORD *)(v137 + 360) = *(_QWORD *)(v134 + 120);
          *(_QWORD *)(v137 + 368) = v145;
          v146 = *(_DWORD *)(v134 + 140);
          v147 = *(_DWORD *)(v134 + 144);
          *(_DWORD *)(v137 + 376) = *(_DWORD *)(v134 + 136);
          *(_DWORD *)(v137 + 380) = v146;
          *(_DWORD *)(v137 + 384) = v147;
          v148 = *(_DWORD *)(v134 + 152);
          v149 = *(_DWORD *)(v134 + 156);
          *(_DWORD *)(v137 + 388) = *(_DWORD *)(v134 + 148);
          *(_DWORD *)(v137 + 392) = v148;
          *(_DWORD *)(v137 + 396) = v149;
          v150 = *(_DWORD *)(v134 + 164);
          v151 = *(_DWORD *)(v134 + 168);
          v152 = *(_DWORD *)(v134 + 172);
          *(_DWORD *)(v137 + 400) = *(_DWORD *)(v134 + 160);
          *(_DWORD *)(v137 + 404) = v150;
          *(_DWORD *)(v137 + 408) = v151;
          *(_DWORD *)(v137 + 412) = v152;
          *(_DWORD *)(v137 + 416) = *(_DWORD *)(v134 + 176);
          *(_DWORD *)(v137 + 420) = *(_DWORD *)(v134 + 180);
          v153 = *(_DWORD *)(a1 + 412);
          *(_DWORD *)(v153 + 388) = *(_DWORD *)(v153 + 212);
          *(_BYTE *)(v153 + 244) = 1;
          v154 = *(_DWORD *)(a1 + 412);
          *(_DWORD *)(v154 + 392) = *(_DWORD *)(v154 + 216);
          *(_BYTE *)(v154 + 244) = 1;
          sub_6090C2F8(*(_DWORD *)(a1 + 412) + 240, *(float *)(*(_DWORD *)(a1 + 412) + 220) * 0.017453);
          v155 = *(_DWORD *)(a1 + 412);
          *(_DWORD *)(v155 + 416) = *(_DWORD *)(v155 + 224);
          *(_DWORD *)(v155 + 420) = *(_DWORD *)(v155 + 228);
          *(_BYTE *)(v155 + 244) = 1;
          v156 = *(_DWORD *)(a1 + 412);
          *(_DWORD *)(v156 + 412) = *(_DWORD *)(v156 + 232);
          *(_BYTE *)(v156 + 244) = 1;
          if ( (*(_BYTE *)(a1 + 84) & 4) != 0 )
          {
            *(float *)(v134 + 148) = sub_6090C48C(*(_DWORD *)(a1 + 412) + 240);
            *(_BYTE *)(v134 + 4) = 1;
            *(float *)(v134 + 152) = sub_6090C494(*(_DWORD *)(a1 + 412) + 240);
            *(_BYTE *)(v134 + 4) = 1;
            sub_6090C49C(*(_DWORD *)(a1 + 412) + 240);
            sub_6090C2F8(v134, v157);
            v158 = *(_DWORD *)(a1 + 412);
            *(_DWORD *)(v134 + 176) = *(_DWORD *)(v158 + 416);
            *(_DWORD *)(v134 + 180) = *(_DWORD *)(v158 + 420);
            *(_BYTE *)(v134 + 4) = 1;
          }
          v130 = *(_DWORD *)(a1 + 412);
          v131 = v130 + 240;
        }
        else
        {
          v135 = *(_DWORD *)(a1 + 412);
          v136 = sub_6090BDE0(*(_DWORD *)(a1 + 76));
          sub_6090CEB0(v135 + 424, v136, 0);
          v130 = *(_DWORD *)(a1 + 412);
          v131 = v130 + 424;
        }
      }
      *(_DWORD *)(v130 + 236) = v131;
    }
    else
    {
      ((void (__fastcall *)(int, int *))loc_609695A8)(v102, &v178);
      v103 = *(_DWORD *)(a1 + 412);
      if ( v103 )
      {
        *(float *)(v103 + 220) = *(float *)&v177[259] * 57.296;
        *(_DWORD *)(*(_DWORD *)(a1 + 412) + 212) = v178;
        *(_DWORD *)(*(_DWORD *)(a1 + 412) + 216) = v177[261];
        v104 = *(_DWORD *)(a1 + 412);
        *(_DWORD *)(v104 + 224) = v177[0];
        *(_DWORD *)(v104 + 228) = v177[1];
        *(_DWORD *)(*(_DWORD *)(a1 + 412) + 232) = v177[260];
      }
    }
  }
  v159 = *(_WORD *)(a1 + 82);
  *(_WORD *)(a1 + 82) = v159 & 0xFFEF;
  if ( (*(_BYTE *)(a1 + 80) & 8) != 0 )
  {
    sub_60954B6C(a1, 3);
    *(_WORD *)(a1 + 80) &= ~8u;
  }
  else
  {
    if ( (v159 & 4) != 0 && (*(_BYTE *)(*(_DWORD *)(a1 + 412) + 892) & 3) == 0 )
      sub_60954B6C(a1, 1);
    if ( (*(_BYTE *)(a1 + 84) & 1) != 0 && (*(_DWORD *)(*(_DWORD *)(a1 + 412) + 892) & 3) == 2 )
      sub_60954B6C(a1, 2);
  }
  ++*(_DWORD *)(*(_DWORD *)(a1 + 412) + 892);
  v27 = (float *)(a1 + 28);
  if ( (*(_BYTE *)(a1 + 81) & 2) != 0 )
  {
    v160 = *(float **)(a1 + 412);
    v25 = (float *)(a1 + 40);
    v161 = v160[209];
    v162 = v160[211];
    v163 = v160[210];
    v164 = v160[212];
    v26 = (float *)(a1 + 32);
    *(float *)(a1 + 28) = v161;
    *(float *)(a1 + 32) = v163;
    *(float *)(a1 + 36) = v162 + v161;
    *(float *)(a1 + 40) = v164 + v163;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 412) + 836) = *(_DWORD *)(a1 + 28);
    v26 = (float *)(a1 + 32);
    *(_DWORD *)(*(_DWORD *)(a1 + 412) + 840) = *(_DWORD *)(a1 + 32);
    *(float *)(*(_DWORD *)(a1 + 412) + 844) = *(float *)(a1 + 36) - *(float *)(a1 + 28);
    *(float *)(*(_DWORD *)(a1 + 412) + 848) = *(float *)(a1 + 40) - *(float *)(a1 + 32);
    v25 = (float *)(a1 + 40);
  }
LABEL_111:
  v165 = *v27;
  *(float *)(a1 + 52) = v165;
  v166 = *v26;
  *(float *)(a1 + 56) = v166;
  v167 = *(float *)(a1 + 36);
  *(float *)(a1 + 60) = v167;
  v168 = *v25;
  *(float *)(a1 + 64) = v168;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 44);
  if ( *(_BYTE *)(a1 + 86) )
  {
    v169 = arr_flt_60B46820[*(char *)(a1 + 86)] * 0.5;
    v170 = (float)(v167 + v165) * 0.5;
    v171 = v169 * (float)(v167 - v165);
    v172 = (float)(v168 + v166) * 0.5;
    v173 = v169 * (float)(v168 - v166);
    *(float *)(a1 + 52) = v170 - v171;
    *(float *)(a1 + 56) = v172 - v173;
    *(float *)(a1 + 60) = v170 + v171;
    *(float *)(a1 + 64) = v172 + v173;
  }
  v174 = *(_DWORD *)(a1 + 120);
  if ( v174 )
  {
    v175 = *(_DWORD *)(a1 + 124);
    do
    {
      sub_60958618(v175);
      v175 += 1044;
      --v174;
    }
    while ( v174 );
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
}
