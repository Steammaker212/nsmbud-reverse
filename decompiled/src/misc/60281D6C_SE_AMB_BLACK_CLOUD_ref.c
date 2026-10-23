/* SE_AMB_BLACK_CLOUD_ref
 * address: 0x60281D6C   size: 3520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_BLACK_CLOUD_ref(int a1)
{
  int v1; // lr
  float *v2; // r12
  int v3; // r5
  int v4; // r0
  float v5; // s22
  float v6; // s24
  float v7; // s19
  float v8; // s17
  float v9; // s27
  float v10; // s26
  float v11; // s21
  int v12; // r4
  int v13; // r8
  int v14; // r10
  unsigned int v15; // r11
  float v16; // s18
  float **v17; // r6
  unsigned int *v18; // r1
  float v19; // s2
  float v20; // s23
  float *v21; // r0
  unsigned int v22; // r1
  float *v23; // r2
  float v24; // s4
  _DWORD *v25; // r2
  float v26; // s2
  float v27; // s20
  float v28; // s23
  float v29; // s17
  float v30; // s25
  float v31; // s30
  float v32; // s28
  float v33; // s16
  float v34; // r0
  float v35; // s31
  float v36; // s18
  float *v37; // r1
  float v38; // s16
  float v39; // s2
  float v40; // s27
  float *v41; // r1
  float v42; // s2
  float v43; // s21
  float v44; // s20
  float v45; // s23
  float v46; // s19
  float v47; // s26
  unsigned int U32; // r0
  float v49; // s2
  float v50; // s24
  float v51; // s20
  float v52; // s22
  float v53; // s26
  float v54; // s20
  unsigned int v55; // r0
  float v56; // s4
  unsigned int *v57; // r5
  int v58; // s2
  float *v59; // r0
  float v60; // s2
  float v61; // s2
  float *v62; // r0
  float v63; // s0
  unsigned int *v64; // r0
  unsigned int v65; // r0
  unsigned int *v66; // r1
  float *v67; // r0
  _DWORD *v68; // r1
  _DWORD *v69; // r0
  float *v70; // r0
  float v71; // s2
  _DWORD *v72; // r0
  _DWORD *v73; // r0
  _DWORD *v74; // r0
  _DWORD *v75; // r0
  float v76; // r5
  float v77; // r7
  float v78; // s16
  int v79; // r6
  _DWORD *v80; // r0
  float v81; // s0
  float *v82; // r0
  _DWORD *v83; // r1
  int v84; // r0
  float *v85; // r0
  float v86; // s0
  unsigned int *v87; // r1
  unsigned int *v88; // r3
  _DWORD *v89; // r0
  unsigned int v90; // r0
  int v91; // r1
  int v92; // r0
  float *v93; // r1
  int v94; // r5
  float v95; // s8
  bool v96; // cc
  unsigned int *v97; // r1
  float v98; // r0
  int v99; // r2
  int v100; // r1
  int *v101; // r0
  char v102; // r12
  int *v103; // r1
  bool v104; // zf
  float *v105; // r0
  float v106; // s0
  float *v108; // [sp+Ch] [bp-134h]
  float **v109; // [sp+1Ch] [bp-124h]
  float *v110; // [sp+20h] [bp-120h]
  unsigned int *v111; // [sp+24h] [bp-11Ch]
  float *v112; // [sp+28h] [bp-118h]
  float *v113; // [sp+2Ch] [bp-114h]
  float *v114; // [sp+30h] [bp-110h]
  float *v115; // [sp+34h] [bp-10Ch]
  unsigned int *v116; // [sp+38h] [bp-108h]
  unsigned int **v117; // [sp+3Ch] [bp-104h]
  unsigned int v118; // [sp+40h] [bp-100h]
  float v119; // [sp+44h] [bp-FCh]
  unsigned int *v120; // [sp+48h] [bp-F8h]
  _DWORD **v121; // [sp+4Ch] [bp-F4h]
  unsigned int *v122; // [sp+50h] [bp-F0h]
  _DWORD **v123; // [sp+54h] [bp-ECh]
  unsigned int *v124; // [sp+58h] [bp-E8h]
  _DWORD **v125; // [sp+5Ch] [bp-E4h]
  float *v127; // [sp+64h] [bp-DCh]
  _DWORD *v128; // [sp+6Ch] [bp-D4h]
  _DWORD *v129; // [sp+74h] [bp-CCh]
  unsigned int **v130; // [sp+78h] [bp-C8h]
  float *v131; // [sp+7Ch] [bp-C4h]
  unsigned int *v132; // [sp+80h] [bp-C0h]
  float **v133; // [sp+84h] [bp-BCh]
  unsigned int *v134; // [sp+88h] [bp-B8h]
  unsigned int **v135; // [sp+8Ch] [bp-B4h]
  unsigned int *v136; // [sp+90h] [bp-B0h]
  _DWORD **v137; // [sp+94h] [bp-ACh]
  float **v138; // [sp+98h] [bp-A8h]
  unsigned int *v139; // [sp+9Ch] [bp-A4h]
  _DWORD **v140; // [sp+A0h] [bp-A0h]
  unsigned int *v141; // [sp+A4h] [bp-9Ch]
  __int64 v142; // [sp+B0h] [bp-90h]
  __int64 v143; // [sp+D0h] [bp-70h]

  v1 = a1;
  v2 = (float *)dword_60CC6484;
  FIELD_U32(a1, 6356) = 400;
  v3 = FIELD_U32(dword_60C995D0, 32);
  v127 = v2;
  if ( !v3 )
    goto LABEL_7;
  if ( ((unsigned int)&dword_60C8F06C & ~(1613241800 << (char)v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
  {
    dword_60C8F068 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8F06C);
  }
  v4 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, &dword_60C8F068);
  v2 = v127;
  v1 = a1;
  if ( v4 != 1 )
  {
LABEL_7:
    v5 = 0.0;
    v6 = 40.0;
    v7 = 0.000000059605;
    v8 = 0.3;
    v9 = 0.7;
    v10 = 20.0;
    v11 = 0.5;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v128 = (_DWORD *)(v1 + 16540);
    v125 = (_DWORD **)(v1 + 6392);
    v16 = 0.0;
    v124 = (unsigned int *)(v1 + 6388);
    v123 = (_DWORD **)(v1 + 6416);
    v122 = (unsigned int *)(v1 + 6412);
    v121 = (_DWORD **)(v1 + 6384);
    v120 = (unsigned int *)(v1 + 6380);
    v108 = (float *)(v1 + 16552);
    v117 = (unsigned int **)(v1 + 6432);
    v116 = (unsigned int *)(v1 + 6428);
    v131 = (float *)(v1 + 6496);
    v115 = (float *)(v1 + 16556);
    v114 = (float *)(v1 + 6472);
    v113 = (float *)(v1 + 6476);
    v112 = (float *)(v1 + 6468);
    v133 = (float **)(v1 + 6408);
    v132 = (unsigned int *)(v1 + 6404);
    v111 = (unsigned int *)(v1 + 6396);
    v130 = (unsigned int **)(v1 + 6456);
    v129 = (_DWORD *)(v1 + 6452);
    v140 = (_DWORD **)(v1 + 6440);
    v139 = (unsigned int *)(v1 + 6436);
    v135 = (unsigned int **)(v1 + 6448);
    v134 = (unsigned int *)(v1 + 6444);
    v137 = (_DWORD **)(v1 + 6424);
    v136 = (unsigned int *)(v1 + 6420);
    v17 = (float **)(v1 + 6376);
    v18 = (unsigned int *)(v1 + 6372);
    v138 = (float **)(v1 + 6376);
    v110 = (float *)(v1 + 6464);
    v141 = (unsigned int *)(v1 + 6372);
    v109 = (float **)(v1 + 6400);
    do
    {
      v21 = *v17;
      v22 = *v18;
      v23 = *v17;
      if ( v22 > v15 )
        v23 = (float *)((char *)v23 + v13);
      v24 = v23[1];
      v25 = *v137;
      if ( *v136 > v15 )
        v25 = (_DWORD *)((char *)v25 + v14);
      v26 = 1.0
          - (float)((float)((float)(v24 - (float)(v2[31] - v2[27])) / v2[27])
                  * (float)((float)(v24 - (float)(v2[31] - v2[27])) / v2[27]));
      v27 = 1.0 - (float)((float)(v26 * v26) * (float)(v26 * v26));
      v20 = 1.0;
      switch ( *v25 )
      {
        case 0:
          v28 = v8;
          v119 = v16;
          v29 = v7;
          v30 = v10;
          v31 = v6;
          v32 = v5;
          LODWORD(v33) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
          LODWORD(v34) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
          v35 = v11;
          v36 = v9;
          v37 = *v109;
          if ( *v111 > v15 )
            v37 = (float *)((char *)v37 + v14);
          v38 = (float)((float)(v33 + -1.0) * 0.9) + 0.1;
          v39 = v9;
          v40 = v28;
          *v37 = v38 * v11;
          v41 = *v133;
          v42 = v39 + (float)((float)(v34 + -1.0) * v28);
          if ( *v132 > v15 )
            v41 = (float *)((char *)v41 + v14);
          *v41 = v42;
          v43 = (float)((float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                              + -1.0)
                      * 1.05)
              + -0.05;
          if ( v43 < 0.0 )
            v43 = (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0)
                * 0.05;
          v44 = *v113;
          v45 = *v114;
          v46 = *v110;
          v47 = *v112;
          U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v49 = v44 - v47;
          v118 = U32;
          v50 = *v114;
          v51 = v47 + (float)(v44 - v47);
          v52 = *v110;
          v53 = (float)((float)((float)(1.0 - v43) * (float)((float)(1.0 - v43) * (float)(1.0 - v43))) * 0.4) + 0.6;
          v54 = v51 - (float)(v43 * v49);
          v55 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          if ( v53 <= *v115 )
          {
            v61 = v45 - v46;
            v57 = v141;
            v17 = v138;
            v5 = v32;
            v6 = v31;
            v7 = v29;
            v11 = v35;
            v62 = *v138;
            if ( *v141 > v15 )
              v62 = (float *)((char *)v62 + v13);
            v63 = v53 * (float)(v61 * (float)(COERCE_FLOAT((v118 >> 9) | 0x3F800000) + -1.0));
            v10 = v30;
            *v62 = v63;
            v62[1] = v54;
            v62[2] = v38;
            if ( v63 > *v108 )
              *v108 = v63;
          }
          else
          {
            v56 = v50 - v52;
            v57 = v141;
            v17 = v138;
            v5 = v32;
            v6 = v31;
            v10 = v30;
            v7 = v29;
            v11 = v35;
            v58 = (v55 >> 9) | 0x3F800000;
            v59 = *v138;
            v60 = *(float *)&v58 + -1.0;
            if ( *v141 > v15 )
              v59 = (float *)((char *)v59 + v13);
            *v59 = *v115 * (float)(v56 * v60);
            v59[1] = v54;
            v59[2] = v38;
          }
          *v131 = 1.0;
          v64 = *v135;
          if ( *v134 > v15 )
            v64 = (unsigned int *)((char *)v64 + v14);
          *v64 = -1;
          v65 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v8 = v40;
          v9 = v36;
          v66 = *v117;
          if ( *v116 > v15 )
            v66 = (unsigned int *)((char *)v66 + v14);
          *v66 = v65;
          v67 = *v133;
          if ( *v132 > v15 )
            v67 = (float *)((char *)v67 + v14);
          v68 = *v140;
          if ( *v139 > v15 )
            v68 = (_DWORD *)((char *)v68 + v14);
          *v68 = (int)(float)((float)(*v67 * 65536.0) * 65536.0);
          v69 = *v137;
          if ( *v136 > v15 )
            v69 = (_DWORD *)((char *)v69 + v14);
          ++*v69;
          v2 = v127;
          v70 = *v17;
          v16 = v119;
          v1 = a1;
          if ( *v57 > v15 )
            v70 = (float *)((char *)v70 + v13);
          v71 = 1.0
              - (float)((float)((float)(v70[1] - (float)(v127[31] - v127[27])) / v127[27])
                      * (float)((float)(v70[1] - (float)(v127[31] - v127[27])) / v127[27]));
          v27 = 1.0 - (float)((float)(v71 * v71) * (float)(v71 * v71));
          goto LABEL_45;
        case 1:
LABEL_45:
          v72 = *v121;
          if ( *v120 > v15 )
            v72 = (_DWORD *)((char *)v72 + v13);
          *v72 = 0;
          v72[1] = 0;
          v72[2] = 0;
          v73 = *v123;
          if ( *v122 > v15 )
            v73 = (_DWORD *)((char *)v73 + v14);
          *v73 = 0;
          v74 = *v125;
          if ( *v124 > v15 )
            v74 = (_DWORD *)((char *)v74 + v12);
          *v74 = 1112014848;
          v74[1] = 1112014848;
          v75 = *v137;
          if ( *v136 > v15 )
            v75 = (_DWORD *)((char *)v75 + v14);
          ++*v75;
          v21 = *v17;
          v22 = *v141;
          goto LABEL_54;
        case 2:
        case 0xA:
        case 0xB:
LABEL_54:
          if ( v22 > v15 )
            v21 = (float *)((char *)v21 + v13);
          v20 = *v131;
          v76 = v21[1];
          v77 = v21[2];
          v78 = *v21 + FIELD_F32(v1, 108);
          v79 = *(_DWORD *)(PlayerMgr_instance + 4 * (*v128 & 3) + 32);
          if ( v79 && (FIELD_U8(v79, 1219) & 8) == 0 )
          {
            v80 = *v137;
            if ( *v136 > v15 )
              v80 = (_DWORD *)((char *)v80 + v14);
            if ( *v80 == 2
              && sqrtf(
                   (float)((float)((float)((float)(FIELD_F32(v79, 112) + 10.0) - v76)
                                 * (float)((float)(FIELD_F32(v79, 112) + 10.0) - v76))
                         + (float)((float)(FIELD_F32(v79, 108) - v78) * (float)(FIELD_F32(v79, 108) - v78)))
                 + (float)((float)(v77 - v77) * (float)(v77 - v77))) < 25.0 )
            {
              (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v79 + 1172))(v79, 0, 16);
              v1 = a1;
              v2 = v127;
            }
          }
          v81 = v2[28];
          if ( v78 < (float)(v81 + -32.0)
            || v78 > (float)((float)(v81 + v2[26]) + 32.0)
            || (v19 = v2[31], v76 > (float)(v19 + 32.0)) )
          {
            v20 = v5;
          }
          else if ( v76 < (float)((float)(v19 - v2[27]) + -32.0) )
          {
            v20 = v5;
          }
          v82 = *v133;
          if ( *v132 > v15 )
            v82 = (float *)((char *)v82 + v14);
          v83 = *v140;
          v84 = (int)(float)((float)(v8 + (float)((float)(1.0 - v27) * v9)) * (float)(*v82 * 350.0));
          if ( *v139 > v15 )
            v83 = (_DWORD *)((char *)v83 + v14);
          *v83 += v84 << 16;
          v85 = *v138;
          if ( *v141 > v15 )
            v85 = (float *)((char *)v85 + v13);
          if ( v16 < v78 )
            v16 = v78;
          *v85 = v78 - FIELD_F32(v1, 108);
          v85[1] = v76;
          v85[2] = v77;
          break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          break;
        default:
          v20 = 1.0;
          break;
      }
      v12 += 8;
      v13 += 12;
      v86 = (float)(1.0 - v27) * 70.0;
      v87 = *v135;
      if ( *v134 > v15 )
        v87 = (unsigned int *)((char *)v87 + v14);
      *v87 = (unsigned int)(float)(v20 * 255.0)
           | (((unsigned __int8)byte_60C8F0C3 + (unsigned int)v86) << 24)
           | ((unsigned int)(float)((float)(unsigned int)(float)((float)(1.0 - v27) * v6)
                                  + (float)(v27 * (float)(unsigned __int8)byte_60C8F0C2)) << 16)
           | ((unsigned int)(float)((float)(unsigned int)(float)((float)(1.0 - v27) * v10)
                                  + (float)(v27 * (float)(unsigned __int8)byte_60C8F0C1)) << 8);
      v88 = *v135;
      v89 = *v140;
      v17 = v138;
      if ( *v139 > v15 )
        v89 = (_DWORD *)((char *)v89 + v14);
      v90 = 5 * *v89;
      v91 = (v90 >> 20) & 0xFF0;
      v92 = v90 & 0xFFFFFF;
      v93 = (float *)((char *)sinLutTable + v91);
      v94 = (unsigned __int8)byte_60C8F0C7;
      if ( *v134 > v15 )
        v88 = (unsigned int *)((char *)v88 + v14);
      v95 = v11 + (float)((float)(*v93 + (float)((float)(v93[1] * (float)(unsigned int)v92) * v7)) * v11);
      v96 = *v129 > v15++;
      v97 = *v130;
      if ( v96 )
        v97 = (unsigned int *)((char *)v97 + v14);
      v14 += 4;
      *v97 = *(unsigned __int8 *)v88
           | ((unsigned int)(float)(v86 + (float)(v27 * (float)(unsigned __int8)byte_60C8F0C6)) << 16)
           | ((unsigned int)(float)(v27 * (float)(unsigned __int8)byte_60C8F0C5) << 8)
           | (((unsigned __int8)byte_60C8F0C7 + (unsigned int)(float)(v86 * v95)) << 24);
      v18 = v141;
    }
    while ( v14 != 1600 );
    if ( FIELD_U8(v1, 16560) )
    {
      v98 = FIELD_F32(v1, 108);
    }
    else
    {
      v98 = FIELD_F32(v1, 16512) + FIELD_F32(v1, 108);
      FIELD_F32(v1, 108) = v98;
    }
    FIELD_U32(v1, 112) = 0;
    v99 = FIELD_U32(v1, 16516);
    FIELD_U32(v1, 116) = v99;
    LODWORD(v142) = 0;
    LODWORD(v143) = 1065353216;
    *((float *)&v142 + 1) = v98;
    HIDWORD(v143) = v99;
    FIELD_U64(v1, 6308) = 1065353216;
    FIELD_U64(v1, 6316) = v142;
    FIELD_U64(v1, 6324) = 0x3F80000000000000LL;
    FIELD_U64(v1, 6332) = 0;
    FIELD_U64(v1, 6340) = 0;
    FIELD_U64(v1, 6348) = v143;
    ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v131, 1.0, 0.1, 0.01, 0.0001);
    v100 = a1;
    if ( (FIELD_U8(a1, 21) & 0xF0) != 0 || FIELD_F32(a1, 108) >= (float)(v127[28] + -600.0) )
      goto LABEL_97;
    v101 = (int *)sub_60008598(ActorMgr__instance, 180, *(_DWORD *)(ActorMgr__instance + 27172));
    v103 = *(int **)(ActorMgr__instance + 27180);
    v104 = v101 == v103;
    if ( v101 != v103 )
    {
      v94 = *v101;
      v104 = *v101 == 0;
    }
    if ( v104 )
      goto LABEL_100;
    if ( ((unsigned int)&dword_60C7B364 & ~(1613244972 << v102) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v94)(v94, &StageActor_RTTI) != 1 )
    {
LABEL_100:
      v105 = v127;
      v100 = a1;
      v106 = v127[28];
    }
    else
    {
      v105 = v127;
      v100 = a1;
      v106 = v127[28];
      if ( v106 > (float)(FIELD_F32(v94, 108) + 0.0) )
      {
LABEL_97:
        ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v100 + 16512, 0.4, 0.005, 0.001, 0.0004);
        v105 = v127;
LABEL_98:
        (*(void (__fastcall **)(int, const char *, int, _DWORD, float))(*(_DWORD *)dword_60C7F538 + 48))(
          dword_60C7F538,
          "SE_AMB_BLACK_CLOUD",
          (int)(float)(v105[29] - v16),
          0,
          COERCE_FLOAT((int)(float)(v105[29] - v16)));
        return 1;
      }
    }
    FIELD_F32(v100, 108) = v106 + -600.0;
    goto LABEL_98;
  }
  FIELD_U8(a1, 16560) = 1;
  return 1;
}
