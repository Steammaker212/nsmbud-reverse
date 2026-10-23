/* sub_608A56E8
 * address: 0x608A56E8   size: 8484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608A56E8(int a1, float32x4_t *a2)
{
  int32x2_t v2; // d8
  float32x4_t *v3; // r5
  unsigned __int32 v4; // r8
  int v5; // r10
  unsigned __int32 v6; // lr
  float v7; // s16
  int v8; // r6
  float v9; // s20
  int v10; // r7
  int v11; // r1
  int v12; // r2
  int v13; // r0
  unsigned int v14; // r12
  float32x4_t v15; // q0
  float v16; // s18
  int v17; // r3
  int v18; // r1
  int v19; // r3
  bool v20; // cc
  int v21; // r4
  unsigned __int32 v22; // r9
  signed __int32 v23; // r6
  signed __int32 v24; // r1
  signed __int32 v25; // r0
  int v26; // r3
  signed __int32 v27; // r12
  signed __int32 v28; // r0
  signed __int32 v29; // r9
  int v30; // r3
  float v31; // s19
  float32x4_t v32; // q6
  unsigned __int32 v33; // r10
  unsigned __int32 v34; // r7
  unsigned __int32 v35; // r2
  int v36; // r3
  unsigned int *v37; // r5
  unsigned __int32 *v38; // r9
  unsigned __int32 *v39; // r8
  float32x4_t v40; // q2
  float32x4_t v41; // q1
  float32x4_t v42; // q5
  float32x4_t v43; // q3
  int v44; // r4
  unsigned __int32 *v45; // r7
  unsigned int *v46; // r4
  unsigned __int32 *v47; // r1
  float32x4_t v48; // q1
  float32x4_t v49; // q2
  float32x4_t v50; // q5
  float32x4_t v51; // q3
  signed __int32 v52; // r2
  int v53; // r3
  int v54; // r1
  unsigned int v55; // r6
  int v56; // r2
  int v57; // r1
  float v58; // s4
  float v59; // s0
  __int64 *v60; // r1
  float v61; // s1
  __int64 v62; // d17
  __int64 *v63; // r0
  __int64 v64; // d17
  float32x2_t v65; // d2
  float32x2_t v66; // d3
  signed __int32 v67; // r0
  int v68; // r0
  int v69; // r0
  unsigned __int32 *v70; // r1
  unsigned __int32 *v71; // r0
  unsigned int *v72; // r2
  float32x4_t v73; // q2
  float32x4_t v74; // q3
  float32x4_t v75; // q5
  float32x4_t v76; // q7
  float32x4_t v77; // q11
  float32x4_t v78; // q8
  float32x4_t v79; // q9
  float32x4_t *v80; // r1
  unsigned __int32 *v81; // r4
  int v82; // r5
  unsigned int *v83; // r3
  unsigned __int32 *v84; // r7
  float32x4_t v85; // q3
  float32x4_t v86; // q1
  float32x4_t v87; // q2
  float32x4_t v88; // q5
  int v89; // r3
  int v90; // r2
  int v91; // r1
  int v92; // r1
  float v93; // s4
  float v94; // s0
  __int64 *v95; // r1
  float v96; // s1
  __int64 v97; // d17
  __int64 *v98; // r0
  __int64 v99; // d17
  float32x4_t v100; // q8
  float32x4_t v101; // q5
  int v102; // r1
  float32x4_t *v103; // r1
  float32x4_t v104; // q8
  unsigned __int32 *v105; // r1
  unsigned __int32 *v106; // r0
  unsigned int *v107; // r2
  float32x4_t v108; // q2
  float32x4_t v109; // q3
  float32x4_t v110; // q5
  float32x4_t v111; // q7
  unsigned __int32 v112; // d17.s[0]
  unsigned __int64 v113; // d16
  unsigned __int32 v114; // d17.s[0]
  unsigned __int32 *v115; // r2
  unsigned __int32 *v116; // r1
  unsigned int *v117; // r3
  float32x4_t v118; // q1
  float32x4_t v119; // q7
  float32x4_t v120; // q2
  float32x4_t v121; // q3
  float32x4_t v122; // q11
  float32x4_t v123; // q8
  float32x4_t v124; // q10
  float32x4_t v125; // q9
  unsigned __int32 v126; // d17.s[0]
  unsigned __int64 v127; // d16
  unsigned __int32 v128; // d17.s[0]
  float v129; // s0
  float v130; // s18
  int v131; // r8
  int v132; // r6
  float32x4_t v133; // q5
  float32x4_t v134; // q7
  int v135; // d17.s[0]
  int v136; // d17.s[0]
  float32x4_t v137; // q10
  int v138; // r0
  bool v139; // nf
  bool v140; // vf
  unsigned __int64 v141; // d2
  unsigned __int64 v142; // d3
  int v143; // r7
  float v144; // s22
  signed __int32 v145; // r3
  signed __int32 v146; // r6
  signed __int32 v147; // r8
  int v148; // r0
  unsigned __int32 v149; // r12
  unsigned __int32 v150; // r4
  unsigned __int32 v151; // r1
  int v152; // r0
  unsigned __int32 *v153; // r10
  unsigned __int32 *v154; // r9
  unsigned __int32 *v155; // lr
  float32x4_t v156; // q1
  float32x4_t v157; // q2
  float32x4_t v158; // q3
  float32x4_t v159; // q7
  int v160; // r2
  unsigned __int32 *v161; // r5
  unsigned __int32 *v162; // r2
  unsigned __int32 *v163; // r1
  float32x4_t v164; // q1
  float32x4_t v165; // q2
  float32x4_t v166; // q7
  float32x4_t v167; // q3
  int v168; // r2
  int v169; // r0
  unsigned __int64 v170; // d1
  int v171; // r0
  float v172; // s4
  float v173; // s0
  __int64 *v174; // r0
  float v175; // s1
  __int64 v176; // d17
  __int64 *v177; // r0
  __int64 v178; // d17
  float v179; // s21
  _DWORD *v180; // r0
  signed __int32 v181; // r3
  int v182; // r0
  int v183; // r10
  int v184; // r12
  unsigned __int32 *v185; // r1
  unsigned __int32 *v186; // r0
  unsigned __int32 *v187; // r2
  float32x4_t v188; // q1
  float32x4_t v189; // q2
  float32x4_t v190; // q7
  float32x4_t v191; // q3
  signed __int32 v192; // lr
  int v193; // r1
  unsigned __int32 v194; // r1
  unsigned __int32 v195; // r3
  unsigned __int32 v196; // r7
  int v197; // r2
  unsigned __int32 *v198; // r5
  unsigned __int32 *v199; // r4
  unsigned __int32 *v200; // r6
  float32x4_t v201; // q1
  float32x4_t v202; // q2
  float32x4_t v203; // q7
  float32x4_t v204; // q3
  signed __int32 v205; // r0
  int v206; // r1
  unsigned __int32 *v207; // r2
  unsigned __int32 *v208; // r1
  unsigned __int32 *v209; // r0
  float32x4_t v210; // q1
  float32x4_t v211; // q2
  float32x4_t v212; // q7
  float32x4_t v213; // q3
  signed __int32 v214; // lr
  signed __int32 v215; // r0
  int v216; // r1
  unsigned __int32 v217; // r7
  unsigned __int32 v218; // r6
  unsigned __int32 v219; // r2
  unsigned __int32 v220; // r12
  unsigned __int32 *v221; // r1
  unsigned __int32 *v222; // r4
  unsigned __int32 *v223; // r5
  int v224; // r3
  float32x4_t v225; // q1
  float32x4_t v226; // q2
  float32x4_t v227; // q7
  float32x4_t v228; // q3
  float32x4_t v229; // q8
  int v230; // r0
  unsigned __int32 *v231; // r7
  unsigned __int32 *v232; // r3
  unsigned __int32 *v233; // r0
  float32x4_t v234; // q1
  float32x4_t v235; // q2
  float32x4_t v236; // q7
  float32x4_t v237; // q3
  float32x4_t v238; // q9
  float32x4_t v239; // q10
  float32x4_t v240; // q11
  float32x4_t v241; // q10
  float32x4_t v242; // q9
  float32x4_t v243; // q8
  int v244; // r1
  float32x4_t v245; // q8
  unsigned __int32 *v246; // r1
  unsigned __int32 *v247; // r2
  unsigned __int32 *v248; // r0
  float32x4_t v249; // q1
  float32x4_t v250; // q2
  float32x4_t v251; // q7
  float32x4_t v252; // q3
  int v253; // r1
  unsigned __int32 v254; // d17.s[0]
  int v255; // r2
  unsigned __int64 v256; // d16
  unsigned __int32 v257; // d17.s[0]
  int v258; // r2
  int v259; // r0
  int v260; // r7
  int v261; // r6
  float32x4_t v262; // q6
  int v263; // r10
  float32x4_t v264; // q7
  int v265; // d17.s[0]
  float32x4_t v266; // q10
  int v267; // d17.s[0]
  int v268; // r0
  signed __int32 v269; // r5
  float32x4_t *v270; // r6
  int v271; // r10
  signed __int32 v272; // r0
  int v273; // r1
  int v274; // r3
  unsigned __int64 v275; // d11
  unsigned __int64 v276; // d10
  int v277; // r0
  float v278; // s4
  float v279; // s0
  __int64 *v280; // r0
  float v281; // s1
  __int64 v282; // d17
  __int64 *v283; // r0
  __int64 v284; // d17
  float32x2_t v285; // d2
  float32x2_t v286; // d3
  float32x4_t v287; // q0
  __int32 v288; // r7
  int v289; // r0
  __int32 v290; // lr
  __int32 v291; // r3
  __int32 v292; // r12
  int v293; // r0
  unsigned int *v294; // r1
  unsigned __int32 *v295; // r4
  unsigned __int32 *v296; // r6
  float32x4_t v297; // q3
  float32x4_t v298; // q2
  float32x4_t v299; // q7
  float32x4_t v300; // q6
  float32x4_t *v301; // r5
  float32x4_t v302; // q8
  int v303; // r6
  int v304; // r1
  int v305; // r6
  int v306; // r1
  unsigned int *v307; // r3
  unsigned __int32 *v308; // r2
  unsigned __int32 *v309; // r1
  float32x4_t v310; // q2
  float32x4_t v311; // q3
  float32x4_t v312; // q7
  float32x4_t v313; // q6
  int v314; // r6
  int v315; // r7
  int v316; // r1
  int v317; // r0
  int v318; // r2
  _DWORD *v319; // r3
  float32x4_t v320; // q9
  unsigned int *v321; // r3
  unsigned __int32 *v322; // r2
  unsigned __int32 *v323; // r1
  float32x4_t v324; // q2
  float32x4_t v325; // q3
  float32x4_t v326; // q7
  float32x4_t v327; // q6
  int v328; // r0
  float *v329; // r1
  float v330; // s0
  float v331; // s4
  int v332; // [sp+10h] [bp-168h]
  float v333; // [sp+14h] [bp-164h]
  int v334; // [sp+18h] [bp-160h]
  int v335; // [sp+20h] [bp-158h]
  int v336; // [sp+24h] [bp-154h]
  int v337; // [sp+28h] [bp-150h]
  int v338; // [sp+2Ch] [bp-14Ch]
  float32x4_t v339; // [sp+30h] [bp-148h]
  int v340; // [sp+4Ch] [bp-12Ch]
  int v341; // [sp+50h] [bp-128h]
  unsigned __int32 v342; // [sp+54h] [bp-124h]
  int v343; // [sp+58h] [bp-120h]
  float32x4_t *v344; // [sp+5Ch] [bp-11Ch]
  float32x4_t *v345; // [sp+60h] [bp-118h]
  _DWORD *v346; // [sp+64h] [bp-114h]
  float32x4_t *v347; // [sp+68h] [bp-110h]
  int v348; // [sp+6Ch] [bp-10Ch]
  float32x4_t *v349; // [sp+70h] [bp-108h]
  float32x4_t *v350; // [sp+74h] [bp-104h]
  signed __int32 v351; // [sp+78h] [bp-100h]
  int v352; // [sp+78h] [bp-100h]
  int v353; // [sp+7Ch] [bp-FCh]
  unsigned __int64 v354; // [sp+80h] [bp-F8h]
  unsigned __int64 v355; // [sp+88h] [bp-F0h]
  float32x4_t v356; // [sp+90h] [bp-E8h] BYREF
  float32x4_t v357; // [sp+A0h] [bp-D8h] BYREF
  float32x4_t v358; // [sp+B0h] [bp-C8h] BYREF
  float32x4_t v359; // [sp+C0h] [bp-B8h] BYREF
  float32x4_t v360; // [sp+D0h] [bp-A8h] BYREF
  _DWORD *v361; // [sp+E8h] [bp-90h] BYREF
  int v362; // [sp+ECh] [bp-8Ch] BYREF
  __int64 v363; // [sp+F0h] [bp-88h]
  __int64 v364; // [sp+F8h] [bp-80h]
  __int64 v365; // [sp+100h] [bp-78h] BYREF
  __int64 v366; // [sp+108h] [bp-70h]
  float32x4_t v367; // 0:q6.16

  v3 = a2;
  v4 = a2[45].n128_u32[3];
  v346 = *(_DWORD **)(a2[21].n128_u32[3] + 580);
  FIELD_U32(v4, 36) = 0;
  if ( a2[90].n128_u32[0] )
  {
    v362 = 0;
    v361 = 0;
    sub_6089098C(FIELD_U32(a1, 20), (unsigned int *)&v361, &v362, a2, 1, 0);
    if ( v362 )
    {
      v5 = sub_608966DC((int)&v3[86], FIELD_U32(v4, 40));
      v6 = v3[21].n128_u32[3];
      v7 = 1.0;
      v8 = v362;
      v9 = 1.0;
      v10 = v346[4];
      v11 = FIELD_U32(v6, 12);
      v12 = v346[5];
      v13 = v362;
      v14 = v12 - 1;
      v15.n128_u32[0] = v10 + 1;
      v338 = v10 + 1;
      if ( (unsigned int)(v12 - 1) < 2 )
        v13 = v362 + 1;
      v16 = (float)v15.n128_i32[0];
      v17 = FIELD_U8(v11, 1884);
      v18 = FIELD_U8(v11, 1878);
      if ( v17 )
        v9 = v3[7].n128_f32[0];
      if ( v18 )
      {
        v15.n128_u32[0] = v3[6].n128_u32[3];
        v9 = v9 * v15.n128_f32[0];
      }
      v19 = v346[5];
      if ( v12 != 1 )
        LOBYTE(v19) = 0;
      if ( v10 || v13 < 2 || ((unsigned __int8)v19 & (v362 < 2)) == 1 )
      {
        v20 = v10 < 1;
        if ( v10 >= 1 )
          v20 = v362 < 3;
        if ( v20 )
          goto LABEL_232;
      }
      v21 = 0;
      v22 = v4;
      v349 = v3;
      v332 = v346[5];
      v334 = v362;
      v353 = v346[4];
      v359 = 0u;
      memset(&v360, 0, sizeof(v360));
      memset(&v358, 0, sizeof(v358));
      memset(&v357, 0, sizeof(v357));
      memset(&v356, 0, sizeof(v356));
      v335 = v13 + (v13 - 1) * v10;
      v341 = v362 - 1;
      v342 = v4;
      v343 = v5;
      v333 = v9;
      if ( v12 == 1 )
      {
        v23 = v3[2].n128_i32[2];
        v24 = v361[1];
        v25 = v361[2 * v362 - 1];
        if ( v23 >= v25 )
        {
          v26 = v3[18].n128_u32[1] + 16 * v25;
          if ( v26 )
          {
            v15.n128_u64[0] = *(_QWORD *)v26;
            v15.n128_u64[1] = FIELD_U32(v26, 8);
          }
        }
        v351 = v361[3];
        v33 = v3[20].n128_u32[1];
        v34 = v3[20].n128_u32[2];
        v35 = v3[20].n128_u32[3];
        v36 = *(unsigned __int8 *)(v3[8].n128_u32[2] + 1875);
        v37 = (unsigned int *)(v35 + 16 * v25);
        v38 = (unsigned __int32 *)(v34 + 16 * v25);
        v39 = (unsigned __int32 *)(v33 + 16 * v25);
        if ( v36 == 2 )
        {
          v43.n128_u32[1] = *v38;
          v42.n128_u32[1] = v38[1];
          v40.n128_u32[1] = v38[2];
          v41 = v349[37];
          v41.n128_u32[3] = 0;
          v43.n128_u32[0] = *v39;
          v42.n128_u32[0] = v39[1];
          v40.n128_u32[0] = v39[2];
          v43.n128_u64[1] = *v37;
          v40.n128_u64[1] = v37[2];
          v42.n128_u64[1] = v37[1];
        }
        else if ( v36 )
        {
          v43.n128_u64[1] = *v37;
          v42.n128_u32[1] = v38[1];
          v40.n128_u32[1] = v38[2];
          v41.n128_u32[1] = v38[3];
          v43.n128_u32[1] = *v38;
          v42.n128_u32[0] = v39[1];
          v40.n128_u32[0] = v39[2];
          v41.n128_u32[0] = v39[3];
          v43.n128_u32[0] = *v39;
          v41.n128_u64[1] = v37[3];
          v40.n128_u64[1] = v37[2];
          v42.n128_u64[1] = v37[1];
        }
        else
        {
          v40 = v349[36];
          v41 = v349[37];
          v42 = v349[35];
          v43 = v349[34];
        }
        v360 = vaddq_f32(
                 v41,
                 vmlaq_lane_f32(
                   vmlaq_lane_f32(
                     vmulq_lane_f32(v42, (float32x2_t)v15.n128_u64[0], 1),
                     v43,
                     (float32x2_t)v15.n128_u64[0],
                     0),
                   v40,
                   *(float32x2_t *)&v15.n128_i8[8],
                   0));
        if ( v23 >= v24 )
        {
          v44 = v349[18].n128_u32[1] + 16 * v24;
          if ( v44 )
          {
            v15.n128_u64[0] = *(_QWORD *)v44;
            v15.n128_u64[1] = FIELD_U32(v44, 8);
          }
        }
        v45 = (unsigned __int32 *)(v34 + 16 * v24);
        v46 = (unsigned int *)(v35 + 16 * v24);
        v47 = (unsigned __int32 *)(v33 + 16 * v24);
        if ( v36 == 2 )
        {
          v51.n128_u32[1] = *v45;
          v50.n128_u32[1] = v45[1];
          v49.n128_u32[1] = v45[2];
          v48 = v349[37];
          v48.n128_u32[3] = 0;
          v51.n128_u32[0] = *v47;
          v50.n128_u32[0] = v47[1];
          v49.n128_u32[0] = v47[2];
          v51.n128_u64[1] = *v46;
          v49.n128_u64[1] = v46[2];
          v50.n128_u64[1] = v46[1];
        }
        else if ( v36 )
        {
          v51.n128_u64[1] = *v46;
          v50.n128_u32[1] = v45[1];
          v49.n128_u32[1] = v45[2];
          v48.n128_u32[1] = v45[3];
          v51.n128_u32[1] = *v45;
          v50.n128_u32[0] = v47[1];
          v49.n128_u32[0] = v47[2];
          v48.n128_u32[0] = v47[3];
          v51.n128_u32[0] = *v47;
          v48.n128_u64[1] = v46[3];
          v49.n128_u64[1] = v46[2];
          v50.n128_u64[1] = v46[1];
        }
        else
        {
          v48 = v349[37];
          v49 = v349[36];
          v50 = v349[35];
          v51 = v349[34];
        }
        v5 = v343;
        v358 = vaddq_f32(
                 v48,
                 vmlaq_lane_f32(
                   vmlaq_lane_f32(
                     vmulq_lane_f32(v50, (float32x2_t)v15.n128_u64[0], 1),
                     v51,
                     (float32x2_t)v15.n128_u64[0],
                     0),
                   v49,
                   *(float32x2_t *)&v15.n128_i8[8],
                   0));
        if ( (unsigned int)(*v346 - 1) > 1 )
        {
          v55 = v14;
          v32 = 0u;
        }
        else
        {
          if ( !v36 )
          {
            v3 = v349;
            v55 = v14;
            v32 = v349[35];
            goto LABEL_46;
          }
          v32.n128_u32[3] = 0;
          v52 = v23;
          v53 = (int)(v37 + 1);
          v54 = (int)(v39 + 1);
          v55 = v14;
          v20 = v52 < v25;
          v56 = (int)(v38 + 1);
          if ( v20 )
          {
            v53 = 4;
            v56 = 4;
            v54 = 4;
          }
          v32.n128_u32[2] = *(_DWORD *)v53;
          v32.n128_u32[1] = *(_DWORD *)v56;
          v32.n128_u32[0] = *(_DWORD *)v54;
        }
        v3 = v349;
LABEL_46:
        v57 = v3[9].n128_u32[1] + 24 * v25;
        v58 = FIELD_F32(v57, 8);
        v59 = FIELD_F32(v57, 12);
        v60 = (__int64 *)(v3[19].n128_u32[1] + 16 * v25);
        v61 = v3[4].n128_f32[1] - v58;
        v62 = v60[1];
        v365 = *v60;
        v366 = v62;
        v63 = (__int64 *)(v3[19].n128_u32[0] + 16 * v25);
        v64 = v63[1];
        v363 = *v63;
        v364 = v64;
        ((void (__fastcall *)(unsigned __int32, float32x4_t *, unsigned __int32, float, float))loc_608840C8)(
          v3[8].n128_u32[1],
          &v356,
          v6,
          v59,
          v61);
        v15 = vmulq_f32(v356, *(float32x4_t *)(v3[7].n128_u32[1] + 304));
        v356 = v15;
        v67 = v3[2].n128_i32[2];
        if ( v353 < 1 )
        {
          v14 = v55;
          if ( v67 >= v351 )
          {
            v69 = v3[18].n128_u32[1] + 16 * v351;
            if ( v69 )
            {
              v65.n64_u64[0] = *(unsigned __int64 *)v69;
              v66.n64_u64[0] = FIELD_U32(v69, 8);
            }
          }
          v105 = (unsigned __int32 *)(v3[20].n128_u32[2] + 16 * v351);
          v106 = (unsigned __int32 *)(v3[20].n128_u32[1] + 16 * v351);
          v107 = (unsigned int *)(v3[20].n128_u32[3] + 16 * v351);
          if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) == 2 )
          {
            v22 = v342;
            v108 = v3[37];
            v111.n128_u32[1] = *v105;
            v110.n128_u32[1] = v105[1];
            v109.n128_u32[1] = v105[2];
            v108.n128_u32[3] = 0;
            v111.n128_u32[0] = *v106;
            v110.n128_u32[0] = v106[1];
            v109.n128_u32[0] = v106[2];
            v111.n128_u64[1] = *v107;
            v109.n128_u64[1] = v107[2];
            v110.n128_u64[1] = v107[1];
          }
          else
          {
            v22 = v342;
            if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) )
            {
              v111.n128_u64[1] = *v107;
              v110.n128_u32[1] = v105[1];
              v109.n128_u32[1] = v105[2];
              v108.n128_u32[1] = v105[3];
              v111.n128_u32[1] = *v105;
              v110.n128_u32[0] = v106[1];
              v109.n128_u32[0] = v106[2];
              v108.n128_u32[0] = v106[3];
              v111.n128_u32[0] = *v106;
              v108.n128_u64[1] = v107[3];
              v109.n128_u64[1] = v107[2];
              v110.n128_u64[1] = v107[1];
            }
            else
            {
              v108 = v3[37];
              v109 = v3[36];
              v110 = v3[35];
              v111 = v3[34];
            }
          }
          v78 = v360;
          v359 = vsubq_f32(v358, v360);
          v79 = vsubq_f32(
                  vaddq_f32(
                    v108,
                    vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v110, v65, 1), v111, v65, 0), v109, v66, 0)),
                  v358);
        }
        else
        {
          v14 = v55;
          if ( v67 >= v351 )
          {
            v68 = v3[18].n128_u32[1] + 16 * v351;
            if ( v68 )
            {
              v65.n64_u64[0] = *(unsigned __int64 *)v68;
              v66.n64_u64[0] = FIELD_U32(v68, 8);
            }
          }
          v70 = (unsigned __int32 *)(v3[20].n128_u32[2] + 16 * v351);
          v71 = (unsigned __int32 *)(v3[20].n128_u32[1] + 16 * v351);
          v72 = (unsigned int *)(v3[20].n128_u32[3] + 16 * v351);
          if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) == 2 )
          {
            v22 = v342;
            v73 = v3[37];
            v76.n128_u32[1] = *v70;
            v75.n128_u32[1] = v70[1];
            v74.n128_u32[1] = v70[2];
            v73.n128_u32[3] = 0;
            v76.n128_u32[0] = *v71;
            v75.n128_u32[0] = v71[1];
            v74.n128_u32[0] = v71[2];
            v76.n128_u64[1] = *v72;
            v74.n128_u64[1] = v72[2];
            v75.n128_u64[1] = v72[1];
          }
          else
          {
            v22 = v342;
            if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) )
            {
              v76.n128_u64[1] = *v72;
              v75.n128_u32[1] = v70[1];
              v74.n128_u32[1] = v70[2];
              v73.n128_u32[1] = v70[3];
              v76.n128_u32[1] = *v70;
              v75.n128_u32[0] = v71[1];
              v74.n128_u32[0] = v71[2];
              v73.n128_u32[0] = v71[3];
              v76.n128_u32[0] = *v71;
              v73.n128_u64[1] = v72[3];
              v74.n128_u64[1] = v72[2];
              v75.n128_u64[1] = v72[1];
            }
            else
            {
              v73 = v3[37];
              v74 = v3[36];
              v75 = v3[35];
              v76 = v3[34];
            }
          }
          v77.n128_u64[0] = 0x3F0000003F000000LL;
          v77.n128_u64[1] = 0x3F0000003F000000LL;
          v78 = v360;
          v359 = vsubq_f32(v358, v360);
          v79 = vmulq_f32(
                  vsubq_f32(
                    vaddq_f32(
                      v73,
                      vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v75, v65, 1), v76, v65, 0), v74, v66, 0)),
                    v360),
                  v77);
        }
        v357 = v79;
        v8 = v334;
        v10 = v353;
        v9 = v333;
        *(_QWORD *)v343 = v78.n128_u64[0];
        FIELD_U32(v343, 8) = v78.n128_u32[2];
        v112 = v360.n128_u32[2];
        FIELD_U64(v343, 80) = v360.n128_u64[0];
        FIELD_U32(v343, 88) = v112;
        v113 = v359.n128_u64[0];
        v114 = v359.n128_u32[2];
        FIELD_U64(v343, 16) = v359.n128_u64[0];
        FIELD_U32(v343, 24) = v114;
        FIELD_U64(v343, 96) = v113;
        FIELD_U32(v343, 104) = v114;
        FIELD_U64(v343, 32) = v32.n128_u64[0];
        FIELD_U32(v343, 40) = v32.n128_u32[2];
        FIELD_U64(v343, 112) = v32.n128_u64[0];
LABEL_92:
        FIELD_U32(v5, 120) = v32.n128_u32[2];
        v31 = v9 * v15.n128_f32[0];
        v21 = 1;
        FIELD_F32(v5, 12) = -(float)(v9 * v15.n128_f32[0]);
        FIELD_F32(v5, 92) = v9 * v15.n128_f32[0];
        v129 = 0.0 / (float)(v335 - 1);
        FIELD_F32(v5, 28) = v129;
        FIELD_F32(v5, 108) = v129;
        FIELD_U32(v5, 44) = 0;
        FIELD_U32(v5, 124) = 0;
        FIELD_U32(v22, 36) += 2;
        goto LABEL_93;
      }
      if ( v12 != 2 )
      {
        v31 = 0.0;
        v32 = 0u;
LABEL_93:
        v130 = v7 / v16;
        if ( v10 >= 1 && v14 <= 1 )
        {
          v131 = 0;
          v132 = v5 + 160 * v21;
          do
          {
            v133 = v32;
            v367 = v357;
            v134 = v359;
            v2.n64_f32[0] = v130 * (float)(v131 + 1);
            v15.n128_f32[0] = v2.n64_f32[0];
            v15.n128_u32[1] = sub_608823A0(
                                &v365,
                                (float32x2_t *)&v360,
                                (float32x2_t *)&v359,
                                (float32x2_t *)&v358,
                                (__n64)v15.n128_u64[0],
                                (float32x2_t *)&v357).n64_u32[1];
            v135 = v366;
            *(_QWORD *)v132 = v365;
            FIELD_U32(v132, 8) = v135;
            v136 = v366;
            v137 = vmlaq_f32(vmulq_n_f32(v134, 1.0 - v2.n64_f32[0]), vdupq_lane_s32(v2, 0), v367);
            v32 = v133;
            FIELD_U64(v132, 80) = v365;
            FIELD_U32(v132, 88) = v136;
            FIELD_U64(v132, 16) = v137.n128_u64[0];
            FIELD_U32(v132, 24) = v137.n128_u32[2];
            FIELD_U64(v132, 96) = v137.n128_u64[0];
            FIELD_U32(v132, 104) = v137.n128_u32[2];
            *(unsigned __int64 *)(v132 + 32) = v133.n128_u64[0];
            FIELD_U32(v132, 40) = v133.n128_u32[2];
            *(unsigned __int64 *)(v132 + 112) = v133.n128_u64[0];
            v138 = v21 + v131;
            FIELD_U32(v132, 120) = v133.n128_u32[2];
            ++v131;
            FIELD_F32(v132, 12) = -v31;
            FIELD_F32(v132, 92) = v31;
            v15.n128_f32[2] = (float)v138 / (float)(v335 - 1);
            FIELD_U32(v132, 28) = v15.n128_u32[2];
            FIELD_U32(v132, 108) = v15.n128_u32[2];
            FIELD_F32(v132, 44) = (float)v138;
            FIELD_F32(v132, 124) = (float)v138;
            v132 += 160;
            FIELD_U32(v22, 36) += 2;
          }
          while ( v10 != v131 );
          v9 = v333;
          v5 = v343;
          v3 = v349;
          v8 = v334;
          v21 += v10;
        }
        v360 = 0u;
        v359 = 0u;
        v358 = 0u;
        v356 = 0u;
        memset(&v357, 0, sizeof(v357));
        if ( v8 >= 2 )
        {
          v140 = __OFSUB__(v10, 1);
          v139 = v10 - 1 < 0;
          v32.n128_u32[3] = 0;
          v141 = 0;
          v142 = 0;
          v143 = 0;
          v340 = v139 ^ v140;
          v337 = v5 + 160;
          v336 = v8 - 2;
          v350 = v3 + 37;
          v345 = v3 + 36;
          v344 = v3 + 34;
          v347 = v3 + 35;
          v15.n128_u32[0] = v335 - 1;
          v144 = (float)(v335 - 1);
          do
          {
            v352 = v21;
            v145 = v3[2].n128_i32[2];
            v146 = v361[2 * v143 + 1];
            v147 = v361[2 * v143 + 3];
            if ( v145 >= v146 )
            {
              v148 = v3[18].n128_u32[1] + 16 * v146;
              if ( v148 )
              {
                v15.n128_u64[0] = *(_QWORD *)v148;
                v15.n128_u64[1] = FIELD_U32(v148, 8);
              }
            }
            v149 = v3[20].n128_u32[3];
            v150 = v3[20].n128_u32[1];
            v151 = v3[20].n128_u32[2];
            v152 = *(unsigned __int8 *)(v3[8].n128_u32[2] + 1875);
            v153 = (unsigned __int32 *)(v151 + 16 * v146);
            v154 = (unsigned __int32 *)(v150 + 16 * v146);
            v348 = v143 + 1;
            v354 = v141;
            v355 = v142;
            v155 = (unsigned __int32 *)(v149 + 16 * v146);
            if ( v152 == 2 )
            {
              v32.n128_u32[2] = *v155;
              v158.n128_u32[2] = v155[1];
              v157.n128_u32[2] = v155[2];
              v156 = *v350;
              v32.n128_u32[1] = *v153;
              v158.n128_u32[1] = v153[1];
              v157.n128_u32[1] = v153[2];
              v32.n128_u32[0] = *v154;
              v158.n128_u32[0] = v154[1];
              v157.n128_u32[0] = v154[2];
              v156.n128_u32[3] = v32.n128_u32[3];
              v157.n128_u32[3] = v32.n128_u32[3];
              v158.n128_u32[3] = v32.n128_u32[3];
              v159 = v32;
            }
            else if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) )
            {
              v159.n128_u32[2] = *v155;
              v158.n128_u32[2] = v155[1];
              v157.n128_u32[2] = v155[2];
              v156.n128_u32[2] = v155[3];
              v159.n128_u32[1] = *v153;
              v158.n128_u32[1] = v153[1];
              v157.n128_u32[1] = v153[2];
              v156.n128_u32[1] = v153[3];
              v159.n128_u32[0] = *v154;
              v158.n128_u32[0] = v154[1];
              v157.n128_u32[0] = v154[2];
              v156.n128_u32[0] = v154[3];
              v159.n128_u32[3] = v32.n128_u32[3];
              v156.n128_u32[3] = v32.n128_u32[3];
              v157.n128_u32[3] = v32.n128_u32[3];
              v158.n128_u32[3] = v32.n128_u32[3];
            }
            else
            {
              v156 = *v350;
              v157 = *v345;
              v158 = *v347;
              v159 = *v344;
            }
            v360 = vaddq_f32(
                     v156,
                     vmlaq_lane_f32(
                       vmlaq_lane_f32(
                         vmulq_lane_f32(v158, (float32x2_t)v15.n128_u64[0], 1),
                         v159,
                         (float32x2_t)v15.n128_u64[0],
                         0),
                       v157,
                       *(float32x2_t *)&v15.n128_i8[8],
                       0));
            if ( v145 >= v147 )
            {
              v160 = v3[18].n128_u32[1] + 16 * v147;
              if ( v160 )
              {
                v15.n128_u64[0] = *(_QWORD *)v160;
                v15.n128_u64[1] = FIELD_U32(v160, 8);
              }
            }
            v161 = (unsigned __int32 *)(v151 + 16 * v147);
            v162 = (unsigned __int32 *)(v149 + 16 * v147);
            v163 = (unsigned __int32 *)(v150 + 16 * v147);
            if ( v152 == 2 )
            {
              v167.n128_u32[2] = *v162;
              v166.n128_u32[2] = v162[1];
              v165.n128_u32[2] = v162[2];
              v164 = *v350;
              v167.n128_u32[1] = *v161;
              v166.n128_u32[1] = v161[1];
              v165.n128_u32[1] = v161[2];
              v164.n128_u32[3] = v32.n128_u32[3];
              v167.n128_u32[0] = *v163;
              v166.n128_u32[0] = v163[1];
              v165.n128_u32[0] = v163[2];
              v167.n128_u32[3] = v32.n128_u32[3];
            }
            else
            {
              if ( !v152 )
              {
                v164 = *v350;
                v165 = *v345;
                v166 = *v347;
                v167 = *v344;
                goto LABEL_117;
              }
              v167.n128_u32[2] = *v162;
              v164.n128_u32[2] = v162[3];
              v166.n128_u32[2] = v162[1];
              v165.n128_u32[2] = v162[2];
              v167.n128_u32[1] = *v161;
              v164.n128_u32[1] = v161[3];
              v166.n128_u32[1] = v161[1];
              v165.n128_u32[1] = v161[2];
              v167.n128_u32[0] = *v163;
              v164.n128_u32[0] = v163[3];
              v166.n128_u32[0] = v163[1];
              v165.n128_u32[0] = v163[2];
              v167.n128_u32[3] = v32.n128_u32[3];
              v164.n128_u32[3] = v32.n128_u32[3];
            }
            v165.n128_u32[3] = v32.n128_u32[3];
            v166.n128_u32[3] = v32.n128_u32[3];
LABEL_117:
            v3 = v349;
            v358 = vaddq_f32(
                     v164,
                     vmlaq_lane_f32(
                       vmlaq_lane_f32(
                         vmulq_lane_f32(v166, (float32x2_t)v15.n128_u64[0], 1),
                         v167,
                         (float32x2_t)v15.n128_u64[0],
                         0),
                       v165,
                       *(float32x2_t *)&v15.n128_i8[8],
                       0));
            if ( (unsigned int)(*v346 - 1) <= 1 )
            {
              if ( v152 )
              {
                v168 = (int)(v155 + 1);
                v169 = (int)(v154 + 1);
                if ( v145 < v146 )
                {
                  v168 = 4;
                  v169 = 4;
                }
                LODWORD(v170) = *(_DWORD *)v168;
                HIDWORD(v170) = v32.n128_u32[3];
                v354 = *(_QWORD *)v169;
                v355 = v170;
              }
              else
              {
                v354 = FIELD_U64(v347, 0x0)[0];
                v355 = FIELD_U64(v347, 0x0)[1];
              }
            }
            v171 = v349[9].n128_u32[1] + 24 * v146;
            v172 = FIELD_F32(v171, 8);
            v173 = FIELD_F32(v171, 12);
            v174 = (__int64 *)(v349[19].n128_u32[1] + 16 * v146);
            v175 = v349[4].n128_f32[1] - v172;
            v176 = v174[1];
            v365 = *v174;
            v366 = v176;
            v177 = (__int64 *)(v349[19].n128_u32[0] + 16 * v146);
            v178 = v177[1];
            v363 = *v177;
            v364 = v178;
            ((void (__fastcall *)(unsigned __int32, float32x4_t *, unsigned __int32, float, float))loc_608840C8)(
              v349[8].n128_u32[1],
              &v356,
              v349[21].n128_u32[3],
              v173,
              v175);
            v15 = vmulq_f32(v356, *(float32x4_t *)(v349[7].n128_u32[1] + 304));
            v179 = v9 * v15.n128_f32[0];
            v356 = v15;
            if ( v353 >= 1 )
            {
              if ( v143 )
              {
                v180 = &v361[2 * v143];
                v181 = *(v180 - 1);
                if ( v143 == v336 )
                {
                  if ( (signed __int32)v349[2].n128_u32[2] >= v181 )
                  {
                    v182 = v349[18].n128_u32[1] + 16 * v181;
                    if ( v182 )
                    {
                      v15.n128_u64[0] = *(_QWORD *)v182;
                      v15.n128_u64[1] = FIELD_U32(v182, 8);
                    }
                  }
                  v183 = v343;
                  v184 = v352;
                  v185 = (unsigned __int32 *)(v349[20].n128_u32[2] + 16 * v181);
                  v186 = (unsigned __int32 *)(v349[20].n128_u32[1] + 16 * v181);
                  v187 = (unsigned __int32 *)(v349[20].n128_u32[3] + 16 * v181);
                  if ( *(_BYTE *)(v349[8].n128_u32[2] + 1875) == 2 )
                  {
                    v191.n128_u32[2] = *v187;
                    v190.n128_u32[2] = v187[1];
                    v189.n128_u32[2] = v187[2];
                    v188 = *v350;
                    v191.n128_u32[1] = *v185;
                    v190.n128_u32[1] = v185[1];
                    v189.n128_u32[1] = v185[2];
                    v188.n128_u32[3] = v32.n128_u32[3];
                    v191.n128_u32[0] = *v186;
                    v190.n128_u32[0] = v186[1];
                    v189.n128_u32[0] = v186[2];
                    v191.n128_u32[3] = v32.n128_u32[3];
                  }
                  else
                  {
                    if ( !*(_BYTE *)(v349[8].n128_u32[2] + 1875) )
                    {
                      v188 = *v350;
                      v189 = *v345;
                      v190 = *v347;
                      v191 = *v344;
                      goto LABEL_170;
                    }
                    v191.n128_u32[2] = *v187;
                    v190.n128_u32[2] = v187[1];
                    v189.n128_u32[2] = v187[2];
                    v188.n128_u32[2] = v187[3];
                    v191.n128_u32[1] = *v185;
                    v190.n128_u32[1] = v185[1];
                    v189.n128_u32[1] = v185[2];
                    v188.n128_u32[1] = v185[3];
                    v191.n128_u32[0] = *v186;
                    v190.n128_u32[0] = v186[1];
                    v189.n128_u32[0] = v186[2];
                    v188.n128_u32[0] = v186[3];
                    v191.n128_u32[3] = v32.n128_u32[3];
                    v188.n128_u32[3] = v32.n128_u32[3];
                  }
                  v189.n128_u32[3] = v32.n128_u32[3];
                  v190.n128_u32[3] = v32.n128_u32[3];
LABEL_170:
                  v240.n128_u64[0] = 0x3F0000003F000000LL;
                  v240.n128_u64[1] = 0x3F0000003F000000LL;
                  v241 = vaddq_f32(
                           v188,
                           vmlaq_lane_f32(
                             vmlaq_lane_f32(
                               vmulq_lane_f32(v190, (float32x2_t)v15.n128_u64[0], 1),
                               v191,
                               (float32x2_t)v15.n128_u64[0],
                               0),
                             v189,
                             *(float32x2_t *)&v15.n128_i8[8],
                             0));
                  v359 = vmulq_f32(vsubq_f32(v358, v241), v240);
                  v229 = v360;
                  v242 = vaddq_f32(vsubq_f32(v229, v358), vsubq_f32(v229, v241));
                  v239.n128_f32[0] = -0.25;
                  v239.n128_f32[1] = -0.25;
                  v239.n128_f32[2] = -0.25;
                  v239.n128_f32[3] = -0.25;
LABEL_185:
                  v357 = vmulq_f32(v242, v239);
                  goto LABEL_186;
                }
                v214 = v349[2].n128_i32[2];
                v215 = v180[5];
                if ( v214 >= v181 )
                {
                  v216 = v349[18].n128_u32[1] + 16 * v181;
                  if ( v216 )
                  {
                    v15.n128_u64[0] = *(_QWORD *)v216;
                    v15.n128_u64[1] = FIELD_U32(v216, 8);
                  }
                }
                v217 = v349[20].n128_u32[2];
                v218 = v349[20].n128_u32[3];
                v219 = v349[8].n128_u32[2];
                v220 = v349[20].n128_u32[1];
                v183 = v343;
                v221 = (unsigned __int32 *)(v218 + 16 * v181);
                v222 = (unsigned __int32 *)(v217 + 16 * v181);
                v223 = (unsigned __int32 *)(v220 + 16 * v181);
                v224 = FIELD_U8(v219, 1875);
                if ( v224 == 2 )
                {
                  v228.n128_u32[2] = *v221;
                  v227.n128_u32[2] = v221[1];
                  v226.n128_u32[2] = v221[2];
                  v225 = *v350;
                  v228.n128_u32[1] = *v222;
                  v227.n128_u32[1] = v222[1];
                  v226.n128_u32[1] = v222[2];
                  v225.n128_u32[3] = v32.n128_u32[3];
                  v228.n128_u32[0] = *v223;
                  v227.n128_u32[0] = v223[1];
                  v226.n128_u32[0] = v223[2];
                  v228.n128_u32[3] = v32.n128_u32[3];
                }
                else
                {
                  if ( !FIELD_U8(v219, 1875) )
                  {
                    v225 = *v350;
                    v226 = *v345;
                    v227 = *v347;
                    v228 = *v344;
LABEL_174:
                    v3 = v349;
                    v243 = vmlaq_lane_f32(
                             vmlaq_lane_f32(
                               vmulq_lane_f32(v227, (float32x2_t)v15.n128_u64[0], 1),
                               v228,
                               (float32x2_t)v15.n128_u64[0],
                               0),
                             v226,
                             *(float32x2_t *)&v15.n128_i8[8],
                             0);
                    if ( v214 >= v215 )
                    {
                      v244 = v349[18].n128_u32[1] + 16 * v215;
                      if ( v244 )
                      {
                        v15.n128_u64[0] = *(_QWORD *)v244;
                        v15.n128_u64[1] = FIELD_U32(v244, 8);
                      }
                    }
                    v245 = vaddq_f32(v225, v243);
                    v246 = (unsigned __int32 *)(v218 + 16 * v215);
                    v247 = (unsigned __int32 *)(v217 + 16 * v215);
                    v248 = (unsigned __int32 *)(v220 + 16 * v215);
                    if ( v224 == 2 )
                    {
                      v252.n128_u32[2] = *v246;
                      v251.n128_u32[2] = v246[1];
                      v250.n128_u32[2] = v246[2];
                      v184 = v352;
                      v249 = *v350;
                      v252.n128_u32[1] = *v247;
                      v251.n128_u32[1] = v247[1];
                      v250.n128_u32[1] = v247[2];
                      v249.n128_u32[3] = v32.n128_u32[3];
                      v252.n128_u32[0] = *v248;
                      v251.n128_u32[0] = v248[1];
                      v250.n128_u32[0] = v248[2];
                      v252.n128_u32[3] = v32.n128_u32[3];
                    }
                    else
                    {
                      v184 = v352;
                      if ( !v224 )
                      {
                        v249 = *v350;
                        v250 = *v345;
                        v251 = *v347;
                        v252 = *v344;
                        goto LABEL_183;
                      }
                      v252.n128_u32[2] = *v246;
                      v251.n128_u32[2] = v246[1];
                      v250.n128_u32[2] = v246[2];
                      v249.n128_u32[2] = v246[3];
                      v252.n128_u32[1] = *v247;
                      v251.n128_u32[1] = v247[1];
                      v250.n128_u32[1] = v247[2];
                      v249.n128_u32[1] = v247[3];
                      v252.n128_u32[0] = *v248;
                      v251.n128_u32[0] = v248[1];
                      v250.n128_u32[0] = v248[2];
                      v249.n128_u32[0] = v248[3];
                      v252.n128_u32[3] = v32.n128_u32[3];
                      v249.n128_u32[3] = v32.n128_u32[3];
                    }
                    v250.n128_u32[3] = v32.n128_u32[3];
                    v251.n128_u32[3] = v32.n128_u32[3];
LABEL_183:
                    v239.n128_u64[0] = 0x3F0000003F000000LL;
                    v239.n128_u64[1] = 0x3F0000003F000000LL;
                    v359 = vmulq_f32(vsubq_f32(v358, v245), v239);
                    v229 = v360;
                    v238 = vaddq_f32(
                             v249,
                             vmlaq_lane_f32(
                               vmlaq_lane_f32(
                                 vmulq_lane_f32(v251, (float32x2_t)v15.n128_u64[0], 1),
                                 v252,
                                 (float32x2_t)v15.n128_u64[0],
                                 0),
                               v250,
                               *(float32x2_t *)&v15.n128_i8[8],
                               0));
LABEL_184:
                    v242 = vsubq_f32(v238, v229);
                    goto LABEL_185;
                  }
                  v228.n128_u32[2] = *v221;
                  v225.n128_u32[2] = v221[3];
                  v227.n128_u32[2] = v221[1];
                  v226.n128_u32[2] = v221[2];
                  v228.n128_u32[1] = *v222;
                  v225.n128_u32[1] = v222[3];
                  v227.n128_u32[1] = v222[1];
                  v226.n128_u32[1] = v222[2];
                  v228.n128_u32[0] = *v223;
                  v225.n128_u32[0] = v223[3];
                  v227.n128_u32[0] = v223[1];
                  v226.n128_u32[0] = v223[2];
                  v228.n128_u32[3] = v32.n128_u32[3];
                  v225.n128_u32[3] = v32.n128_u32[3];
                }
                v226.n128_u32[3] = v32.n128_u32[3];
                v227.n128_u32[3] = v32.n128_u32[3];
                goto LABEL_174;
              }
              v205 = v361[5];
              if ( (signed __int32)v349[2].n128_u32[2] >= v205 )
              {
                v206 = v349[18].n128_u32[1] + 16 * v205;
                if ( v206 )
                {
                  v15.n128_u64[0] = *(_QWORD *)v206;
                  v15.n128_u64[1] = FIELD_U32(v206, 8);
                }
              }
              v183 = v343;
              v184 = v352;
              v207 = (unsigned __int32 *)(v349[20].n128_u32[3] + 16 * v205);
              v208 = (unsigned __int32 *)(v349[20].n128_u32[2] + 16 * v205);
              v209 = (unsigned __int32 *)(v349[20].n128_u32[1] + 16 * v205);
              if ( *(_BYTE *)(v349[8].n128_u32[2] + 1875) == 2 )
              {
                v213.n128_u32[2] = *v207;
                v212.n128_u32[2] = v207[1];
                v211.n128_u32[2] = v207[2];
                v210 = *v350;
                v213.n128_u32[1] = *v208;
                v212.n128_u32[1] = v208[1];
                v211.n128_u32[1] = v208[2];
                v210.n128_u32[3] = v32.n128_u32[3];
                v213.n128_u32[0] = *v209;
                v212.n128_u32[0] = v209[1];
                v211.n128_u32[0] = v209[2];
                v213.n128_u32[3] = v32.n128_u32[3];
              }
              else
              {
                if ( !*(_BYTE *)(v349[8].n128_u32[2] + 1875) )
                {
                  v210 = *v350;
                  v211 = *v345;
                  v212 = *v347;
                  v213 = *v344;
LABEL_166:
                  v229 = v360;
                  v238 = vaddq_f32(
                           v210,
                           vmlaq_lane_f32(
                             vmlaq_lane_f32(
                               vmulq_lane_f32(v212, (float32x2_t)v15.n128_u64[0], 1),
                               v213,
                               (float32x2_t)v15.n128_u64[0],
                               0),
                             v211,
                             *(float32x2_t *)&v15.n128_i8[8],
                             0));
                  v359 = vsubq_f32(v358, v360);
                  v239.n128_u64[0] = 0x3F0000003F000000LL;
                  v239.n128_u64[1] = 0x3F0000003F000000LL;
                  goto LABEL_184;
                }
                v213.n128_u32[2] = *v207;
                v212.n128_u32[2] = v207[1];
                v211.n128_u32[2] = v207[2];
                v210.n128_u32[2] = v207[3];
                v213.n128_u32[1] = *v208;
                v212.n128_u32[1] = v208[1];
                v211.n128_u32[1] = v208[2];
                v210.n128_u32[1] = v208[3];
                v213.n128_u32[0] = *v209;
                v212.n128_u32[0] = v209[1];
                v211.n128_u32[0] = v209[2];
                v210.n128_u32[0] = v209[3];
                v213.n128_u32[3] = v32.n128_u32[3];
                v210.n128_u32[3] = v32.n128_u32[3];
              }
              v211.n128_u32[3] = v32.n128_u32[3];
              v212.n128_u32[3] = v32.n128_u32[3];
              goto LABEL_166;
            }
            v192 = v349[2].n128_i32[2];
            if ( v192 >= v146 )
            {
              v193 = v349[18].n128_u32[1] + 16 * v146;
              if ( v193 )
              {
                v15.n128_u64[0] = *(_QWORD *)v193;
                v15.n128_u64[1] = FIELD_U32(v193, 8);
              }
            }
            v194 = v349[20].n128_u32[1];
            v195 = v349[20].n128_u32[2];
            v196 = v349[20].n128_u32[3];
            v184 = v352;
            v197 = *(unsigned __int8 *)(v349[8].n128_u32[2] + 1875);
            v198 = (unsigned __int32 *)(v195 + 16 * v146);
            v199 = (unsigned __int32 *)(v196 + 16 * v146);
            v200 = (unsigned __int32 *)(v194 + 16 * v146);
            if ( v197 == 2 )
            {
              v204.n128_u32[2] = *v199;
              v203.n128_u32[2] = v199[1];
              v202.n128_u32[2] = v199[2];
              v201 = *v350;
              v204.n128_u32[1] = *v198;
              v203.n128_u32[1] = v198[1];
              v202.n128_u32[1] = v198[2];
              v201.n128_u32[3] = v32.n128_u32[3];
              v204.n128_u32[0] = *v200;
              v203.n128_u32[0] = v200[1];
              v202.n128_u32[0] = v200[2];
              v204.n128_u32[3] = v32.n128_u32[3];
LABEL_152:
              v202.n128_u32[3] = v32.n128_u32[3];
              v203.n128_u32[3] = v32.n128_u32[3];
              goto LABEL_153;
            }
            if ( *(_BYTE *)(v349[8].n128_u32[2] + 1875) )
            {
              v204.n128_u32[2] = *v199;
              v201.n128_u32[2] = v199[3];
              v203.n128_u32[2] = v199[1];
              v202.n128_u32[2] = v199[2];
              v204.n128_u32[1] = *v198;
              v201.n128_u32[1] = v198[3];
              v203.n128_u32[1] = v198[1];
              v202.n128_u32[1] = v198[2];
              v204.n128_u32[0] = *v200;
              v201.n128_u32[0] = v200[3];
              v203.n128_u32[0] = v200[1];
              v202.n128_u32[0] = v200[2];
              v204.n128_u32[3] = v32.n128_u32[3];
              v201.n128_u32[3] = v32.n128_u32[3];
              goto LABEL_152;
            }
            v201 = *v350;
            v202 = *v345;
            v203 = *v347;
            v204 = *v344;
LABEL_153:
            v3 = v349;
            v229 = vaddq_f32(
                     v201,
                     vmlaq_lane_f32(
                       vmlaq_lane_f32(
                         vmulq_lane_f32(v203, (float32x2_t)v15.n128_u64[0], 1),
                         v204,
                         (float32x2_t)v15.n128_u64[0],
                         0),
                       v202,
                       *(float32x2_t *)&v15.n128_i8[8],
                       0));
            v360 = v229;
            if ( v192 >= v147 )
            {
              v230 = v349[18].n128_u32[1] + 16 * v147;
              if ( v230 )
              {
                v15.n128_u64[0] = *(_QWORD *)v230;
                v15.n128_u64[1] = FIELD_U32(v230, 8);
              }
            }
            v231 = (unsigned __int32 *)(v196 + 16 * v147);
            v232 = (unsigned __int32 *)(v195 + 16 * v147);
            v233 = (unsigned __int32 *)(v194 + 16 * v147);
            if ( v197 == 2 )
            {
              v237.n128_u32[2] = *v231;
              v236.n128_u32[2] = v231[1];
              v235.n128_u32[2] = v231[2];
              v183 = v343;
              v234 = *v350;
              v237.n128_u32[1] = *v232;
              v236.n128_u32[1] = v232[1];
              v235.n128_u32[1] = v232[2];
              v234.n128_u32[3] = v32.n128_u32[3];
              v237.n128_u32[0] = *v233;
              v236.n128_u32[0] = v233[1];
              v235.n128_u32[0] = v233[2];
              v237.n128_u32[3] = v32.n128_u32[3];
LABEL_161:
              v235.n128_u32[3] = v32.n128_u32[3];
              v236.n128_u32[3] = v32.n128_u32[3];
              goto LABEL_162;
            }
            v183 = v343;
            if ( v197 )
            {
              v237.n128_u32[2] = *v231;
              v236.n128_u32[2] = v231[1];
              v235.n128_u32[2] = v231[2];
              v234.n128_u32[2] = v231[3];
              v237.n128_u32[1] = *v232;
              v236.n128_u32[1] = v232[1];
              v235.n128_u32[1] = v232[2];
              v234.n128_u32[1] = v232[3];
              v237.n128_u32[0] = *v233;
              v236.n128_u32[0] = v233[1];
              v235.n128_u32[0] = v233[2];
              v234.n128_u32[0] = v233[3];
              v237.n128_u32[3] = v32.n128_u32[3];
              v234.n128_u32[3] = v32.n128_u32[3];
              goto LABEL_161;
            }
            v234 = *v350;
            v235 = *v345;
            v236 = *v347;
            v237 = *v344;
LABEL_162:
            v358 = vaddq_f32(
                     v234,
                     vmlaq_lane_f32(
                       vmlaq_lane_f32(
                         vmulq_lane_f32(v236, (float32x2_t)v15.n128_u64[0], 1),
                         v237,
                         (float32x2_t)v15.n128_u64[0],
                         0),
                       v235,
                       *(float32x2_t *)&v15.n128_i8[8],
                       0));
            v359 = vsubq_f32(v358, v229);
LABEL_186:
            v141 = v354;
            v142 = v355;
            v253 = v183 + 160 * v184;
            *(_QWORD *)v253 = v229.n128_u64[0];
            FIELD_U32(v253, 8) = v229.n128_u32[2];
            v254 = v360.n128_u32[2];
            v255 = v183 + 80 * ((2 * v184) | 1);
            *(_QWORD *)v255 = v360.n128_u64[0];
            FIELD_U32(v255, 8) = v254;
            v256 = v359.n128_u64[0];
            v257 = v359.n128_u32[2];
            FIELD_U64(v253, 16) = v359.n128_u64[0];
            FIELD_U32(v253, 24) = v257;
            FIELD_U64(v255, 16) = v256;
            FIELD_U32(v255, 24) = v257;
            FIELD_U64(v253, 32) = v354;
            FIELD_U32(v253, 40) = v355;
            FIELD_U64(v255, 32) = v354;
            FIELD_U32(v255, 40) = v355;
            v15.n128_f32[0] = (float)v184;
            FIELD_F32(v253, 12) = -v179;
            FIELD_F32(v255, 12) = v179;
            v15.n128_f32[2] = (float)v184 / v144;
            FIELD_U32(v253, 28) = v15.n128_u32[2];
            FIELD_U32(v255, 28) = v15.n128_u32[2];
            FIELD_F32(v253, 44) = (float)v184;
            FIELD_F32(v255, 44) = (float)v184;
            v258 = v184 + 1;
            v22 = v342;
            FIELD_U32(v342, 36) += 2;
            if ( v340 )
            {
              v259 = v341;
              v21 = v184 + 1;
            }
            else
            {
              v260 = 0;
              v339 = v32;
              v261 = v337 + 160 * v184;
              do
              {
                v262 = v359;
                v263 = v258;
                v264 = v357;
                v2.n64_f32[0] = v130 * (float)(v260 + 1);
                v15.n128_f32[0] = v2.n64_f32[0];
                v15.n128_u32[1] = sub_608823A0(
                                    &v365,
                                    (float32x2_t *)&v360,
                                    (float32x2_t *)&v359,
                                    (float32x2_t *)&v358,
                                    (__n64)v15.n128_u64[0],
                                    (float32x2_t *)&v357).n64_u32[1];
                v265 = v366;
                v258 = v263;
                v141 = v354;
                v142 = v355;
                *(_QWORD *)v261 = v365;
                v266 = vmlaq_f32(vmulq_n_f32(v262, 1.0 - v2.n64_f32[0]), vdupq_lane_s32(v2, 0), v264);
                FIELD_U32(v261, 8) = v265;
                v267 = v366;
                FIELD_U64(v261, 80) = v365;
                FIELD_U32(v261, 88) = v267;
                FIELD_U64(v261, 16) = v266.n128_u64[0];
                FIELD_U32(v261, 24) = v266.n128_u32[2];
                FIELD_U64(v261, 96) = v266.n128_u64[0];
                FIELD_U32(v261, 104) = v266.n128_u32[2];
                FIELD_U64(v261, 32) = v354;
                FIELD_U32(v261, 40) = v355;
                FIELD_U64(v261, 112) = v354;
                v268 = v263 + v260;
                FIELD_U32(v261, 120) = v355;
                ++v260;
                v15.n128_f32[0] = (float)v268;
                FIELD_F32(v261, 12) = -v179;
                FIELD_F32(v261, 92) = v179;
                v15.n128_f32[2] = (float)v268 / v144;
                FIELD_U32(v261, 28) = v15.n128_u32[2];
                FIELD_U32(v261, 108) = v15.n128_u32[2];
                FIELD_F32(v261, 44) = (float)v268;
                FIELD_F32(v261, 124) = (float)v268;
                v261 += 160;
                FIELD_U32(v342, 36) += 2;
              }
              while ( v353 != v260 );
              v3 = v349;
              v32 = v339;
              v21 = v338 + v352;
              v259 = v341;
            }
            v143 = v348;
          }
          while ( v348 != v259 );
        }
        if ( v362 <= 1 )
          goto LABEL_232;
        v360 = 0u;
        v269 = v361[2 * v341 + 1];
        if ( (unsigned int)(*v346 - 1) > 1 )
        {
          v270 = v349;
          v271 = v21;
          v276 = 0;
          LODWORD(v275) = 0;
        }
        else
        {
          v270 = v349;
          v271 = v21;
          if ( *(_BYTE *)(v349[8].n128_u32[2] + 1875) )
          {
            v272 = v349[2].n128_i32[2];
            v273 = v349[20].n128_u32[1] + 16 * v269 + 4;
            if ( v272 < v269 )
              v273 = 4;
            v274 = v349[20].n128_u32[3] + 16 * v269 + 4;
            if ( v272 < v269 )
              v274 = 4;
            LODWORD(v275) = *(_DWORD *)v274;
            v276 = *(_QWORD *)v273;
          }
          else
          {
            v276 = v349[35].n128_u64[0];
            v275 = v349[35].n128_u64[1];
          }
        }
        v277 = v270[9].n128_u32[1] + 24 * v269;
        v278 = FIELD_F32(v277, 8);
        v279 = FIELD_F32(v277, 12);
        v280 = (__int64 *)(v270[19].n128_u32[1] + 16 * v269);
        v281 = v270[4].n128_f32[1] - v278;
        v282 = v280[1];
        v365 = *v280;
        v366 = v282;
        v283 = (__int64 *)(v270[19].n128_u32[0] + 16 * v269);
        v284 = v283[1];
        v363 = *v283;
        v364 = v284;
        ((void (__fastcall *)(unsigned __int32, float32x4_t *, unsigned __int32, float, float))loc_608840C8)(
          v270[8].n128_u32[1],
          &v360,
          v270[21].n128_u32[3],
          v279,
          v281);
        v287 = vmulq_f32(v360, *(float32x4_t *)(v270[7].n128_u32[1] + 304));
        v360 = v287;
        v288 = v270[2].n128_i32[2];
        if ( v288 >= v269 )
        {
          v289 = v270[18].n128_u32[1] + 16 * v269;
          if ( v289 )
          {
            v285.n64_u64[0] = *(unsigned __int64 *)v289;
            v286.n64_u64[0] = FIELD_U32(v289, 8);
          }
          v270 = v349;
        }
        v290 = v270[20].n128_i32[2];
        v291 = v270[20].n128_i32[3];
        v292 = v270[20].n128_i32[1];
        v293 = *(unsigned __int8 *)(v270[8].n128_u32[2] + 1875);
        v294 = (unsigned int *)(v291 + 16 * v269);
        v295 = (unsigned __int32 *)(v290 + 16 * v269);
        v296 = (unsigned __int32 *)(v292 + 16 * v269);
        if ( v293 == 2 )
        {
          v298 = v349[37];
          v300.n128_u32[1] = *v295;
          v299.n128_u32[1] = v295[1];
          v297.n128_u32[1] = v295[2];
          v301 = v349;
          v298.n128_u32[3] = 0;
          v300.n128_u32[0] = *v296;
          v299.n128_u32[0] = v296[1];
          v297.n128_u32[0] = v296[2];
          v300.n128_u64[1] = *v294;
          v297.n128_u64[1] = v294[2];
          v299.n128_u64[1] = v294[1];
        }
        else if ( v293 )
        {
          v301 = v349;
          v300.n128_u64[1] = *v294;
          v299.n128_u32[1] = v295[1];
          v297.n128_u32[1] = v295[2];
          v298.n128_u32[1] = v295[3];
          v300.n128_u32[1] = *v295;
          v299.n128_u32[0] = v296[1];
          v297.n128_u32[0] = v296[2];
          v298.n128_u32[0] = v296[3];
          v300.n128_u32[0] = *v296;
          v298.n128_u64[1] = v294[3];
          v297.n128_u64[1] = v294[2];
          v299.n128_u64[1] = v294[1];
        }
        else
        {
          v297 = v349[36];
          v298 = v349[37];
          v299 = v349[35];
          v300 = v349[34];
          v301 = v349;
        }
        v302 = vaddq_f32(
                 v298,
                 vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v299, v285, 1), v300, v285, 0), v297, v286, 0));
        if ( (v332 | 2) == 2 )
        {
          v303 = v361[2 * v334 - 3];
          if ( v288 >= v303 )
          {
            v304 = v301[18].n128_u32[1] + 16 * v303;
            if ( v304 )
            {
              v285.n64_u64[0] = *(unsigned __int64 *)v304;
              v286.n64_u64[0] = FIELD_U32(v304, 8);
            }
          }
          v307 = (unsigned int *)(v291 + 16 * v303);
          v308 = (unsigned __int32 *)(v290 + 16 * v303);
          v309 = (unsigned __int32 *)(v292 + 16 * v303);
          if ( v293 == 2 )
          {
            v310 = v301[37];
            v313.n128_u32[1] = *v308;
            v312.n128_u32[1] = v308[1];
            v311.n128_u32[1] = v308[2];
            v310.n128_u32[3] = 0;
            v313.n128_u32[0] = *v309;
            v312.n128_u32[0] = v309[1];
            v311.n128_u32[0] = v309[2];
            v313.n128_u64[1] = *v307;
            v311.n128_u64[1] = v307[2];
            v312.n128_u64[1] = v307[1];
          }
          else if ( v293 )
          {
            v313.n128_u64[1] = *v307;
            v312.n128_u32[1] = v308[1];
            v311.n128_u32[1] = v308[2];
            v310.n128_u32[1] = v308[3];
            v313.n128_u32[1] = *v308;
            v312.n128_u32[0] = v309[1];
            v311.n128_u32[0] = v309[2];
            v310.n128_u32[0] = v309[3];
            v313.n128_u32[0] = *v309;
            v310.n128_u64[1] = v307[3];
            v311.n128_u64[1] = v307[2];
            v312.n128_u64[1] = v307[1];
          }
          else
          {
            v310 = v301[37];
            v311 = v301[36];
            v312 = v301[35];
            v313 = v301[34];
          }
          v314 = v343;
          v315 = v271;
          v316 = v343 + 160 * v271;
          *(_QWORD *)v316 = v302.n128_u64[0];
          FIELD_U32(v316, 8) = v302.n128_u32[2];
          v317 = (2 * v271) | 1;
          v318 = v343 + 80 * v317;
          *(_QWORD *)v318 = v302.n128_u64[0];
          v319 = (_DWORD *)(v318 + 8);
          v320 = vsubq_f32(
                   v302,
                   vaddq_f32(
                     v310,
                     vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v312, v285, 1), v313, v285, 0), v311, v286, 0)));
        }
        else
        {
          if ( v332 != 1 )
          {
LABEL_232:
            nullsub_99();
            return;
          }
          v305 = v361[1];
          if ( v288 >= v305 )
          {
            v306 = v301[18].n128_u32[1] + 16 * v305;
            if ( v306 )
            {
              v285.n64_u64[0] = *(unsigned __int64 *)v306;
              v286.n64_u64[0] = FIELD_U32(v306, 8);
            }
          }
          v321 = (unsigned int *)(v291 + 16 * v305);
          v322 = (unsigned __int32 *)(v290 + 16 * v305);
          v323 = (unsigned __int32 *)(v292 + 16 * v305);
          if ( v293 == 2 )
          {
            v315 = v271;
            v324 = v301[37];
            v327.n128_u32[1] = *v322;
            v326.n128_u32[1] = v322[1];
            v325.n128_u32[1] = v322[2];
            v324.n128_u32[3] = 0;
            v327.n128_u32[0] = *v323;
            v326.n128_u32[0] = v323[1];
            v325.n128_u32[0] = v323[2];
            v327.n128_u64[1] = *v321;
            v325.n128_u64[1] = v321[2];
            v326.n128_u64[1] = v321[1];
          }
          else
          {
            v315 = v271;
            if ( v293 )
            {
              v327.n128_u64[1] = *v321;
              v326.n128_u32[1] = v322[1];
              v325.n128_u32[1] = v322[2];
              v324.n128_u32[1] = v322[3];
              v327.n128_u32[1] = *v322;
              v326.n128_u32[0] = v323[1];
              v325.n128_u32[0] = v323[2];
              v324.n128_u32[0] = v323[3];
              v327.n128_u32[0] = *v323;
              v324.n128_u64[1] = v321[3];
              v325.n128_u64[1] = v321[2];
              v326.n128_u64[1] = v321[1];
            }
            else
            {
              v324 = v301[37];
              v325 = v301[36];
              v326 = v301[35];
              v327 = v301[34];
            }
          }
          v314 = v343;
          v316 = v343 + 160 * v315;
          *(_QWORD *)v316 = v302.n128_u64[0];
          FIELD_U32(v316, 8) = v302.n128_u32[2];
          v317 = (2 * v315) | 1;
          v318 = v343 + 80 * v317;
          v320 = vsubq_f32(
                   vaddq_f32(
                     v324,
                     vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v326, v285, 1), v327, v285, 0), v325, v286, 0)),
                   v302);
          *(_QWORD *)v318 = v302.n128_u64[0];
          v319 = (_DWORD *)(v318 + 8);
        }
        *v319 = v302.n128_u32[2];
        FIELD_U64(v316, 16) = v320.n128_u64[0];
        FIELD_U32(v316, 24) = v320.n128_u32[2];
        v328 = v314 + 80 * v317;
        FIELD_U64(v318, 16) = v320.n128_u64[0];
        FIELD_U32(v318, 24) = v320.n128_u32[2];
        FIELD_U64(v316, 32) = v276;
        FIELD_U32(v316, 40) = v275;
        FIELD_U64(v318, 32) = v276;
        FIELD_U32(v328, 40) = v275;
        v329 = (float *)(v314 + 160 * v315);
        v330 = v333 * v287.n128_f32[0];
        v329[3] = -v330;
        v331 = (float)v315 / (float)(v335 - 1);
        FIELD_F32(v328, 12) = v330;
        v329[7] = v331;
        FIELD_F32(v328, 28) = v331;
        v329[11] = (float)v315;
        FIELD_F32(v328, 44) = (float)v315;
        FIELD_U32(v22, 36) += 2;
        goto LABEL_232;
      }
      v27 = v3[2].n128_i32[2];
      v28 = v361[1];
      v29 = v361[3];
      if ( v27 >= v28 )
      {
        v30 = v3[18].n128_u32[1] + 16 * v28;
        if ( v30 )
        {
          v15.n128_u64[0] = *(_QWORD *)v30;
          v15.n128_u64[1] = FIELD_U32(v30, 8);
        }
      }
      v80 = v3;
      v81 = (unsigned __int32 *)(v3[20].n128_u32[1] + 16 * v28);
      v82 = *(unsigned __int8 *)(v3[8].n128_u32[2] + 1875);
      v83 = (unsigned int *)(v80[20].n128_u32[3] + 16 * v28);
      v84 = (unsigned __int32 *)(v80[20].n128_u32[2] + 16 * v28);
      if ( v82 == 2 )
      {
        v86 = v80[37];
        v85.n128_u32[1] = *v84;
        v88.n128_u32[1] = v84[1];
        v87.n128_u32[1] = v84[2];
        v86.n128_u32[3] = 0;
        v85.n128_u32[0] = *v81;
        v88.n128_u32[0] = v81[1];
        v87.n128_u32[0] = v81[2];
        v85.n128_u64[1] = *v83;
        v87.n128_u64[1] = v83[2];
        v88.n128_u64[1] = v83[1];
      }
      else if ( v82 )
      {
        v85.n128_u64[1] = *v83;
        v88.n128_u32[1] = v84[1];
        v87.n128_u32[1] = v84[2];
        v86.n128_u32[1] = v84[3];
        v85.n128_u32[1] = *v84;
        v88.n128_u32[0] = v81[1];
        v87.n128_u32[0] = v81[2];
        v86.n128_u32[0] = v81[3];
        v85.n128_u32[0] = *v81;
        v86.n128_u64[1] = v83[3];
        v87.n128_u64[1] = v83[2];
        v88.n128_u64[1] = v83[1];
      }
      else
      {
        v85 = v349[34];
        v86 = v349[37];
        v87 = v349[36];
        v88 = v349[35];
      }
      v358 = vaddq_f32(
               v86,
               vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmulq_lane_f32(v88, (float32x2_t)v15.n128_u64[0], 1),
                   v85,
                   (float32x2_t)v15.n128_u64[0],
                   0),
                 v87,
                 *(float32x2_t *)&v15.n128_i8[8],
                 0));
      if ( (unsigned int)(*v346 - 1) > 1 )
      {
        v32 = 0u;
      }
      else
      {
        if ( !v82 )
        {
          v3 = v349;
          v32 = v349[35];
          goto LABEL_72;
        }
        v32.n128_u32[3] = 0;
        v89 = (int)(v83 + 1);
        v90 = (int)(v84 + 1);
        v91 = (int)(v81 + 1);
        if ( v27 < v28 )
        {
          v89 = 4;
          v90 = 4;
          v91 = 4;
        }
        v32.n128_u32[2] = *(_DWORD *)v89;
        v32.n128_u32[1] = *(_DWORD *)v90;
        v32.n128_u32[0] = *(_DWORD *)v91;
      }
      v3 = v349;
LABEL_72:
      v8 = v362;
      v10 = v353;
      v92 = v3[9].n128_u32[1] + 24 * v28;
      v93 = FIELD_F32(v92, 8);
      v94 = FIELD_F32(v92, 12);
      v95 = (__int64 *)(v3[19].n128_u32[1] + 16 * v28);
      v96 = v3[4].n128_f32[1] - v93;
      v97 = v95[1];
      v365 = *v95;
      v366 = v97;
      v98 = (__int64 *)(v3[19].n128_u32[0] + 16 * v28);
      v99 = v98[1];
      v363 = *v98;
      v364 = v99;
      ((void (__fastcall *)(unsigned __int32, float32x4_t *, unsigned __int32, float, float))loc_608840C8)(
        v3[8].n128_u32[1],
        &v356,
        v6,
        v94,
        v96);
      v100 = v356;
      v15 = vmulq_f32(v356, *(float32x4_t *)(v3[7].n128_u32[1] + 304));
      v356 = v15;
      v101 = v3[37];
      v360 = v101;
      if ( v353 < 1 )
      {
        v14 = 1;
        v22 = v4;
        v103 = &v359;
        v104 = vsubq_f32(v358, v101);
      }
      else
      {
        if ( (signed __int32)v3[2].n128_u32[2] >= v29 )
        {
          v102 = v3[18].n128_u32[1] + 16 * v29;
          if ( v102 )
          {
            v100.n128_u64[0] = *(_QWORD *)v102;
            v100.n128_u64[1] = FIELD_U32(v102, 8);
          }
        }
        v2.n64_u32[1] = v100.n128_u32[1];
        v115 = (unsigned __int32 *)(v3[20].n128_u32[2] + 16 * v29);
        v116 = (unsigned __int32 *)(v3[20].n128_u32[1] + 16 * v29);
        v117 = (unsigned int *)(v3[20].n128_u32[3] + 16 * v29);
        if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) == 2 )
        {
          v121.n128_u32[1] = *v115;
          v120.n128_u32[1] = v115[1];
          v119.n128_u32[1] = v115[2];
          v118.n128_u64[1] = v101.n128_u32[2];
          v118.n128_u64[0] = v101.n128_u64[0];
          v121.n128_u32[0] = *v116;
          v120.n128_u32[0] = v116[1];
          v119.n128_u32[0] = v116[2];
          v121.n128_u64[1] = *v117;
          v119.n128_u64[1] = v117[2];
          v120.n128_u64[1] = v117[1];
        }
        else if ( *(_BYTE *)(v3[8].n128_u32[2] + 1875) )
        {
          v121.n128_u64[1] = *v117;
          v120.n128_u32[1] = v115[1];
          v119.n128_u32[1] = v115[2];
          v118.n128_u32[1] = v115[3];
          v121.n128_u32[1] = *v115;
          v120.n128_u32[0] = v116[1];
          v119.n128_u32[0] = v116[2];
          v118.n128_u32[0] = v116[3];
          v121.n128_u32[0] = *v116;
          v118.n128_u64[1] = v117[3];
          v119.n128_u64[1] = v117[2];
          v120.n128_u64[1] = v117[1];
        }
        else
        {
          v118 = v101;
          v119 = v3[36];
          v120 = v3[35];
          v121 = v3[34];
        }
        v122.n128_f32[0] = 0.25;
        v122.n128_f32[1] = 0.25;
        v122.n128_f32[2] = 0.25;
        v122.n128_f32[3] = 0.25;
        v8 = v334;
        v10 = v353;
        v14 = 1;
        v103 = &v357;
        v22 = v4;
        v7 = 1.0;
        v123 = vaddq_f32(
                 v118,
                 vmlaq_lane_f32(
                   vmlaq_lane_f32(
                     vmulq_lane_f32(v120, (float32x2_t)v100.n128_u64[0], 1),
                     v121,
                     (float32x2_t)v100.n128_u64[0],
                     0),
                   v119,
                   *(float32x2_t *)&v100.n128_i8[8],
                   0));
        v124.n128_u64[0] = 0x3F0000003F000000LL;
        v124.n128_u64[1] = 0x3F0000003F000000LL;
        v125 = vmulq_f32(vaddq_f32(vsubq_f32(v358, v101), vsubq_f32(v358, v123)), v122);
        v104 = vmulq_f32(vsubq_f32(v123, v101), v124);
        v359 = v125;
      }
      *v103 = v104;
      *(_QWORD *)v5 = v101.n128_u64[0];
      FIELD_U32(v5, 8) = v101.n128_u32[2];
      v126 = v360.n128_u32[2];
      FIELD_U64(v5, 80) = v360.n128_u64[0];
      FIELD_U32(v5, 88) = v126;
      v127 = v359.n128_u64[0];
      v128 = v359.n128_u32[2];
      FIELD_U64(v5, 16) = v359.n128_u64[0];
      FIELD_U32(v5, 24) = v128;
      FIELD_U64(v5, 96) = v127;
      FIELD_U32(v5, 104) = v128;
      FIELD_U64(v5, 32) = v32.n128_u64[0];
      FIELD_U32(v5, 40) = v32.n128_u32[2];
      FIELD_U64(v5, 112) = v32.n128_u64[0];
      v9 = v333;
      goto LABEL_92;
    }
  }
}
