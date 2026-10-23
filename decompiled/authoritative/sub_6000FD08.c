unsigned int __fastcall sub_6000FD08(int a1)
{
  int v2; // r8
  float v3; // s2
  float v4; // s0
  float v5; // s2
  float v6; // s24
  float v7; // s16
  float v8; // s18
  float v9; // s28
  float v10; // s30
  int v11; // r7
  unsigned int result; // r0
  float v13; // s0
  float v14; // s8
  float v15; // s6
  float v16; // s2
  float v17; // s12
  float v18; // s4
  float v19; // s10
  float v20; // s1
  float v21; // s10
  float v22; // s10
  float v23; // s14
  float v24; // s4
  float v25; // s2
  float v26; // s0
  float v27; // s6
  float v28; // s8
  float v29; // s12
  float v30; // s6
  float v31; // s6
  float v32; // s10
  float v33; // r10
  float v34; // s6
  float v35; // s4
  float v36; // s0
  float v37; // s12
  float v38; // s2
  float v39; // s8
  float v40; // s14
  float v41; // s8
  float v42; // s8
  float v43; // s12
  float v44; // s8
  float v45; // s6
  float v46; // s2
  float v47; // s14
  float v48; // s4
  float v49; // s10
  float v50; // s1
  float v51; // s10
  float v52; // s10
  float v53; // s14
  float v54; // s8
  float v55; // s6
  float v56; // s2
  float v57; // s14
  float v58; // s4
  float v59; // s10
  float v60; // s1
  float v61; // s10
  float v62; // s10
  float v63; // s14
  float v64; // s8
  float v65; // s6
  float v66; // s2
  float v67; // s14
  float v68; // s4
  float v69; // s10
  float v70; // s1
  float v71; // s10
  float v72; // s10
  float v73; // s14
  float v74; // s8
  float v75; // s6
  float v76; // s2
  float v77; // s14
  float v78; // s4
  float v79; // s10
  float v80; // s1
  float v81; // s10
  float v82; // s10
  float v83; // s14
  float v84; // s4
  float v85; // s2
  float v86; // s0
  float v87; // s6
  float v88; // s10
  float v89; // s12
  float v90; // s6
  float v91; // s6
  float v92; // s10
  float v93; // s4
  float v94; // s12
  float v95; // s10
  float v96; // s8
  float v97; // s6
  float v98; // s1
  float v99; // s12
  float v100; // s12
  float v101; // s1
  float v102; // s8
  float v103; // s6
  float v104; // s2
  float v105; // s12
  float v106; // s4
  float v107; // s10
  float v108; // s1
  float v109; // s10
  float v110; // s10
  float v111; // s14
  float v112; // s10
  float v113; // s8
  float v114; // s6
  float v115; // s4
  float v116; // s1
  float v117; // s10
  float v118; // s10
  float v119; // s14
  float v120; // s4
  float v121; // s2
  float v122; // s0
  float v123; // s6
  float v124; // s10
  float v125; // s12
  float v126; // s6
  float v127; // s6
  float v128; // s10
  float v129; // s2
  float v130; // s4
  float v131; // s2
  float v132; // s4
  unsigned int v133; // r1
  float v134; // s2
  float v135; // s4
  float v136; // s2
  float v137; // s3
  float v138; // s0
  float v139; // s1
  float *v140; // r1
  float v141; // s2
  float v142; // s3
  float v143; // s0
  float v144; // s1
  float *v145; // r1
  float v146; // s2
  float v147; // s4
  float v148; // s17
  float v149; // s2
  float v150; // s4
  unsigned int v151; // r1
  float v152; // s2
  float v153; // s4
  float v154; // s4
  float v155; // s2
  float v156; // s4
  float v157; // s2
  float v158; // s4
  unsigned int v159; // r1
  float v160; // s17
  float v161; // s2
  float v162; // s4
  unsigned int v163; // r1
  float v164; // s8
  float v165; // s4
  float v166; // s8
  float v167; // s10
  float v168; // s6
  float v169; // s12
  float v170; // s8
  float v171; // s12
  float v172; // s8
  float v173; // s12
  float v174; // s8
  float v175; // s12
  float v176; // s8
  float v177; // s8
  float v178; // s4
  float v179; // s10
  float v180; // s14
  float v181; // s8
  float v182; // s12
  float v183; // s12
  float v184; // s8
  float v185; // s8
  float v186; // s4
  bool v187; // fzf
  bool v188; // fzf
  bool v189; // fzf
  bool v190; // fzf
  bool v191; // fzf
  bool v192; // fzf
  bool v193; // fzf
  bool v194; // fzf
  bool v195; // fzf
  bool v196; // fzf
  bool v197; // fzf
  bool v198; // fzf
  int *v199; // r1
  int v200; // r1
  unsigned int v201; // r1
  int v202; // r1
  unsigned int v203; // r1
  int v204; // r1
  unsigned int v205; // r1
  int v206; // r1
  unsigned int v207; // r1
  float v208; // s2
  float v209; // s0
  float v210; // [sp+8h] [bp-20h] BYREF
  float v211; // [sp+Ch] [bp-1Ch]
  float v212; // [sp+10h] [bp-18h] BYREF
  float v213; // [sp+14h] [bp-14h]
  float v214; // [sp+18h] [bp-10h] BYREF
  float v215; // [sp+1Ch] [bp-Ch]
  float v216; // [sp+20h] [bp-8h] BYREF
  float v217; // [sp+24h] [bp-4h]

  v2 = 0;
  v3 = (float)(int)*(float *)(a1 + 112);
  v216 = (float)(int)*(float *)(a1 + 108);
  v217 = v3;
  v4 = *(float *)(a1 + 100);
  v5 = (float)(int)*(float *)(a1 + 104);
  v214 = (float)(int)v4;
  v215 = v5;
  v6 = (float)((float)(int)(float)(v4 * 0.0625) * 16.0) + -16.0;
  v7 = (float)((float)(int)(float)(*(float *)(a1 + 104) * 0.0625) * 16.0) + -16.0;
  v210 = v6;
  v211 = v7;
  while ( 1 )
  {
    v8 = v7 + 16.0;
    v9 = v7 + -8.0;
    v10 = v6;
    v11 = 0;
    v210 = v6;
    while ( 2 )
    {
      result = sub_607160F4(
                 TileMgr_instance,
                 (int)v10,
                 (unsigned __int16)(int)(float)-v7,
                 *(unsigned __int8 *)(a1 + 141),
                 1);
      if ( (unsigned __int16)result != 1 )
      {
        v13 = v10;
        goto LABEL_394;
      }
      result = BYTE2(result);
      v13 = v10;
      switch ( result )
      {
        case 0u:
          result = LODWORD(v210);
          v14 = v216 - v10;
          v15 = v214 - v10;
          v16 = v211 + -16.0;
          v13 = v210;
          v17 = (float)(v214 - v10) - (float)(v216 - v10);
          v18 = v215 - (float)(v211 + -16.0);
          v19 = v217 - (float)(v211 + -16.0);
          if ( v17 == 0.0 )
          {
            if ( v15 >= 0.0 && v15 < 16.0 )
            {
              if ( v19 <= v18 )
                v164 = v217 - (float)(v211 + -16.0);
              else
                v164 = v215 - (float)(v211 + -16.0);
              if ( v19 > v18 )
                v18 = v217 - (float)(v211 + -16.0);
              if ( (float)(v18 + 0.1) >= v15 )
              {
                v22 = v214 - v10;
                v18 = v214 - v10;
                if ( (float)(v164 + -0.1) <= v15 )
                {
LABEL_439:
                  *(float *)(a1 + 100) = v10 + v22;
                  *(float *)(a1 + 104) = v16 + v18;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = (int *)&stru_60C7B4A8;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v20 = (float)(v18 - v19) / v17;
            v21 = v18 - (float)(v15 * v20);
            if ( (float)(1.0 - v20) == 0.0 )
            {
              v187 = v21 == 0.0;
              v22 = v214 - v10;
              if ( !v187 )
                goto LABEL_394;
            }
            else
            {
              v22 = v21 / (float)(1.0 - v20);
              v18 = v22;
            }
            if ( v22 >= -0.1 && v22 <= 16.1 )
            {
              v23 = v14 <= v15 ? v216 - v10 : v214 - v10;
              if ( v14 > v15 )
                v15 = v216 - v10;
              if ( (float)(v15 + 0.1) >= v22 && (float)(v23 + -0.1) <= v22 )
                goto LABEL_439;
            }
          }
          goto LABEL_394;
        case 1u:
          v24 = v216 - v10;
          v25 = v214 - v10;
          v26 = v215 - v7;
          v27 = v217 - v7;
          v28 = (float)(v214 - v10) - (float)(v216 - v10);
          if ( v28 == 0.0 )
          {
            if ( v25 < 0.0 || v25 >= 16.0 )
              goto LABEL_393;
            v165 = -v25;
            if ( v27 <= v26 )
              v166 = v217 - v7;
            else
              v166 = v215 - v7;
            if ( v27 > v26 )
              v26 = v217 - v7;
            if ( (float)(v26 + 0.1) < v165 )
              goto LABEL_393;
            v31 = v214 - v10;
            v26 = -v25;
            if ( (float)(v166 + -0.1) <= v165 )
            {
LABEL_440:
              v208 = v10 + v31;
              v209 = v7 + v26;
              v199 = &dword_60C7B4C8;
LABEL_451:
              *(float *)(a1 + 100) = v208;
              *(float *)(a1 + 104) = v209;
              *(float *)(a1 + 116) = v10;
              goto LABEL_452;
            }
            v13 = v10;
            goto LABEL_394;
          }
          v29 = (float)(v26 - v27) / v28;
          v30 = v26 - (float)(v25 * v29);
          if ( (float)(-1.0 - v29) == 0.0 )
          {
            v188 = v30 == 0.0;
            v31 = v214 - v10;
            if ( !v188 )
            {
              v13 = v10;
              goto LABEL_394;
            }
          }
          else
          {
            v31 = v30 / (float)(-1.0 - v29);
            v26 = -v31;
          }
          if ( v31 >= -0.1 && v31 <= 16.1 )
          {
            if ( v24 <= v25 )
              v32 = v216 - v10;
            else
              v32 = v214 - v10;
            if ( v24 > v25 )
              v25 = v216 - v10;
            if ( (float)(v25 + 0.1) >= v31 )
            {
              if ( (float)(v32 + -0.1) <= v31 )
                goto LABEL_440;
              v13 = v10;
              goto LABEL_394;
            }
          }
          goto LABEL_393;
        case 2u:
        case 6u:
          goto LABEL_394;
        case 3u:
          v33 = v210;
          v34 = v216 - v10;
          v35 = v214 - v10;
          v36 = v211 + -16.0;
          v37 = (float)(v214 - v10) - (float)(v216 - v10);
          v38 = v215 - (float)(v211 + -16.0);
          v39 = v217 - (float)(v211 + -16.0);
          if ( v37 == 0.0 )
          {
            if ( v35 >= 0.0 && v35 < 16.0 )
            {
              if ( v39 <= v38 )
                v167 = v217 - (float)(v211 + -16.0);
              else
                v167 = v215 - (float)(v211 + -16.0);
              v168 = v35 * 0.0;
              if ( v39 > v38 )
                v38 = v217 - (float)(v211 + -16.0);
              if ( (float)(v38 + 0.1) >= v168 )
              {
                v42 = v214 - v10;
                v38 = v35 * 0.0;
                if ( (float)(v167 + -0.1) <= v168 )
                {
LABEL_441:
                  v199 = &dword_60C7B548;
                  *(float *)(a1 + 100) = v10 + v42;
                  *(float *)(a1 + 104) = v36 + v38;
                  *(float *)(a1 + 116) = v33;
LABEL_452:
                  *(float *)(a1 + 120) = v7;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v40 = (float)(v38 - v39) / v37;
            v41 = v38 - (float)(v35 * v40);
            if ( (float)(0.0 - v40) == 0.0 )
            {
              v189 = v41 == 0.0;
              v42 = v214 - v10;
              if ( !v189 )
                goto LABEL_367;
            }
            else
            {
              v42 = v41 / (float)(0.0 - v40);
              v38 = v42 * 0.0;
            }
            if ( v42 >= -0.1 && v42 <= 16.1 )
            {
              if ( v34 <= v35 )
                v43 = v216 - v10;
              else
                v43 = v214 - v10;
              if ( v34 > v35 )
                v35 = v216 - v10;
              if ( (float)(v35 + 0.1) >= v42 && (float)(v43 + -0.1) <= v42 )
                goto LABEL_441;
            }
          }
LABEL_367:
          result = ((int (__fastcall *)(int, float *, float *, float *))loc_6000F620)(a1, &v210, &v216, &v214);
          if ( result == 1 )
          {
            v199 = &dword_60C7B528;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v33;
          goto LABEL_394;
        case 4u:
          result = LODWORD(v210);
          v44 = v216 - v10;
          v45 = v214 - v10;
          v46 = v211 + -16.0;
          v13 = v210;
          v47 = (float)(v214 - v10) - (float)(v216 - v10);
          v48 = v215 - (float)(v211 + -16.0);
          v49 = v217 - (float)(v211 + -16.0);
          if ( v47 == 0.0 )
          {
            if ( v45 >= 0.0 && v45 < 16.0 )
            {
              if ( v49 <= v48 )
                v169 = v217 - (float)(v211 + -16.0);
              else
                v169 = v215 - (float)(v211 + -16.0);
              v170 = v45 * 0.0;
              if ( v49 > v48 )
                v48 = v217 - (float)(v211 + -16.0);
              if ( (float)(v48 + 0.1) >= v170 )
              {
                v52 = v214 - v10;
                v48 = v45 * 0.0;
                if ( (float)(v169 + -0.1) <= v170 )
                {
LABEL_442:
                  *(float *)(a1 + 100) = v10 + v52;
                  *(float *)(a1 + 104) = v46 + v48;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B4E8;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v50 = (float)(v48 - v49) / v47;
            v51 = v48 - (float)(v45 * v50);
            if ( (float)(0.0 - v50) == 0.0 )
            {
              v190 = v51 == 0.0;
              v52 = v214 - v10;
              if ( !v190 )
                goto LABEL_394;
            }
            else
            {
              v52 = v51 / (float)(0.0 - v50);
              v48 = v52 * 0.0;
            }
            if ( v52 >= -0.1 && v52 <= 16.1 )
            {
              if ( v44 <= v45 )
                v53 = v216 - v10;
              else
                v53 = v214 - v10;
              if ( v44 > v45 )
                v45 = v216 - v10;
              if ( (float)(v45 + 0.1) >= v52 && (float)(v53 + -0.1) <= v52 )
                goto LABEL_442;
            }
          }
          goto LABEL_394;
        case 5u:
          result = ((int (__fastcall *)(int, float *, float *, float *, float))loc_6000F620)(
                     a1,
                     &v210,
                     &v216,
                     &v214,
                     v10);
          v13 = v10;
          if ( result != 1 )
            goto LABEL_394;
          v199 = &dword_60C7B508;
          return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
        case 7u:
          result = LODWORD(v210);
          v54 = v216 - v10;
          v55 = v214 - v10;
          v56 = v211 + -8.0;
          v13 = v210;
          v57 = (float)(v214 - v10) - (float)(v216 - v10);
          v58 = v215 - (float)(v211 + -8.0);
          v59 = v217 - (float)(v211 + -8.0);
          if ( v57 == 0.0 )
          {
            if ( v55 >= 0.0 && v55 < 16.0 )
            {
              if ( v59 <= v58 )
                v171 = v217 - (float)(v211 + -8.0);
              else
                v171 = v215 - (float)(v211 + -8.0);
              v172 = v55 * 0.5;
              if ( v59 > v58 )
                v58 = v217 - (float)(v211 + -8.0);
              if ( (float)(v58 + 0.1) >= v172 )
              {
                v62 = v214 - v10;
                v58 = v55 * 0.5;
                if ( (float)(v171 + -0.1) <= v172 )
                {
LABEL_443:
                  *(float *)(a1 + 100) = v10 + v62;
                  *(float *)(a1 + 104) = v56 + v58;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B588;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v60 = (float)(v58 - v59) / v57;
            v61 = v58 - (float)(v55 * v60);
            if ( (float)(0.5 - v60) == 0.0 )
            {
              v191 = v61 == 0.0;
              v62 = v214 - v10;
              if ( !v191 )
                goto LABEL_394;
            }
            else
            {
              v62 = v61 / (float)(0.5 - v60);
              v58 = v62 * 0.5;
            }
            if ( v62 >= -0.1 && v62 <= 16.1 )
            {
              if ( v54 <= v55 )
                v63 = v216 - v10;
              else
                v63 = v214 - v10;
              if ( v54 > v55 )
                v55 = v216 - v10;
              if ( (float)(v55 + 0.1) >= v62 && (float)(v63 + -0.1) <= v62 )
                goto LABEL_443;
            }
          }
          goto LABEL_394;
        case 8u:
          result = LODWORD(v210);
          v64 = v216 - v10;
          v65 = v214 - v10;
          v66 = v211 + -16.0;
          v13 = v210;
          v67 = (float)(v214 - v10) - (float)(v216 - v10);
          v68 = v215 - (float)(v211 + -16.0);
          v69 = v217 - (float)(v211 + -16.0);
          if ( v67 == 0.0 )
          {
            if ( v65 >= 0.0 && v65 < 16.0 )
            {
              if ( v69 <= v68 )
                v173 = v217 - (float)(v211 + -16.0);
              else
                v173 = v215 - (float)(v211 + -16.0);
              v174 = v65 * 0.5;
              if ( v69 > v68 )
                v68 = v217 - (float)(v211 + -16.0);
              if ( (float)(v68 + 0.1) >= v174 )
              {
                v72 = v214 - v10;
                v68 = v65 * 0.5;
                if ( (float)(v173 + -0.1) <= v174 )
                {
LABEL_444:
                  *(float *)(a1 + 100) = v10 + v72;
                  *(float *)(a1 + 104) = v66 + v68;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B568;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v70 = (float)(v68 - v69) / v67;
            v71 = v68 - (float)(v65 * v70);
            if ( (float)(0.5 - v70) == 0.0 )
            {
              v192 = v71 == 0.0;
              v72 = v214 - v10;
              if ( !v192 )
                goto LABEL_394;
            }
            else
            {
              v72 = v71 / (float)(0.5 - v70);
              v68 = v72 * 0.5;
            }
            if ( v72 >= -0.1 && v72 <= 16.1 )
            {
              if ( v64 <= v65 )
                v73 = v216 - v10;
              else
                v73 = v214 - v10;
              if ( v64 > v65 )
                v65 = v216 - v10;
              if ( (float)(v65 + 0.1) >= v72 && (float)(v73 + -0.1) <= v72 )
                goto LABEL_444;
            }
          }
          goto LABEL_394;
        case 9u:
          result = LODWORD(v210);
          v74 = v216 - v10;
          v75 = v214 - v10;
          v76 = v211 + -8.0;
          v13 = v210;
          v77 = (float)(v214 - v10) - (float)(v216 - v10);
          v78 = v215 - (float)(v211 + -8.0);
          v79 = v217 - (float)(v211 + -8.0);
          if ( v77 == 0.0 )
          {
            if ( v75 >= 0.0 && v75 < 16.0 )
            {
              if ( v79 <= v78 )
                v175 = v217 - (float)(v211 + -8.0);
              else
                v175 = v215 - (float)(v211 + -8.0);
              v176 = v75 * -0.5;
              if ( v79 > v78 )
                v78 = v217 - (float)(v211 + -8.0);
              if ( (float)(v78 + 0.1) >= v176 )
              {
                v82 = v214 - v10;
                v78 = v75 * -0.5;
                if ( (float)(v175 + -0.1) <= v176 )
                {
LABEL_445:
                  *(float *)(a1 + 100) = v10 + v82;
                  *(float *)(a1 + 104) = v76 + v78;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B5C8;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v80 = (float)(v78 - v79) / v77;
            v81 = v78 - (float)(v75 * v80);
            if ( (float)(-0.5 - v80) == 0.0 )
            {
              v193 = v81 == 0.0;
              v82 = v214 - v10;
              if ( !v193 )
                goto LABEL_394;
            }
            else
            {
              v82 = v81 / (float)(-0.5 - v80);
              v78 = v82 * -0.5;
            }
            if ( v82 >= -0.1 && v82 <= 16.1 )
            {
              if ( v74 <= v75 )
                v83 = v216 - v10;
              else
                v83 = v214 - v10;
              if ( v74 > v75 )
                v75 = v216 - v10;
              if ( (float)(v75 + 0.1) >= v82 && (float)(v83 + -0.1) <= v82 )
                goto LABEL_445;
            }
          }
          goto LABEL_394;
        case 0xAu:
          v84 = v216 - v10;
          v85 = v214 - v10;
          v86 = v215 - v7;
          v87 = v217 - v7;
          v88 = (float)(v214 - v10) - (float)(v216 - v10);
          if ( v88 == 0.0 )
          {
            if ( v85 < 0.0 || v85 >= 16.0 )
              goto LABEL_393;
            if ( v87 <= v86 )
              v177 = v217 - v7;
            else
              v177 = v215 - v7;
            v178 = v85 * -0.5;
            if ( v87 > v86 )
              v86 = v217 - v7;
            if ( (float)(v86 + 0.1) < v178 )
              goto LABEL_393;
            v91 = v214 - v10;
            v86 = v85 * -0.5;
            if ( (float)(v177 + -0.1) <= v178 )
            {
LABEL_446:
              v208 = v10 + v91;
              v209 = v7 + v86;
              v199 = &dword_60C7B5A8;
              goto LABEL_451;
            }
            v13 = v10;
          }
          else
          {
            v89 = (float)(v86 - v87) / v88;
            v90 = v86 - (float)(v85 * v89);
            if ( (float)(-0.5 - v89) == 0.0 )
            {
              v194 = v90 == 0.0;
              v91 = v214 - v10;
              if ( !v194 )
              {
                v13 = v10;
                goto LABEL_394;
              }
            }
            else
            {
              v91 = v90 / (float)(-0.5 - v89);
              v86 = v91 * -0.5;
            }
            if ( v91 < -0.1 || v91 > 16.1 )
              goto LABEL_393;
            if ( v84 <= v85 )
              v92 = v216 - v10;
            else
              v92 = v214 - v10;
            if ( v84 > v85 )
              v85 = v216 - v10;
            if ( (float)(v85 + 0.1) < v91 )
            {
LABEL_393:
              v13 = v10;
              goto LABEL_394;
            }
            if ( (float)(v92 + -0.1) <= v91 )
              goto LABEL_446;
            v13 = v10;
          }
LABEL_394:
          v10 = v13 + 16.0;
          ++v11;
          v210 = v13 + 16.0;
          if ( v11 < 3 )
            continue;
          v7 = v7 + 16.0;
          ++v2;
          v211 = v8;
          if ( v2 >= 3 )
            return result;
          break;
        case 0xBu:
          result = LODWORD(v210);
          v13 = v210;
          v93 = v211 + -16.0;
          v94 = v217 - (float)(v211 + -16.0);
          v95 = v216 - (float)(v210 + 8.0);
          v96 = v214 - (float)(v210 + 8.0);
          v97 = v215 - (float)(v211 + -16.0);
          if ( (float)(v96 - v95) == 0.0 )
          {
            if ( v96 >= 0.0 && v96 < 8.0 )
            {
              v179 = v96 + v96;
              if ( v94 <= v97 )
                v180 = v217 - (float)(v211 + -16.0);
              else
                v180 = v215 - (float)(v211 + -16.0);
              if ( v94 > v97 )
                v97 = v217 - (float)(v211 + -16.0);
              if ( (float)(v97 + 0.1) >= v179 )
              {
                v100 = v214 - (float)(v210 + 8.0);
                v97 = v96 + v96;
                if ( (float)(v180 + -0.1) <= v179 )
                {
LABEL_447:
                  *(float *)(a1 + 100) = (float)(v210 + 8.0) + v100;
                  *(float *)(a1 + 104) = v93 + v97;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B5E8;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v98 = (float)(v97 - v94) / (float)(v96 - v95);
            v99 = v97 - (float)(v96 * v98);
            if ( (float)(2.0 - v98) == 0.0 )
            {
              v195 = v99 == 0.0;
              v100 = v214 - (float)(v210 + 8.0);
              if ( !v195 )
                goto LABEL_394;
            }
            else
            {
              v100 = v99 / (float)(2.0 - v98);
              v97 = v100 + v100;
            }
            if ( v100 >= -0.1 && v100 <= 8.1 )
            {
              if ( v95 <= v96 )
                v101 = v216 - (float)(v210 + 8.0);
              else
                v101 = v214 - (float)(v210 + 8.0);
              if ( v95 > v96 )
                v96 = v216 - (float)(v210 + 8.0);
              if ( (float)(v96 + 0.1) >= v100 && (float)(v101 + -0.1) <= v100 )
                goto LABEL_447;
            }
          }
          goto LABEL_394;
        case 0xCu:
          result = LODWORD(v210);
          v102 = v216 - v10;
          v103 = v214 - v10;
          v104 = v211 + -16.0;
          v13 = v210;
          v105 = (float)(v214 - v10) - (float)(v216 - v10);
          v106 = v215 - (float)(v211 + -16.0);
          v107 = v217 - (float)(v211 + -16.0);
          if ( v105 == 0.0 )
          {
            if ( v103 >= 0.0 && v103 < 8.0 )
            {
              v181 = v103 + v103;
              if ( v107 <= v106 )
                v182 = v217 - (float)(v211 + -16.0);
              else
                v182 = v215 - (float)(v211 + -16.0);
              if ( v107 > v106 )
                v106 = v217 - (float)(v211 + -16.0);
              if ( (float)(v106 + 0.1) >= v181 )
              {
                v110 = v214 - v10;
                v106 = v103 + v103;
                if ( (float)(v182 + -0.1) <= v181 )
                {
LABEL_448:
                  *(float *)(a1 + 100) = v10 + v110;
                  *(float *)(a1 + 104) = v104 + v106;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B608;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v108 = (float)(v106 - v107) / v105;
            v109 = v106 - (float)(v103 * v108);
            if ( (float)(2.0 - v108) == 0.0 )
            {
              v196 = v109 == 0.0;
              v110 = v214 - v10;
              if ( !v196 )
                goto LABEL_394;
            }
            else
            {
              v110 = v109 / (float)(2.0 - v108);
              v106 = v110 + v110;
            }
            if ( v110 >= -0.1 && v110 <= 8.1 )
            {
              if ( v102 <= v103 )
                v111 = v216 - v10;
              else
                v111 = v214 - v10;
              if ( v102 > v103 )
                v103 = v216 - v10;
              if ( (float)(v103 + 0.1) >= v110 && (float)(v111 + -0.1) <= v110 )
                goto LABEL_448;
            }
          }
          goto LABEL_394;
        case 0xDu:
          result = LODWORD(v210);
          v13 = v210;
          v112 = v217 - v7;
          v113 = v216 - (float)(v210 + 8.0);
          v114 = v214 - (float)(v210 + 8.0);
          v115 = v215 - v7;
          if ( (float)(v114 - v113) == 0.0 )
          {
            if ( v114 >= 0.0 && v114 < 8.0 )
            {
              if ( v112 <= v115 )
                v183 = v217 - v7;
              else
                v183 = v215 - v7;
              v184 = v114 * -2.0;
              if ( v112 > v115 )
                v115 = v217 - v7;
              if ( (float)(v115 + 0.1) >= v184 )
              {
                v118 = v214 - (float)(v210 + 8.0);
                v115 = v114 * -2.0;
                if ( (float)(v183 + -0.1) <= v184 )
                {
LABEL_449:
                  *(float *)(a1 + 100) = (float)(v210 + 8.0) + v118;
                  *(float *)(a1 + 104) = v7 + v115;
                  *(_DWORD *)(a1 + 116) = result;
                  *(float *)(a1 + 120) = v7;
                  v199 = &dword_60C7B628;
                  return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
                }
              }
            }
          }
          else
          {
            v116 = (float)(v115 - v112) / (float)(v114 - v113);
            v117 = v115 - (float)(v114 * v116);
            if ( (float)(-2.0 - v116) == 0.0 )
            {
              v197 = v117 == 0.0;
              v118 = v214 - (float)(v210 + 8.0);
              if ( !v197 )
                goto LABEL_394;
            }
            else
            {
              v118 = v117 / (float)(-2.0 - v116);
              v115 = v118 * -2.0;
            }
            if ( v118 >= -0.1 && v118 <= 8.1 )
            {
              if ( v113 <= v114 )
                v119 = v216 - (float)(v210 + 8.0);
              else
                v119 = v214 - (float)(v210 + 8.0);
              if ( v113 > v114 )
                v114 = v216 - (float)(v210 + 8.0);
              if ( (float)(v114 + 0.1) >= v118 && (float)(v119 + -0.1) <= v118 )
                goto LABEL_449;
            }
          }
          goto LABEL_394;
        case 0xEu:
          v120 = v216 - v10;
          v121 = v214 - v10;
          v122 = v215 - v7;
          v123 = v217 - v7;
          v124 = (float)(v214 - v10) - (float)(v216 - v10);
          if ( v124 == 0.0 )
          {
            if ( v121 < 0.0 || v121 >= 8.0 )
              goto LABEL_393;
            if ( v123 <= v122 )
              v185 = v217 - v7;
            else
              v185 = v215 - v7;
            v186 = v121 * -2.0;
            if ( v123 > v122 )
              v122 = v217 - v7;
            if ( (float)(v122 + 0.1) < v186 )
              goto LABEL_393;
            v127 = v214 - v10;
            v122 = v121 * -2.0;
            if ( (float)(v185 + -0.1) <= v186 )
            {
LABEL_450:
              v208 = v10 + v127;
              v209 = v7 + v122;
              v199 = &dword_60C7B648;
              goto LABEL_451;
            }
            v13 = v10;
            goto LABEL_394;
          }
          v125 = (float)(v122 - v123) / v124;
          v126 = v122 - (float)(v121 * v125);
          if ( (float)(-2.0 - v125) == 0.0 )
          {
            v198 = v126 == 0.0;
            v127 = v214 - v10;
            if ( !v198 )
              goto LABEL_393;
          }
          else
          {
            v127 = v126 / (float)(-2.0 - v125);
            v122 = v127 * -2.0;
          }
          if ( v127 >= -0.1 && v127 <= 8.1 )
          {
            if ( v120 <= v121 )
              v128 = v216 - v10;
            else
              v128 = v214 - v10;
            if ( v120 > v121 )
              v121 = v216 - v10;
            if ( (float)(v121 + 0.1) >= v127 )
            {
              if ( (float)(v128 + -0.1) <= v127 )
                goto LABEL_450;
              v13 = v10;
              goto LABEL_394;
            }
          }
          goto LABEL_393;
        case 0xFu:
          v129 = (float)((float)((float)(v215 - v9) * (float)(v215 - v9))
                       + (float)((float)(v214 - (float)(v10 + 8.0)) * (float)(v214 - (float)(v10 + 8.0))))
               + -64.0;
          if ( v129 == 0.0 )
            goto LABEL_397;
          v130 = (float)((float)((float)(v217 - v9) * (float)(v217 - v9))
                       + (float)((float)(v216 - (float)(v10 + 8.0)) * (float)(v216 - (float)(v10 + 8.0))))
               + -64.0;
          if ( v129 < 0.0 && v130 >= 0.0 )
            goto LABEL_397;
          if ( v129 < 0.0 )
            goto LABEL_240;
          if ( v130 < 0.0 )
          {
LABEL_397:
            *(_DWORD *)(a1 + 132) = sub_6000F7B8();
            *(float *)(a1 + 116) = v10;
            *(float *)(a1 + 120) = v7;
            v199 = &dword_60C7B668;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v10;
          goto LABEL_394;
        case 0x10u:
          result = sub_6000F9C0(a1, &v210, v216, v217, v214, v215);
          goto LABEL_196;
        case 0x11u:
          result = sub_6000F8AC(a1, &v210);
          goto LABEL_196;
        case 0x12u:
          v131 = (float)((float)((float)(v215 - v7) * (float)(v215 - v7))
                       + (float)((float)(v214 - v10) * (float)(v214 - v10)))
               + -256.0;
          if ( v131 != 0.0 )
          {
            v132 = (float)((float)((float)(v217 - v7) * (float)(v217 - v7))
                         + (float)((float)(v216 - v10) * (float)(v216 - v10)))
                 + -256.0;
            if ( (v131 >= 0.0 || v132 < 0.0) && (v131 < 0.0 || v132 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8();
          v133 = result + 1090519040;
          if ( (result + 1090519040) >> 25 <= 0x20 )
          {
            if ( result < 0xBF000000 )
              result = -1;
            if ( v133 < 0x1000000 )
              result = -1073741824;
            *(_DWORD *)(a1 + 132) = result;
            *(float *)(a1 + 116) = v10;
            *(float *)(a1 + 120) = v7;
            v199 = &dword_60C7B6E8;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v10;
          goto LABEL_394;
        case 0x13u:
          v134 = (float)((float)((float)(v215 - v7) * (float)(v215 - v7))
                       + (float)((float)(v214 - (float)(v10 + 16.0)) * (float)(v214 - (float)(v10 + 16.0))))
               + -256.0;
          if ( v134 != 0.0 )
          {
            v135 = (float)((float)((float)(v217 - v7) * (float)(v217 - v7))
                         + (float)((float)(v216 - (float)(v10 + 16.0)) * (float)(v216 - (float)(v10 + 16.0))))
                 + -256.0;
            if ( (v134 >= 0.0 || v135 < 0.0) && (v134 < 0.0 || v135 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8() - 2130706432;
          if ( result >> 25 <= 0x20 )
          {
            v200 = 1090519039;
            if ( result < 0x40FFFFFF )
              v200 = result;
            v201 = v200 + 2130706432;
            if ( result < 0x1000000 )
              v201 = 0x80000000;
            *(_DWORD *)(a1 + 132) = v201;
            *(float *)(a1 + 116) = v10;
            *(float *)(a1 + 120) = v7;
            v199 = &dword_60C7B6C8;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v10;
          goto LABEL_394;
        case 0x14u:
          v136 = v214;
          v137 = v215;
          v138 = v216;
          v139 = v217;
          v140 = &v210;
          goto LABEL_192;
        case 0x15u:
          v213 = v7;
          v212 = v10 + -16.0;
          goto LABEL_191;
        case 0x16u:
          v141 = v214;
          v142 = v215;
          v143 = v216;
          v144 = v217;
          v145 = &v210;
          goto LABEL_195;
        case 0x17u:
          v213 = v7;
          v212 = v10 + -16.0;
          goto LABEL_194;
        case 0x18u:
          v212 = v10;
          v213 = v7 + 16.0;
LABEL_191:
          v136 = v214;
          v137 = v215;
          v138 = v216;
          v139 = v217;
          v140 = &v212;
LABEL_192:
          result = sub_6000FBEC(a1, v140, v138, v139, v136, v137);
          goto LABEL_196;
        case 0x19u:
          v212 = v10 + -16.0;
          v213 = v7 + 16.0;
LABEL_194:
          v141 = v214;
          v142 = v215;
          v143 = v216;
          v144 = v217;
          v145 = &v212;
LABEL_195:
          result = sub_6000FAD4(a1, v145, v143, v144, v141, v142);
LABEL_196:
          v13 = v10;
          if ( result )
            return result;
          goto LABEL_394;
        case 0x1Au:
          v146 = (float)((float)((float)(v215 - v7) * (float)(v215 - v7))
                       + (float)((float)(v214 - (float)(v10 + 32.0)) * (float)(v214 - (float)(v10 + 32.0))))
               + -1024.0;
          if ( v146 != 0.0 )
          {
            v147 = (float)((float)((float)(v217 - v7) * (float)(v217 - v7))
                         + (float)((float)(v216 - (float)(v10 + 32.0)) * (float)(v216 - (float)(v10 + 32.0))))
                 + -1024.0;
            if ( (v146 >= 0.0 || v147 < 0.0) && (v146 < 0.0 || v147 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8() - 2130706432;
          if ( result >> 25 <= 0x20 )
          {
            v202 = 1090519039;
            if ( result < 0x40FFFFFF )
              v202 = result;
            v203 = v202 + 2130706432;
            if ( result < 0x1000000 )
              v203 = 0x80000000;
            *(_DWORD *)(a1 + 132) = v203;
            *(float *)(a1 + 116) = v10;
            *(float *)(a1 + 120) = v7;
            v199 = &dword_60C7B748;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v10;
          goto LABEL_394;
        case 0x1Bu:
          v148 = v10 + -16.0;
          v213 = v7;
          v212 = v10 + -16.0;
          v149 = (float)((float)((float)(v215 - v7) * (float)(v215 - v7))
                       + (float)((float)(v214 - (float)(v10 + -16.0)) * (float)(v214 - (float)(v10 + -16.0))))
               + -1024.0;
          if ( v149 != 0.0 )
          {
            v150 = (float)((float)((float)(v217 - v7) * (float)(v217 - v7))
                         + (float)((float)(v216 - v148) * (float)(v216 - v148)))
                 + -1024.0;
            if ( (v149 >= 0.0 || v150 < 0.0) && (v149 < 0.0 || v150 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8();
          v151 = result + 1090519040;
          v13 = v10;
          if ( (result + 1090519040) >> 25 > 0x20 )
            goto LABEL_394;
          if ( result < 0xBF000000 )
            result = -1;
          if ( v151 < 0x1000000 )
            result = -1073741824;
          *(_DWORD *)(a1 + 132) = result;
          *(float *)(a1 + 116) = v148;
          *(float *)(a1 + 120) = v7;
          v199 = &dword_60C7B768;
          return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
        case 0x1Cu:
          v212 = v10;
          v213 = v7 + 16.0;
          v152 = (float)((float)((float)(v214 - (float)(v10 + 32.0)) * (float)(v214 - (float)(v10 + 32.0)))
                       + (float)((float)(v215 - v8) * (float)(v215 - v8)))
               + -1024.0;
          if ( v152 != 0.0 )
          {
            v153 = (float)((float)((float)(v216 - (float)(v10 + 32.0)) * (float)(v216 - (float)(v10 + 32.0)))
                         + (float)((float)(v217 - v8) * (float)(v217 - v8)))
                 + -1024.0;
            if ( (v152 >= 0.0 || v153 < 0.0) && (v152 < 0.0 || v153 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8() - 2130706432;
          if ( result >> 25 <= 0x20 )
          {
            v204 = 1090519039;
            if ( result < 0x40FFFFFF )
              v204 = result;
            v205 = v204 + 2130706432;
            if ( result < 0x1000000 )
              v205 = 0x80000000;
            *(_DWORD *)(a1 + 132) = v205;
            *(float *)(a1 + 116) = v10;
            *(float *)(a1 + 120) = v8;
            v199 = &dword_60C7B748;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
          }
          v13 = v10;
          goto LABEL_394;
        case 0x1Du:
          v154 = (float)(v10 + -16.0) + 32.0;
          v212 = v10 + -16.0;
          v213 = v7 + 16.0;
          v155 = (float)((float)((float)(v214 - v154) * (float)(v214 - v154))
                       + (float)((float)(v215 - v8) * (float)(v215 - v8)))
               + -1024.0;
          if ( v155 != 0.0 )
          {
            v156 = (float)((float)((float)(v216 - v154) * (float)(v216 - v154))
                         + (float)((float)(v217 - v8) * (float)(v217 - v8)))
                 + -1024.0;
            if ( (v155 >= 0.0 || v156 < 0.0) && (v155 < 0.0 || v156 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8() - 2130706432;
          v13 = v10;
          if ( result >> 25 > 0x20 )
            goto LABEL_394;
          v206 = 1090519039;
          if ( result < 0x40FFFFFF )
            v206 = result;
          v207 = v206 + 2130706432;
          if ( result < 0x1000000 )
            v207 = 0x80000000;
          *(_DWORD *)(a1 + 132) = v207;
          *(float *)(a1 + 116) = v10 + -16.0;
          *(float *)(a1 + 120) = v8;
          v199 = &dword_60C7B748;
          return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
        case 0x1Eu:
          v212 = v10;
          v213 = v7 + 16.0;
          v157 = (float)((float)((float)(v214 - v10) * (float)(v214 - v10))
                       + (float)((float)(v215 - v8) * (float)(v215 - v8)))
               + -1024.0;
          if ( v157 != 0.0 )
          {
            v158 = (float)((float)((float)(v216 - v10) * (float)(v216 - v10))
                         + (float)((float)(v217 - v8) * (float)(v217 - v8)))
                 + -1024.0;
            if ( (v157 >= 0.0 || v158 < 0.0) && (v157 < 0.0 || v158 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8();
          v159 = result + 1090519040;
          if ( (result + 1090519040) >> 25 > 0x20 )
          {
            v13 = v10;
            goto LABEL_394;
          }
          if ( result < 0xBF000000 )
            result = -1;
          if ( v159 < 0x1000000 )
            result = -1073741824;
          *(_DWORD *)(a1 + 132) = result;
          *(float *)(a1 + 116) = v10;
          *(float *)(a1 + 120) = v8;
          v199 = &dword_60C7B768;
          return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
        case 0x1Fu:
          v160 = v10 + -16.0;
          v212 = v10 + -16.0;
          v213 = v7 + 16.0;
          v161 = (float)((float)((float)(v214 - (float)(v10 + -16.0)) * (float)(v214 - (float)(v10 + -16.0)))
                       + (float)((float)(v215 - v8) * (float)(v215 - v8)))
               + -1024.0;
          if ( v161 != 0.0 )
          {
            v162 = (float)((float)((float)(v216 - v160) * (float)(v216 - v160))
                         + (float)((float)(v217 - v8) * (float)(v217 - v8)))
                 + -1024.0;
            if ( (v161 >= 0.0 || v162 < 0.0) && (v161 < 0.0 || v162 >= 0.0) )
              goto LABEL_393;
          }
          result = sub_6000F7B8();
          v163 = result + 1090519040;
          v13 = v10;
          if ( (result + 1090519040) >> 25 > 0x20 )
            goto LABEL_394;
          if ( result < 0xBF000000 )
            result = -1;
          if ( v163 < 0x1000000 )
            result = -1073741824;
          *(_DWORD *)(a1 + 132) = result;
          *(float *)(a1 + 116) = v160;
          *(float *)(a1 + 120) = v8;
          v199 = &dword_60C7B768;
          return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v199);
        default:
LABEL_240:
          v13 = v10;
          goto LABEL_394;
      }
      break;
    }
  }
}
