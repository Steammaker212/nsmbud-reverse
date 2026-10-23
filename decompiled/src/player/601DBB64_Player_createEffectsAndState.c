/* Player_createEffectsAndState
 * address: 0x601DBB64   size: 15284   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Player_createEffectsAndState(int a1)
{
  int v2; // r5
  int v3; // r6
  char v4; // r12
  int v5; // r4
  _BOOL4 i; // r10
  float y; // r11
  const void *v8; // r9
  signed int v9; // r6
  bool v10; // cc
  int *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  char v15; // r12
  int *v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r0
  float v20; // r11
  const void *v21; // r9
  signed int v22; // r6
  int v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  float v27; // r1
  float v28; // r2
  int *v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r0
  int *v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r0
  int v37; // r5
  int v38; // r0
  float v39; // s4
  int v40; // r2
  int *v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r0
  char v45; // r12
  int *v46; // r0
  int v47; // r1
  int v48; // r2
  int v49; // r0
  float v50; // r11
  const void *v51; // r9
  signed int v52; // r6
  int v53; // r0
  int v54; // r1
  float v55; // s2
  int v56; // r2
  _DWORD *v57; // r0
  _DWORD *v58; // r1
  int v59; // r0
  int v60; // r6
  unsigned int v61; // r1
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  unsigned int v64; // r0
  float v65; // r0
  float v66; // r1
  int v67; // r0
  int v68; // r6
  unsigned int v69; // r1
  _DWORD *v70; // r0
  _DWORD *v71; // r0
  unsigned int v72; // r0
  int v73; // r0
  float v74; // r1
  float v75; // r2
  int v76; // r0
  _DWORD *v77; // r0
  int v78; // r0
  _DWORD *v79; // r7
  int v80; // r11
  int v81; // r1
  int v82; // r2
  int v83; // r0
  _DWORD *v84; // r0
  int v85; // r0
  _DWORD *v86; // r0
  _DWORD *v87; // r0
  int v88; // r0
  unsigned int v89; // r1
  int v90; // r0
  _DWORD *v91; // r0
  _DWORD *v92; // r0
  _DWORD *v93; // r0
  _DWORD *v94; // r0
  _DWORD *v95; // r1
  int v96; // r0
  int v97; // r1
  float v98; // s2
  float v99; // s0
  float v100; // r11
  const void *v101; // r9
  signed int v102; // r6
  float v103; // r11
  const void *v104; // r9
  signed int v105; // r6
  int v106; // r0
  int v107; // r1
  float v108; // r2
  float *v109; // r0
  float v110; // s2
  float v111; // s8
  float v112; // s10
  float v113; // s4
  float v114; // s0
  float v115; // s2
  float v116; // s4
  float v117; // s10
  int v118; // r0
  int v119; // r0
  float v120; // s0
  float v121; // s2
  int v122; // r7
  int v123; // r0
  int v124; // r6
  int v125; // r0
  float v126; // r0
  int v127; // r0
  float v128; // s2
  float v129; // s8
  float v130; // s4
  float v131; // s10
  int v132; // r0
  float v133; // s0
  int v134; // r0
  int v135; // r0
  int v136; // r1
  int v137; // r2
  int v138; // r0
  float v139; // s18
  float v140; // s20
  float v141; // s16
  float v142; // s0
  float v143; // s2
  int v144; // r3
  int v145; // r0
  int v146; // r0
  int v147; // r0
  int *v148; // r1
  int v149; // r0
  int v150; // r0
  int v151; // r0
  int v152; // r0
  int v153; // r0
  int v154; // r0
  int v155; // r0
  int v156; // r0
  float v157; // r1
  float v158; // r2
  float v159; // r1
  float v160; // r2
  int v161; // r0
  _DWORD *v162; // r6
  char *v163; // r0
  int v164; // r1
  char *v165; // r0
  int k; // r1
  char *v167; // r0
  int m; // r1
  int v169; // r0
  int v170; // r5
  int v171; // r0
  _DWORD *v172; // r0
  _DWORD *v173; // r0
  float v174; // r0
  float v175; // r1
  float v176; // s0
  int v177; // r0
  int v178; // r0
  _DWORD *v179; // r6
  int v180; // r5
  int v181; // r1
  int v182; // r2
  int v183; // r0
  _DWORD *v184; // r7
  int v185; // r5
  int v186; // r1
  int v187; // r3
  _DWORD *v188; // r5
  char *v189; // r0
  int v190; // r2
  int v191; // r3
  int v192; // r0
  int v193; // r0
  int v194; // r0
  int v195; // r0
  float v196; // s0
  int v197; // r7
  _DWORD *v198; // r0
  _DWORD *v199; // r0
  unsigned int v200; // r0
  int v201; // r0
  int v202; // r1
  int v203; // r7
  int v204; // r1
  int j; // r2
  int v206; // r10
  int v207; // r6
  int v208; // r0
  bool v209; // zf
  int v210; // r7
  int v211; // r0
  int v212; // r4
  int v213; // r5
  int v214; // r0
  Vec3 *v215; // r1
  unsigned int v216; // r0
  unsigned int v217; // r1
  int v218; // r10
  int v219; // r7
  int v220; // r0
  int v221; // r6
  int v222; // r0
  int v223; // r5
  int v224; // r11
  int v225; // r0
  Vec3 *p_speed; // r1
  unsigned int v227; // r0
  unsigned int v228; // r1
  int v229; // r2
  _DWORD *v230; // r0
  _DWORD *v231; // r0
  unsigned int v232; // r0
  int v233; // r0
  float *v234; // r0
  float v235; // s2
  float v236; // s8
  float v237; // s10
  float v238; // s4
  int v239; // r2
  _DWORD *v240; // r0
  int v241; // r0
  _DWORD *v242; // r0
  _DWORD *v243; // r0
  _DWORD *v244; // r0
  _DWORD *v245; // r0
  unsigned int v246; // r0
  int v247; // r0
  float *v248; // r0
  float v249; // s2
  float v250; // s8
  float v251; // s10
  float v252; // s4
  int v253; // [sp+10h] [bp-88h]
  int v254; // [sp+10h] [bp-88h]
  int v255; // [sp+14h] [bp-84h]
  int v256; // [sp+14h] [bp-84h]
  Vec3 speed; // [sp+18h] [bp-80h] BYREF
  _BYTE v258[36]; // [sp+24h] [bp-74h] BYREF
  int v259; // [sp+48h] [bp-50h]
  Vec3 v260[6]; // [sp+4Ch] [bp-4Ch] BYREF

  v2 = FIELD_U32(dword_60CC6D78, 412);
  v3 = dword_60C8996C;
  v259 = sub_6019112C(dword_60C8996C);
  v5 = -894784854;
  i = v2 == 4;
  if ( FIELD_U8(v3, 1384) )
  {
    switch ( v259 )
    {
      case 111:
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
        {
          if ( ((unsigned int)&dword_60C8B040[4] & ~(1612562200 << v4) & 1) == 0
            && _cxa_guard_acquire(&dword_60C8B040[4]) )
          {
            dword_60C8B094 = (int)&sead__SafeStringBase__vtable;
            dword_60C8B098 = (int)"W1M0";
            _cxa_guard_release(&dword_60C8B040[4]);
          }
          LODWORD(speed.y) = v258;
          LODWORD(speed.x) = &BufferedSafeStringBase_char_vtable_probably;
          LODWORD(speed.z) = 32;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&speed);
          LODWORD(speed.x) = &off_60BD4C38;
          y = speed.y;
          (*(void (__fastcall **)(int *))(dword_60C8B094 + 12))(&dword_60C8B094);
          v8 = (const void *)dword_60C8B098;
          if ( LODWORD(y) != dword_60C8B098 )
          {
            (*(void (__fastcall **)(int *))(dword_60C8B094 + 12))(&dword_60C8B094);
            v9 = 0;
            while ( 1 )
            {
              if ( !*(_BYTE *)(dword_60C8B098 + v9) )
                goto LABEL_158;
              if ( !*(_BYTE *)(dword_60C8B098 + v9 + 1) )
              {
                ++v9;
                goto LABEL_158;
              }
              if ( !*(_BYTE *)(dword_60C8B098 + v9 + 2) )
                break;
              v10 = v9 + 2 <= 0x7FFFF;
              v9 += 3;
              if ( !v10 )
              {
                v9 = 0;
                goto LABEL_158;
              }
            }
            v9 += 2;
LABEL_158:
            if ( v9 >= SLODWORD(speed.z) )
              v9 = LODWORD(speed.z) - 1;
            qmemcpy((void *)LODWORD(y), v8, v9);
            *(_BYTE *)(LODWORD(y) + v9) = 0;
          }
          v122 = a1 + 312;
          LODWORD(speed.x) = &off_60BD4C20;
          sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 312), 0, 0, (int)&speed);
          v260[0].x = 0.0;
          v260[0].y = 0.0;
          v123 = sub_601A443C(dword_60C89E18, 0, 0);
          LODWORD(v260[0].z) = sub_60181AB4(v123, &speed);
          sub_6019EC34((_DWORD *)(a1 + 404), v260);
          v124 = 120;
        }
        else
        {
          if ( ((unsigned int)&dword_60C8B040[5] & ~(1612566256 << v4) & 1) == 0
            && _cxa_guard_acquire(&dword_60C8B040[5]) )
          {
            dword_60C8B09C = (int)&sead__SafeStringBase__vtable;
            dword_60C8B0A0 = (int)"W303";
            _cxa_guard_release(&dword_60C8B040[5]);
          }
          LODWORD(speed.y) = v258;
          LODWORD(speed.x) = &BufferedSafeStringBase_char_vtable_probably;
          LODWORD(speed.z) = 32;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&speed);
          LODWORD(speed.x) = &off_60BD4C38;
          v100 = speed.y;
          (*(void (__fastcall **)(int *))(dword_60C8B09C + 12))(&dword_60C8B09C);
          v101 = (const void *)dword_60C8B0A0;
          if ( LODWORD(v100) != dword_60C8B0A0 )
          {
            (*(void (__fastcall **)(int *))(dword_60C8B09C + 12))(&dword_60C8B09C);
            v102 = 0;
            while ( 1 )
            {
              if ( !*(_BYTE *)(dword_60C8B0A0 + v102) )
                goto LABEL_168;
              if ( !*(_BYTE *)(dword_60C8B0A0 + v102 + 1) )
              {
                ++v102;
                goto LABEL_168;
              }
              if ( !*(_BYTE *)(dword_60C8B0A0 + v102 + 2) )
                break;
              v10 = v102 + 2 <= 0x7FFFF;
              v102 += 3;
              if ( !v10 )
              {
                v102 = 0;
                goto LABEL_168;
              }
            }
            v102 += 2;
LABEL_168:
            if ( v102 >= SLODWORD(speed.z) )
              v102 = LODWORD(speed.z) - 1;
            qmemcpy((void *)LODWORD(v100), v101, v102);
            *(_BYTE *)(LODWORD(v100) + v102) = 0;
          }
          v122 = a1 + 312;
          LODWORD(speed.x) = &off_60BD4C20;
          sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 312), 2, 0, (int)&speed);
          LODWORD(v260[0].x) = 2;
          v260[0].y = 0.0;
          v127 = sub_601A443C(dword_60C89E18, 2, 0);
          LODWORD(v260[0].z) = sub_60181AB4(v127, &speed);
          sub_6019EC34((_DWORD *)(a1 + 404), v260);
          v124 = 160;
        }
        FIELD_F32(a1, 316) = FIELD_F32(a1, 316) + 1000.0;
        FIELD_U32(a1, 180) = sub_608332B0(a1 + 80, v122);
        FIELD_U32(a1, 176) += 238609280;
        v128 = FIELD_F32(a1, 84);
        v129 = FIELD_F32(a1, 316);
        v130 = FIELD_F32(a1, 88);
        v131 = FIELD_F32(a1, 320);
        speed.x = FIELD_F32(a1, 312) - FIELD_F32(a1, 80);
        speed.y = v129 - v128;
        speed.z = v131 - v130;
        ((void (__fastcall *)(int, int, int, int, float, float, float, int, Vec3 *))loc_60185F9C)(
          a1,
          v122,
          2,
          v124,
          10.0,
          0.1,
          2.3,
          4,
          &speed);
        FIELD_U32(a1, 436) = 4;
        FIELD_U32(a1, 128) = 1036831949;
        FIELD_U32(a1, 132) = 1036831949;
        FIELD_U32(a1, 136) = 1036831949;
        goto LABEL_173;
      case 251:
        LODWORD(speed.x) = 1;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v11 = (int *)sub_601E0040(&speed);
          v12 = *v11;
          v13 = v11[1];
          v14 = v11[2];
          FIELD_U32(a1, 324) = v12;
          FIELD_U32(a1, 328) = v13;
          FIELD_U32(a1, 332) = v14;
          sub_6019EC34((_DWORD *)(a1 + 380), &speed);
        }
        LODWORD(speed.x) = 4;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v16 = (int *)sub_601E0040(&speed);
          v17 = *v16;
          v18 = v16[1];
          v19 = v16[2];
          FIELD_U32(a1, 336) = v17;
          FIELD_U32(a1, 340) = v18;
          FIELD_U32(a1, 344) = v19;
          sub_6019EC34((_DWORD *)(a1 + 392), &speed);
        }
        if ( ((unsigned int)dword_60C8B040 & ~(1612562672 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C8B040) )
        {
          dword_60C8B074 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B078 = (int)"W2K1";
          _cxa_guard_release(dword_60C8B040);
        }
        LODWORD(speed.y) = v258;
        LODWORD(speed.x) = &BufferedSafeStringBase_char_vtable_probably;
        LODWORD(speed.z) = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&speed);
        LODWORD(speed.x) = &off_60BD4C38;
        v20 = speed.y;
        (*(void (__fastcall **)(int *))(dword_60C8B074 + 12))(&dword_60C8B074);
        v21 = (const void *)dword_60C8B078;
        if ( LODWORD(v20) == dword_60C8B078 )
          goto LABEL_150;
        (*(void (__fastcall **)(int *))(dword_60C8B074 + 12))(&dword_60C8B074);
        v22 = 0;
        while ( 2 )
        {
          if ( *(_BYTE *)(dword_60C8B078 + v22) )
          {
            if ( *(_BYTE *)(dword_60C8B078 + v22 + 1) )
            {
              if ( *(_BYTE *)(dword_60C8B078 + v22 + 2) )
              {
                v10 = v22 + 2 <= 0x7FFFF;
                v22 += 3;
                if ( !v10 )
                {
                  v22 = 0;
                  break;
                }
                continue;
              }
              v22 += 2;
            }
            else
            {
              ++v22;
            }
          }
          break;
        }
        if ( v22 >= SLODWORD(speed.z) )
          v22 = LODWORD(speed.z) - 1;
        qmemcpy((void *)LODWORD(v20), v21, v22);
        *(_BYTE *)(LODWORD(v20) + v22) = 0;
LABEL_150:
        LODWORD(speed.x) = &off_60BD4C20;
        sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 360), 1, 0, (int)&speed);
        LODWORD(v260[0].x) = 1;
        v260[0].y = 0.0;
        v118 = sub_601A443C(dword_60C89E18, 1, 0);
        LODWORD(v260[0].z) = sub_60181AB4(v118, &speed);
        sub_6019EC34((_DWORD *)(a1 + 404), v260);
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        v119 = sub_608332B0(a1 + 80, a1 + 360);
        FIELD_U32(a1, 428) = v119;
        FIELD_U32(a1, 180) = v119;
        v120 = FIELD_F32(a1, 364) - FIELD_F32(a1, 84);
        v121 = FIELD_F32(a1, 368) - FIELD_F32(a1, 88);
        speed.x = FIELD_F32(a1, 360) - FIELD_F32(a1, 80);
        speed.y = v120;
        speed.z = v121;
        ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
          a1,
          a1 + 360,
          0,
          20,
          10.0,
          0.2,
          2.3,
          20,
          &speed);
        if ( FIELD_U32(a1, 272) != 5 )
        {
          FIELD_U32(a1, 272) = 5;
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            5,
            1.0,
            10.0,
            0.0);
        }
        SE_PLY_ref(dword_60C8B13C, 1, 2, 1, FIELD_F32(a1, 200));
        sub_601E4C88(dword_60C8B13C, 117, a1 + 80, 1);
        sub_601E4C88(dword_60C8B13C, 142, a1 + 80, 1);
LABEL_173:
        v5 = -894784854;
        goto LABEL_180;
      case 252:
        FIELD_U32(a1, 440) = 0;
        FIELD_U32(a1, 428) = -894784854;
        FIELD_U32(a1, 444) = -268435456;
        if ( FIELD_U32(a1, 272) )
        {
          FIELD_U32(a1, 272) = 0;
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            0,
            1.2,
            5.0,
            0.0);
        }
        FIELD_U32(a1, 436) = 20;
        goto LABEL_180;
      case 253:
        v23 = sub_601DFFE4(a1 + 404);
        FIELD_U32(a1, 432) = 4;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        v24 = (_DWORD *)sub_60178694(v23, 4u);
        FIELD_U32(a1, 416) = v24[21];
        FIELD_U32(a1, 420) = v24[22];
        FIELD_U32(a1, 424) = v24[24];
        v25 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v25;
        FIELD_U32(a1, 364) = v25[1];
        FIELD_U32(a1, 368) = v25[2];
        FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, a1 + 360);
        v26 = FIELD_U32(a1, 180);
        goto LABEL_83;
      case 254:
        v27 = FIELD_F32(a1, 84);
        v28 = FIELD_F32(a1, 88);
        speed.x = FIELD_F32(a1, 80);
        speed.y = v27;
        speed.z = v28;
        v260[0].x = 1.0;
        v260[0].y = 1.0;
        v260[0].z = 1.0;
        sub_602375C4((EffectData *)(a1 + 448), 883, &speed, 0, v260);
        StateMgr__changeState((StateMgr *)(a1 + 296), &stru_60C8AFEC);
        goto LABEL_180;
      case 256:
        LODWORD(speed.x) = 1;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v29 = (int *)sub_601E0040(&speed);
          v30 = *v29;
          v31 = v29[1];
          v32 = v29[2];
          FIELD_U32(a1, 324) = v30;
          FIELD_U32(a1, 328) = v31;
          FIELD_U32(a1, 332) = v32;
          sub_6019EC34((_DWORD *)(a1 + 380), &speed);
        }
        LODWORD(speed.x) = 4;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v33 = (int *)sub_601E0040(&speed);
          v34 = *v33;
          v35 = v33[1];
          v36 = v33[2];
          FIELD_U32(a1, 336) = v34;
          FIELD_U32(a1, 340) = v35;
          FIELD_U32(a1, 344) = v36;
          sub_6019EC34((_DWORD *)(a1 + 392), &speed);
        }
        v37 = a1 + 336;
        if ( FIELD_U32(a1, 272) )
        {
          FIELD_U32(a1, 272) = 0;
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            0,
            1.2,
            5.0,
            0.0);
        }
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
          v37 = a1 + 324;
        v38 = *(_DWORD *)v37;
        FIELD_U32(a1, 80) = *(_DWORD *)v37;
        v39 = FIELD_F32(v37, 4);
        FIELD_F32(a1, 84) = v39;
        v40 = FIELD_U32(v37, 8);
        FIELD_U32(a1, 88) = v40;
        FIELD_U32(a1, 312) = v38;
        FIELD_U32(a1, 320) = v40;
        FIELD_F32(a1, 316) = v39 + 50.0;
        FIELD_F32(a1, 84) = v39 + -100.0;
        FIELD_U32(a1, 432) = 2;
        FIELD_U32(a1, 180) = 0;
        goto LABEL_180;
      case 257:
        LODWORD(speed.x) = 1;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v41 = (int *)sub_601E0040(&speed);
          v42 = *v41;
          v43 = v41[1];
          v44 = v41[2];
          FIELD_U32(a1, 324) = v42;
          FIELD_U32(a1, 328) = v43;
          FIELD_U32(a1, 332) = v44;
          sub_6019EC34((_DWORD *)(a1 + 380), &speed);
        }
        LODWORD(speed.x) = 4;
        speed.y = 0.0;
        speed.z = NAN;
        if ( sub_601D9F00((int *)&speed, 0) == 1 )
        {
          v46 = (int *)sub_601E0040(&speed);
          v47 = *v46;
          v48 = v46[1];
          v49 = v46[2];
          FIELD_U32(a1, 336) = v47;
          FIELD_U32(a1, 340) = v48;
          FIELD_U32(a1, 344) = v49;
          sub_6019EC34((_DWORD *)(a1 + 392), &speed);
        }
        if ( FIELD_U32(a1, 272) )
        {
          FIELD_U32(a1, 272) = 0;
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            0,
            1.2,
            5.0,
            0.0);
        }
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
        {
          if ( ((unsigned int)&dword_60C8B040[1] & ~(1612563840 << v45) & 1) == 0
            && _cxa_guard_acquire(&dword_60C8B040[1]) )
          {
            dword_60C8B07C = (int)&sead__SafeStringBase__vtable;
            dword_60C8B080 = (int)"W1C0";
            _cxa_guard_release(&dword_60C8B040[1]);
          }
          LODWORD(speed.y) = v258;
          LODWORD(speed.x) = &BufferedSafeStringBase_char_vtable_probably;
          LODWORD(speed.z) = 32;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&speed);
          LODWORD(speed.x) = &off_60BD4C38;
          v50 = speed.y;
          (*(void (__fastcall **)(int *))(dword_60C8B07C + 12))(&dword_60C8B07C);
          v51 = (const void *)dword_60C8B080;
          if ( LODWORD(v50) != dword_60C8B080 )
          {
            (*(void (__fastcall **)(int *))(dword_60C8B07C + 12))(&dword_60C8B07C);
            v52 = 0;
            while ( 1 )
            {
              if ( !*(_BYTE *)(dword_60C8B080 + v52) )
                goto LABEL_163;
              if ( !*(_BYTE *)(dword_60C8B080 + v52 + 1) )
              {
                ++v52;
                goto LABEL_163;
              }
              if ( !*(_BYTE *)(dword_60C8B080 + v52 + 2) )
                break;
              v10 = v52 + 2 <= 0x7FFFF;
              v52 += 3;
              if ( !v10 )
              {
                v52 = 0;
                goto LABEL_163;
              }
            }
            v52 += 2;
LABEL_163:
            if ( v52 >= SLODWORD(speed.z) )
              v52 = LODWORD(speed.z) - 1;
            qmemcpy((void *)LODWORD(v50), v51, v52);
            *(_BYTE *)(LODWORD(v50) + v52) = 0;
          }
          LODWORD(speed.x) = &off_60BD4C20;
          sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 80), 0, 0, (int)&speed);
          v260[0].x = 0.0;
          v260[0].y = 0.0;
          v125 = sub_601A443C(dword_60C89E18, 0, 0);
          LODWORD(v260[0].z) = sub_60181AB4(v125, &speed);
          sub_6019EC34((_DWORD *)(a1 + 404), v260);
          v126 = FIELD_F32(a1, 80);
          goto LABEL_179;
        }
        if ( ((unsigned int)&dword_60C8B040[2] & ~(1612566588 << v45) & 1) == 0
          && _cxa_guard_acquire(&dword_60C8B040[2]) )
        {
          dword_60C8B084 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B088 = (int)"W5A0";
          _cxa_guard_release(&dword_60C8B040[2]);
        }
        LODWORD(speed.y) = v258;
        LODWORD(speed.x) = &BufferedSafeStringBase_char_vtable_probably;
        LODWORD(speed.z) = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&speed);
        LODWORD(speed.x) = &off_60BD4C38;
        v103 = speed.y;
        (*(void (__fastcall **)(int *))(dword_60C8B084 + 12))(&dword_60C8B084);
        v104 = (const void *)dword_60C8B088;
        if ( LODWORD(v103) == dword_60C8B088 )
          goto LABEL_178;
        (*(void (__fastcall **)(int *))(dword_60C8B084 + 12))(&dword_60C8B084);
        v105 = 0;
        break;
      case 261:
        if ( FIELD_U32(a1, 272) != 184 )
        {
          FIELD_U32(a1, 272) = 184;
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            184,
            1.2,
            5.0,
            1.0);
        }
        goto LABEL_180;
      case 262:
        v53 = sub_601CF9C0(dword_60C8AEF0);
        FIELD_U32(a1, 428) = sub_6000F7B8(
                                  FIELD_F32(v53, 80) - FIELD_F32(a1, 80),
                                  FIELD_F32(v53, 88) - FIELD_F32(a1, 88));
        goto LABEL_180;
      case 263:
        if ( FIELD_U32(a1, 272) )
        {
          FIELD_U32(a1, 272) = 0;
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            0,
            1.2,
            5.0,
            0.0);
        }
        if ( ((unsigned int)&dword_60C8B040[3] & ~(1612564312 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B040[3]) )
        {
          dword_60C8B08C = (int)&sead__SafeStringBase__vtable;
          dword_60C8B090 = (int)"ShadowFirstDemo_Message_01";
          _cxa_guard_release(&dword_60C8B040[3]);
        }
        sub_604FAC7C(dword_60C89E18 + 149128, &dword_60C8B08C, v2 == 4);
        goto LABEL_180;
      case 264:
        FIELD_U32(a1, 436) = 50;
        goto LABEL_180;
      case 265:
        if ( FIELD_U32(a1, 272) != 198 )
        {
          FIELD_U32(a1, 272) = 198;
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            198,
            1.0,
            10.0,
            0.0);
        }
        FIELD_U32(a1, 436) = 60;
        goto LABEL_180;
      case 266:
      case 267:
        if ( FIELD_U32(a1, 272) )
        {
          FIELD_U32(a1, 272) = 0;
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            0,
            1.2,
            5.0,
            0.0);
        }
        FIELD_U32(a1, 436) = 30;
        goto LABEL_180;
      case 270:
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
        {
          v54 = FIELD_U32(a1, 328);
          v55 = FIELD_F32(a1, 324);
          FIELD_U32(a1, 316) = v54;
          v56 = FIELD_U32(a1, 332);
          FIELD_U32(a1, 320) = v56;
          FIELD_F32(a1, 348) = v55;
          FIELD_U32(a1, 352) = v54;
          FIELD_U32(a1, 356) = v56;
          v57 = (_DWORD *)(a1 + 404);
          v58 = (_DWORD *)(a1 + 380);
          FIELD_F32(a1, 312) = v55 + 60.0;
        }
        else
        {
          v106 = FIELD_U32(a1, 336);
          FIELD_U32(a1, 312) = v106;
          v107 = FIELD_U32(a1, 340);
          FIELD_U32(a1, 316) = v107;
          v108 = FIELD_F32(a1, 344);
          FIELD_U32(a1, 348) = v106;
          FIELD_U32(a1, 352) = v107;
          v57 = (_DWORD *)(a1 + 404);
          v58 = (_DWORD *)(a1 + 392);
          FIELD_F32(a1, 356) = v108;
          FIELD_F32(a1, 320) = v108 + 60.0;
        }
        sub_6019EC34(v57, v58);
        v109 = (float *)sub_601CF9C0(dword_60C8AEF0);
        v110 = FIELD_F32(a1, 84);
        v111 = v109[21];
        v112 = v109[22];
        v113 = FIELD_F32(a1, 88);
        speed.x = v109[20] - FIELD_F32(a1, 80);
        speed.y = v111 - v110;
        speed.z = v112 - v113;
        ((void (__fastcall *)(int, int, int, int, float, float, float, int, Vec3 *))loc_60185F9C)(
          a1,
          a1 + 312,
          2,
          30,
          10.0,
          2.3,
          2.3,
          30,
          &speed);
        if ( FIELD_U32(a1, 272) != 5 )
        {
          FIELD_U32(a1, 272) = 5;
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            5,
            1.0,
            10.0,
            0.0);
        }
        goto LABEL_180;
      case 271:
        FIELD_U32(a1, 372) = 0;
        FIELD_U32(a1, 436) = 10;
        goto LABEL_180;
      case 272:
        v59 = sub_601DFFE4(a1 + 404);
        v60 = v59;
        v61 = 5;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
          v61 = 4;
        FIELD_U32(a1, 432) = v61;
        v62 = (_DWORD *)sub_60178694(v59, v61);
        FIELD_U32(a1, 416) = v62[21];
        FIELD_U32(a1, 420) = v62[22];
        FIELD_U32(a1, 424) = v62[24];
        v63 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v63;
        FIELD_U32(a1, 364) = v63[1];
        FIELD_U32(a1, 368) = v63[2];
        v64 = FIELD_U32(a1, 432);
        if ( v64 >= 6 )
          v64 = 0;
        FIELD_U32(a1, 376) = *(_DWORD *)(v60 + 4 * v64 + 48);
        v26 = sub_608332B0(a1 + 80, a1 + 360);
        FIELD_U32(a1, 428) = v26;
        FIELD_U32(a1, 180) = v26;
LABEL_83:
        FIELD_U32(a1, 192) = v26;
        goto LABEL_84;
      case 273:
        v67 = sub_601DFFE4(a1 + 404);
        v68 = v67;
        v69 = 2;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
          v69 = 3;
        FIELD_U32(a1, 432) = v69;
        v70 = (_DWORD *)sub_60178694(v67, v69);
        FIELD_U32(a1, 416) = v70[21];
        FIELD_U32(a1, 420) = v70[22];
        FIELD_U32(a1, 424) = v70[24];
        v71 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v71;
        FIELD_U32(a1, 364) = v71[1];
        FIELD_U32(a1, 368) = v71[2];
        v72 = FIELD_U32(a1, 432);
        if ( v72 >= 6 )
          v72 = 0;
        FIELD_U32(a1, 376) = *(_DWORD *)(v68 + 4 * v72 + 48);
        v73 = sub_608332B0(a1 + 80, a1 + 360);
        FIELD_U32(a1, 428) = v73;
        FIELD_U32(a1, 180) = v73;
        FIELD_U32(a1, 192) = v73;
        v74 = FIELD_F32(a1, 84);
        v75 = FIELD_F32(a1, 88);
        speed.x = FIELD_F32(a1, 80);
        speed.y = v74;
        speed.z = v75;
        v260[0].x = 1.0;
        v260[0].y = 1.0;
        v260[0].z = 1.0;
        sub_602375C4((EffectData *)(a1 + 448), 883, &speed, 0, v260);
        if ( FIELD_U32(a1, 272) == 2 )
          goto LABEL_180;
        FIELD_U32(a1, 272) = 2;
        goto LABEL_87;
      case 275:
      case 280:
LABEL_84:
        v65 = FIELD_F32(a1, 80);
        v66 = FIELD_F32(a1, 84);
        speed.z = FIELD_F32(a1, 88);
        speed.y = v66;
        speed.x = v65;
        v260[0].x = 1.0;
        v260[0].y = 1.0;
        v260[0].z = 1.0;
        sub_602375C4((EffectData *)(a1 + 448), 883, &speed, 0, v260);
        goto LABEL_85;
      case 276:
        v76 = sub_601DFFE4(a1 + 404);
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        while ( 2 )
        {
          v77 = (_DWORD *)sub_60178694(v76, FIELD_U32(a1, 432));
          FIELD_U32(a1, 416) = v77[21];
          FIELD_U32(a1, 420) = v77[22];
          FIELD_U32(a1, 424) = v77[24];
          v78 = sub_601E0010(a1 + 416);
          LODWORD(speed.x) = &sead__SafeStringBase__vtable;
          v79 = (_DWORD *)v78;
          LODWORD(speed.y) = "W201";
          (*(void (__fastcall **)(int))(*(_DWORD *)v78 + 12))(v78);
          (*(void (__fastcall **)(_DWORD *))(*v79 + 12))(v79);
          v80 = v79[1];
          (*(void (__fastcall **)(Vec3 *))(LODWORD(speed.x) + 12))(&speed);
          if ( v80 == LODWORD(speed.y) )
            break;
          v81 = v79[1];
          v82 = 1;
LABEL_99:
          if ( *(unsigned __int8 *)(v81 + v82 - 1) != *(unsigned __int8 *)(LODWORD(speed.y) + v82 - 1) )
            goto LABEL_95;
          if ( *(_BYTE *)(v81 + v82 - 1) )
          {
            if ( v82 >= 524289 || *(unsigned __int8 *)(v81 + v82) != *(unsigned __int8 *)(LODWORD(speed.y) + v82) )
            {
LABEL_95:
              v76 = sub_601DFFE4(a1 + 416);
              continue;
            }
            if ( *(_BYTE *)(v81 + v82) )
            {
              v82 += 2;
              goto LABEL_99;
            }
          }
          break;
        }
        FIELD_U32(a1, 432) = 2;
        v83 = sub_601DFFE4(a1 + 416);
        v84 = (_DWORD *)sub_60178694(v83, FIELD_U32(a1, 432));
        FIELD_U32(a1, 416) = v84[21];
        FIELD_U32(a1, 420) = v84[22];
        FIELD_U32(a1, 424) = v84[24];
        for ( i = v2 == 4; !sub_601DAE4C(a1 + 416, 16); FIELD_U32(a1, 424) = v86[24] )
        {
          sub_601DFFE4(a1 + 416);
          v85 = sub_601DFFE4(a1 + 416);
          v86 = (_DWORD *)sub_60178694(v85, FIELD_U32(a1, 432));
          FIELD_U32(a1, 416) = v86[21];
          FIELD_U32(a1, 420) = v86[22];
        }
        v87 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v87;
        FIELD_U32(a1, 364) = v87[1];
        FIELD_U32(a1, 368) = v87[2];
        FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, a1 + 360);
        speed.x = 2.5244e-29;
        moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
        FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        goto LABEL_173;
      case 277:
        v88 = sub_601DFFE4(a1 + 404);
        FIELD_U32(a1, 432) = 3;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        v89 = 3;
        goto LABEL_113;
      case 278:
        if ( FIELD_U32(dword_60CC6D78, 412) != 4 )
          goto LABEL_180;
        v90 = sub_601DFFE4(a1 + 404);
        FIELD_U32(a1, 432) = 4;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        v91 = (_DWORD *)sub_60178694(v90, 4u);
        FIELD_U32(a1, 416) = v91[21];
        FIELD_U32(a1, 420) = v91[22];
        FIELD_U32(a1, 424) = v91[24];
        v92 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v92;
        FIELD_U32(a1, 364) = v92[1];
        FIELD_U32(a1, 368) = v92[2];
        FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, a1 + 360);
LABEL_85:
        if ( FIELD_U32(a1, 272) != 2 )
        {
          FIELD_U32(a1, 272) = 2;
LABEL_87:
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            2,
            4.0,
            5.0,
            0.0);
        }
        goto LABEL_180;
      case 279:
        v88 = sub_601DFFE4(a1 + 404);
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        v89 = 3;
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
          v89 = 4;
        FIELD_U32(a1, 432) = v89;
LABEL_113:
        v93 = (_DWORD *)sub_60178694(v88, v89);
        FIELD_U32(a1, 416) = v93[21];
        FIELD_U32(a1, 420) = v93[22];
        FIELD_U32(a1, 424) = v93[24];
        v94 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v94;
        FIELD_U32(a1, 364) = v94[1];
        FIELD_U32(a1, 368) = v94[2];
        FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, a1 + 360);
        goto LABEL_180;
      case 281:
        FIELD_U32(a1, 348) = FIELD_U32(a1, 80);
        FIELD_U32(a1, 352) = FIELD_U32(a1, 84);
        FIELD_U32(a1, 356) = FIELD_U32(a1, 88);
        if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
        {
          v95 = (_DWORD *)(a1 + 380);
          FIELD_U32(a1, 312) = FIELD_U32(a1, 324);
          FIELD_U32(a1, 316) = FIELD_U32(a1, 328);
          v96 = FIELD_U32(a1, 332);
        }
        else
        {
          v95 = (_DWORD *)(a1 + 392);
          FIELD_U32(a1, 312) = FIELD_U32(a1, 336);
          FIELD_U32(a1, 316) = FIELD_U32(a1, 340);
          v96 = FIELD_U32(a1, 344);
        }
        FIELD_U32(a1, 320) = v96;
        sub_6019EC34((_DWORD *)(a1 + 404), v95);
        v114 = FIELD_F32(a1, 316) + 50.0;
        FIELD_F32(a1, 316) = v114;
        v115 = FIELD_F32(a1, 84);
        v116 = FIELD_F32(a1, 88);
        v117 = FIELD_F32(a1, 320);
        speed.x = FIELD_F32(a1, 312) - FIELD_F32(a1, 80);
        speed.y = v114 - v115;
        speed.z = v117 - v116;
        ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
          a1,
          a1 + 312,
          0,
          20,
          10.0,
          2.3,
          2.3,
          30,
          &speed);
        if ( FIELD_U32(a1, 272) != 5 )
        {
          FIELD_U32(a1, 272) = 5;
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
            *(_DWORD *)(FIELD_U32(a1, 268) + 4),
            5,
            1.0,
            10.0,
            0.0);
        }
        v99 = FIELD_F32(a1, 200);
        v97 = 1;
        goto LABEL_144;
      case 282:
        v97 = 7;
        FIELD_U32(a1, 312) = FIELD_U32(a1, 80);
        v98 = FIELD_F32(a1, 84);
        FIELD_U32(a1, 320) = FIELD_U32(a1, 88);
        FIELD_F32(a1, 316) = v98 + -100.0;
        FIELD_U32(a1, 124) = 0;
        v99 = FIELD_F32(a1, 200);
LABEL_144:
        SE_PLY_ref(dword_60C8B13C, v97, 2, 1, v99);
        goto LABEL_180;
      default:
        goto LABEL_180;
    }
    while ( *(_BYTE *)(dword_60C8B088 + v105) )
    {
      if ( !*(_BYTE *)(dword_60C8B088 + v105 + 1) )
      {
        ++v105;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8B088 + v105 + 2) )
      {
        v105 += 2;
        break;
      }
      v10 = v105 + 2 <= 0x7FFFF;
      v105 += 3;
      if ( !v10 )
      {
        v105 = 0;
        break;
      }
    }
    if ( v105 >= SLODWORD(speed.z) )
      v105 = LODWORD(speed.z) - 1;
    qmemcpy((void *)LODWORD(v103), v104, v105);
    *(_BYTE *)(LODWORD(v103) + v105) = 0;
LABEL_178:
    LODWORD(speed.x) = &off_60BD4C20;
    sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 80), 4, 0, (int)&speed);
    LODWORD(v260[0].x) = 4;
    v260[0].y = 0.0;
    v132 = sub_601A443C(dword_60C89E18, 4, 0);
    LODWORD(v260[0].z) = sub_60181AB4(v132, &speed);
    sub_6019EC34((_DWORD *)(a1 + 404), v260);
    v133 = FIELD_F32(a1, 80) + 500.0;
    FIELD_F32(a1, 80) = v133;
    FIELD_U32(a1, 128) = 1075000115;
    FIELD_U32(a1, 132) = 1075000115;
    FIELD_U32(a1, 136) = 1075000115;
    v126 = v133;
LABEL_179:
    FIELD_F32(a1, 348) = v126;
    FIELD_U32(a1, 352) = FIELD_U32(a1, 84);
    FIELD_U32(a1, 356) = FIELD_U32(a1, 88);
  }
LABEL_180:
  switch ( v259 )
  {
    case 111:
      v134 = FIELD_U32(a1, 436);
      if ( v134 )
      {
        v135 = v134 - 1;
        FIELD_U32(a1, 436) = v135;
        if ( !v135 )
        {
          FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + 130.0;
          if ( FIELD_U32(a1, 272) != 207 )
          {
            FIELD_U32(a1, 272) = 207;
            (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              207,
              1.0,
              0.0,
              0.0);
          }
          v136 = 119;
          v137 = a1 + 80;
          goto LABEL_233;
        }
      }
      else if ( sub_601860F8(a1) == 1 || (FIELD_U8(a1, 216) & 8) != 0 )
      {
        FIELD_U8(a1, 19) = 1;
        goto LABEL_348;
      }
      return;
    case 251:
      if ( sub_601860F8(a1) == 1 )
      {
        SE_PLY_ref(dword_60C8B13C, 8, 2, 1, FIELD_F32(a1, 200));
        goto LABEL_271;
      }
      return;
    case 252:
      v138 = FIELD_U32(a1, 436);
      if ( v138 )
      {
        FIELD_U32(a1, 436) = v138 - 1;
      }
      else
      {
        speed.x = FIELD_F32(a1, 444);
        sub_6083246C((int *)(a1 + 180), (int *)(a1 + 428), (signed int *)&speed);
        v193 = FIELD_U32(a1, 180);
        if ( v193 == FIELD_U32(a1, 428) )
        {
          v209 = v193 == -894784854;
          v194 = FIELD_U32(a1, 444);
          if ( v209 )
            v5 = 894784853;
          FIELD_U32(a1, 428) = v5;
          FIELD_U32(a1, 444) = -v194;
          v195 = FIELD_U32(a1, 440);
          FIELD_U32(a1, 440) = v195 + 1;
          FIELD_U32(a1, 436) = 20;
          if ( v195 >= 2 )
            goto LABEL_348;
        }
      }
      return;
    case 253:
      if ( FIELD_U32(a1, 376) == 7 )
      {
        if ( sub_601860F8(a1) == 1 )
        {
          FIELD_U32(a1, 376) = 3;
          if ( FIELD_U32(a1, 272) != 2 )
          {
            FIELD_U32(a1, 272) = 2;
            (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              2,
              4.0,
              5.0,
              0.0);
          }
        }
      }
      else
      {
        v177 = FIELD_U32(a1, 180);
        if ( v177 != FIELD_U32(a1, 428) )
        {
          speed.x = 6.4623e-27;
          moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
          v177 = FIELD_U32(a1, 180);
        }
        FIELD_U32(a1, 192) = v177;
        FIELD_U32(a1, 200) = 1084227584;
        ((void (__fastcall *)(int))loc_60168DF8)(a1);
        sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
      }
      v170 = a1 + 360;
      if ( sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360)) == 1 )
      {
        sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
        FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
        FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
        FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
        if ( sub_601DAE4C(a1 + 404, 8) )
        {
          if ( FIELD_U32(a1, 272) )
          {
            FIELD_U32(a1, 272) = 0;
            (*(void (__fastcall **)(float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(1.2, 5.0, 0.0);
          }
          goto LABEL_330;
        }
        v197 = sub_601DFFE4(a1 + 404);
        v198 = (_DWORD *)sub_60178694(v197, FIELD_U32(a1, 432));
        FIELD_U32(a1, 416) = v198[21];
        FIELD_U32(a1, 420) = v198[22];
        FIELD_U32(a1, 424) = v198[24];
        v199 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v199;
        FIELD_U32(a1, 364) = v199[1];
        FIELD_U32(a1, 368) = v199[2];
        v200 = FIELD_U32(a1, 432);
        if ( v200 >= 6 )
          v200 = 0;
        FIELD_U32(a1, 376) = *(_DWORD *)(v197 + 4 * v200 + 48);
        goto LABEL_334;
      }
      return;
    case 254:
    case 255:
      return;
    case 256:
      v139 = FIELD_F32(a1, 316) - FIELD_F32(a1, 84);
      v140 = FIELD_F32(a1, 312) - FIELD_F32(a1, 80);
      v141 = FIELD_F32(a1, 320) - FIELD_F32(a1, 88);
      v142 = sqrtf((float)((float)(v139 * v139) + (float)(v140 * v140)) + (float)(v141 * v141));
      v143 = 4.5;
      if ( v142 > 4.5 )
        goto LABEL_273;
      v144 = FIELD_U32(a1, 316);
      v145 = FIELD_U32(a1, 320);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 312);
      FIELD_U32(a1, 84) = v144;
      FIELD_U32(a1, 88) = v145;
      goto LABEL_348;
    case 262:
    case 277:
    case 279:
      goto LABEL_181;
    case 263:
      if ( FIELD_U8(dword_60C89E18, 152815) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        sub_601CFFEC(dword_60C8AEF0, 0);
      }
      return;
    case 264:
      v146 = FIELD_U32(a1, 436);
      if ( !v146 )
        goto LABEL_322;
      v147 = v146 - 1;
      FIELD_U32(a1, 436) = v147;
      if ( v147 != 1 )
        return;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        if ( ((unsigned int)&dword_60C8B040[6] & ~(1612570144 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B040[6]) )
        {
          dword_60C8B0A4 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B0A8 = (int)"ShadowFirstDemo_Message_05";
          _cxa_guard_release(&dword_60C8B040[6]);
        }
        v148 = &dword_60C8B0A4;
      }
      else
      {
        if ( ((unsigned int)&dword_60C8B040[7] & ~(1612575044 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B040[7]) )
        {
          dword_60C8B0AC = (int)&sead__SafeStringBase__vtable;
          dword_60C8B0B0 = (int)"ShadowFirstDemo_Message_02";
          _cxa_guard_release(&dword_60C8B040[7]);
        }
        v148 = &dword_60C8B0AC;
      }
      goto LABEL_401;
    case 265:
      v149 = FIELD_U32(a1, 436);
      if ( !v149 )
        goto LABEL_322;
      v150 = v149 - 1;
      FIELD_U32(a1, 436) = v150;
      if ( v150 != 1 )
        return;
      if ( ((unsigned int)&dword_60C8B040[8] & ~(1612570308 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B040[8]) )
      {
        dword_60C8B0B4 = (int)&sead__SafeStringBase__vtable;
        dword_60C8B0B8 = (int)"ShadowFirstDemo_Message_03";
        _cxa_guard_release(&dword_60C8B040[8]);
      }
      v148 = &dword_60C8B0B4;
      goto LABEL_401;
    case 266:
      v151 = FIELD_U32(a1, 436);
      if ( !v151 )
        goto LABEL_322;
      v152 = v151 - 1;
      FIELD_U32(a1, 436) = v152;
      if ( v152 != 1 )
        return;
      if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
      {
        if ( ((unsigned int)&dword_60C8B040[9] & ~(1612570500 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B040[9]) )
        {
          dword_60C8B0C0 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B0C4 = (int)"ShadowFirstDemo_Message_03_1";
          _cxa_guard_release(&dword_60C8B040[9]);
        }
        v148 = &dword_60C8B0C0;
      }
      else if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        if ( ((unsigned int)&dword_60C8B040[10] & ~(1612574916 << v4) & 1) == 0
          && _cxa_guard_acquire(&dword_60C8B040[10]) )
        {
          dword_60C8B0C8 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B0CC = (int)"ShadowFirstDemo_Message_03_3";
          _cxa_guard_release(&dword_60C8B040[10]);
        }
        v148 = &dword_60C8B0C8;
      }
      else
      {
        if ( ((unsigned int)&dword_60C8B040[11] & ~(1612575452 << v4) & 1) == 0
          && _cxa_guard_acquire(&dword_60C8B040[11]) )
        {
          dword_60C8B0D0 = (int)&sead__SafeStringBase__vtable;
          dword_60C8B0D4 = (int)"ShadowFirstDemo_Message_03_2";
          _cxa_guard_release(&dword_60C8B040[11]);
        }
        v148 = &dword_60C8B0D0;
      }
      goto LABEL_401;
    case 267:
      v153 = FIELD_U32(a1, 436);
      if ( v153 )
      {
        v154 = v153 - 1;
        FIELD_U32(a1, 436) = v154;
        if ( v154 == 1 )
        {
          if ( ((unsigned int)&dword_60C8B040[12] & ~(1612570680 << v4) & 1) == 0
            && _cxa_guard_acquire(&dword_60C8B040[12]) )
          {
            dword_60C8B0D8 = (int)&sead__SafeStringBase__vtable;
            dword_60C8B0DC = (int)"ShadowFirstDemo_Message_04";
            _cxa_guard_release(&dword_60C8B040[12]);
          }
          v148 = &dword_60C8B0D8;
LABEL_401:
          sub_604FAC7C(dword_60C89E18 + 149128, v148, i);
        }
      }
      else
      {
LABEL_322:
        if ( FIELD_U8(dword_60C89E18, 152815) )
          goto LABEL_348;
      }
      return;
    case 270:
      if ( sub_601860F8(a1) != 1 )
        return;
      goto LABEL_345;
    case 271:
      v155 = FIELD_U32(a1, 436);
      if ( v155 )
      {
        v156 = v155 - 1;
        FIELD_U32(a1, 436) = v156;
        if ( !v156 )
        {
          if ( FIELD_U32(a1, 272) != 195 )
          {
            FIELD_U32(a1, 272) = 195;
            (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              195,
              1.4,
              10.0,
              0.0);
          }
          v137 = a1 + 80;
          v136 = 118;
LABEL_233:
          sub_601E4C88(dword_60C8B13C, v136, v137, 1);
        }
        return;
      }
      if ( sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 268) + 4)) != 1 )
        return;
      sub_601CFFEC(dword_60C8AEF0, 0);
      if ( FIELD_U32(a1, 272) )
      {
        FIELD_U32(a1, 272) = 0;
        goto LABEL_347;
      }
      goto LABEL_348;
    case 272:
      if ( FIELD_U32(a1, 376) == 7 )
      {
        if ( sub_601860F8(a1) == 1 )
        {
          SE_PLY_ref(dword_60C8B13C, 8, 2, 1, FIELD_F32(a1, 200));
          v157 = FIELD_F32(a1, 84);
          v158 = FIELD_F32(a1, 88);
          speed.x = FIELD_F32(a1, 80);
          speed.y = v157;
          speed.z = v158;
          v260[0].x = 1.0;
          v260[0].y = 1.0;
          v260[0].z = 1.0;
          EffectData_create(889, &speed, 0, (int)v260);
          sub_602375C4((EffectData *)(a1 + 448), 883, &speed, 0, v260);
          FIELD_U32(a1, 376) = 3;
          if ( FIELD_U32(a1, 272) != 2 )
          {
            FIELD_U32(a1, 272) = 2;
            (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              2,
              4.0,
              5.0,
              0.0);
          }
        }
      }
      else
      {
        v178 = FIELD_U32(a1, 180);
        if ( v178 != FIELD_U32(a1, 428) )
        {
          speed.x = 6.4623e-27;
          moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
          v178 = FIELD_U32(a1, 180);
        }
        FIELD_U32(a1, 192) = v178;
        FIELD_U32(a1, 200) = 1084227584;
        ((void (__fastcall *)(int))loc_60168DF8)(a1);
        sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
      }
      if ( sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360)) != 1 )
        return;
      sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
      FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
      FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
      FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
      v179 = (_DWORD *)sub_601E0010(a1 + 404);
      LODWORD(speed.x) = &sead__SafeStringBase__vtable;
      LODWORD(speed.y) = "W2M0";
      (*(void (__fastcall **)(_DWORD *))(*v179 + 12))(v179);
      (*(void (__fastcall **)(_DWORD *))(*v179 + 12))(v179);
      v180 = v179[1];
      (*(void (__fastcall **)(Vec3 *))(LODWORD(speed.x) + 12))(&speed);
      if ( v180 == LODWORD(speed.y) )
        goto LABEL_330;
      v181 = v179[1];
      v182 = 1;
      while ( *(unsigned __int8 *)(v181 + v182 - 1) == *(unsigned __int8 *)(LODWORD(speed.y) + v182 - 1) )
      {
        if ( !*(_BYTE *)(v181 + v182 - 1) )
          goto LABEL_330;
        if ( v182 < 524289 && *(unsigned __int8 *)(v181 + v182) == *(unsigned __int8 *)(LODWORD(speed.y) + v182) )
        {
          if ( *(_BYTE *)(v181 + v182) )
          {
            v182 += 2;
            continue;
          }
          goto LABEL_330;
        }
        break;
      }
      LODWORD(speed.x) = &sead__SafeStringBase__vtable;
      LODWORD(speed.y) = "W5M0";
      (*(void (__fastcall **)(_DWORD *))(*v179 + 12))(v179);
      (*(void (__fastcall **)(_DWORD *))(*v179 + 12))(v179);
      v203 = v179[1];
      (*(void (__fastcall **)(Vec3 *))(LODWORD(speed.x) + 12))(&speed);
      if ( v203 == LODWORD(speed.y) )
        goto LABEL_344;
      v204 = v179[1];
      for ( j = 1; *(unsigned __int8 *)(v204 + j - 1) == *(unsigned __int8 *)(LODWORD(speed.y) + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(v204 + j - 1) )
          goto LABEL_344;
        if ( j >= 524289 || *(unsigned __int8 *)(v204 + j) != *(unsigned __int8 *)(LODWORD(speed.y) + j) )
          break;
        if ( !*(_BYTE *)(v204 + j) )
          goto LABEL_344;
      }
      v218 = 0;
      v219 = sub_601DFFE4(a1 + 404);
      LOBYTE(speed.x) = 0;
      v209 = sub_60178694(v219, 0) == 0;
      v220 = 0;
      if ( !v209 )
      {
        v220 = 1;
        LOBYTE(speed.x) = 1;
      }
      v256 = v220;
      BYTE1(speed.x) = 0;
      v221 = 0;
      if ( sub_60178694(v219, 1u) )
      {
        BYTE1(speed.x) = 1;
        v218 = 1;
      }
      BYTE2(speed.x) = 0;
      v209 = sub_60178694(v219, 2u) == 0;
      v222 = 0;
      if ( !v209 )
      {
        v222 = 1;
        BYTE2(speed.x) = 1;
      }
      v254 = v222;
      HIBYTE(speed.x) = 0;
      v223 = 0;
      if ( sub_60178694(v219, 3u) )
      {
        v221 = 1;
        HIBYTE(speed.x) = 1;
      }
      LOBYTE(speed.y) = 0;
      v224 = 0;
      if ( sub_60178694(v219, 4u) )
      {
        v224 = 1;
        LOBYTE(speed.y) = 1;
      }
      BYTE1(speed.y) = 0;
      v225 = sub_60178694(v219, 5u);
      p_speed = &speed;
      if ( v225 )
      {
        v223 = 1;
        BYTE1(speed.y) = 1;
      }
      v227 = FIELD_U32(a1, 432);
      if ( v227 < 6 )
        p_speed = (Vec3 *)((char *)&speed + v227);
      if ( LOBYTE(FIELD_F32(p_speed, 0x0)) )
      {
        v228 = FIELD_U32(a1, 432);
        goto LABEL_433;
      }
      if ( v227 == 1 )
        goto LABEL_418;
      v239 = 0;
      if ( v256 )
        goto LABEL_432;
      if ( !v227 )
        goto LABEL_425;
LABEL_418:
      v239 = 1;
      if ( v218 )
        goto LABEL_432;
      if ( v227 == 3 )
        goto LABEL_427;
LABEL_425:
      v239 = 2;
      if ( v254 )
        goto LABEL_432;
      if ( v227 == 2 )
        goto LABEL_429;
LABEL_427:
      v239 = 3;
      if ( v221 )
        goto LABEL_432;
      if ( v227 == 5 )
        goto LABEL_431;
LABEL_429:
      v239 = 4;
      if ( v224 )
        goto LABEL_432;
      v228 = 4;
      if ( v227 != 4 )
      {
LABEL_431:
        v239 = 5;
        v228 = FIELD_U32(a1, 432);
        if ( v223 )
        {
LABEL_432:
          v228 = v239;
          FIELD_U32(a1, 432) = v239;
        }
      }
LABEL_433:
      v244 = (_DWORD *)sub_60178694(v219, v228);
      FIELD_U32(a1, 416) = v244[21];
      FIELD_U32(a1, 420) = v244[22];
      FIELD_U32(a1, 424) = v244[24];
      v245 = (_DWORD *)sub_601E0040(a1 + 416);
      FIELD_U32(a1, 360) = *v245;
      FIELD_U32(a1, 364) = v245[1];
      FIELD_U32(a1, 368) = v245[2];
      v246 = FIELD_U32(a1, 432);
      if ( v246 >= 6 )
        v246 = 0;
      v247 = *(_DWORD *)(v219 + 4 * v246 + 48);
      FIELD_U32(a1, 376) = v247;
      if ( v247 != 7 )
      {
        v201 = a1 + 80;
        v202 = a1 + 360;
        goto LABEL_335;
      }
      v248 = (float *)sub_601CF9C0(dword_60C8AEF0);
      v249 = FIELD_F32(a1, 84);
      v250 = v248[21];
      v251 = v248[22];
      v252 = FIELD_F32(a1, 88);
      speed.x = v248[20] - FIELD_F32(a1, 80);
      speed.y = v250 - v249;
      speed.z = v251 - v252;
      ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
        a1,
        a1 + 360,
        0,
        20,
        10.0,
        2.3,
        2.3,
        30,
        &speed);
      SE_PLY_ref(dword_60C8B13C, 1, 2, 1, FIELD_F32(a1, 200));
      if ( sub_60235E50(a1 + 448) == 1 )
        EffectData_init((EffectData *)(a1 + 448));
      return;
    case 273:
      if ( FIELD_U32(a1, 376) == 7 )
      {
        if ( sub_601860F8(a1) == 1 )
        {
          SE_PLY_ref(dword_60C8B13C, 8, 2, 1, FIELD_F32(a1, 200));
          v159 = FIELD_F32(a1, 84);
          v160 = FIELD_F32(a1, 88);
          speed.x = FIELD_F32(a1, 80);
          speed.y = v159;
          speed.z = v160;
          v260[0].x = 1.0;
          v260[0].y = 1.0;
          v260[0].z = 1.0;
          EffectData_create(889, &speed, 0, (int)v260);
          FIELD_U32(a1, 376) = 3;
          if ( FIELD_U32(a1, 272) != 2 )
          {
            FIELD_U32(a1, 272) = 2;
            (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              2,
              4.0,
              5.0,
              0.0);
          }
        }
      }
      else
      {
        v183 = FIELD_U32(a1, 180);
        if ( v183 != FIELD_U32(a1, 428) )
        {
          speed.x = 6.4623e-27;
          moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
          v183 = FIELD_U32(a1, 180);
        }
        FIELD_U32(a1, 192) = v183;
        FIELD_U32(a1, 200) = 1084227584;
        ((void (__fastcall *)(int))loc_60168DF8)(a1);
        sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
      }
      if ( sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360)) != 1 )
        return;
      sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
      FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
      FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
      FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
      v184 = (_DWORD *)sub_601E0010(a1 + 416);
      LODWORD(speed.x) = &sead__SafeStringBase__vtable;
      LODWORD(speed.y) = "Fsdw";
      (*(void (__fastcall **)(_DWORD *))(*v184 + 12))(v184);
      (*(void (__fastcall **)(_DWORD *))(*v184 + 12))(v184);
      v185 = v184[1];
      (*(void (__fastcall **)(Vec3 *))(LODWORD(speed.x) + 12))(&speed);
      if ( v185 == LODWORD(speed.y) )
        goto LABEL_344;
      v186 = v184[1];
      v187 = 1;
      while ( *(unsigned __int8 *)(v186 + v187 - 1) == *(unsigned __int8 *)(LODWORD(speed.y) + v187 - 1) )
      {
        if ( !*(_BYTE *)(v186 + v187 - 1) )
          goto LABEL_344;
        if ( v187 < 524289 && *(unsigned __int8 *)(v186 + v187) == *(unsigned __int8 *)(LODWORD(speed.y) + v187) )
        {
          if ( *(_BYTE *)(v186 + v187) )
          {
            v187 += 2;
            continue;
          }
LABEL_344:
          EffectData_init((EffectData *)(a1 + 448));
LABEL_345:
          if ( FIELD_U32(a1, 272) )
          {
            FIELD_U32(a1, 272) = 0;
LABEL_347:
            (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
              *(_DWORD *)(FIELD_U32(a1, 268) + 4),
              0,
              1.2,
              5.0,
              0.0);
          }
          goto LABEL_348;
        }
        break;
      }
      v206 = 0;
      v207 = sub_601DFFE4(a1 + 404);
      LOBYTE(speed.x) = 0;
      v209 = sub_60178694(v207, 0) == 0;
      v208 = 0;
      if ( !v209 )
      {
        v208 = 1;
        LOBYTE(speed.x) = 1;
      }
      v255 = v208;
      BYTE1(speed.x) = 0;
      v209 = sub_60178694(v207, 1u) == 0;
      if ( !v209 )
        BYTE1(speed.x) = 1;
      v210 = 0;
      if ( !v209 )
        v206 = 1;
      BYTE2(speed.x) = 0;
      v209 = sub_60178694(v207, 2u) == 0;
      v211 = 0;
      if ( !v209 )
      {
        v211 = 1;
        BYTE2(speed.x) = 1;
      }
      v253 = v211;
      HIBYTE(speed.x) = 0;
      v212 = 0;
      if ( sub_60178694(v207, 3u) )
      {
        v210 = 1;
        HIBYTE(speed.x) = 1;
      }
      LOBYTE(speed.y) = 0;
      v213 = 0;
      if ( sub_60178694(v207, 4u) )
      {
        v213 = 1;
        LOBYTE(speed.y) = 1;
      }
      BYTE1(speed.y) = 0;
      v214 = sub_60178694(v207, 5u);
      v215 = &speed;
      if ( v214 )
      {
        v212 = 1;
        BYTE1(speed.y) = 1;
      }
      v216 = FIELD_U32(a1, 432);
      if ( v216 < 6 )
        v215 = (Vec3 *)((char *)&speed + v216);
      if ( LOBYTE(FIELD_F32(v215, 0x0)) )
      {
        v217 = FIELD_U32(a1, 432);
        goto LABEL_412;
      }
      if ( v216 == 1 )
        goto LABEL_394;
      v229 = 0;
      if ( v255 )
        goto LABEL_411;
      if ( !v216 )
        goto LABEL_404;
LABEL_394:
      v229 = 1;
      if ( v206 )
        goto LABEL_411;
      if ( v216 == 3 )
        goto LABEL_406;
LABEL_404:
      v229 = 2;
      if ( v253 )
        goto LABEL_411;
      if ( v216 == 2 )
        goto LABEL_408;
LABEL_406:
      v229 = 3;
      if ( v210 )
        goto LABEL_411;
      if ( v216 == 5 )
        goto LABEL_410;
LABEL_408:
      v229 = 4;
      if ( v213 )
        goto LABEL_411;
      v217 = 4;
      if ( v216 != 4 )
      {
LABEL_410:
        v229 = 5;
        v217 = FIELD_U32(a1, 432);
        if ( v212 )
        {
LABEL_411:
          v217 = v229;
          FIELD_U32(a1, 432) = v229;
        }
      }
LABEL_412:
      v230 = (_DWORD *)sub_60178694(v207, v217);
      FIELD_U32(a1, 416) = v230[21];
      FIELD_U32(a1, 420) = v230[22];
      FIELD_U32(a1, 424) = v230[24];
      v231 = (_DWORD *)sub_601E0040(a1 + 416);
      FIELD_U32(a1, 360) = *v231;
      FIELD_U32(a1, 364) = v231[1];
      FIELD_U32(a1, 368) = v231[2];
      v232 = FIELD_U32(a1, 432);
      if ( v232 >= 6 )
        v232 = 0;
      v233 = *(_DWORD *)(v207 + 4 * v232 + 48);
      FIELD_U32(a1, 376) = v233;
      if ( v233 == 7 )
      {
        v234 = (float *)sub_601CF9C0(dword_60C8AEF0);
        v235 = FIELD_F32(a1, 84);
        v236 = v234[21];
        v237 = v234[22];
        v238 = FIELD_F32(a1, 88);
        speed.x = v234[20] - FIELD_F32(a1, 80);
        speed.y = v236 - v235;
        speed.z = v237 - v238;
        ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
          a1,
          a1 + 360,
          0,
          20,
          10.0,
          2.3,
          2.3,
          30,
          &speed);
        SE_PLY_ref(dword_60C8B13C, 1, 2, 1, FIELD_F32(a1, 200));
        return;
      }
      v201 = a1 + 80;
      v202 = a1 + 360;
      goto LABEL_335;
    case 275:
      v161 = FIELD_U32(a1, 180);
      if ( v161 != FIELD_U32(a1, 428) )
      {
        speed.x = 6.4623e-27;
        moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
        v161 = FIELD_U32(a1, 180);
      }
      FIELD_U32(a1, 192) = v161;
      FIELD_U32(a1, 200) = 1084227584;
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
      if ( sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360)) != 1 )
        return;
      sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
      FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
      FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
      FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
      v162 = (_DWORD *)sub_601E0010(a1 + 404);
      (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
      (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
      v163 = (char *)v162[1];
      if ( v163 == "W2M0" )
        goto LABEL_330;
      v164 = 0;
      break;
    case 278:
      if ( FIELD_U32(dword_60CC6D78, 412) != 4 )
        goto LABEL_348;
LABEL_181:
      speed.x = 6.4623e-27;
      moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
      if ( FIELD_U32(a1, 180) != FIELD_U32(a1, 428) )
        return;
      goto LABEL_348;
    case 280:
      v169 = FIELD_U32(a1, 180);
      if ( v169 != FIELD_U32(a1, 428) )
      {
        speed.x = 6.4623e-27;
        moveValueTo((int *)(a1 + 180), (int *)(a1 + 428), (int *)&speed);
        v169 = FIELD_U32(a1, 180);
      }
      FIELD_U32(a1, 192) = v169;
      FIELD_U32(a1, 200) = 1084227584;
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      v170 = a1 + 360;
      sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
      if ( sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360)) == 1 )
      {
        sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
        FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
        FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
        FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
        v171 = sub_601DFFE4(a1 + 404);
        v172 = (_DWORD *)sub_60178694(v171, FIELD_U32(a1, 432));
        FIELD_U32(a1, 416) = v172[21];
        FIELD_U32(a1, 420) = v172[22];
        FIELD_U32(a1, 424) = v172[24];
        v173 = (_DWORD *)sub_601E0040(a1 + 416);
        FIELD_U32(a1, 360) = *v173;
        FIELD_U32(a1, 364) = v173[1];
        FIELD_U32(a1, 368) = v173[2];
LABEL_334:
        v201 = a1 + 80;
        v202 = v170;
        goto LABEL_335;
      }
      v188 = (_DWORD *)sub_601E0010(a1 + 416);
      (*(void (__fastcall **)(_DWORD *))(*v188 + 12))(v188);
      (*(void (__fastcall **)(_DWORD *))(*v188 + 12))(v188);
      v189 = (char *)v188[1];
      if ( v189 != "Fd01" )
      {
        v190 = 0;
        while ( 1 )
        {
          if ( v189[v190] != aFd01[v190] )
            return;
          if ( !v189[v190] )
            break;
          if ( ++v190 >= 524289 )
            return;
        }
      }
      v196 = FIELD_F32(a1, 80) - FIELD_F32(a1, 360);
      if ( (float)((float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 368))
                         * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 368)))
                 + (float)(v196 * v196)) < 6400.0 )
      {
        if ( FIELD_U32(a1, 272) != 5 )
        {
          FIELD_U32(a1, 272) = 5;
          (*(void (__fastcall **)(float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(1.0, 10.0, 0.0);
        }
        goto LABEL_330;
      }
      return;
    case 281:
      if ( sub_601860F8(a1) != 1 )
        return;
      SE_PLY_ref(dword_60C8B13C, 8, 2, 1, FIELD_F32(a1, 200));
      if ( FIELD_U32(a1, 272) )
      {
        FIELD_U32(a1, 272) = 0;
        (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 84))(
          *(_DWORD *)(FIELD_U32(a1, 268) + 4),
          0,
          1.2,
          5.0,
          0.0);
      }
LABEL_271:
      v174 = FIELD_F32(a1, 80);
      v175 = FIELD_F32(a1, 84);
      speed.z = FIELD_F32(a1, 88);
      speed.y = v175;
      speed.x = v174;
      v260[0].x = 1.0;
      v260[0].y = 1.0;
      v260[0].z = 1.0;
      EffectData_create(889, &speed, 0, (int)v260);
      goto LABEL_348;
    case 282:
      v139 = FIELD_F32(a1, 316) - FIELD_F32(a1, 84);
      v140 = FIELD_F32(a1, 312) - FIELD_F32(a1, 80);
      v141 = FIELD_F32(a1, 320) - FIELD_F32(a1, 88);
      v142 = sqrtf((float)((float)(v139 * v139) + (float)(v140 * v140)) + (float)(v141 * v141));
      v143 = 4.5;
      if ( v142 > 4.5 )
      {
LABEL_273:
        v176 = 1.0 / v142;
        FIELD_F32(a1, 80) = FIELD_F32(a1, 80) + (float)((float)(v140 * v176) * v143);
        FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + (float)((float)(v139 * v176) * v143);
        FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)((float)(v141 * v176) * v143);
        return;
      }
      v191 = FIELD_U32(a1, 316);
      v192 = FIELD_U32(a1, 320);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 312);
      FIELD_U32(a1, 84) = v191;
      FIELD_U32(a1, 88) = v192;
      FIELD_U32(a1, 128) = 1036831949;
      FIELD_U32(a1, 132) = 1036831949;
      FIELD_U32(a1, 136) = 1036831949;
      goto LABEL_348;
    default:
      goto LABEL_348;
  }
  do
  {
    if ( v163[v164] != aW2m0[v164] )
      break;
    if ( !v163[v164] )
      goto LABEL_330;
    ++v164;
  }
  while ( v164 < 524289 );
  (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
  (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
  v165 = (char *)v162[1];
  if ( v165 == "W5M0" )
  {
LABEL_330:
    EffectData_init((EffectData *)(a1 + 448));
LABEL_348:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return;
  }
  for ( k = 0; k < 524289; ++k )
  {
    if ( v165[k] != aW5m0[k] )
      break;
    if ( !v165[k] )
      goto LABEL_330;
  }
  if ( FIELD_U32(dword_60CC6D78, 412) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
    (*(void (__fastcall **)(_DWORD *))(*v162 + 12))(v162);
    v167 = (char *)v162[1];
    if ( v167 == "Fsdw" )
    {
LABEL_421:
      v240 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
      sub_601B5110(v240, 2, 0, 0);
    }
    else
    {
      for ( m = 0; m < 524289; ++m )
      {
        if ( v167[m] != aFsdw[m] )
          break;
        if ( !v167[m] )
          goto LABEL_421;
      }
    }
  }
  v241 = sub_601DFFE4(a1 + 404);
  v242 = (_DWORD *)sub_60178694(v241, FIELD_U32(a1, 432));
  FIELD_U32(a1, 416) = v242[21];
  FIELD_U32(a1, 420) = v242[22];
  FIELD_U32(a1, 424) = v242[24];
  v243 = (_DWORD *)sub_601E0040(a1 + 416);
  FIELD_U32(a1, 360) = *v243;
  FIELD_U32(a1, 364) = v243[1];
  v202 = a1 + 360;
  FIELD_U32(a1, 368) = v243[2];
  v201 = a1 + 80;
LABEL_335:
  FIELD_U32(a1, 428) = sub_608332B0(v201, v202);
}
