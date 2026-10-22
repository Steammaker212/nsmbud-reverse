void __fastcall sub_608DF448(int a1)
{
  int v1; // r7
  __int64 v2; // r8
  int v3; // r10
  char v4; // r12
  int v5; // lr
  unsigned int v6; // r0
  int v7; // r12
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r10
  int v12; // r11
  int (__fastcall ***v13)(_DWORD, void *); // r4
  int v14; // r0
  bool v15; // zf
  int v16; // r11
  int v17; // r6
  int v18; // r0
  __guard *v19; // r6
  __int64 *v20; // r3
  unsigned int v21; // r7
  char v22; // r1
  __int64 v23; // r4
  int v24; // r6
  __int64 v25; // r10
  int v26; // r6
  int v27; // r6
  int v28; // r6
  int v29; // r6
  int v30; // r6
  int v31; // r6
  int v32; // r6
  _BYTE *v33; // r4
  char v34; // r11
  char *v35; // r2
  __int64 *v36; // r3
  unsigned int v37; // r2
  _DWORD *v38; // r0
  int *v39; // r7
  __int64 v40; // r4
  int v41; // r6
  int v42; // r11
  int v43; // r6
  int v44; // r6
  int v45; // r6
  int v46; // r6
  int v47; // r6
  int v48; // r6
  int v49; // r6
  int v50; // r6
  unsigned int v51; // r3
  char v52; // r1
  int v53; // r0
  int *v54; // r11
  unsigned int v55; // r7
  unsigned int v56; // r2
  int v57; // r5
  int v58; // r5
  int v59; // r5
  int v60; // r5
  int v61; // r5
  int v62; // r5
  int v63; // r5
  int v64; // r5
  unsigned int v65; // r7
  __int64 *v66; // r12
  _DWORD *v67; // r0
  int *v68; // r2
  unsigned int v69; // r10
  unsigned int v70; // lr
  int v71; // r1
  int v72; // r3
  int v73; // r6
  int v74; // r6
  int v75; // r6
  int v76; // r6
  int v77; // r6
  int v78; // r6
  int v79; // r6
  int v80; // r6
  unsigned int v81; // r7
  __int64 *v82; // r12
  _DWORD *v83; // r0
  int *v84; // r2
  unsigned int v85; // r10
  unsigned int v86; // lr
  int v87; // r3
  int v88; // r1
  int v89; // r6
  int v90; // r6
  int v91; // r6
  int v92; // r6
  int v93; // r6
  int v94; // r6
  int v95; // r6
  int v96; // r6
  int v97; // r0
  _DWORD *v98; // r2
  int v99; // r5
  char v100; // r3
  char v101; // r1
  _DWORD *v102; // r2
  _DWORD *v103; // r3
  int v104; // r4
  int v105; // r5
  int v106; // r3
  int v107; // r4
  int v108; // r2
  int v109; // r11
  _DWORD *v110; // r2
  int v111; // r5
  _DWORD *v112; // r2
  int v113; // r5
  char v114; // r1
  char v115; // r3
  int v116; // r2
  int v117; // r11
  char v118; // r1
  unsigned int v119; // r2
  unsigned int v120; // r1
  unsigned int v121; // r2
  unsigned int v122; // r1
  unsigned int v123; // r2
  unsigned int v124; // r1
  float v125; // s16
  unsigned int v126; // r2
  float v127; // s18
  unsigned int v128; // r1
  unsigned int v129; // r2
  unsigned int v130; // r1
  unsigned int v131; // r2
  unsigned int v132; // r1
  unsigned int v133; // r2
  unsigned int v134; // r1
  unsigned int v135; // r2
  float v136; // s2
  unsigned int v137; // r2
  unsigned int v138; // r1
  unsigned int v139; // r2
  unsigned int v140; // r1
  unsigned int v141; // r2
  unsigned int v142; // r1
  unsigned int v143; // r2
  unsigned int v144; // r2
  unsigned int v145; // r1
  float v146; // s16
  float v147; // s18
  unsigned int v148; // r2
  unsigned int v149; // r1
  unsigned int v150; // r2
  unsigned int v151; // r1
  unsigned int v152; // r2
  unsigned int v153; // r1
  unsigned int v154; // r2
  unsigned int v155; // r1
  unsigned int v156; // r2
  float v157; // s2
  unsigned int v158; // r2
  unsigned int v159; // r1
  unsigned int v160; // r2
  unsigned int v161; // r1
  unsigned int v162; // r2
  unsigned int v163; // r3
  unsigned int v164; // r1
  unsigned int v165; // r2
  unsigned int v166; // r1
  unsigned int v167; // r2
  float v168; // s18
  float v169; // s20
  unsigned int v170; // r1
  float v171; // s2
  float v172; // s24
  float v173; // s16
  float v174; // s0
  float v175; // s0
  char v176; // r1
  int v177; // [sp+0h] [bp-68h]
  int v178; // [sp+0h] [bp-68h]
  int v179; // [sp+0h] [bp-68h]
  int v180; // [sp+4h] [bp-64h]
  int v181; // [sp+4h] [bp-64h]
  int v182; // [sp+10h] [bp-58h]
  int v183; // [sp+10h] [bp-58h]
  int v184; // [sp+10h] [bp-58h]
  __guard *v185; // [sp+14h] [bp-54h]

  v3 = a1;
  LODWORD(v2) = sub_609097DC(*(_DWORD *)(a1 + 312), 13);
  if ( ((unsigned int)&dword_60C9CFA8 & ~(1619915900 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
  {
    dword_60C9CFA4 = (int)&off_60BFB1D8;
    _cxa_guard_release(&dword_60C9CFA8);
  }
  if ( !(_DWORD)v2 || (**(int (__fastcall ***)(_DWORD, int *))v2)(v2, &dword_60C9CFA4) != 1 )
    return;
  v6 = *(_DWORD *)(v3 + 348);
  if ( v6 >= 9 )
    v6 = 0;
  v7 = *(_DWORD *)(v2 + 4 * v6 + 28);
  v8 = *(unsigned __int8 *)(v3 + 353);
  if ( v8 == v7 )
    goto LABEL_32;
  v9 = v3;
  v177 = v2;
  v180 = v7;
  v10 = *(_DWORD *)(v3 + 320);
  v11 = v3 + 316;
  LODWORD(v2) = v9;
  if ( v10 != v11 )
  {
    v12 = *(_DWORD *)(v9 + 328);
    v13 = (int (__fastcall ***)(_DWORD, void *))(v10 - v12);
    HIDWORD(v2) = &dword_60CCEB1C;
    v1 = (int)&dword_60CCEB18;
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60CCEB1C & ~(1619916144 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB1C) )
      {
        dword_60CCEB18 = &off_60BFB100;
        _cxa_guard_release(&dword_60CCEB1C);
      }
      v14 = (**v13)(v13, &dword_60CCEB18);
      v15 = v13 == 0;
      if ( v13 )
        v15 = (v14 ^ 1) == 1;
      if ( !v15 )
        break;
      v10 = *(_DWORD *)(v10 + 4);
      v13 = (int (__fastcall ***)(_DWORD, void *))(v10 - v12);
      if ( v10 - v12 == v11 - *(_DWORD *)(v2 + 328) )
        goto LABEL_19;
    }
    sub_6090A23C(v13);
  }
LABEL_19:
  v16 = *(_DWORD *)(v2 + 320);
  if ( v16 == v11 )
    goto LABEL_31;
  v17 = *(_DWORD *)(v2 + 328);
  HIDWORD(v2) = 1;
  v1 = v16 - v17;
  while ( 1 )
  {
    if ( ((unsigned int)&dword_60CCEB1C & ~(1619916356 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB1C) )
    {
      dword_60CCEB18 = &off_60BFB100;
      _cxa_guard_release(&dword_60CCEB1C);
    }
    v18 = (**(int (__fastcall ***)(int, void *))v1)(v1, &dword_60CCEB18);
    if ( !v1 || v18 != 1 )
      goto LABEL_28;
    if ( !HIDWORD(v2) )
      break;
    --HIDWORD(v2);
LABEL_28:
    v16 = *(_DWORD *)(v16 + 4);
    v1 = v16 - v17;
    if ( v16 - v17 == v11 - *(_DWORD *)(v2 + 328) )
      goto LABEL_31;
  }
  sub_6090A23C(v1);
LABEL_31:
  v8 = 0;
  v3 = v2;
  *(_DWORD *)(v2 + 360) = 0;
  *(_DWORD *)(v2 + 364) = 0;
  LODWORD(v2) = v177;
  v7 = v180;
LABEL_32:
  *(_BYTE *)(v3 + 353) = v7;
  *(_DWORD *)(v3 + 272) = 0;
  v19 = *(__guard **)(v2 + 24);
  switch ( v7 )
  {
    case 0:
      v185 = *(__guard **)(v2 + 24);
      v20 = (__int64 *)(v3 + 360);
      v21 = *(_DWORD *)(v3 + 348);
      v182 = v3;
      v22 = *(_BYTE *)(v3 + 352);
      if ( v21 >= 9 )
        v21 = 0;
      if ( (*(_BYTE *)(v3 + 352) & 8) != 0 && (v23 = *v20, *v20 >= 1) )
      {
        v24 = v2 + 3736 * v21;
        v8 = 0;
        v25 = *(_QWORD *)(v24 + 64);
        if ( v23 < v25 )
        {
          v8 = *(_DWORD *)(v24 + 72);
          if ( v23 < *(_QWORD *)(v24 + 104) )
          {
            v26 = v2 + 3736 * v21;
            v8 |= *(_DWORD *)(v26 + 112);
            if ( v23 < *(_QWORD *)(v26 + 144) )
            {
              v8 |= *(_DWORD *)(v26 + 152);
              if ( v23 < *(_QWORD *)(v26 + 184) )
              {
                v27 = v2 + 3736 * v21;
                v8 |= *(_DWORD *)(v27 + 192);
                if ( v23 < *(_QWORD *)(v27 + 224) )
                {
                  v8 |= *(_DWORD *)(v27 + 232);
                  if ( v23 < *(_QWORD *)(v27 + 264) )
                  {
                    v28 = v2 + 3736 * v21;
                    v8 |= *(_DWORD *)(v28 + 272);
                    if ( v23 < *(_QWORD *)(v28 + 304) )
                    {
                      v8 |= *(_DWORD *)(v28 + 312);
                      if ( v23 < *(_QWORD *)(v28 + 344) )
                      {
                        v29 = v2 + 3736 * v21;
                        v8 |= *(_DWORD *)(v29 + 352);
                        if ( v23 < *(_QWORD *)(v29 + 384) )
                        {
                          v8 |= *(_DWORD *)(v29 + 392);
                          if ( v23 < *(_QWORD *)(v29 + 424) )
                          {
                            v30 = v2 + 3736 * v21;
                            v8 |= *(_DWORD *)(v30 + 432);
                            if ( v23 < *(_QWORD *)(v30 + 464) )
                            {
                              v8 |= *(_DWORD *)(v30 + 472);
                              if ( v23 < *(_QWORD *)(v30 + 504) )
                              {
                                v31 = v2 + 3736 * v21;
                                v8 |= *(_DWORD *)(v31 + 512);
                                if ( v23 < *(_QWORD *)(v31 + 544) )
                                {
                                  v8 |= *(_DWORD *)(v31 + 552);
                                  if ( v23 < *(_QWORD *)(v31 + 584) )
                                  {
                                    v32 = v2 + 3736 * v21;
                                    v8 |= *(_DWORD *)(v32 + 592);
                                    if ( v23 < *(_QWORD *)(v32 + 624) )
                                    {
                                      v8 |= *(_DWORD *)(v32 + 632);
                                      if ( v23 < *(_QWORD *)(v32 + 664) )
                                        v8 |= *(_DWORD *)(v2 + 3736 * v21 + 672);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v97 = v2 + 3736 * v21;
        v25 = *(_QWORD *)(v97 + 64);
        v8 = *(_DWORD *)(v97 + 72);
      }
      v98 = (_DWORD *)(v2 + 3736 * v21);
      v99 = v98[24];
      v5 = v98[20];
      v1 = v98[21];
      HIDWORD(v2) = v98[22];
      LODWORD(v2) = v98[23];
      *v20 = v25;
      v3 = v182;
      v35 = (char *)(v182 + 352);
      if ( (v99 & 1) == 0 )
      {
        v100 = v22 & 0xFE;
        v101 = v22 & 0xFC;
        *(_BYTE *)(v182 + 352) = v100;
        *(_BYTE *)(v182 + 352) = v101;
        goto LABEL_154;
      }
      v115 = v22 | 1;
      v101 = v22 | 3;
      *(_BYTE *)(v182 + 352) = v115;
      *(_BYTE *)(v182 + 352) = v101;
      goto LABEL_164;
    case 1:
      v185 = *(__guard **)(v2 + 24);
      v36 = (__int64 *)(v3 + 360);
      v37 = *(_DWORD *)(v3 + 348);
      if ( v37 >= 9 )
        v37 = 0;
      v38 = (_DWORD *)(v2 + 3736 * v37);
      v39 = v38 + 16;
      if ( (*(_BYTE *)(v3 + 352) & 8) != 0 && (v40 = *v36, *v36 >= 1) )
      {
        v41 = *v39;
        v42 = v38[17];
        v8 = 0;
        if ( v40 < *(_QWORD *)v39 )
        {
          v43 = v2 + 3736 * v37;
          v8 = *(_DWORD *)(v43 + 72);
          if ( v40 < *(_QWORD *)(v43 + 104) )
          {
            v8 |= *(_DWORD *)(v43 + 112);
            if ( v40 < *(_QWORD *)(v43 + 144) )
            {
              v44 = v2 + 3736 * v37;
              v8 |= *(_DWORD *)(v44 + 152);
              if ( v40 < *(_QWORD *)(v44 + 184) )
              {
                v8 |= *(_DWORD *)(v44 + 192);
                if ( v40 < *(_QWORD *)(v44 + 224) )
                {
                  v45 = v2 + 3736 * v37;
                  v8 |= *(_DWORD *)(v45 + 232);
                  if ( v40 < *(_QWORD *)(v45 + 264) )
                  {
                    v8 |= *(_DWORD *)(v45 + 272);
                    if ( v40 < *(_QWORD *)(v45 + 304) )
                    {
                      v46 = v2 + 3736 * v37;
                      v8 |= *(_DWORD *)(v46 + 312);
                      if ( v40 < *(_QWORD *)(v46 + 344) )
                      {
                        v8 |= *(_DWORD *)(v46 + 352);
                        if ( v40 < *(_QWORD *)(v46 + 384) )
                        {
                          v47 = v2 + 3736 * v37;
                          v8 |= *(_DWORD *)(v47 + 392);
                          if ( v40 < *(_QWORD *)(v47 + 424) )
                          {
                            v8 |= *(_DWORD *)(v47 + 432);
                            if ( v40 < *(_QWORD *)(v47 + 464) )
                            {
                              v48 = v2 + 3736 * v37;
                              v8 |= *(_DWORD *)(v48 + 472);
                              if ( v40 < *(_QWORD *)(v48 + 504) )
                              {
                                v8 |= *(_DWORD *)(v48 + 512);
                                if ( v40 < *(_QWORD *)(v48 + 544) )
                                {
                                  v49 = v2 + 3736 * v37;
                                  v8 |= *(_DWORD *)(v49 + 552);
                                  if ( v40 < *(_QWORD *)(v49 + 584) )
                                  {
                                    v8 |= *(_DWORD *)(v49 + 592);
                                    if ( v40 < *(_QWORD *)(v49 + 624) )
                                    {
                                      v50 = v2 + 3736 * v37;
                                      v8 |= *(_DWORD *)(v50 + 632);
                                      if ( v40 < *(_QWORD *)(v50 + 664) )
                                        v8 |= *(_DWORD *)(v50 + 672);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v41 = *v39;
        }
      }
      else
      {
        v8 = v38[18];
        v41 = *v39;
        v42 = v39[1];
      }
      v101 = *(_BYTE *)(v3 + 352) | 3;
      v102 = (_DWORD *)(v2 + 3736 * v37);
      v5 = v102[20];
      v1 = v102[21];
      HIDWORD(v2) = v102[22];
      LODWORD(v2) = v102[23];
      *(_DWORD *)v36 = v41;
      *(_DWORD *)(v3 + 364) = v42;
      *(_BYTE *)(v3 + 352) = v101;
      v35 = (char *)(v3 + 352);
      goto LABEL_164;
    case 2:
      v51 = *(_DWORD *)(v3 + 348);
      v52 = *(_BYTE *)(v3 + 352);
      if ( v51 >= 9 )
        v51 = 0;
      v53 = v2 + 3736 * v51;
      v54 = (int *)(v53 + 64);
      if ( (*(_BYTE *)(v3 + 352) & 8) != 0
        && (v55 = *(_DWORD *)(v3 + 360), v56 = *(_DWORD *)(v3 + 364), __SPAIR64__(v56, v55) >= 1) )
      {
        v8 = 0;
        if ( __SPAIR64__(v56, v55) < *(_QWORD *)v54 )
        {
          v57 = v2 + 3736 * v51;
          v8 = *(_DWORD *)(v57 + 72);
          if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v57 + 104) )
          {
            v8 |= *(_DWORD *)(v57 + 112);
            if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v57 + 144) )
            {
              v58 = v2 + 3736 * v51;
              v8 |= *(_DWORD *)(v58 + 152);
              if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v58 + 184) )
              {
                v8 |= *(_DWORD *)(v58 + 192);
                if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v58 + 224) )
                {
                  v59 = v2 + 3736 * v51;
                  v8 |= *(_DWORD *)(v59 + 232);
                  if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v59 + 264) )
                  {
                    v8 |= *(_DWORD *)(v59 + 272);
                    if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v59 + 304) )
                    {
                      v60 = v2 + 3736 * v51;
                      v8 |= *(_DWORD *)(v60 + 312);
                      if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v60 + 344) )
                      {
                        v8 |= *(_DWORD *)(v60 + 352);
                        if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v60 + 384) )
                        {
                          v61 = v2 + 3736 * v51;
                          v8 |= *(_DWORD *)(v61 + 392);
                          if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v61 + 424) )
                          {
                            v8 |= *(_DWORD *)(v61 + 432);
                            if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v61 + 464) )
                            {
                              v62 = v2 + 3736 * v51;
                              v8 |= *(_DWORD *)(v62 + 472);
                              if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v62 + 504) )
                              {
                                v8 |= *(_DWORD *)(v62 + 512);
                                if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v62 + 544) )
                                {
                                  v63 = v2 + 3736 * v51;
                                  v8 |= *(_DWORD *)(v63 + 552);
                                  if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v63 + 584) )
                                  {
                                    v8 |= *(_DWORD *)(v63 + 592);
                                    if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v63 + 624) )
                                    {
                                      v64 = v2 + 3736 * v51;
                                      v8 |= *(_DWORD *)(v64 + 632);
                                      if ( __SPAIR64__(v56, v55) < *(_QWORD *)(v64 + 664) )
                                        v8 |= *(_DWORD *)(v64 + 672);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(v53 + 72);
      }
      v103 = (_DWORD *)(v2 + 3736 * v51);
      v104 = v103[24];
      v5 = v103[20];
      v1 = v103[21];
      HIDWORD(v2) = v103[22];
      LODWORD(v2) = v103[23];
      v105 = v104 & 0x14;
      v106 = v104 & 0x10;
      v107 = v104 & 4;
      if ( (*(_BYTE *)(v3 + 352) & 0x10) == 0 )
      {
        v108 = *v54;
        v109 = v54[1];
        *(_DWORD *)(v3 + 360) = v108;
        v35 = (char *)(v3 + 352);
        *(_DWORD *)(v3 + 364) = v109;
        if ( !v105 )
          goto LABEL_278;
LABEL_162:
        v118 = v52 | 1;
        goto LABEL_279;
      }
      v116 = *v54;
      v117 = v54[1];
      *(_DWORD *)(v3 + 360) = v116;
      v35 = (char *)(v3 + 352);
      *(_DWORD *)(v3 + 364) = v117;
      if ( v105 == 20 )
        goto LABEL_162;
LABEL_278:
      v118 = v52 & 0xFE;
LABEL_279:
      *(_BYTE *)(v3 + 352) = v118;
      v176 = *v35;
      if ( v107 )
        v101 = v176 | 2;
      else
        v101 = v176 & 0xFD;
      *v35 = v101;
      if ( v106 )
        goto LABEL_165;
LABEL_159:
      v114 = v101 & 0xFB;
LABEL_166:
      *v35 = v114;
      switch ( v7 )
      {
        case 5:
          *(_DWORD *)(v3 + 284) = 0;
          *(_DWORD *)(v3 + 288) = 0;
LABEL_247:
          *(_DWORD *)(v3 + 292) = 0;
          *(_DWORD *)(v3 + 296) = 0;
          return;
        case 4:
          v129 = *(_DWORD *)(v3 + 272) & 0xFFFFDFFF;
          if ( (v8 & 0x4000000) != 0 )
            v129 = *(_DWORD *)(v3 + 272) | 0x2000;
          v130 = v129 & 0xFFFFBFFF;
          if ( (v8 & 0x8000000) != 0 )
            v130 = v129 | 0x4000;
          v131 = v130 & 0xFFFFFBFF;
          if ( (v8 & 0x400) != 0 )
            v131 = v130 | 0x400;
          v132 = v131 & 0xFFFFFF7F;
          if ( (v8 & 0x20) != 0 )
            v132 = v131 | 0x80;
          *(_DWORD *)(v3 + 272) = v132;
          if ( v19 == (__guard *)1 )
          {
            v133 = v132 & 0xFFFFFFFD;
            if ( (v8 & 1) != 0 )
              v133 = v132 | 2;
            v134 = v133 & 0xFFFFFFEF;
            if ( (v8 & 2) != 0 )
              v134 = v133 | 0x10;
            v135 = v134 & 0xFFFFFFFE;
            if ( (v8 & 4) != 0 )
              v135 = v134 | 1;
            v128 = v135 & 0xFFFFFFF7;
            if ( (v8 & 8) != 0 )
              v128 = v135 | 8;
            v125 = (float)-v5 / 32767.0;
            v127 = (float)v1 / 32767.0;
            goto LABEL_206;
          }
          v152 = v132 & 0xFFFFFFDF;
          if ( (v8 & 0x200) != 0 )
            v152 = v132 | 0x20;
          v153 = v152 & 0xFFFFFFBF;
          if ( (v8 & 0x80) != 0 )
            v153 = v152 | 0x40;
          v146 = (float)v5 / 32767.0;
          v147 = (float)v1 / 32767.0;
          v154 = v153 & 0xFFFFFFFE;
          if ( (v8 & 1) != 0 )
            v154 = v153 | 1;
          v155 = v154 & 0xFFFFFFFD;
          if ( (v8 & 2) != 0 )
            v155 = v154 | 2;
          v156 = v155 & 0xFFFFFFF7;
          if ( (v8 & 4) != 0 )
            v156 = v155 | 8;
          v151 = v156 & 0xFFFFFFEF;
          if ( (v8 & 8) != 0 )
            v151 = v156 | 0x10;
LABEL_244:
          v157 = sqrtf((float)(v146 * v146) + (float)(v147 * v147));
          *(_DWORD *)(v3 + 272) = v151;
          if ( v157 > 1.0 )
          {
            v147 = v147 * (float)(1.0 / v157);
            v146 = v146 * (float)(1.0 / v157);
          }
          *(float *)(v3 + 284) = v146;
          *(float *)(v3 + 288) = v147;
          goto LABEL_247;
        case 3:
          v119 = *(_DWORD *)(v3 + 272) & 0xFFFFDFFF;
          if ( (v8 & 0x1000000) != 0 )
            v119 = *(_DWORD *)(v3 + 272) | 0x2000;
          v120 = v119 & 0xFFFFBFFF;
          if ( (v8 & 0x2000000) != 0 )
            v120 = v119 | 0x4000;
          v121 = v120 & 0xFFFFFDFF;
          if ( (v8 & 0x800) != 0 )
            v121 = v120 | 0x200;
          v122 = v121 & 0xFFFFFF7F;
          if ( (v8 & 0x10) != 0 )
            v122 = v121 | 0x80;
          *(_DWORD *)(v3 + 272) = v122;
          if ( v19 == (__guard *)1 )
          {
            v123 = v122 & 0xFFFFFFFD;
            if ( (v8 & 0x1000) != 0 )
              v123 = v122 | 2;
            v124 = v123 & 0xFFFFFFF7;
            if ( (v8 & 0x4000) != 0 )
              v124 = v123 | 8;
            v125 = (float)v5 / 32767.0;
            v126 = v124 & 0xFFFFFFEF;
            v127 = (float)-v1 / 32767.0;
            if ( (v8 & 0x2000) != 0 )
              v126 = v124 | 0x10;
            v128 = v126 & 0xFFFFFFFE;
            if ( (v8 & 0x8000) != 0 )
              v128 = v126 | 1;
LABEL_206:
            v136 = sqrtf((float)(v125 * v125) + (float)(v127 * v127));
            *(_DWORD *)(v3 + 272) = v128;
            if ( v136 > 1.0 )
            {
              v125 = v125 * (float)(1.0 / v136);
              v127 = v127 * (float)(1.0 / v136);
            }
            *(float *)(v3 + 284) = v127;
            *(float *)(v3 + 288) = v125;
            goto LABEL_247;
          }
          v144 = v122 & 0xFFFFFFFB;
          if ( (v8 & 0x100) != 0 )
            v144 = v122 | 4;
          v145 = v144 & 0xFFFFFFBF;
          if ( (v8 & 0x40) != 0 )
            v145 = v144 | 0x40;
          v146 = (float)v5 / 32767.0;
          v147 = (float)v1 / 32767.0;
          v148 = v145 & 0xFFFFFFEF;
          if ( (v8 & 0x1000) != 0 )
            v148 = v145 | 0x10;
          v149 = v148 & 0xFFFFFFFE;
          if ( (v8 & 0x4000) != 0 )
            v149 = v148 | 1;
          v150 = v149 & 0xFFFFFFF7;
          if ( (v8 & 0x2000) != 0 )
            v150 = v149 | 8;
          v151 = v150 & 0xFFFFFFFD;
          if ( (v8 & 0x8000) != 0 )
            v151 = v150 | 2;
          goto LABEL_244;
      }
      v137 = *(_DWORD *)(v3 + 272) & 0xFFFFFFFE;
      if ( (v8 & 1) != 0 )
        v137 = *(_DWORD *)(v3 + 272) | 1;
      v138 = v137 & 0xFFFFFFFD;
      if ( (v8 & 2) != 0 )
        v138 = v137 | 2;
      v139 = v138 & 0xFFFFFFF7;
      if ( (v8 & 4) != 0 )
        v139 = v138 | 8;
      v140 = v139 & 0xFFFFFFEF;
      if ( (v8 & 8) != 0 )
        v140 = v139 | 0x10;
      *(_DWORD *)(v3 + 272) = v140;
      if ( (v8 & 0x400) != 0 )
      {
        v143 = v140 | 0x400;
        v142 = v140 | 0xC00;
      }
      else
      {
        v141 = v140;
        v142 = v140 & 0xFFFFF3FF;
        v143 = v141 & 0xFFFFFBFF;
      }
      *(_DWORD *)(v3 + 272) = v143;
      v158 = v142 & 0xFFFFFFBF;
      if ( (v8 & 0x20) != 0 )
        v158 = v142 | 0x40;
      v159 = v158 & 0xFFFFFFDF;
      if ( (v8 & 0x200) != 0 )
        v159 = v158 | 0x20;
      v160 = v159 & 0xFFFFBFFF;
      if ( (v8 & 0x80) != 0 )
        v160 = v159 | 0x4000;
      v161 = v160 & 0xFFFBFFFF;
      if ( (v8 & 0x1000) != 0 )
        v161 = v160 | 0x40000;
      v162 = v161 & 0xFFF7FFFF;
      if ( (v8 & 0x4000) != 0 )
        v162 = v161 | 0x80000;
      v163 = v162 & 0xFFFEFFFF;
      if ( (v8 & 0x2000) != 0 )
        v163 = v162 | 0x10000;
      v164 = v163 & 0xFFFDFFFF;
      if ( (v8 & 0x8000) != 0 )
        v164 = v163 | 0x20000;
      *(_DWORD *)(v3 + 272) = v164;
      if ( (v8 & 0x800) != 0 )
      {
        *(_DWORD *)(v3 + 272) = v164 | 0x200;
        v165 = v164 | 0x1200;
      }
      else
      {
        v165 = v164 & 0xFFFFEDFF;
        *(_DWORD *)(v3 + 272) = v164 & 0xFFFFFDFF;
      }
      v166 = v165 & 0xFFFFFF7F;
      if ( (v8 & 0x10) != 0 )
        v166 = v165 | 0x80;
      v167 = v166 & 0xFFFFFFFB;
      if ( (v8 & 0x100) != 0 )
        v167 = v166 | 4;
      v168 = (float)v5 / 32767.0;
      v169 = (float)v1 / 32767.0;
      v170 = v167 & 0xFFFFDFFF;
      if ( (v8 & 0x40) != 0 )
        v170 = v167 | 0x2000;
      *(_DWORD *)(v3 + 272) = v170;
      v171 = sqrtf((float)(v168 * v168) + (float)(v169 * v169));
      if ( v171 > 1.0 )
      {
        v169 = v169 * (float)(1.0 / v171);
        v168 = v168 * (float)(1.0 / v171);
      }
      *(float *)(v3 + 284) = v168;
      *(float *)(v3 + 288) = v169;
      v172 = (float)SHIDWORD(v2) / 32767.0;
      v173 = (float)(int)v2 / 32767.0;
      v174 = sqrtf((float)(v172 * v172) + (float)(v173 * v173));
      if ( v174 > 1.0 )
      {
        v175 = 1.0 / v174;
        v173 = v173 * v175;
        v172 = v172 * v175;
      }
      *(float *)(v3 + 292) = v172;
      *(float *)(v3 + 296) = v173;
      return;
    case 3:
      v185 = *(__guard **)(v2 + 24);
      v181 = v7;
      v183 = v3;
      v33 = (_BYTE *)(v3 + 352);
      v34 = *(_BYTE *)(v3 + 352);
      v65 = *(_DWORD *)(v3 + 348);
      v66 = (__int64 *)(v3 + 360);
      if ( v65 >= 9 )
        v65 = 0;
      v67 = (_DWORD *)(v2 + 3736 * v65);
      v68 = v67 + 16;
      if ( (*(_BYTE *)(v3 + 352) & 8) != 0 && (v69 = *(_DWORD *)v66, v70 = *((_DWORD *)v66 + 1), *v66 >= 1) )
      {
        v71 = *v68;
        v72 = v67[17];
        v8 = 0;
        if ( __SPAIR64__(v70, v69) >= *(_QWORD *)v68 )
          goto LABEL_152;
        v178 = v2;
        v73 = v2 + 3736 * v65;
        v2 = *(_QWORD *)(v73 + 104);
        v8 = *(_DWORD *)(v73 + 72);
        if ( __SPAIR64__(v70, v69) >= v2 )
          goto LABEL_119;
        v8 |= *(_DWORD *)(v73 + 112);
        if ( __SPAIR64__(v70, v69) >= *(_QWORD *)(v73 + 144) )
          goto LABEL_119;
        v74 = v178 + 3736 * v65;
        v2 = *(_QWORD *)(v74 + 184);
        v8 |= *(_DWORD *)(v74 + 152);
        if ( __SPAIR64__(v70, v69) >= v2 )
          goto LABEL_119;
        v72 = v68[1];
        v8 |= *(_DWORD *)(v74 + 192);
        if ( __SPAIR64__(v70, v69) >= *(_QWORD *)(v74 + 224) )
        {
          LODWORD(v2) = v178;
        }
        else
        {
          v75 = v178 + 3736 * v65;
          v8 |= *(_DWORD *)(v75 + 232);
          if ( __SPAIR64__(v70, v69) >= *(_QWORD *)(v75 + 264) )
          {
            LODWORD(v2) = v178;
          }
          else
          {
            v8 |= *(_DWORD *)(v75 + 272);
            if ( __SPAIR64__(v70, v69) >= *(_QWORD *)(v75 + 304) )
            {
              LODWORD(v2) = v178;
            }
            else
            {
              v76 = v178 + 3736 * v65;
              v8 |= *(_DWORD *)(v76 + 312);
              if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v76 + 344) )
              {
                v8 |= *(_DWORD *)(v76 + 352);
                if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v76 + 384) )
                {
                  v77 = v178 + 3736 * v65;
                  v8 |= *(_DWORD *)(v77 + 392);
                  if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v77 + 424) )
                  {
                    v8 |= *(_DWORD *)(v77 + 432);
                    if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v77 + 464) )
                    {
                      v78 = v178 + 3736 * v65;
                      v8 |= *(_DWORD *)(v78 + 472);
                      if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v78 + 504) )
                      {
                        v8 |= *(_DWORD *)(v78 + 512);
                        if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v78 + 544) )
                        {
                          v79 = v178 + 3736 * v65;
                          v8 |= *(_DWORD *)(v79 + 552);
                          if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v79 + 584) )
                          {
                            v8 |= *(_DWORD *)(v79 + 592);
                            if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v79 + 624) )
                            {
                              v80 = v178 + 3736 * v65;
                              v8 |= *(_DWORD *)(v80 + 632);
                              if ( __SPAIR64__(v70, v69) < *(_QWORD *)(v80 + 664) )
                                v8 |= *(_DWORD *)(v80 + 672);
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_119:
                LODWORD(v2) = v178;
                v71 = *v68;
                v72 = v68[1];
                goto LABEL_152;
              }
              LODWORD(v2) = v178;
            }
          }
        }
      }
      else
      {
        v8 = v67[18];
        v71 = *v68;
        v72 = v68[1];
      }
LABEL_152:
      v110 = (_DWORD *)(v2 + 3736 * v65);
      v111 = v110[24];
      v1 = v110[21];
      v5 = v110[20];
      *(_DWORD *)v66 = v71;
      *((_DWORD *)v66 + 1) = v72;
      v3 = v183;
      v35 = (char *)(v183 + 352);
      if ( (v111 & 1) != 0 )
      {
        v101 = v34 | 3;
        *v33 = v34 | 3;
        v7 = v181;
LABEL_154:
        v19 = v185;
        goto LABEL_159;
      }
      goto LABEL_157;
    case 4:
      v185 = *(__guard **)(v2 + 24);
      v181 = v7;
      v184 = v3;
      v33 = (_BYTE *)(v3 + 352);
      v34 = *(_BYTE *)(v3 + 352);
      v81 = *(_DWORD *)(v3 + 348);
      v82 = (__int64 *)(v3 + 360);
      if ( v81 >= 9 )
        v81 = 0;
      v83 = (_DWORD *)(v2 + 3736 * v81);
      v84 = v83 + 16;
      if ( (*(_BYTE *)(v3 + 352) & 8) != 0 && (v85 = *(_DWORD *)v82, v86 = *((_DWORD *)v82 + 1), *v82 >= 1) )
      {
        v87 = *v84;
        v88 = v83[17];
        v8 = 0;
        if ( __SPAIR64__(v86, v85) >= *(_QWORD *)v84 )
          goto LABEL_156;
        v179 = v2;
        v89 = v2 + 3736 * v81;
        v2 = *(_QWORD *)(v89 + 104);
        v8 = *(_DWORD *)(v89 + 72);
        if ( __SPAIR64__(v86, v85) >= v2 )
          goto LABEL_141;
        v8 |= *(_DWORD *)(v89 + 112);
        if ( __SPAIR64__(v86, v85) >= *(_QWORD *)(v89 + 144) )
          goto LABEL_141;
        v90 = v179 + 3736 * v81;
        v2 = *(_QWORD *)(v90 + 184);
        v8 |= *(_DWORD *)(v90 + 152);
        if ( __SPAIR64__(v86, v85) >= v2 )
          goto LABEL_141;
        v87 = *v84;
        v8 |= *(_DWORD *)(v90 + 192);
        if ( __SPAIR64__(v86, v85) >= *(_QWORD *)(v90 + 224) )
        {
          LODWORD(v2) = v179;
        }
        else
        {
          v91 = v179 + 3736 * v81;
          v8 |= *(_DWORD *)(v91 + 232);
          if ( __SPAIR64__(v86, v85) >= *(_QWORD *)(v91 + 264) )
          {
            LODWORD(v2) = v179;
          }
          else
          {
            v8 |= *(_DWORD *)(v91 + 272);
            if ( __SPAIR64__(v86, v85) >= *(_QWORD *)(v91 + 304) )
            {
              LODWORD(v2) = v179;
            }
            else
            {
              v92 = v179 + 3736 * v81;
              v8 |= *(_DWORD *)(v92 + 312);
              if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v92 + 344) )
              {
                v8 |= *(_DWORD *)(v92 + 352);
                if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v92 + 384) )
                {
                  v93 = v179 + 3736 * v81;
                  v8 |= *(_DWORD *)(v93 + 392);
                  if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v93 + 424) )
                  {
                    v8 |= *(_DWORD *)(v93 + 432);
                    if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v93 + 464) )
                    {
                      v94 = v179 + 3736 * v81;
                      v8 |= *(_DWORD *)(v94 + 472);
                      if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v94 + 504) )
                      {
                        v8 |= *(_DWORD *)(v94 + 512);
                        if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v94 + 544) )
                        {
                          v95 = v179 + 3736 * v81;
                          v8 |= *(_DWORD *)(v95 + 552);
                          if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v95 + 584) )
                          {
                            v8 |= *(_DWORD *)(v95 + 592);
                            if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v95 + 624) )
                            {
                              v96 = v179 + 3736 * v81;
                              v8 |= *(_DWORD *)(v96 + 632);
                              if ( __SPAIR64__(v86, v85) < *(_QWORD *)(v96 + 664) )
                                v8 |= *(_DWORD *)(v96 + 672);
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_141:
                LODWORD(v2) = v179;
                v87 = *v84;
                goto LABEL_156;
              }
              LODWORD(v2) = v179;
            }
          }
        }
      }
      else
      {
        v8 = v83[18];
        v87 = *v84;
        v88 = v84[1];
      }
LABEL_156:
      v112 = (_DWORD *)(v2 + 3736 * v81);
      v113 = v112[24];
      v5 = v112[22];
      v1 = v112[23];
      *(_DWORD *)v82 = v87;
      *((_DWORD *)v82 + 1) = v88;
      v3 = v184;
      v35 = (char *)(v184 + 352);
      if ( (v113 & 1) != 0 )
      {
        v101 = v34 & 0xFC | 1;
        *v35 = v101;
        v7 = v181;
LABEL_164:
        v19 = v185;
LABEL_165:
        v114 = v101 | 4;
        goto LABEL_166;
      }
LABEL_157:
      v7 = v181;
      v19 = v185;
LABEL_158:
      v101 = v34 & 0xFC;
      *v33 = v34 & 0xFC;
      goto LABEL_159;
    default:
      v33 = (_BYTE *)(v3 + 352);
      v34 = *(_BYTE *)(v3 + 352);
      v35 = (char *)(v3 + 352);
      goto LABEL_158;
  }
}
