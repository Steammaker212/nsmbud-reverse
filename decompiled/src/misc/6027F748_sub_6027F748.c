/* sub_6027F748
 * address: 0x6027F748   size: 4112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027F748(int a1)
{
  unsigned int v2; // r1
  int v3; // r7
  int v4; // r5
  int v5; // r4
  float v6; // s0
  float v7; // s1
  float v8; // s3
  int v9; // r0
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  StateBase *CurrentState; // r0
  int v14; // r6
  float v15; // s2
  float v16; // s0
  float *v17; // r4
  StateBase *v18; // r0
  int v19; // r5
  int v20; // r10
  float v21; // s31
  unsigned int v22; // r6
  float **v23; // r9
  int *v24; // r4
  int v25; // r0
  float v26; // s20
  int v27; // r7
  _DWORD *v28; // r1
  unsigned int U32; // r0
  float *v30; // r1
  float v31; // s20
  float *v32; // r0
  float *v33; // r0
  float y; // r2
  float z; // r3
  unsigned int v36; // r0
  unsigned int *v37; // r1
  int *v38; // r0
  unsigned int *v39; // r0
  int *v40; // r0
  _DWORD *v41; // r0
  int v42; // r1
  int *v43; // r1
  _DWORD *v44; // r0
  _DWORD *v45; // r1
  int *v46; // r2
  float *v47; // r3
  int v48; // r2
  float *v49; // r0
  _DWORD *v50; // r1
  _DWORD *v51; // r0
  float *v52; // r1
  unsigned int *v53; // r0
  float v54; // s0
  unsigned int v55; // r1
  float *v56; // r3
  int v57; // r2
  float v58; // s17
  float v59; // s19
  float *v60; // r3
  float v61; // s0
  float v62; // s2
  int *v63; // r0
  unsigned int v64; // r7
  float *v65; // r1
  float v66; // s16
  float v67; // s18
  float v68; // s27
  float v69; // s31
  unsigned int v70; // r5
  float *v71; // r0
  float v72; // s26
  float v73; // s28
  float *v74; // r0
  float v75; // s30
  int v76; // r5
  float *v77; // r1
  float v78; // s2
  float *v79; // r1
  float v80; // s26
  float v81; // s27
  float v82; // s16
  float v83; // s19
  float v84; // s17
  int *v85; // r0
  int v86; // r1
  int v87; // r8
  unsigned int v88; // r3
  int *v89; // r1
  int *v90; // r2
  int v91; // r7
  int v92; // r2
  int *v93; // r0
  _DWORD *v94; // r0
  int v95; // r1
  float *v96; // r0
  float v97; // s20
  float v98; // s18
  float v99; // s0
  float v100; // s4
  float v101; // s2
  float *v102; // r0
  float v103; // s6
  unsigned int *v104; // r0
  unsigned int v105; // r2
  int v106; // r1
  _DWORD *v107; // r0
  unsigned int *v108; // r0
  unsigned int v109; // r2
  int v110; // r7
  int *v111; // r0
  int v112; // r5
  int *v113; // r0
  _DWORD *v114; // r0
  float v115; // r5
  char *v116; // r0
  _DWORD *v117; // r0
  _DWORD *v118; // r0
  int v119; // r7
  char *v120; // r0
  float *v121; // r5
  float *v122; // r10
  _DWORD *v123; // r8
  int v124; // r0
  float v125; // s27
  _DWORD *v126; // r0
  char *v127; // r2
  int v128; // r1
  unsigned int v129; // r2
  char *v130; // r3
  int v131; // r2
  char *v132; // r3
  int v133; // r1
  int *v134; // r2
  unsigned int *v135; // r1
  float v136; // r0
  float *v138; // [sp+10h] [bp-138h]
  char *v139; // [sp+30h] [bp-118h]
  float *x; // [sp+34h] [bp-114h]
  int *v141; // [sp+38h] [bp-110h]
  int *v142; // [sp+3Ch] [bp-10Ch]
  unsigned int *p_distToEdge; // [sp+44h] [bp-104h]
  int **p_y; // [sp+48h] [bp-100h]
  _BYTE *v145; // [sp+4Ch] [bp-FCh]
  float *v146; // [sp+54h] [bp-F4h]
  int *v147; // [sp+58h] [bp-F0h]
  int *p_category; // [sp+5Ch] [bp-ECh]
  int *v149; // [sp+60h] [bp-E8h]
  int *v150; // [sp+68h] [bp-E0h]
  unsigned int *p_info; // [sp+70h] [bp-D8h]
  float **v152; // [sp+74h] [bp-D4h]
  unsigned int *p_callback; // [sp+78h] [bp-D0h]
  int **p_trapezoidOffsetTopLeft; // [sp+7Ch] [bp-CCh]
  int v155; // [sp+88h] [bp-C0h]
  unsigned int *p_trapezoidOffsetTopRight; // [sp+8Ch] [bp-BCh]
  unsigned int **p_trapezoidOffsetBottomLeft; // [sp+90h] [bp-B8h]
  StateActor *v158; // [sp+94h] [bp-B4h]
  int v159; // [sp+98h] [bp-B0h]
  float v160; // [sp+9Ch] [bp-ACh]
  int *v161; // [sp+A0h] [bp-A8h]
  __int64 v162; // [sp+D0h] [bp-78h]
  float v163; // [sp+D8h] [bp-70h] BYREF
  int v164; // [sp+DCh] [bp-6Ch] BYREF

  v2 = FIELD_U32(a1, 16544);
  FIELD_U32(a1, 16508) = v2;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  v158 = (StateActor *)a1;
  v4 = 0;
  v5 = a1 + 6480;
  do
  {
    v10 = *(_DWORD *)(PlayerMgr_instance + v4 + 32);
    if ( v10 && (FIELD_U8(v10, 1219) & 8) == 0 )
    {
      v11 = FIELD_U32(v10, 1212);
      v12 = (v11 & 0x40) == 0;
      if ( (v11 & 0x40) == 0 )
        v12 = (FIELD_U8(v10, 1207) & 8) == 0;
      if ( v12 )
      {
        if ( (v11 & 0x100) == 0 && !(FIELD_U32(v10, 1208) & 0x8000000 | v11 & 0x10) )
        {
          v6 = 0.0;
          v7 = 0.1;
          v8 = 0.000001;
          v9 = v5 + v4;
LABEL_13:
          ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v9, v6, v7, 0.1, v8);
          goto LABEL_14;
        }
        v6 = 0.6;
      }
      else
      {
        v6 = 1.0;
      }
      v9 = v5 + v4;
      v7 = 0.25;
      v8 = 0.00001;
      goto LABEL_13;
    }
LABEL_14:
    v4 += 4;
  }
  while ( v4 != 16 );
  if ( v3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v14 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() || v158[2]._.collisionMgr[3700] )
      --*(_DWORD *)&v158[2]._.collisionMgr[3692];
  }
  v155 = v3;
  v138 = (float *)&v158[1]._._.aCollider.field_D4;
  if ( (int)*(float *)&v158[1]._._.aCollider.field_D4 <= 47 )
  {
    v15 = (float)*(int *)&v158[2]._.collisionMgr[3692];
    v16 = *(float *)&v158[2]._.collisionMgr[3676];
    if ( (float)(v15 - v16) > 0.0 )
    {
      v17 = (float *)&v158[2]._.collisionMgr[3676];
      if ( v3 )
      {
        do
        {
          *v17 = v16 + 3.0;
          v18 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
          v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
          if ( v19 != (*((int (__fastcall **)(StateVirtual *))Enemy_StateId_Frozen._._.vtable + 2))(&Enemy_StateId_Frozen)
            && !v158[2]._.collisionMgr[3700]
            && (int)*v138 < 500 )
          {
            *v138 = *v138 + 1.0;
          }
          v16 = *v17;
        }
        while ( (float)((float)*(int *)&v158[2]._.collisionMgr[3692] - *v17) > 0.0 );
      }
      else
      {
        do
          v16 = v16 + 3.0;
        while ( (float)(v15 - v16) > 0.0 );
        *v17 = v16;
      }
    }
  }
  v20 = v3;
  v21 = 1.0;
  v22 = 0;
  x = (float *)&v158[2]._.collisionMgr[3688];
  v139 = &v158[2]._.collisionMgr[3684];
  v146 = (float *)&v158[1]._._.aCollider.field_D0;
  v142 = &v158[1]._._.aCollider.field_68;
  v141 = &v158[1]._._.aCollider.field_64;
  p_y = (int **)&v158[1]._._.aCollider.info.distToEdge.y;
  p_distToEdge = (unsigned int *)&v158[1]._._.aCollider.info.distToEdge;
  v149 = &v158[1]._._.aCollider.info.field_1C;
  p_category = &v158[1]._._.aCollider.info.category;
  v23 = (float **)&v158[1]._._.aCollider.field_58;
  v147 = &v158[1]._._.aCollider.field_54;
  v152 = (float **)&v158[1]._._.aCollider.info.distToCenter.y;
  p_info = (unsigned int *)&v158[1]._._.aCollider.info;
  v145 = (_BYTE *)(v3 + 6316);
  p_trapezoidOffsetBottomLeft = (unsigned int **)&v158[1]._._.aCollider.trapezoidOffsetBottomLeft;
  p_trapezoidOffsetTopRight = (unsigned int *)&v158[1]._._.aCollider.trapezoidOffsetTopRight;
  p_trapezoidOffsetTopLeft = (int **)&v158[1]._._.aCollider.trapezoidOffsetTopLeft;
  p_callback = (unsigned int *)&v158[1]._._.aCollider.info.callback;
  v24 = &v158[1]._._.aCollider.info.field_14;
  v150 = &v158[1]._._.aCollider.info.field_14;
  v161 = &v158[1]._._.aCollider.info.field_10;
  v25 = 1;
  do
  {
    v27 = v25;
    v28 = (_DWORD *)*v24;
    if ( *v161 > v22 )
      v28 += v22;
    v26 = 1.0;
    v25 = 0;
    switch ( *v28 )
    {
      case 0:
        if ( v20 && !*v145 && (int)v22 <= (int)*v138 )
        {
          v26 = 0.0;
          *v28 = 1;
          v25 = 0;
        }
        else
        {
          v25 = v27;
          v26 = 0.0;
        }
        break;
      case 1:
        U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v30 = (float *)FIELD_U32(v158 + (1) * 6100, 0x12C);
        v31 = (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.6) + 0.4;
        if ( *(_DWORD *)&v158[1]._._.aCollider.field_6C > v22 )
          v30 += v22;
        *v30 = v31 * 0.5;
        v32 = *v152;
        if ( *p_info > v22 )
          v32 += v22;
        *v32 = (float)(v31 * 1.5) + 4.0;
        v33 = *v23;
        y = FIELD_F32(v158, 0x70);
        z = FIELD_F32(v158, 0x74);
        if ( *v147 > v22 )
          v33 += 3 * v22;
        *v33 = FIELD_F32(v158, 0x6C);
        v33[1] = y;
        v33[2] = z;
        v36 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v37 = (unsigned int *)*v149;
        if ( *p_category > v22 )
          v37 += v22;
        *v37 = v36;
        v38 = *p_trapezoidOffsetTopLeft;
        if ( *p_callback > v22 )
          v38 += v22;
        *v38 = -1;
        v39 = *p_trapezoidOffsetBottomLeft;
        if ( *p_trapezoidOffsetTopRight > v22 )
          v39 += v22;
        *v39 = 255;
        v40 = *p_y;
        if ( *p_distToEdge > v22 )
          v40 += v22;
        *v40 = 150;
        v41 = (_DWORD *)*v142;
        LOWORD(v42) = 0;
        if ( *v141 > v22 )
          v41 += 2 * v22;
        HIWORD(v42) = 16656;
        *v41 = v42;
        v41[1] = v42;
        v43 = &FIELD_U32(v158, 0x0) + v22;
        v43[2127] = 0;
        v44 = v43 + 2127;
        v43[1627] = 0;
        v45 = v43 + 1627;
        v46 = &FIELD_U32(v158, 0x0) + 3 * v22;
        v46[2627] = 0;
        v46[2628] = 0;
        v46[2629] = 0;
        if ( v20 )
        {
          v47 = *v23;
          if ( *v147 > v22 )
            v47 += 3 * v22;
          v48 = FIELD_U32(v155, 6324);
          *v47 = FIELD_F32(v155, 6320) + (float)((float)((float)FIELD_S32(v20, 160) * 0.0000000018626) * 26.0);
          *((_DWORD *)v47 + 1) = v48;
          v47[2] = v31;
          *v45 += FIELD_U32(v20, 156);
          *v44 += FIELD_U32(v20, 160);
        }
        v26 = 0.3;
        v27 = 0;
        v49 = *v152;
        if ( *p_info > v22 )
          v49 += v22;
        v50 = (_DWORD *)v158[1]._._.aCollider.info.field_24;
        if ( v158[1]._._.aCollider.info.mask > v22 )
          v50 += v22;
        *v50 = (int)(float)(*v49 * 4295000000.0);
        v51 = (_DWORD *)*v150;
        if ( *v161 > v22 )
          v51 += v22;
        ++*v51;
        goto LABEL_67;
      case 2:
      case 3:
      case 0xA:
LABEL_67:
        v159 = v27;
        v52 = *v152;
        v53 = (unsigned int *)*v149;
        if ( *p_info > v22 )
          v52 += v22;
        v54 = *v52 * 25.0;
        if ( *p_category > v22 )
          v53 += v22;
        v55 = *v53;
        v56 = *v23;
        v57 = (int)v54;
        if ( *v147 > v22 )
          v56 += 3 * v22;
        v160 = v56[2];
        v58 = v56[1];
        v59 = *v56;
        v60 = (float *)((char *)sinLutTable + ((v55 >> 20) & 0xFF0));
        v61 = *v60;
        v62 = v60[1];
        *v53 = v57 + v55;
        v63 = &FIELD_U32(v158, 0x0) + v22;
        v64 = (int)(float)((float)((float)(v61 + (float)((float)((float)(v55 & 0xFFFFFF) * v62) * 0.000000059605))
                                 * 600.0)
                         * 65536.0)
            + v63[1627];
        v65 = (float *)((char *)sinLutTable + ((v64 >> 20) & 0xFF0));
        v66 = *v65;
        v67 = v65[1];
        v68 = v65[2];
        v69 = v65[3];
        v70 = v63[2127];
        v71 = (float *)((char *)sinLutTable + ((v70 >> 20) & 0xFF0));
        v72 = *v71;
        v73 = v71[1];
        v74 = *v152;
        if ( *p_info > v22 )
          v74 += v22;
        v75 = *v74;
        v163 = *v74;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v163, 0.2, 0.1, 0.03, 0.0001);
        v76 = v70 & 0xFFFFFF;
        v77 = *v152;
        v78 = (float)(v64 & 0xFFFFFF);
        if ( *p_info > v22 )
          v77 += v22;
        *v77 = v163;
        v24 = &v158[1]._._.aCollider.info.field_14;
        v79 = (float *)v158[1]._._.aCollider.field_58;
        v80 = v72 + (float)((float)((float)(unsigned int)v76 * v73) * 0.000000059605);
        v81 = v68 + (float)((float)(v69 * v78) * 0.000000059605);
        v82 = v66 + (float)((float)(v78 * v67) * 0.000000059605);
        if ( *v147 > v22 )
          v79 += 3 * v22;
        v79[2] = v160;
        v83 = v59 + (float)((float)(v81 * v80) * v75);
        v84 = (float)(v58 + (float)(v82 * v75)) + (float)(v75 * 0.02);
        *v79 = v83;
        v79[1] = v84;
        v85 = (int *)*v150;
        if ( *v161 > v22 )
          v85 += v22;
        v86 = *v85;
        if ( *v85 == 10 )
        {
          v96 = (float *)(&FIELD_U32(v158, 0x0) + 3 * v22);
          v97 = v96[2628] - v84;
          v98 = v96[2627] - v83;
          v99 = sqrtf(
                  (float)((float)(v97 * v97) + (float)(v98 * v98))
                + (float)((float)(v96[2629] - v160) * (float)(v96[2629] - v160)));
          v87 = v155;
          v100 = 0.0;
          v101 = 0.0;
          if ( v99 != 0.0 )
          {
            v101 = v97 / v99;
            v100 = v98 / v99;
          }
          v102 = (float *)v158[1]._._.aCollider.field_60;
          if ( v158[1]._._.aCollider.field_5C > v22 )
            v102 += 3 * v22;
          v103 = v102[1] - (float)(v101 * 3.0);
          *v102 = *v102 - (float)(v100 * 3.0);
          v102[1] = v103;
          v104 = *p_trapezoidOffsetBottomLeft;
          if ( *p_trapezoidOffsetTopRight > v22 )
            v104 += v22;
          v105 = (unsigned __int8)*v104;
          v106 = *v104 + 239;
          if ( v105 < 0x12 )
            LOBYTE(v106) = 0;
          *(_BYTE *)v104 = v106;
          v159 = (v105 < 0x12) & (unsigned __int8)v159;
          v26 = (float)(unsigned __int8)v106 / 255.0;
          if ( !(_BYTE)v106 )
          {
            v107 = (_DWORD *)*v150;
            if ( *v161 > v22 )
              v107 += v22;
            *v107 = 3;
          }
        }
        else if ( v86 == 3 )
        {
          v108 = *p_trapezoidOffsetBottomLeft;
          if ( *p_trapezoidOffsetTopRight > v22 )
            v108 += v22;
          v109 = (unsigned __int8)*v108;
          v110 = *v108 + 248;
          if ( v109 < 8 )
            LOBYTE(v110) = 0;
          *(_BYTE *)v108 = v110;
          v87 = v155;
          v159 = (v109 < 8) & (unsigned __int8)v159;
          if ( !(_BYTE)v110 && v22 == (int)*v138 )
          {
            v111 = *p_y;
            if ( *p_distToEdge > v22 )
              v111 += v22;
            v112 = *v111;
            if ( v159 == 1 && (!v155 || v158[2]._.collisionMgr[3700]) )
              StageActor__delete(v158, 1);
            v113 = *p_y;
            if ( *p_distToEdge > v22 )
              v113 += v22;
            *v113 = v112;
          }
          v26 = (float)(unsigned __int8)v110 / 255.0;
        }
        else
        {
          v87 = v155;
          if ( v86 == 2 )
          {
            v88 = *p_distToEdge;
            v89 = *p_y;
            v90 = *p_y;
            if ( *p_distToEdge > v22 )
              v90 += v22;
            v91 = *v90;
            v92 = *v90 - 1;
            if ( v91 <= 0 )
            {
              *v85 = 3;
              v89 = *p_y;
              v88 = *p_distToEdge;
            }
            if ( v88 > v22 )
              v89 += v22;
            *v89 = v92;
            v93 = (int *)*v142;
            if ( *v141 > v22 )
              v93 += 2 * v22;
            v164 = *v93;
            ((void (__fastcall *)(int *, float, float, float, float))loc_60832560)(&v164, 30.0, 0.025, 0.5, 0.01);
            v94 = (_DWORD *)*v142;
            v95 = v164;
            if ( *v141 > v22 )
              v94 += 2 * v22;
            *v94 = v164;
            v94[1] = v95;
            v24 = &v158[1]._._.aCollider.info.field_14;
            v159 = 0;
          }
        }
        v114 = (_DWORD *)*v24;
        if ( *v161 > v22 )
          v114 += v22;
        if ( *v114 != 3 )
        {
          if ( v158[2]._.collisionMgr[3680] )
          {
            v115 = *x;
            if ( sqrtf(
                   (float)((float)((float)(*x - v84) * (float)(*x - v84))
                         + (float)((float)(*(float *)v139 - v83) * (float)(*(float *)v139 - v83)))
                 + (float)((float)(v160 - v160) * (float)(v160 - v160))) < 60.0 )
            {
              v116 = (char *)v158 + 12 * v22;
              *((_DWORD *)v116 + 2627) = *(_DWORD *)v139;
              *((float *)v116 + 2628) = v115;
              *((float *)v116 + 2629) = v160;
              v117 = (_DWORD *)*v24;
              if ( *v161 > v22 )
                v117 += v22;
              *v117 = 10;
            }
          }
        }
        if ( v87 && *v145 )
        {
          v118 = (_DWORD *)*v24;
          if ( *v161 > v22 )
            v118 += v22;
          *v118 = 3;
        }
        v119 = 0;
        v21 = *v146;
        v120 = (char *)v158 + 12 * v22;
        v121 = (float *)(v120 + 10516);
        v122 = (float *)(v120 + 10512);
        v123 = v120 + 10508;
        do
        {
          v124 = *(_DWORD *)(PlayerMgr_instance + v119 + 32);
          if ( v124 )
          {
            if ( (FIELD_U8(v124, 1219) & 8) == 0 )
            {
              v125 = FIELD_F32(v124, 112) + 10.0;
              if ( sqrtf(
                     (float)((float)(v160 - v160) * (float)(v160 - v160))
                   + (float)((float)((float)(v125 - v84) * (float)(v125 - v84))
                           + (float)((float)(FIELD_F32(v124, 108) - v83) * (float)(FIELD_F32(v124, 108) - v83)))) < (float)((float)(*(float *)((char *)&v158[1]._._.aCollider.field_C0 + v119) * 80.0) + 0.0) )
              {
                *v123 = FIELD_U32(v124, 108);
                *v122 = v125;
                *v121 = v160;
                v126 = (_DWORD *)*v24;
                if ( *v161 > v22 )
                  v126 += v22;
                *v126 = 10;
              }
            }
          }
          v119 += 4;
        }
        while ( v119 != 16 );
        v25 = v159;
        v20 = v155;
        v23 = (float **)&v158[1]._._.aCollider.field_58;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        break;
      default:
        v25 = 0;
        v26 = 1.0;
        break;
    }
    v21 = v26 * v21;
    v127 = (char *)&dword_60C8F0B0 + 3;
    v128 = BYTE1(v158[1]._._.aCollider.field_D8) & 0xFE;
    if ( v128 == 2 )
      v127 = &byte_60C8F0BB;
    v129 = (unsigned int)(float)(v21 * 163.0) | ((unsigned __int8)*v127 << 24);
    v130 = (char *)&dword_60C8F0B0 + 2;
    if ( v128 == 2 )
      v130 = &byte_60C8F0BA;
    v131 = v129 | ((unsigned __int8)*v130 << 16);
    v132 = (char *)&dword_60C8F0B0 + 1;
    if ( v128 == 2 )
      v132 = &byte_60C8F0B9;
    v133 = v131 | ((unsigned __int8)*v132 << 8);
    v134 = *p_trapezoidOffsetTopLeft;
    if ( *p_callback > v22 )
      v134 += v22;
    *v134 = v133;
    v135 = *p_trapezoidOffsetBottomLeft;
    if ( *p_trapezoidOffsetTopRight > v22 )
      v135 += v22;
    ++v22;
    *v135 = (unsigned __int8)*v135 | 0xC7CFFF00;
  }
  while ( v22 != 150 );
  v136 = *(float *)&v158[2]._.collisionMgr[3668];
  FIELD_F32(v158, 0x6C) = 0.0;
  FIELD_F32(v158, 0x70) = 0.0;
  FIELD_F32(v158, 0x74) = v136;
  LODWORD(v162) = 1065353216;
  *((float *)&v162 + 1) = v136;
  *(_QWORD *)&v158[1]._._.aCollider.activeNode.next = 1065353216;
  *(_QWORD *)&v158[1]._._.aCollider.createNode.owner = 0;
  *(_QWORD *)&v158[1]._._.aCollider.createNode.prev = 0x3F80000000000000LL;
  *(_QWORD *)&v158[1]._._.aCollider.node3.next = 0;
  *(_QWORD *)&v158[1]._._.aCollider.node4.owner = 0;
  *(_QWORD *)&v158[1]._._.aCollider.node4.prev = v162;
  ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v146, 1.0, 0.25, 0.1, 0.001);
  return 1;
}
