/* sub_60898D38
 * address: 0x60898D38   size: 1692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60898D38(double a1, double a2, int a3, float32x2_t *a4)
{
  unsigned __int32 v4; // r8
  int v5; // r0
  __int64 v6; // r2
  unsigned __int32 v7; // r4
  unsigned __int32 v8; // r7
  unsigned __int64 v9; // r2
  unsigned __int32 v10; // r4
  unsigned __int32 v11; // r7
  __int64 v12; // r2
  int v13; // r4
  unsigned __int64 v14; // r6
  __int64 v15; // r2
  __int64 v16; // r6
  unsigned __int64 v17; // r2
  unsigned __int64 v18; // r6
  __int64 v19; // r2
  unsigned __int32 v20; // r5
  unsigned __int64 v21; // r6
  unsigned __int32 v22; // r7
  float32x4_t v23; // q11
  float32x4_t v24; // q13
  float32x4_t v25; // q12
  float32x4_t v26; // q9
  float32x4_t v27; // q12
  float32x4_t v28; // q13
  float32x4_t v29; // q9
  float32x4_t v30; // q8
  float32x4_t v31; // q11
  float32x4_t v32; // q12
  float32x4_t v33; // q13
  float32x4_t v34; // q9
  float32x4_t *v35; // r0
  float32x4_t v36; // q8
  __int64 v37; // r2
  unsigned __int32 v38; // r4
  unsigned __int32 v39; // r7
  unsigned __int64 v40; // r2
  unsigned __int32 v41; // r4
  unsigned __int32 v42; // r7
  __int64 v43; // r2
  int v44; // r4
  unsigned __int64 v45; // r6
  __int64 v46; // r2
  __int64 v47; // r6
  unsigned __int64 v48; // r2
  unsigned __int64 v49; // r6
  __int64 v50; // r2
  unsigned __int32 v51; // r5
  unsigned __int64 v52; // r6
  unsigned __int32 v53; // r3
  unsigned __int32 v54; // r5
  unsigned __int32 v55; // r6
  unsigned __int32 v56; // r7
  unsigned __int32 v57; // r3
  unsigned __int32 v58; // r5
  unsigned __int32 v59; // r6
  unsigned __int32 v60; // r7
  unsigned __int32 v61; // r3
  unsigned __int32 v62; // r4
  unsigned __int32 v63; // r5
  unsigned __int32 v64; // r6
  unsigned __int32 v65; // r7
  unsigned __int32 v66; // r3
  unsigned __int32 v67; // r5
  unsigned __int32 v68; // r6
  unsigned __int32 v69; // r7
  unsigned __int32 v70; // r3
  unsigned __int32 v71; // r5
  unsigned __int32 v72; // r6
  unsigned __int32 v73; // r7
  unsigned __int32 v74; // r3
  unsigned __int32 v75; // r4
  float32x4_t v76; // q0
  float32x2_t v77; // d2
  float32x4_t v78; // q11
  float32x4_t v79; // q12
  float32x4_t v80; // q10
  float32x4_t v81; // q8
  float32x4_t v82; // q12
  float32x4_t v83; // q8
  float32x4_t *v84; // r6
  float32x4_t v85; // q12
  float32x4_t v86; // q10
  float32x4_t v87; // q11
  float32x4_t v88; // q8
  float32x4_t v89; // q9
  float32x2_t v90; // d4
  float32x2_t v91; // d2
  float32x2_t v92; // d0
  float32x4_t v93; // q11
  float32x4_t v94; // q12
  float32x4_t v95; // q13
  float32x4_t v96; // q10
  float32x4_t v97; // q12
  float32x4_t v98; // q13
  float32x2_t v99; // d4
  float32x2_t v100; // d5
  float32x4_t v101; // q10
  float32x2_t v102; // d2
  float32x2_t v103; // d3
  float32x4_t v104; // q8
  float32x2_t v105; // d0
  float32x2_t v106; // d1
  float32x2_t v107; // d6
  float32x2_t v108; // d7
  float32x4_t v109; // q12
  unsigned __int32 v110; // r3
  unsigned __int32 v111; // r5
  unsigned __int32 v112; // r6
  unsigned __int32 v113; // r7
  unsigned __int32 v114; // r3
  unsigned __int32 v115; // r5
  unsigned __int32 v116; // r6
  unsigned __int32 v117; // r7
  unsigned __int32 v118; // r3
  unsigned __int32 v119; // r4
  unsigned __int32 v120; // r5
  unsigned __int32 v121; // r6
  unsigned __int32 v122; // r7
  unsigned __int32 v123; // r3
  unsigned __int32 v124; // r5
  unsigned __int32 v125; // r6
  unsigned __int32 v126; // r7
  unsigned __int32 v127; // r3
  unsigned __int32 v128; // r5
  unsigned __int32 v129; // r6
  unsigned __int32 v130; // r7
  unsigned __int32 v131; // r3
  unsigned __int32 v132; // r4
  int v133; // r0
  float32x2_t v134; // d2
  float32x2_t v135; // d0
  float32x4_t v136; // q11
  float32x4_t v137; // q12
  float32x4_t v138; // q10
  float32x4_t v139; // q8
  float32x4_t v140; // q11
  float32x4_t v141; // q12
  float32x4_t v142; // q8
  float32x2_t v143; // d2
  float32x2_t v144; // d3
  float32x2_t v145; // d0
  float32x4_t v146; // q11
  float32x4_t v147; // q12
  float32x4_t v148; // q10
  float32x4_t v149; // q8
  float32x4_t v150; // q12
  int result; // r0
  int v152; // r6
  int v153; // r5
  bool v154; // zf
  bool v155; // zf
  bool v156; // zf
  _BYTE v157[24]; // [sp+0h] [bp-98h] BYREF
  float32x2_t v158; // [sp+18h] [bp-80h]
  float32x2_t v159; // [sp+20h] [bp-78h]
  __int128 v160; // [sp+28h] [bp-70h]
  float32x2_t v161; // [sp+38h] [bp-60h]
  float32x4_t v162; // [sp+40h] [bp-58h] BYREF
  float32x2_t v163; // [sp+50h] [bp-48h]
  float32x2_t v164; // [sp+58h] [bp-40h]
  float32x2_t v165; // [sp+60h] [bp-38h]
  __int128 v166; // [sp+68h] [bp-30h]
  float32x2_t v167; // [sp+78h] [bp-20h]
  float32x4_t v168; // 0:q8.16
  float32x4_t v169; // 0:q8.16
  float32x4_t v170; // 0:q8.16
  float32x4_t v171; // 0:q8.16
  float32x4_t v172; // 0:q9.16
  float32x4_t v173; // 0:q9.16
  float32x4_t v174; // 0:q9.16
  float32x4_t v175; // 0:q9.16
  float32x4_t v176; // 0:q9.16
  float32x4_t v177; // 0:q9.16
  float32x4_t v178; // 0:q9.16
  float32x4_t v179; // 0:q10.16
  float32x4_t v180; // 0:q10.16
  float32x4_t v181; // 0:q10.16
  float32x4_t v182; // 0:q13.16
  float32x4_t v183; // 0:q13.16
  float32x4_t v184; // 0:q13.16
  float32x4_t v185; // 0:q14.16
  float32x4_t v186; // 0:q14.16
  float32x4_t v187; // 0:q14.16
  float32x4_t v188; // 0:q14.16
  float32x4_t v189; // 0:q14.16
  float32x4_t v190; // 0:q14.16
  float32x4_t v191; // 0:q14.16

  v4 = (unsigned __int32)a4;
  if ( FIELD_U32(a4, 0x0)[0] )
  {
    v5 = *(unsigned __int8 *)(a4[43].n64_u32[1] + 2);
    if ( *(_BYTE *)(FIELD_U32(a4 + (17) * 8, 0x0)[0] + 2020) )
    {
      if ( *(_BYTE *)(a4[43].n64_u32[1] + 2) )
      {
        sub_608982F0(a1, a2, v5, a4, &v162, (float32x4_t *)v157);
        v6 = *(__int64 *)((char *)v162.n128_i64 + 4);
        v7 = v162.n128_u32[3];
        v8 = v163.n64_u32[0];
        FIELD_U32(v4, 544) = v162.n128_u32[0];
        FIELD_U64(v4, 548) = v6;
        FIELD_U32(v4, 556) = v7;
        FIELD_U32(v4, 560) = v8;
        v9 = v164.n64_u64[0];
        v11 = v165.n64_u32[1];
        v10 = v165.n64_u32[0];
        FIELD_U32(v4, 564) = v163.n64_u32[1];
        FIELD_U64(v4, 568) = v9;
        FIELD_U64(v4, 576) = __PAIR64__(v11, v10);
        v12 = *(_QWORD *)((char *)&v166 + 4);
        v13 = HIDWORD(v166);
        v14 = v167.n64_u64[0];
        FIELD_U32(v4, 584) = v166;
        FIELD_U64(v4, 588) = v12;
        FIELD_U32(v4, 596) = v13;
        FIELD_U64(v4, 600) = v14;
        v15 = *(_QWORD *)&v157[4];
        v16 = *(_QWORD *)&v157[12];
        FIELD_U32(v4, 608) = *(_DWORD *)v157;
        FIELD_U64(v4, 612) = v15;
        FIELD_U64(v4, 620) = v16;
        v17 = v158.n64_u64[0];
        v18 = v159.n64_u64[0];
        FIELD_U32(v4, 628) = *(_DWORD *)&v157[20];
        FIELD_U64(v4, 632) = v17;
        FIELD_U64(v4, 640) = v18;
        v19 = *(_QWORD *)((char *)&v160 + 4);
        v20 = HIDWORD(v160);
        v21 = v161.n64_u64[0];
        FIELD_U32(v4, 648) = v160;
        FIELD_U64(v4, 652) = v19;
      }
      else
      {
        v53 = FIELD_U32(a4 + (52) * 8, 0x0)[1];
        v54 = a4[53].n64_u32[0];
        v55 = a4[53].n64_u32[1];
        v56 = FIELD_U32(a4 + (54) * 8, 0x0)[0];
        FIELD_U32(a4 + (68) * 8, 0x0)[0] = FIELD_U32(a4 + (52) * 8, 0x0)[0];
        FIELD_U32(a4 + (68) * 8, 0x0)[1] = v53;
        a4[69].n64_u32[0] = v54;
        a4[69].n64_u32[1] = v55;
        FIELD_U32(a4 + (70) * 8, 0x0)[0] = v56;
        v57 = a4[55].n64_u32[0];
        v58 = a4[55].n64_u32[1];
        v59 = FIELD_U32(a4 + (56) * 8, 0x0)[0];
        v60 = FIELD_U32(a4 + (56) * 8, 0x0)[1];
        FIELD_U32(a4 + (70) * 8, 0x0)[1] = FIELD_U32(a4 + (54) * 8, 0x0)[1];
        a4[71].n64_u32[0] = v57;
        a4[71].n64_u32[1] = v58;
        FIELD_U32(a4 + (72) * 8, 0x0)[0] = v59;
        FIELD_U32(a4 + (72) * 8, 0x0)[1] = v60;
        v61 = a4[57].n64_u32[1];
        v62 = FIELD_U32(a4 + (58) * 8, 0x0)[0];
        v63 = FIELD_U32(a4 + (58) * 8, 0x0)[1];
        v64 = a4[59].n64_u32[0];
        v65 = a4[59].n64_u32[1];
        a4[73].n64_u32[0] = a4[57].n64_u32[0];
        a4[73].n64_u32[1] = v61;
        FIELD_U32(a4 + (74) * 8, 0x0)[0] = v62;
        FIELD_U32(a4 + (74) * 8, 0x0)[1] = v63;
        a4[75].n64_u32[0] = v64;
        a4[75].n64_u32[1] = v65;
        v66 = FIELD_U32(a4 + (60) * 8, 0x0)[1];
        v67 = a4[61].n64_u32[0];
        v68 = a4[61].n64_u32[1];
        v69 = FIELD_U32(a4 + (62) * 8, 0x0)[0];
        FIELD_U32(a4 + (76) * 8, 0x0)[0] = FIELD_U32(a4 + (60) * 8, 0x0)[0];
        FIELD_U32(a4 + (76) * 8, 0x0)[1] = v66;
        a4[77].n64_u32[0] = v67;
        a4[77].n64_u32[1] = v68;
        FIELD_U32(a4 + (78) * 8, 0x0)[0] = v69;
        v70 = a4[63].n64_u32[0];
        v71 = a4[63].n64_u32[1];
        v72 = FIELD_U32(a4 + (64) * 8, 0x0)[0];
        v73 = FIELD_U32(a4 + (64) * 8, 0x0)[1];
        FIELD_U32(a4 + (78) * 8, 0x0)[1] = FIELD_U32(a4 + (62) * 8, 0x0)[1];
        a4[79].n64_u32[0] = v70;
        a4[79].n64_u32[1] = v71;
        FIELD_U32(a4 + (80) * 8, 0x0)[0] = v72;
        FIELD_U32(a4 + (80) * 8, 0x0)[1] = v73;
        v74 = a4[65].n64_u32[1];
        v75 = FIELD_U32(a4 + (66) * 8, 0x0)[0];
        v20 = FIELD_U32(a4 + (66) * 8, 0x0)[1];
        v21 = a4[67].n64_u64[0];
        a4[81].n64_u32[0] = a4[65].n64_u32[0];
        a4[81].n64_u32[1] = v74;
        FIELD_U32(a4 + (82) * 8, 0x0)[0] = v75;
      }
      FIELD_U32(v4, 660) = v20;
      FIELD_U64(v4, 664) = v21;
      v76 = vaddq_f32(*(float32x4_t *)(v4 + 592), *(float32x4_t *)(v4 + 1008));
      *(float32x4_t *)(v4 + 592) = v76;
      *(float32x4_t *)(v4 + 656) = v76;
      a4 = *(float32x2_t **)(v4 + 900);
      if ( *(_BYTE *)(FIELD_U32(a4 + (17) * 8, 0x0)[0] + 1875) != 1 )
      {
        v169 = *(float32x4_t *)FIELD_U64(a4 + (68) * 8, 0x0);
        v173 = *(float32x4_t *)FIELD_U64(a4 + (70) * 8, 0x0);
        v77.n64_u64[0] = *(unsigned __int64 *)(v4 + 576);
        v182 = *(float32x4_t *)FIELD_U64(a4 + (72) * 8, 0x0);
        v187 = *(float32x4_t *)FIELD_U64(a4 + (74) * 8, 0x0);
        v78 = vmulq_n_f32(v169, v76.n128_f32[0]);
        v79 = vmulq_n_f32(v169, v77.n64_f32[0]);
        v80 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v169, FIELD_F32(v4, 544)), v173, *(float32x2_t *)(v4 + 544), 1),
                v182,
                *(float32x2_t *)(v4 + 552),
                0);
        v81 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v169, FIELD_F32(v4, 560)), v173, *(float32x2_t *)(v4 + 560), 1),
                v182,
                *(float32x2_t *)(v4 + 568),
                0);
        v82 = vmlaq_lane_f32(vmlaq_lane_f32(v79, v173, v77, 1), v182, *(float32x2_t *)(v4 + 584), 0);
        *(float32x4_t *)(v4 + 544) = v80;
        *(float32x4_t *)(v4 + 560) = v81;
        *(float32x4_t *)(v4 + 576) = v82;
        *(float32x4_t *)(v4 + 592) = vaddq_f32(
                                       v187,
                                       vmlaq_lane_f32(
                                         vmlaq_lane_f32(v78, v173, (float32x2_t)v76.n128_u64[0], 1),
                                         v182,
                                         *(float32x2_t *)&v76.n128_i8[8],
                                         0));
        v83 = *(float32x4_t *)FIELD_U64(a4 + (76) * 8, 0x0);
        v174 = *(float32x4_t *)FIELD_U64(a4 + (78) * 8, 0x0);
        v84 = (float32x4_t *)&a4[80];
        a4 += 82;
        v85 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v83, v76.n128_f32[0]), v174, (float32x2_t)v76.n128_u64[0], 1),
                *v84,
                *(float32x2_t *)&v76.n128_i8[8],
                0);
        v86 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v83, FIELD_F32(v4, 608)), v174, *(float32x2_t *)(v4 + 608), 1),
                *v84,
                *(float32x2_t *)(v4 + 616),
                0);
        v87 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v83, FIELD_F32(v4, 624)), v174, *(float32x2_t *)(v4 + 624), 1),
                *v84,
                *(float32x2_t *)(v4 + 632),
                0);
        v88 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v83, FIELD_F32(v4, 640)), v174, *(float32x2_t *)(v4 + 640), 1),
                *v84,
                *(float32x2_t *)(v4 + 648),
                0);
        v89 = vaddq_f32(*(float32x4_t *)FIELD_U64(a4, 0x0), v85);
        *(float32x4_t *)(v4 + 608) = v86;
        *(float32x4_t *)(v4 + 624) = v87;
        *(float32x4_t *)(v4 + 640) = v88;
        *(float32x4_t *)(v4 + 656) = v89;
      }
    }
    else
    {
      if ( *(_BYTE *)(a4[43].n64_u32[1] + 2) )
      {
        sub_608982F0(a1, a2, v5, a4, &v162, (float32x4_t *)v157);
        v37 = *(__int64 *)((char *)v162.n128_i64 + 4);
        v38 = v162.n128_u32[3];
        v39 = v163.n64_u32[0];
        FIELD_U32(v4, 544) = v162.n128_u32[0];
        FIELD_U64(v4, 548) = v37;
        FIELD_U32(v4, 556) = v38;
        FIELD_U32(v4, 560) = v39;
        v40 = v164.n64_u64[0];
        v42 = v165.n64_u32[1];
        v41 = v165.n64_u32[0];
        FIELD_U32(v4, 564) = v163.n64_u32[1];
        FIELD_U64(v4, 568) = v40;
        FIELD_U64(v4, 576) = __PAIR64__(v42, v41);
        v43 = *(_QWORD *)((char *)&v166 + 4);
        v44 = HIDWORD(v166);
        v45 = v167.n64_u64[0];
        FIELD_U32(v4, 584) = v166;
        FIELD_U64(v4, 588) = v43;
        FIELD_U32(v4, 596) = v44;
        FIELD_U64(v4, 600) = v45;
        v46 = *(_QWORD *)&v157[4];
        v47 = *(_QWORD *)&v157[12];
        FIELD_U32(v4, 608) = *(_DWORD *)v157;
        FIELD_U64(v4, 612) = v46;
        FIELD_U64(v4, 620) = v47;
        v48 = v158.n64_u64[0];
        v49 = v159.n64_u64[0];
        FIELD_U32(v4, 628) = *(_DWORD *)&v157[20];
        FIELD_U64(v4, 632) = v48;
        FIELD_U64(v4, 640) = v49;
        v50 = *(_QWORD *)((char *)&v160 + 4);
        v51 = HIDWORD(v160);
        v52 = v161.n64_u64[0];
        FIELD_U32(v4, 648) = v160;
        FIELD_U64(v4, 652) = v50;
      }
      else
      {
        v110 = FIELD_U32(a4 + (52) * 8, 0x0)[1];
        v111 = a4[53].n64_u32[0];
        v112 = a4[53].n64_u32[1];
        v113 = FIELD_U32(a4 + (54) * 8, 0x0)[0];
        FIELD_U32(a4 + (68) * 8, 0x0)[0] = FIELD_U32(a4 + (52) * 8, 0x0)[0];
        FIELD_U32(a4 + (68) * 8, 0x0)[1] = v110;
        a4[69].n64_u32[0] = v111;
        a4[69].n64_u32[1] = v112;
        FIELD_U32(a4 + (70) * 8, 0x0)[0] = v113;
        v114 = a4[55].n64_u32[0];
        v115 = a4[55].n64_u32[1];
        v116 = FIELD_U32(a4 + (56) * 8, 0x0)[0];
        v117 = FIELD_U32(a4 + (56) * 8, 0x0)[1];
        FIELD_U32(a4 + (70) * 8, 0x0)[1] = FIELD_U32(a4 + (54) * 8, 0x0)[1];
        a4[71].n64_u32[0] = v114;
        a4[71].n64_u32[1] = v115;
        FIELD_U32(a4 + (72) * 8, 0x0)[0] = v116;
        FIELD_U32(a4 + (72) * 8, 0x0)[1] = v117;
        v118 = a4[57].n64_u32[1];
        v119 = FIELD_U32(a4 + (58) * 8, 0x0)[0];
        v120 = FIELD_U32(a4 + (58) * 8, 0x0)[1];
        v121 = a4[59].n64_u32[0];
        v122 = a4[59].n64_u32[1];
        a4[73].n64_u32[0] = a4[57].n64_u32[0];
        a4[73].n64_u32[1] = v118;
        FIELD_U32(a4 + (74) * 8, 0x0)[0] = v119;
        FIELD_U32(a4 + (74) * 8, 0x0)[1] = v120;
        a4[75].n64_u32[0] = v121;
        a4[75].n64_u32[1] = v122;
        v123 = FIELD_U32(a4 + (60) * 8, 0x0)[1];
        v124 = a4[61].n64_u32[0];
        v125 = a4[61].n64_u32[1];
        v126 = FIELD_U32(a4 + (62) * 8, 0x0)[0];
        FIELD_U32(a4 + (76) * 8, 0x0)[0] = FIELD_U32(a4 + (60) * 8, 0x0)[0];
        FIELD_U32(a4 + (76) * 8, 0x0)[1] = v123;
        a4[77].n64_u32[0] = v124;
        a4[77].n64_u32[1] = v125;
        FIELD_U32(a4 + (78) * 8, 0x0)[0] = v126;
        v127 = a4[63].n64_u32[0];
        v128 = a4[63].n64_u32[1];
        v129 = FIELD_U32(a4 + (64) * 8, 0x0)[0];
        v130 = FIELD_U32(a4 + (64) * 8, 0x0)[1];
        FIELD_U32(a4 + (78) * 8, 0x0)[1] = FIELD_U32(a4 + (62) * 8, 0x0)[1];
        a4[79].n64_u32[0] = v127;
        a4[79].n64_u32[1] = v128;
        FIELD_U32(a4 + (80) * 8, 0x0)[0] = v129;
        FIELD_U32(a4 + (80) * 8, 0x0)[1] = v130;
        v131 = a4[65].n64_u32[1];
        v132 = FIELD_U32(a4 + (66) * 8, 0x0)[0];
        v51 = FIELD_U32(a4 + (66) * 8, 0x0)[1];
        v52 = a4[67].n64_u64[0];
        a4[81].n64_u32[0] = a4[65].n64_u32[0];
        a4[81].n64_u32[1] = v131;
        FIELD_U32(a4 + (82) * 8, 0x0)[0] = v132;
      }
      FIELD_U32(v4, 660) = v51;
      FIELD_U64(v4, 664) = v52;
      v133 = FIELD_U32(v4, 900);
      a4 = (float32x2_t *)*(unsigned __int8 *)(FIELD_U32(v133, 136) + 1875);
      if ( a4 != (float32x2_t *)1 )
      {
        v171 = *(float32x4_t *)(v133 + 544);
        v134.n64_u64[0] = *(unsigned __int64 *)(v4 + 592);
        v135.n64_u64[0] = *(unsigned __int64 *)(v4 + 576);
        v177 = *(float32x4_t *)(v133 + 560);
        v183 = *(float32x4_t *)(v133 + 576);
        v190 = *(float32x4_t *)(v133 + 592);
        v136 = vmulq_n_f32(v171, v134.n64_f32[0]);
        v137 = vmulq_n_f32(v171, v135.n64_f32[0]);
        v138 = vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v171, FIELD_F32(v4, 544)), v177, *(float32x2_t *)(v4 + 544), 1),
                 v183,
                 *(float32x2_t *)(v4 + 552),
                 0);
        v139 = vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v171, FIELD_F32(v4, 560)), v177, *(float32x2_t *)(v4 + 560), 1),
                 v183,
                 *(float32x2_t *)(v4 + 568),
                 0);
        v140 = vmlaq_lane_f32(vmlaq_lane_f32(v136, v177, v134, 1), v183, *(float32x2_t *)(v4 + 600), 0);
        v141 = vmlaq_lane_f32(vmlaq_lane_f32(v137, v177, v135, 1), v183, *(float32x2_t *)(v4 + 584), 0);
        *(float32x4_t *)(v4 + 544) = v138;
        *(float32x4_t *)(v4 + 560) = v139;
        *(float32x4_t *)(v4 + 576) = v141;
        a4 = (float32x2_t *)(v4 + 640);
        *(float32x4_t *)(v4 + 592) = vaddq_f32(v190, v140);
        v178 = *(float32x4_t *)(v133 + 624);
        v142 = *(float32x4_t *)(v133 + 608);
        v143.n64_u64[0] = *(unsigned __int64 *)(v4 + 656);
        v144.n64_u64[0] = *(unsigned __int64 *)(v4 + 664);
        v145.n64_u64[0] = *(unsigned __int64 *)(v4 + 640);
        v184 = *(float32x4_t *)(v133 + 640);
        v191 = *(float32x4_t *)(v133 + 656);
        v146 = vmulq_n_f32(v142, v143.n64_f32[0]);
        v147 = vmulq_n_f32(v142, v145.n64_f32[0]);
        v148 = vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v142, FIELD_F32(v4, 608)), v178, *(float32x2_t *)(v4 + 608), 1),
                 v184,
                 *(float32x2_t *)(v4 + 616),
                 0);
        v149 = vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v142, FIELD_F32(v4, 624)), v178, *(float32x2_t *)(v4 + 624), 1),
                 v184,
                 *(float32x2_t *)(v4 + 632),
                 0);
        v150 = vmlaq_lane_f32(vmlaq_lane_f32(v147, v178, v145, 1), v184, *(float32x2_t *)(v4 + 648), 0);
        *(float32x4_t *)(v4 + 608) = v148;
        *(float32x4_t *)(v4 + 624) = v149;
        *(float32x4_t *)(v4 + 640) = v150;
        *(float32x4_t *)(v4 + 656) = vaddq_f32(v191, vmlaq_lane_f32(vmlaq_lane_f32(v146, v178, v143, 1), v184, v144, 0));
      }
    }
  }
  else
  {
    v22 = FIELD_U32(a4 + (14) * 8, 0x0)[1];
    if ( *(_BYTE *)(a4[43].n64_u32[1] + 2) )
    {
      sub_608982F0(a1, a2, *(unsigned __int8 *)(a4[43].n64_u32[1] + 2), a4, &v162, (float32x4_t *)v157);
      v172 = *(float32x4_t *)(v22 + 80);
      v168 = *(float32x4_t *)(v22 + 112);
      v179 = *(float32x4_t *)(v22 + 96);
      v185 = *(float32x4_t *)(v22 + 128);
      v23 = vmulq_n_f32(v172, v162.n128_f32[0]);
      v24 = vmulq_n_f32(v172, v165.n64_f32[0]);
      v25 = vmulq_n_f32(v172, v163.n64_f32[0]);
      v26 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v172, *((float *)&v166 + 2)), v179, *((float32x2_t *)&v166 + 1), 1),
              v168,
              v167,
              0);
      v27 = vmlaq_lane_f32(vmlaq_lane_f32(v25, v179, v163, 1), v168, v164, 0);
      v28 = vmlaq_lane_f32(vmlaq_lane_f32(v24, v179, v165, 1), v168, *(float32x2_t *)&v166, 0);
      *(float32x4_t *)(v4 + 544) = vmlaq_lane_f32(
                                     vmlaq_lane_f32(v23, v179, (float32x2_t)v162.n128_u64[0], 1),
                                     v168,
                                     *(float32x2_t *)&v162.n128_i8[8],
                                     0);
      *(float32x4_t *)(v4 + 560) = v27;
      *(float32x4_t *)(v4 + 576) = v28;
      *(float32x4_t *)(v4 + 592) = vaddq_f32(v185, v26);
      v29 = *(float32x4_t *)(v22 + 144);
      v180 = *(float32x4_t *)(v22 + 160);
      v30 = *(float32x4_t *)(v22 + 176);
      a4 = (float32x2_t *)(v4 + 640);
      v186 = *(float32x4_t *)(v22 + 192);
      v31 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v29, *(float *)v157), v180, *(float32x2_t *)v157, 1),
              v30,
              *(float32x2_t *)&v157[8],
              0);
      v32 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v29, *(float *)&v157[16]), v180, *(float32x2_t *)&v157[16], 1),
              v30,
              v158,
              0);
      v33 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v29, v159.n64_f32[0]), v180, v159, 1),
              v30,
              *(float32x2_t *)&v160,
              0);
      v34 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(v29, *((float *)&v160 + 2)), v180, *((float32x2_t *)&v160 + 1), 1),
              v30,
              v161,
              0);
      *(float32x4_t *)(v4 + 608) = v31;
      *(float32x4_t *)(v4 + 624) = v32;
      v35 = (float32x4_t *)(v4 + 656);
      v36 = vaddq_f32(v186, v34);
    }
    else
    {
      if ( !FIELD_U32(v22, 20) )
        goto LABEL_18;
      v90.n64_u64[0] = FIELD_U64(a4 + (52) * 8, 0x0)[0];
      v181 = *(float32x4_t *)(v22 + 80);
      v91.n64_u64[0] = FIELD_U64(a4 + (54) * 8, 0x0)[0];
      v92.n64_u64[0] = FIELD_U64(a4 + (56) * 8, 0x0)[0];
      v170 = *(float32x4_t *)(v22 + 96);
      v175 = *(float32x4_t *)(v22 + 112);
      v188 = *(float32x4_t *)(v22 + 128);
      v93 = vmulq_n_f32(v181, v90.n64_f32[0]);
      v94 = vmulq_n_f32(v181, v91.n64_f32[0]);
      v95 = vmulq_n_f32(v181, v92.n64_f32[0]);
      v96 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v181, FIELD_F32(a4 + (58) * 8, 0x0)[0]), v170, a4[58], 1), v175, a4[59], 0);
      v97 = vmlaq_lane_f32(vmlaq_lane_f32(v94, v170, v91, 1), v175, a4[55], 0);
      v98 = vmlaq_lane_f32(vmlaq_lane_f32(v95, v170, v92, 1), v175, a4[57], 0);
      *(float32x4_t *)FIELD_U64(a4 + (68) * 8, 0x0) = vmlaq_lane_f32(vmlaq_lane_f32(v93, v170, v90, 1), v175, a4[53], 0);
      *(float32x4_t *)FIELD_U64(a4 + (70) * 8, 0x0) = v97;
      *(float32x4_t *)FIELD_U64(a4 + (72) * 8, 0x0) = v98;
      *(float32x4_t *)FIELD_U64(a4 + (74) * 8, 0x0) = vaddq_f32(v188, v96);
      v99.n64_u64[0] = FIELD_U64(a4 + (60) * 8, 0x0)[0];
      v100.n64_u64[0] = a4[61].n64_u64[0];
      v101 = *(float32x4_t *)(v22 + 144);
      v102.n64_u64[0] = FIELD_U64(a4 + (62) * 8, 0x0)[0];
      v103.n64_u64[0] = a4[63].n64_u64[0];
      v104 = *(float32x4_t *)(v22 + 160);
      v105.n64_u64[0] = FIELD_U64(a4 + (64) * 8, 0x0)[0];
      v106.n64_u64[0] = a4[65].n64_u64[0];
      v107.n64_u64[0] = FIELD_U64(a4 + (66) * 8, 0x0)[0];
      v108.n64_u64[0] = a4[67].n64_u64[0];
      v176 = *(float32x4_t *)(v22 + 176);
      v189 = *(float32x4_t *)(v22 + 192);
      a4 += 80;
      v109 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v101, v102.n64_f32[0]), v104, v102, 1), v176, v103, 0);
      v33 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v101, v105.n64_f32[0]), v104, v105, 1), v176, v106, 0);
      *(float32x4_t *)(v4 + 608) = vmlaq_lane_f32(
                                     vmlaq_lane_f32(vmulq_n_f32(v101, v99.n64_f32[0]), v104, v99, 1),
                                     v176,
                                     v100,
                                     0);
      v36 = vaddq_f32(
              v189,
              vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v101, v107.n64_f32[0]), v104, v107, 1), v176, v108, 0));
      *(float32x4_t *)(v4 + 624) = v109;
      v35 = (float32x4_t *)(v4 + 656);
    }
    *(float32x4_t *)FIELD_U64(a4, 0x0) = v33;
    *v35 = v36;
  }
LABEL_18:
  v162.n128_u32[0] = v4;
  result = FIELD_U32(v4, 712);
  v152 = FIELD_U32(v4, 704);
  v153 = FIELD_U32(v4, 708);
  v154 = result == 0;
  if ( result )
  {
    a4 = *(float32x2_t **)(result + 12);
    v154 = a4 == 0;
  }
  if ( !v154 )
    result = ((int (__fastcall *)(float32x4_t *))a4)(&v162);
  v155 = v152 == 0;
  if ( v152 )
  {
    a4 = *(float32x2_t **)(v152 + 12);
    v155 = a4 == 0;
  }
  if ( !v155 )
    result = ((int (__fastcall *)(float32x4_t *))a4)(&v162);
  v156 = v153 == 0;
  if ( v153 )
  {
    a4 = *(float32x2_t **)(v153 + 12);
    v156 = a4 == 0;
  }
  if ( !v156 )
    return ((int (__fastcall *)(float32x4_t *))a4)(&v162);
  return result;
}
