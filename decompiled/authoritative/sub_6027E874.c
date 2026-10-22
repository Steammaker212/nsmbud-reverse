int __fastcall sub_6027E874(int a1)
{
  unsigned int v2; // r1
  int v3; // r9
  int v4; // r7
  int v5; // r5
  int v6; // r4
  float v7; // s0
  float v8; // s1
  float v9; // s3
  int v10; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  StateActor *v14; // r5
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s24
  float v19; // s20
  unsigned int v20; // r6
  unsigned int *v21; // r8
  _DWORD *v22; // r0
  float v23; // s25
  unsigned int U32; // r0
  float *v25; // r1
  float v26; // s18
  float *v27; // r0
  float *v28; // r0
  float y; // r2
  float z; // r3
  unsigned int v31; // r0
  unsigned int *v32; // r1
  unsigned int *v33; // r0
  int *v34; // r0
  int *v35; // r0
  int *v36; // r0
  int v37; // r1
  StateActor *v38; // r0
  int *v39; // r5
  int *v40; // r0
  _DWORD *v41; // r4
  _DWORD *v42; // r5
  float v43; // s16
  float v44; // s20
  float v45; // s22
  unsigned int v46; // r0
  float *v47; // r1
  float *v48; // r0
  _DWORD *v49; // r1
  _DWORD *v50; // r0
  float *v51; // r2
  unsigned int *v52; // r1
  unsigned int v53; // r0
  float *v54; // r3
  int v55; // r2
  float v56; // s22
  float v57; // s27
  float *v58; // r3
  float v59; // s0
  float v60; // s2
  int *v61; // r1
  unsigned int v62; // r5
  float *v63; // r0
  float v64; // s16
  float v65; // s18
  float v66; // s20
  float v67; // s24
  unsigned int v68; // r7
  float *v69; // r0
  float v70; // s19
  float v71; // s30
  float *v72; // r0
  float v73; // s29
  int v74; // r7
  float *v75; // r1
  float v76; // s2
  float *v77; // r1
  float v78; // s19
  float v79; // s20
  float v80; // s16
  float v81; // s27
  float v82; // s22
  _DWORD *v83; // r0
  unsigned int v84; // r3
  int *v85; // r1
  int *v86; // r2
  int v87; // r7
  int v88; // r2
  int *v89; // r0
  int *v90; // r0
  int v91; // r1
  int *v92; // r0
  int v93; // r2
  float v94; // s0
  int *v95; // r0
  int v96; // r5
  int *v97; // r0
  unsigned int v98; // r1
  int *v99; // r2
  int v100; // r2
  int v101; // r7
  int v102; // r5
  float *v103; // r0
  float v104; // s24
  float *v105; // r8
  float *v106; // r9
  float *v107; // r11
  int v108; // r0
  float v109; // s19
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  float v112; // s22
  float v113; // s24
  float v114; // s0
  float v115; // s4
  float v116; // s2
  float *v117; // r0
  float v118; // s6
  int *v119; // r0
  int v120; // r1
  float v121; // r7
  float v122; // s0
  _DWORD *v123; // r0
  _DWORD *v124; // r0
  unsigned int *v125; // r1
  int *v126; // r0
  float v127; // r0
  _BYTE *v129; // [sp+8h] [bp-130h]
  float *v130; // [sp+Ch] [bp-12Ch]
  float **v131; // [sp+14h] [bp-124h]
  unsigned int *v132; // [sp+18h] [bp-120h]
  unsigned int *v133; // [sp+1Ch] [bp-11Ch]
  _DWORD **v134; // [sp+20h] [bp-118h]
  float *v135; // [sp+24h] [bp-114h]
  float *x; // [sp+28h] [bp-110h]
  int v137; // [sp+2Ch] [bp-10Ch]
  unsigned int *v138; // [sp+30h] [bp-108h]
  float **v139; // [sp+34h] [bp-104h]
  _BYTE *v140; // [sp+38h] [bp-100h]
  unsigned int *v141; // [sp+3Ch] [bp-FCh]
  int **v142; // [sp+40h] [bp-F8h]
  unsigned int *v143; // [sp+44h] [bp-F4h]
  int **v144; // [sp+48h] [bp-F0h]
  float *v145; // [sp+50h] [bp-E8h]
  unsigned int *v146; // [sp+54h] [bp-E4h]
  unsigned int **v147; // [sp+58h] [bp-E0h]
  unsigned int *v148; // [sp+5Ch] [bp-DCh]
  float **v149; // [sp+60h] [bp-D8h]
  unsigned int *v150; // [sp+68h] [bp-D0h]
  unsigned int **v151; // [sp+6Ch] [bp-CCh]
  float **v152; // [sp+70h] [bp-C8h]
  StateActor *v153; // [sp+74h] [bp-C4h]
  unsigned int *v154; // [sp+7Ch] [bp-BCh]
  int **v155; // [sp+80h] [bp-B8h]
  unsigned int *v156; // [sp+84h] [bp-B4h]
  float v157; // [sp+88h] [bp-B0h]
  unsigned int *v158; // [sp+8Ch] [bp-ACh]
  _DWORD **v159; // [sp+90h] [bp-A8h]
  int v160; // [sp+94h] [bp-A4h]
  __int64 v161; // [sp+C0h] [bp-78h]
  float v162; // [sp+C8h] [bp-70h] BYREF
  int v163; // [sp+CCh] [bp-6Ch] BYREF

  v2 = *(_DWORD *)(a1 + 16544);
  *(_DWORD *)(a1 + 16508) = v2;
  v3 = ActorMgrRelated_getById(ActorMgr::instance + 27168, v2);
  v4 = a1;
  v5 = 0;
  v6 = a1 + 6480;
  do
  {
    v11 = *(_DWORD *)(PlayerMgr_instance + v5 + 32);
    if ( v11 && (*(_BYTE *)(v11 + 1219) & 8) == 0 )
    {
      v12 = *(_DWORD *)(v11 + 1212);
      v13 = (v12 & 0x40) == 0;
      if ( (v12 & 0x40) == 0 )
        v13 = (*(_BYTE *)(v11 + 1207) & 8) == 0;
      if ( v13 )
      {
        if ( (v12 & 0x100) == 0 && !(*(_DWORD *)(v11 + 1208) & 0x8000000 | v12 & 0x10) )
        {
          v7 = 0.0;
          v8 = 0.1;
          v9 = 0.000001;
          v10 = v6 + v5;
LABEL_13:
          ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v10, v7, v8, 0.1, v9);
          goto LABEL_14;
        }
        v7 = 0.6;
      }
      else
      {
        v7 = 1.0;
      }
      v10 = v6 + v5;
      v8 = 0.25;
      v9 = 0.00001;
      goto LABEL_13;
    }
LABEL_14:
    v5 += 4;
  }
  while ( v5 != 16 );
  v14 = (StateActor *)v4;
  v130 = (float *)(v4 + 6500);
  v15 = *(float *)(v4 + 6500);
  if ( (int)v15 <= 14 )
  {
    v16 = *(float *)(v4 + 16524);
    v17 = (float)*(int *)(v4 + 16540);
    if ( (float)(v17 - v16) > 0.0 )
    {
      do
        v16 = v16 + 4.0;
      while ( (float)(v17 - v16) > 0.0 );
      *(float *)(v4 + 16524) = v16;
    }
    if ( v3 && (int)v15 < 500 )
      *v130 = v15 + 0.25;
  }
  v18 = -1.0;
  v19 = 1.0;
  v137 = v3;
  v20 = 0;
  v153 = (StateActor *)v4;
  v160 = v4 + 6480;
  x = (float *)(v4 + 16536);
  v135 = (float *)(v4 + 16532);
  v140 = (_BYTE *)(v4 + 16528);
  v139 = (float **)(v4 + 6384);
  v138 = (unsigned int *)(v4 + 6380);
  v145 = (float *)(v4 + 6496);
  v134 = (_DWORD **)(v4 + 6440);
  v133 = (unsigned int *)(v4 + 6436);
  v142 = (int **)(v4 + 6392);
  v141 = (unsigned int *)(v4 + 6388);
  v144 = (int **)(v4 + 6416);
  v143 = (unsigned int *)(v4 + 6412);
  v147 = (unsigned int **)(v4 + 6432);
  v146 = (unsigned int *)(v4 + 6428);
  v152 = (float **)(v4 + 6376);
  v21 = (unsigned int *)(v4 + 6372);
  v156 = (unsigned int *)(v4 + 6372);
  v149 = (float **)(v4 + 6408);
  v148 = (unsigned int *)(v4 + 6404);
  v132 = (unsigned int *)(v4 + 6396);
  v129 = (_BYTE *)(v3 + 13016);
  v155 = (int **)(v4 + 6456);
  v154 = (unsigned int *)(v4 + 6452);
  v151 = (unsigned int **)(v4 + 6448);
  v150 = (unsigned int *)(v4 + 6444);
  v159 = (_DWORD **)(v4 + 6424);
  v158 = (unsigned int *)(v4 + 6420);
  v131 = (float **)(v4 + 6400);
  while ( 2 )
  {
    v22 = *v159;
    if ( *v158 > v20 )
      v22 += v20;
    v23 = 1.0;
    switch ( *v22 )
    {
      case 0:
        if ( v137 )
        {
          if ( *v129 )
          {
            v23 = 0.0;
          }
          else
          {
            v23 = 0.0;
            if ( (int)v20 <= (int)*v130 )
              *v22 = 1;
          }
        }
        else
        {
          v23 = 0.0;
        }
        goto LABEL_137;
      case 1:
        U32 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
        v25 = *v131;
        v26 = (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + v18) * 0.6) + 0.4;
        if ( *v132 > v20 )
          v25 += v20;
        *v25 = v26 * 0.5;
        v27 = *v149;
        if ( *v148 > v20 )
          v27 += v20;
        *v27 = (float)(v26 * 1.5) + 0.75;
        v28 = *v152;
        y = v14->_._.position.y;
        z = v14->_._.position.z;
        if ( *v21 > v20 )
          v28 += 3 * v20;
        *v28 = v14->_._.position.x;
        v28[1] = y;
        v28[2] = z;
        v31 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
        v32 = *v147;
        if ( *v146 > v20 )
          v32 += v20;
        *v32 = v31;
        v33 = *v151;
        if ( *v150 > v20 )
          v33 += v20;
        *v33 = -1;
        v34 = *v155;
        if ( *v154 > v20 )
          v34 += v20;
        *v34 = 0;
        v35 = *v144;
        if ( *v143 > v20 )
          v35 += v20;
        *v35 = 240;
        v36 = *v142;
        LOWORD(v37) = 0;
        if ( *v141 > v20 )
          v36 += 2 * v20;
        HIWORD(v37) = 16840;
        *v36 = v37;
        v36[1] = v37;
        v38 = v14;
        v39 = &v14->_._._.vtable + v20;
        v40 = &v38->_._._.vtable + 3 * v20;
        v39[2127] = 0;
        v41 = v39 + 2127;
        v39[1627] = 0;
        v42 = v39 + 1627;
        v40[2627] = 0;
        v40[2628] = 0;
        v40[2629] = 0;
        if ( v137 )
        {
          v43 = *(float *)(v137 + 112);
          v44 = *(float *)(v137 + 108);
          v45 = (float)*(int *)(v137 + 160);
          v46 = sead::Random::getU32((void *)(dword_60C9CF0C + 1340));
          v47 = *v152;
          if ( *v156 > v20 )
            v47 += 3 * v20;
          *v47 = v44 + (float)((float)(v45 * -0.0000000018626) * 26.0);
          v47[1] = v43 + (float)((float)((float)(COERCE_FLOAT((v46 >> 9) | 0x3F800000) + v18) * 40.0) + -20.0);
          v47[2] = v26;
          *v42 += *(_DWORD *)(v137 + 156);
          *v41 -= *(_DWORD *)(v137 + 160);
        }
        v23 = 0.5;
        v48 = *v149;
        if ( *v148 > v20 )
          v48 += v20;
        v49 = *v134;
        if ( *v133 > v20 )
          v49 += v20;
        *v49 = (int)(float)(*v48 * 4295000000.0);
        v50 = *v159;
        if ( *v158 > v20 )
          v50 += v20;
        ++*v50;
        v14 = v153;
        goto LABEL_56;
      case 2:
      case 3:
      case 0xA:
LABEL_56:
        v51 = *v149;
        v52 = *v147;
        if ( *v148 > v20 )
          v51 += v20;
        if ( *v146 > v20 )
          v52 += v20;
        v53 = *v52;
        v54 = *v152;
        v55 = (int)(float)(*v51 * 500.0);
        if ( *v156 > v20 )
          v54 += 3 * v20;
        v157 = v54[2];
        v56 = v54[1];
        v57 = *v54;
        v58 = (float *)((char *)sinLutTable + ((v53 >> 20) & 0xFF0));
        v59 = *v58;
        v60 = v58[1];
        *v52 = v55 + v53;
        v61 = &v14->_._._.vtable + v20;
        v62 = (int)(float)((float)((float)(v59 + (float)((float)((float)(v53 & 0xFFFFFF) * v60) * 0.000000059605))
                                 * 4800.0)
                         * 65536.0)
            + v61[1627];
        v63 = (float *)((char *)sinLutTable + ((v62 >> 20) & 0xFF0));
        v64 = *v63;
        v65 = v63[1];
        v66 = v63[2];
        v67 = v63[3];
        v68 = v61[2127];
        v69 = (float *)((char *)sinLutTable + ((v68 >> 20) & 0xFF0));
        v70 = *v69;
        v71 = v69[1];
        v72 = *v149;
        if ( *v148 > v20 )
          v72 += v20;
        v73 = *v72;
        v162 = *v72;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v162, 0.2, 0.1, 0.02, 0.0001);
        v74 = v68 & 0xFFFFFF;
        v75 = *v149;
        v76 = (float)(v62 & 0xFFFFFF);
        if ( *v148 > v20 )
          v75 += v20;
        *v75 = v162;
        v77 = *v152;
        v78 = v70 + (float)((float)((float)(unsigned int)v74 * v71) * 0.000000059605);
        v79 = v66 + (float)((float)(v67 * v76) * 0.000000059605);
        v80 = v64 + (float)((float)(v76 * v65) * 0.000000059605);
        if ( *v156 > v20 )
          v77 += 3 * v20;
        v77[2] = v157;
        v81 = v57 + (float)((float)(v79 * v78) * v73);
        v82 = (float)(v56 + (float)(v80 * v73)) + (float)(v73 * 0.02);
        *v77 = v81;
        v77[1] = v82;
        v83 = *v159;
        if ( *v158 > v20 )
          v83 += v20;
        if ( *v83 == 3 )
        {
          v95 = *v155;
          if ( *v154 > v20 )
            v95 += v20;
          v96 = *v95 + 252;
          if ( (unsigned __int8)*v95 < 4u )
            LOBYTE(v96) = 0;
          *(_BYTE *)v95 = v96;
          if ( !(_BYTE)v96 && v20 == (int)*v130 )
          {
            v97 = *v144;
            v98 = *v143;
            v99 = *v144;
            if ( *v143 > v20 )
              v99 += v20;
            v100 = *v99;
            v101 = v100 - 1;
            if ( v100 <= 0 )
            {
              StageActor::delete(v153, 1);
              v97 = *v144;
              v98 = *v143;
            }
            if ( v98 > v20 )
              v97 += v20;
            *v97 = v101;
          }
          v94 = (float)(unsigned __int8)v96;
        }
        else
        {
          if ( *v83 != 2 )
            goto LABEL_102;
          v84 = *v143;
          v85 = *v144;
          v86 = *v144;
          if ( *v143 > v20 )
            v86 += v20;
          v87 = *v86;
          v88 = *v86 - 1;
          if ( v87 <= 0 )
          {
            *v83 = 3;
            v85 = *v144;
            v84 = *v143;
          }
          if ( v84 > v20 )
            v85 += v20;
          *v85 = v88;
          v89 = *v142;
          if ( *v141 > v20 )
            v89 += 2 * v20;
          v163 = *v89;
          ((void (__fastcall *)(int *, float, float, float, float))loc_60832560)(&v163, 50.0, 0.025, 0.5, 0.01);
          v90 = *v142;
          v91 = v163;
          if ( *v141 > v20 )
            v90 += 2 * v20;
          *v90 = v163;
          v90[1] = v91;
          v92 = *v155;
          if ( *v154 > v20 )
            v92 += v20;
          LOBYTE(v93) = -1;
          if ( (unsigned __int8)*v92 < 0xF7u )
            v93 = *v92 + 8;
          v94 = (float)(unsigned __int8)v93;
          *(_BYTE *)v92 = v93;
        }
        v23 = v94 / 255.0;
LABEL_102:
        v102 = 0;
        v103 = (float *)(&v153->_._._.vtable + 3 * v20);
        v104 = (float)(v157 - v157) * (float)(v157 - v157);
        v19 = *v145;
        v105 = v103 + 2629;
        v106 = v103 + 2628;
        v107 = v103 + 2627;
        do
        {
          v108 = *(_DWORD *)(PlayerMgr_instance + v102 + 32);
          if ( v108 )
          {
            if ( (*(_BYTE *)(v108 + 1219) & 8) == 0 )
            {
              v109 = *(float *)(v108 + 112) + 10.0;
              if ( sqrtf(
                     v104
                   + (float)((float)((float)(v109 - v82) * (float)(v109 - v82))
                           + (float)((float)(*(float *)(v108 + 108) - v81) * (float)(*(float *)(v108 + 108) - v81)))) < (float)((float)(*(float *)(v160 + v102) * 80.0) + 0.0) )
              {
                *v107 = *(float *)(v108 + 108);
                *v106 = v109;
                *v105 = v157;
                v110 = *v159;
                if ( *v158 > v20 )
                  v110 += v20;
                *v110 = 10;
              }
            }
          }
          v102 += 4;
        }
        while ( v102 != 16 );
        v111 = *v159;
        if ( *v158 > v20 )
          v111 += v20;
        if ( *v111 == 10 )
        {
          v112 = *v106 - v82;
          v113 = *v107 - v81;
          v114 = sqrtf(
                   (float)((float)(v112 * v112) + (float)(v113 * v113))
                 + (float)((float)(*v105 - v157) * (float)(*v105 - v157)));
          v14 = v153;
          v21 = v156;
          v115 = 0.0;
          v116 = 0.0;
          if ( v114 != 0.0 )
          {
            v116 = v112 / v114;
            v115 = v113 / v114;
          }
          v117 = *v139;
          if ( *v138 > v20 )
            v117 += 3 * v20;
          v118 = v117[1] - (float)(v116 * 3.0);
          *v117 = *v117 - (float)(v115 * 3.0);
          v117[1] = v118;
          v119 = *v155;
          if ( *v154 > v20 )
            v119 += v20;
          v120 = *v119 + 248;
          if ( (unsigned __int8)*v119 < 9u )
            LOBYTE(v120) = 0;
          *(_BYTE *)v119 = v120;
          v23 = (float)(unsigned __int8)v120 / 255.0;
          if ( (_BYTE)v120 )
          {
            v18 = -1.0;
          }
          else
          {
            v18 = -1.0;
            v124 = *v159;
            if ( *v158 > v20 )
              v124 += v20;
            *v124 = 3;
          }
        }
        else if ( *v140 )
        {
          v121 = *x;
          v122 = sqrtf(
                   v104
                 + (float)((float)((float)(v82 - *x) * (float)(v82 - *x))
                         + (float)((float)(v81 - *v135) * (float)(v81 - *v135))));
          v18 = -1.0;
          if ( v122 < 60.0 )
          {
            *v107 = *v135;
            *v106 = v121;
            *v105 = v157;
            v123 = *v159;
            if ( *v158 > v20 )
              v123 += v20;
            *v123 = 10;
          }
          v14 = v153;
          v21 = v156;
        }
        else
        {
          v14 = v153;
          v21 = v156;
          v18 = -1.0;
        }
LABEL_137:
        v19 = v23 * v19;
        v125 = *v151;
        if ( *v150 > v20 )
          v125 += v20;
        *v125 = (unk_60C8F0D2 << 16) | (unk_60C8F0D3 << 24) | (unsigned int)(float)(v19 * 255.0) | (unk_60C8F0D1 << 8);
        v126 = *v155;
        if ( *v154 > v20 )
          v126 += v20;
        ++v20;
        *v126 = *(unsigned __int8 *)v126 | (unk_60C8F0D7 << 24) | (unk_60C8F0D6 << 16) | (unk_60C8F0D5 << 8);
        if ( v20 != 150 )
          continue;
        v127 = *(float *)&v14[2]._.collisionMgr[3668];
        v14->_._.position.x = 0.0;
        v14->_._.position.y = 0.0;
        v14->_._.position.z = v127;
        LODWORD(v161) = 1065353216;
        *((float *)&v161 + 1) = v127;
        *(_QWORD *)&v14[1]._._.aCollider.activeNode.next = 1065353216;
        *(_QWORD *)&v14[1]._._.aCollider.createNode.owner = 0;
        *(_QWORD *)&v14[1]._._.aCollider.createNode.prev = 0x3F80000000000000LL;
        *(_QWORD *)&v14[1]._._.aCollider.node3.next = 0;
        *(_QWORD *)&v14[1]._._.aCollider.node4.owner = 0;
        *(_QWORD *)&v14[1]._._.aCollider.node4.prev = v161;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v145, 1.0, 0.25, 0.1, 0.001);
        return 1;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        goto LABEL_137;
      default:
        v23 = 1.0;
        goto LABEL_137;
    }
  }
}
