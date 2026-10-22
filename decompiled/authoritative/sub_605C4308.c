void __fastcall sub_605C4308(
        int a1,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float32x2_t a9,
        int a10,
        int a11,
        int a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63)
{
  int a72; // [sp+23Ch] [bp+13Ch] BYREF
  float a73; // [sp+240h] [bp+140h] BYREF
  float a74; // [sp+244h] [bp+144h]
  int a75; // [sp+248h] [bp+148h]
  int a76; // [sp+24Ch] [bp+14Ch] BYREF
  float a77; // [sp+250h] [bp+150h] BYREF
  int a78; // [sp+254h] [bp+154h] BYREF
  float a79; // [sp+258h] [bp+158h] BYREF
  float a80; // [sp+25Ch] [bp+15Ch] BYREF
  float a81; // [sp+260h] [bp+160h]
  int a82; // [sp+264h] [bp+164h]
  int v76; // r9
  int v77; // r8
  int v78; // r5
  unsigned int v79; // r6
  float **v80; // r12
  int v81; // r11
  unsigned int **v82; // r10
  unsigned int *v83; // r4
  void *v84; // r0
  unsigned int U32; // r0
  float *v86; // r1
  int v87; // r1
  bool v88; // zf
  void *v89; // r0
  unsigned int v90; // r0
  float *v91; // r1
  int v92; // r1
  bool v93; // zf
  void *v94; // r0
  unsigned int v95; // r0
  unsigned int *v96; // r1
  unsigned int *v97; // r0
  unsigned int *v98; // r0
  _DWORD *v99; // r1
  unsigned int *v100; // r0
  unsigned int *v101; // r0
  int v102; // r0
  unsigned int *v103; // r0
  int v104; // r4
  float *v105; // r7
  float *v106; // r1
  float v107; // s2
  float v108; // s4
  float v109; // s24
  unsigned int v110; // r2
  float v111; // s6
  int v112; // r3
  int v113; // r2
  float *v114; // r3
  float **v115; // r7
  float v116; // s6
  float v117; // s8
  unsigned int v118; // r10
  float *v119; // r0
  float *v120; // r3
  float v121; // s12
  float v122; // s2
  float v123; // s10
  int v124; // r0
  float *v125; // r0
  float *v126; // r0
  float v127; // s24
  unsigned __int8 *v128; // r0
  unsigned int *v129; // r0
  unsigned int v130; // s0
  unsigned int *v131; // r0
  float *v132; // r2
  int *v133; // r0
  float *v134; // r0
  float *v135; // r1
  float v136; // s2
  float v137; // s8
  float v138; // s2
  float *v139; // r1
  float v140; // s14
  _DWORD *v141; // r0
  _DWORD *v142; // r0
  _DWORD *v143; // r0
  int v144; // r1
  bool v145; // zf
  void *v146; // r0
  unsigned int v147; // r0
  float *v148; // r1
  int v149; // r1
  bool v150; // zf
  void *v151; // r0
  unsigned int v152; // r0
  unsigned int *v153; // r1
  int *v154; // r0
  unsigned int *v155; // r0
  unsigned int *v156; // r0
  _DWORD *v157; // r1
  unsigned int *v158; // r0
  unsigned int *v159; // r0
  int *v160; // r0
  int v161; // r3
  int v162; // r0
  unsigned int v163; // r1
  float *v164; // r0
  float *v165; // r2
  int v166; // s30
  int v167; // r2
  int v168; // r1
  bool v169; // zf
  __int64 v170; // d17
  __int64 v171; // d17
  __int64 v172; // d17
  unsigned int *v173; // [sp+1BCh] [bp+BCh]
  float **v174; // [sp+1C0h] [bp+C0h]
  unsigned int *v175; // [sp+1DCh] [bp+DCh]
  float **v176; // [sp+1E0h] [bp+E0h]
  unsigned int *v177; // [sp+1E4h] [bp+E4h]
  unsigned int **v178; // [sp+1E8h] [bp+E8h]
  int v179; // [sp+1ECh] [bp+ECh]
  unsigned int *v181; // [sp+1F4h] [bp+F4h]
  int **v182; // [sp+1F8h] [bp+F8h]
  unsigned int *v183; // [sp+1FCh] [bp+FCh]
  unsigned int **v184; // [sp+200h] [bp+100h]
  unsigned int *v185; // [sp+210h] [bp+110h]
  unsigned int *v186; // [sp+214h] [bp+114h]
  int *v187; // [sp+218h] [bp+118h]
  int v188; // [sp+21Ch] [bp+11Ch]
  unsigned int *v189; // [sp+220h] [bp+120h]
  unsigned int **v190; // [sp+224h] [bp+124h]
  float **v191; // [sp+228h] [bp+128h]
  unsigned int *v192; // [sp+22Ch] [bp+12Ch]
  _DWORD **v193; // [sp+230h] [bp+130h]

  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = (float **)(a1 + 6400);
  v188 = dword_60CC6484;
  a79 = *(float *)(TileMgr_instance + 24);
  v81 = a1 + 16060;
  v182 = (int **)(a1 + 6416);
  v181 = (unsigned int *)(a1 + 6412);
  v176 = (float **)(a1 + 6392);
  v175 = (unsigned int *)(a1 + 6388);
  v187 = (int *)(a1 + 6376);
  v186 = (unsigned int *)(a1 + 6372);
  v184 = (unsigned int **)(a1 + 6456);
  v183 = (unsigned int *)(a1 + 6452);
  v82 = (unsigned int **)(a1 + 6448);
  v83 = (unsigned int *)(a1 + 6444);
  v190 = (unsigned int **)(a1 + 6432);
  v189 = (unsigned int *)(a1 + 6428);
  v174 = (float **)(a1 + 6408);
  v173 = (unsigned int *)(a1 + 6404);
  v185 = (unsigned int *)(a1 + 6396);
  v193 = (_DWORD **)(a1 + 6424);
  v192 = (unsigned int *)(a1 + 6420);
  v177 = (unsigned int *)(a1 + 6444);
  v178 = (unsigned int **)(a1 + 6448);
  v179 = a1 + 16060;
  v191 = (float **)(a1 + 6400);
  while ( 2 )
  {
    v142 = *v193;
    if ( *v192 > v79 )
      v142 = (_DWORD *)((char *)v142 + v78);
    switch ( *v142 )
    {
      case 0:
        if ( !*(_BYTE *)(v81 + v79 + 2400) )
          goto LABEL_143;
        v168 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v168 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) == 20 )
            goto LABEL_3;
        }
        else
        {
          v169 = v168 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v169 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( v169 )
          {
LABEL_3:
            v84 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_5;
          }
        }
        v84 = (void *)(dword_60C9CF0C + 1340);
LABEL_5:
        U32 = sead::Random::getU32(v84);
        v86 = *v191;
        if ( *v185 > v79 )
          v86 = (float *)((char *)v86 + v78);
        *v86 = (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.2;
        v87 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v87 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) == 20 )
            goto LABEL_14;
        }
        else
        {
          v88 = v87 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v88 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( v88 )
          {
LABEL_14:
            v89 = (void *)sead::GlobalRandom::sInstance;
            goto LABEL_16;
          }
        }
        v89 = (void *)(dword_60C9CF0C + 1340);
LABEL_16:
        v90 = sead::Random::getU32(v89);
        v91 = *v174;
        if ( *v173 > v79 )
          v91 = (float *)((char *)v91 + v78);
        *v91 = (float)((float)(COERCE_FLOAT((v90 >> 9) | 0x3F800000) + -1.0) * 0.2) + 0.8;
        v92 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v92 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
            goto LABEL_26;
        }
        else
        {
          v93 = v92 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v93 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( !v93 )
          {
LABEL_26:
            v94 = (void *)(dword_60C9CF0C + 1340);
            goto LABEL_27;
          }
        }
        v94 = (void *)sead::GlobalRandom::sInstance;
LABEL_27:
        v95 = sead::Random::getU32(v94);
        v96 = *v190;
        if ( *v189 > v79 )
          v96 = (unsigned int *)((char *)v96 + v78);
        *v96 = v95;
        v97 = *v82;
        if ( *v83 > v79 )
          v97 = (unsigned int *)((char *)v97 + v78);
        *v97 = -256;
        v98 = *v184;
        if ( *v183 > v79 )
          v98 = (unsigned int *)((char *)v98 + v78);
        *v98 = -256;
        v99 = *v193;
        if ( *v192 > v79 )
          v99 = (_DWORD *)((char *)v99 + v78);
        *v99 = 1;
        v100 = *v82;
        if ( *v83 > v79 )
          v100 = (unsigned int *)((char *)v100 + v78);
        *v100 = 2140779008;
        v101 = *v184;
        if ( *v183 > v79 )
          v101 = (unsigned int *)((char *)v101 + v78);
        *v101 = -256;
        v80 = v191;
LABEL_40:
        a9.n64_u32[0] = 1036831949;
        v102 = *v187;
        if ( *v186 > v79 )
          v102 += v76;
        *(float *)&a2 = *(float *)(v81 + v77 - 9600) / 9.0;
        a80 = *(float *)v102;
        a81 = *(float *)(v102 + 4);
        a82 = *(_DWORD *)(v102 + 8);
        LODWORD(a2) = vmax_f32(*(float32x2_t *)&a2, a9).n64_u32[0];
        v103 = *v190;
        if ( *v189 > v79 )
          v103 = (unsigned int *)((char *)v103 + v78);
        v104 = *v103;
        v105 = *v174;
        if ( *v173 > v79 )
          v105 = (float *)((char *)v105 + v78);
        v106 = *v80;
        v107 = *v105;
        if ( *v185 > v79 )
          v106 = (float *)((char *)v106 + v78);
        v108 = *v106;
        v109 = (float)((float)(*v106
                             * (float)(*(float *)&a2
                                     * (float)(*(float *)((char *)sinLutTable + ((*v103 >> 20) & 0xFF0))
                                             + (float)((float)((float)(*v103 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1]
                                                                        + ((*v103 >> 20) & 0xFF0)))
                                                     * 0.000000059605))))
                     * v107)
             * 0.8;
        if ( v104 < 0 )
        {
          v111 = (float)v104 + (float)v104;
          v110 = (int)v111;
          if ( v111 < -2147500000.0 )
            v110 = 0;
        }
        else
        {
          v110 = 2 * v104;
        }
        v112 = (v110 >> 20) & 0xFF0;
        v113 = v110 & 0xFFFFFF;
        v114 = (float *)((char *)sinLutTable + v112);
        v115 = v80;
        v116 = *v114;
        v117 = v114[1];
        v118 = (int)(float)((float)(v108 * 20972000.0) * v107) + v104;
        *v103 = v118;
        v119 = *v80;
        v120 = *v174;
        if ( *v185 > v79 )
          v119 = (float *)((char *)v119 + v78);
        if ( *v173 > v79 )
          v120 = (float *)((char *)v120 + v78);
        v121 = a80 + (float)((float)(v109 * *v119) * *v120);
        a80 = v121;
        v122 = (float)((float)(v116 + (float)((float)((float)(unsigned int)v113 * v117) * 0.000000059605)) * v108)
             * v107;
        a81 = a81 + (float)((float)((float)(*(float *)&a2 * *v119) * *v120) * 4.2);
        v123 = a81
             + (float)((float)((float)((float)((float)(*(float *)&a2 * v122) + (float)(*(float *)&a2 * v122)) * 4.2)
                             * 0.1)
                     * (float)((float)(*(float *)&a2 * *v119) * *v120));
        a81 = v123;
        v124 = *v187;
        if ( *v186 > v79 )
          v124 += v76;
        *(_DWORD *)(v124 + 8) = a82;
        *(float *)v124 = v121;
        *(float *)(v124 + 4) = v123;
        v125 = *v80;
        if ( *v185 > v79 )
          v125 = (float *)((char *)v125 + v78);
        a73 = *v125;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&a73, 1.0, 0.025, 0.01, 0.001);
        v126 = *v115;
        v127 = fabsf(v109);
        if ( *v185 > v79 )
          v126 = (float *)((char *)v126 + v78);
        *v126 = a73;
        v128 = (unsigned __int8 *)*v178;
        if ( *v177 > v79 )
          v128 += v78;
        a77 = (float)*v128;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(
          &a77,
          (float)((float)(a73 * v127) * 0.0) + 128.0,
          0.5,
          100.0,
          0.1);
        v129 = *v178;
        if ( *v177 > v79 )
          v129 = (unsigned int *)((char *)v129 + v78);
        v130 = (unsigned int)a77;
        *v129 = (unsigned int)a77 | 0x7F99B200;
        v131 = *v184;
        if ( *v183 > v79 )
          v131 = (unsigned int *)((char *)v131 + v78);
        *v131 = v130 | 0xFFFFFF00;
        if ( (float)(a81 + -32.0) <= (float)(*(float *)(v188 + 124) - *(float *)(v188 + 108)) )
        {
          v133 = &a72;
          v132 = &a80;
        }
        else
        {
          v132 = &a73;
          a73 = a80;
          a74 = a81 + -32.0;
          a75 = a82;
          v133 = &a76;
        }
        ((void (__fastcall *)(int *, float *, float *, _DWORD))checkLiquidCollisions)(v133, &a79, v132, 0);
        v80 = v191;
        LODWORD(a2) = 1.0;
        if ( a81 > (float)(a79 + -32.0) )
          *(float *)&a2 = (float)((float)(a81 - (float)(a79 + -32.0)) * -0.03125) + 1.0;
        v134 = (float *)((char *)sinLutTable + ((v118 >> 18) & 0xFF0));
        v135 = *v191;
        v136 = (float)((4 * v118) & 0xFFFFFC);
        if ( *v185 > v79 )
          v135 = (float *)((char *)v135 + v78);
        *((float *)&a2 + 1) = *v135;
        v137 = v136 * v134[1];
        v138 = v136 * v134[3];
        v139 = *v176;
        if ( *v175 > v79 )
          v139 = (float *)((char *)v139 + v77);
        v140 = *(float *)(a1 + v77 + 6464)
             + (float)((float)(*((float *)&a2 + 1) * (float)(*(float *)(a1 + v77 + 6464) * 0.2))
                     * (float)(v134[2] + (float)(v138 * 0.000000059605)));
        *(float *)&a2 = (float)((float)(v127 * 0.6) + 0.4) * *(float *)&a2;
        *v139 = *(float *)&a2
              * (float)(*(float *)(v81 + v77 - 9600)
                      + (float)((float)((float)(*(float *)(v81 + v77 - 9600) * 0.2) * *((float *)&a2 + 1))
                              * (float)(*v134 + (float)(v137 * 0.000000059605))));
        v139[1] = *(float *)&a2 * v140;
        v83 = v177;
        v82 = v178;
        v81 = v179;
        if ( a81 > *(float *)(v188 + 124) || a81 > (float)(a79 + -4.0) )
        {
          v141 = *v193;
          if ( *v192 > v79 )
            v141 = (_DWORD *)((char *)v141 + v78);
          *v141 = 5;
LABEL_85:
          *(_BYTE *)(v81 + v79 + 2400) = 0;
          v143 = *v193;
          if ( *v192 > v79 )
            v143 = (_DWORD *)((char *)v143 + v78);
          *v143 = 0;
        }
LABEL_143:
        v78 += 4;
        v76 += 12;
        v77 += 8;
        ++v79;
        if ( v78 == 2400 )
        {
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
          v170 = *(_QWORD *)(a1 + 19740);
          *(_QWORD *)(a1 + 6308) = *(_QWORD *)(a1 + 19732);
          *(_QWORD *)(a1 + 6316) = v170;
          v171 = *(_QWORD *)(a1 + 19756);
          *(_QWORD *)(a1 + 6324) = *(_QWORD *)(a1 + 19748);
          *(_QWORD *)(a1 + 6332) = v171;
          v172 = *(_QWORD *)(a1 + 19772);
          *(_QWORD *)(a1 + 6340) = *(_QWORD *)(a1 + 19764);
          *(_QWORD *)(a1 + 6348) = v172;
          JUMPOUT(0x60C9A684);
        }
        continue;
      case 1:
        goto LABEL_40;
      case 2:
      case 5:
      case 8:
      case 0xB:
      case 0xE:
      case 0x11:
        goto LABEL_85;
      case 3:
      case 6:
      case 9:
      case 0xC:
      case 0xF:
        v144 = *(unsigned __int8 *)(LevelInfo_instance + 16);
        if ( v144 == 2 )
        {
          if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
          {
LABEL_96:
            v146 = (void *)(dword_60C9CF0C + 1340);
LABEL_97:
            v147 = sead::Random::getU32(v146);
            v148 = *v191;
            if ( *v185 > v79 )
              v148 = (float *)((char *)v148 + v78);
            *v148 = (float)((float)(COERCE_FLOAT((v147 >> 9) | 0x3F800000) + -1.0) * 0.3) + 0.7;
            v149 = *(unsigned __int8 *)(LevelInfo_instance + 16);
            if ( v149 == 2 )
            {
              if ( *(_BYTE *)(LevelInfo_instance + 17) != 20 )
              {
LABEL_107:
                v151 = (void *)(dword_60C9CF0C + 1340);
                goto LABEL_108;
              }
            }
            else
            {
              v150 = v149 == 0;
              if ( !*(_BYTE *)(LevelInfo_instance + 16) )
                v150 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
              if ( !v150 )
                goto LABEL_107;
            }
            v151 = (void *)sead::GlobalRandom::sInstance;
LABEL_108:
            v152 = sead::Random::getU32(v151);
            v153 = *v190;
            if ( *v189 > v79 )
              v153 = (unsigned int *)((char *)v153 + v78);
            *v153 = v152;
            v154 = *v182;
            if ( *v181 > v79 )
              v154 = (int *)((char *)v154 + v78);
            *v154 = 8;
            v155 = *v82;
            if ( *v83 > v79 )
              v155 = (unsigned int *)((char *)v155 + v78);
            *v155 = -256;
            v156 = *v184;
            if ( *v183 > v79 )
              v156 = (unsigned int *)((char *)v156 + v78);
            *v156 = -256;
            v157 = *v193;
            if ( *v192 > v79 )
              v157 = (_DWORD *)((char *)v157 + v78);
            ++*v157;
            v158 = *v82;
            if ( *v83 > v79 )
              v158 = (unsigned int *)((char *)v158 + v78);
            *v158 = 2140779008;
            v159 = *v184;
            if ( *v183 > v79 )
              v159 = (unsigned int *)((char *)v159 + v78);
            *v159 = -256;
            v80 = v191;
LABEL_123:
            v160 = *v182;
            if ( *v181 > v79 )
              v160 = (int *)((char *)v160 + v78);
            v161 = *v160;
            v162 = *v187;
            if ( *v186 > v79 )
              v162 += v76;
            a80 = *(float *)v162;
            a81 = *(float *)(v162 + 4);
            a82 = *(_DWORD *)(v162 + 8);
            v163 = *v185;
            v164 = *v80;
            v165 = *v80;
            if ( *v185 > v79 )
              v165 = (float *)((char *)v165 + v78);
            v166 = *(_DWORD *)v165;
            a78 = *(_DWORD *)v165;
            if ( v161 <= 0 )
            {
              ((void (__fastcall *)(int *, float, float, float, float))loc_60832560)(&a78, 0.0, 0.6, 0.018, 0.014);
              v163 = *v185;
              v167 = a78;
              v164 = *v191;
            }
            else
            {
              v167 = v166;
            }
            if ( v163 > v79 )
              v164 = (float *)((char *)v164 + v78);
            *(_DWORD *)v164 = v167;
            JUMPOUT(0x605C50B4);
          }
        }
        else
        {
          v145 = v144 == 0;
          if ( !*(_BYTE *)(LevelInfo_instance + 16) )
            v145 = *(_BYTE *)(LevelInfo_instance + 17) == 12;
          if ( !v145 )
            goto LABEL_96;
        }
        v146 = (void *)sead::GlobalRandom::sInstance;
        goto LABEL_97;
      case 4:
      case 7:
      case 0xA:
      case 0xD:
      case 0x10:
        goto LABEL_123;
      default:
        goto LABEL_143;
    }
  }
}
