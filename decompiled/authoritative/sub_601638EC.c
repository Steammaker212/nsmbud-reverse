int __fastcall sub_601638EC(int a1, int a2, float *a3, float *a4, int a5, float *a6)
{
  int v6; // r7
  char *v9; // r0
  int v10; // r5
  __int64 v11; // r0
  float v12; // s20
  float v13; // s22
  float v14; // s16
  float v15; // s18
  float v16; // s24
  float v17; // s26
  float v18; // s17
  float v19; // s19
  float v20; // s28
  float v21; // s30
  float v22; // s2
  int v23; // r0
  float v24; // s16
  float v25; // s18
  float v26; // s24
  float v27; // s22
  float v28; // s20
  int v29; // r9
  float *v30; // r10
  float *v31; // r3
  int v32; // r4
  int v33; // r5
  int v34; // r11
  int v35; // s0
  int v36; // s2
  float v37; // s4
  int v38; // s6
  float v39; // s21
  float v40; // s19
  float v41; // s0
  float v42; // s2
  float v43; // s0
  float *v44; // r1
  float v45; // s2
  float v46; // s2
  float v47; // r0
  float v48; // s19
  float v49; // s23
  float v50; // s25
  float v51; // s21
  float v52; // s0
  char v53; // r1
  bool v54; // zf
  char v55; // r1
  int v56; // r3
  bool v57; // zf
  unsigned int v58; // r0
  float *v59; // r1
  unsigned int v60; // r2
  float v61; // s2
  float v62; // s2
  float v63; // s1
  float v64; // s0
  unsigned int v65; // r1
  float *v66; // r7
  int v67; // r0
  int v68; // r10
  char v69; // r1
  bool v70; // zf
  char v71; // r1
  int v72; // r3
  bool v73; // zf
  float *v74; // r1
  int v75; // r2
  unsigned int v76; // r2
  float v77; // s2
  float v78; // s2
  float v79; // s1
  float v80; // s0
  unsigned int v81; // r1
  float v82; // r0
  float v83; // s0
  float v84; // s2
  float v85; // s19
  int v86; // r1
  int v87; // r2
  int v88; // r1
  char v89; // r11
  int v90; // r0
  int v91; // r2
  int v92; // r9
  unsigned int v93; // r10
  float *v94; // r8
  int v95; // r1
  int v96; // r1
  int v97; // s0
  int v98; // s2
  float v99; // s4
  int v100; // s6
  float v101; // s30
  float v102; // s28
  float v103; // s0
  float v104; // s2
  float v105; // s0
  float v106; // r0
  float v107; // s0
  float v108; // s4
  float v109; // s2
  float v110; // s6
  int v111; // r0
  char v112; // r3
  int v113; // r8
  int v114; // r12
  float v115; // s28
  _DWORD *v117; // [sp+8h] [bp-90h]
  int v118; // [sp+18h] [bp-80h]
  int v119; // [sp+20h] [bp-78h]
  int v120; // [sp+30h] [bp-68h]
  char v121; // [sp+34h] [bp-64h]
  int v122; // [sp+38h] [bp-60h]
  float *v123; // [sp+3Ch] [bp-5Ch]
  float *v124; // [sp+40h] [bp-58h]
  float *v125; // [sp+44h] [bp-54h]
  float *v126; // [sp+48h] [bp-50h]
  float *v128; // [sp+4Ch] [bp-4Ch]
  float *v129; // [sp+50h] [bp-48h]
  float *v130; // [sp+50h] [bp-48h]
  float v132; // [sp+58h] [bp-40h] BYREF
  float v133; // [sp+5Ch] [bp-3Ch]
  float v134; // [sp+60h] [bp-38h] BYREF
  float v135; // [sp+64h] [bp-34h]
  __int64 v136; // [sp+68h] [bp-30h]
  float v137; // [sp+70h] [bp-28h] BYREF
  float v138; // [sp+74h] [bp-24h]
  float v139; // [sp+78h] [bp-20h] BYREF
  float v140; // [sp+7Ch] [bp-1Ch]
  __int64 v141; // [sp+80h] [bp-18h]
  ColliderNodeUnk1 v142; // [sp+88h] [bp-10h] BYREF

  v6 = a5;
  v9 = (char *)a6 + a5;
  if ( *((_BYTE *)a6 + a5 + 2341) )
  {
    v10 = 0;
    if ( !v9[2345] )
      v10 = (int)&a6[3 * a5 + 589];
  }
  else
  {
    v10 = (unsigned __int8)v9[2349];
    if ( v9[2349] )
      v10 = (int)&a6[3 * a5 + 601];
  }
  v11 = *(_QWORD *)(a1 + 152);
  v12 = *(float *)(a1 + 128);
  v13 = *(float *)(a1 + 132);
  v14 = *(float *)(a1 + 172);
  v15 = *(float *)(a1 + 176);
  v16 = *(float *)(a1 + 180);
  v17 = *(float *)(a1 + 184);
  v18 = *(float *)v11;
  v19 = *(float *)(v11 + 4);
  v20 = *(float *)HIDWORD(v11);
  v21 = *(float *)(HIDWORD(v11) + 4);
  ColliderNodeUnk1_ctor(&v142);
  v22 = v18 + v14;
  v23 = *(_DWORD *)(a1 + 348);
  v122 = a2;
  v24 = (float)(v19 + v15) + v13;
  v25 = v22 + v12;
  if ( v23 >= 1 )
  {
    v119 = v10;
    v26 = v12 + (float)(v20 + v16);
    v27 = v13 + (float)(v21 + v17);
    v28 = 3.4028e38;
    v29 = 1 << a5;
    v30 = (float *)((char *)&unk_60AF7728 + 8 * a5);
    v31 = (float *)((char *)&unk_60AF7748 + 8 * a5);
    v126 = v31;
    v117 = (_DWORD *)(a2 + 40);
    v32 = 0;
    v125 = (float *)((char *)&unk_60AF7768 + 8 * a5);
    v33 = 0;
    v124 = v125 + 1;
    v123 = v31 + 1;
    v129 = v30 + 1;
    v121 = 0;
    while ( 1 )
    {
      v34 = *(_DWORD *)(a1 + 352);
      if ( v23 > (unsigned int)v33 )
        v34 += v32;
      if ( (*(_BYTE *)v34 & (unsigned __int8)v29) == 0 )
        goto LABEL_87;
      *(float *)&v35 = v25 + *(float *)(v34 + 4);
      *(float *)&v36 = v24 + *(float *)(v34 + 8);
      v37 = v25 + *(float *)(v34 + 12);
      *(float *)&v38 = v24 + *(float *)(v34 + 16);
      v142.field_0 = v35;
      v142.field_4 = v36;
      v142.field_8 = v37;
      v142.field_C = v38;
      if ( (*(_BYTE *)v34 & (unsigned __int8)(1 << (a5 ^ 1))) != 0 )
        goto LABEL_87;
      v39 = *(float *)&v38 - *(float *)&v36;
      v40 = v37 - *(float *)&v35;
      v41 = sqrtf((float)(v39 * v39) + (float)(v40 * v40));
      if ( v41 <= 0.0 )
        goto LABEL_87;
      v42 = (float)((float)(v39 * (float)(1.0 / v41)) * *v129) + (float)((float)(v40 * (float)(1.0 / v41)) * *v30);
      v43 = -v42;
      if ( v42 > 0.0 )
        v43 = v42;
      if ( v43 >= 1.0 )
        goto LABEL_87;
      v44 = *(float **)(a1 + 360);
      if ( *(_DWORD *)(a1 + 356) > (unsigned int)v33 )
        v44 = (float *)((char *)v44 + v32);
      v45 = v27 + v44[2];
      v134 = v26 + v44[1];
      v135 = v45;
      v46 = v44[4];
      v137 = v26 + v44[3];
      v138 = v27 + v46;
      sub_60166970(&v139, &v134, &v137, v31);
      v47 = a3[1];
      v48 = *a3;
      if ( a5 == 3 )
        v47 = v47 + 4.0;
      v49 = v142.field_8 - *(float *)&v142.field_0;
      v50 = *(float *)&v142.field_C - *(float *)&v142.field_4;
      if ( (float)((float)((float)(a4[1] - *(float *)&v142.field_4) * (float)(v142.field_8 - *(float *)&v142.field_0))
                 - (float)((float)(*a4 - *(float *)&v142.field_0)
                         * (float)(*(float *)&v142.field_C - *(float *)&v142.field_4))) > 0.0 )
        goto LABEL_87;
      v51 = v47;
      if ( (float)((float)((float)(v47 - v140) * (float)(*(float *)&v141 - v139))
                 - (float)((float)(v48 - v139) * (float)(*((float *)&v141 + 1) - v140))) < 0.0 )
        goto LABEL_87;
      v52 = sqrtf((float)(v50 * v50) + (float)(v49 * v49));
      if ( v52 > 0.0 )
      {
        v50 = v50 * (float)(1.0 / v52);
        v49 = v49 * (float)(1.0 / v52);
      }
      if ( v52 == 0.0 )
      {
        v66 = v30;
        v67 = 0;
        v68 = 0;
      }
      else
      {
        v120 = TileMgr_instance;
        sub_607160F4(
          TileMgr_instance,
          (int)(float)((float)(v142.field_8 + *v126) + *v125),
          (unsigned __int16)(int)(float)-(float)((float)(*(float *)&v142.field_C + *v123) + *v124),
          **(unsigned __int8 **)(a1 + 160),
          1);
        v54 = (v53 & 0xF) == 3;
        v118 = 0;
        if ( (v53 & 0xF) != 3 )
          v54 = (v53 & 0xF) == 0;
        if ( v54 )
        {
          sub_607160F4(
            v120,
            (int)(float)(v49 + v142.field_8),
            (unsigned __int16)(int)(float)-(float)(v50 + *(float *)&v142.field_C),
            **(unsigned __int8 **)(a1 + 160),
            1);
          v57 = (v55 & 0xF) == 3;
          if ( (v55 & 0xF) != 3 )
            v57 = (v55 & 0xF) == 0;
          if ( v57 )
          {
            v58 = *(_DWORD *)(a1 + 348);
            v59 = *(float **)(a1 + 352);
            v60 = 0;
            if ( v33 < (int)(v58 - 1) )
              v60 = v33 + 1;
            if ( v58 > v60 )
              v59 += 8 * v60;
            v61 = v24 + v59[2];
            v137 = v25 + v59[1];
            v138 = v61;
            v62 = v59[4];
            v132 = v25 + v59[3];
            v133 = v24 + v62;
            sub_60166970(&v134, &v137, &v132, v56);
            v63 = *(float *)&v136 - v134;
            v64 = *((float *)&v136 + 1) - v135;
            if ( (float)(*(float *)&v136 - v134) > 0.0001 || v63 < -0.0001 )
            {
              if ( v64 > 0.0001 || v64 < -0.0001 )
              {
                v65 = sub_6000F7B8();
              }
              else
              {
                v65 = 0x80000000;
                if ( v63 >= 0.0 )
                  v65 = 0;
              }
            }
            else
            {
              v65 = -1073741824;
              if ( v64 >= 0.0 )
                v65 = 0x40000000;
            }
            v118 = (*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(
                     a1,
                     v65,
                     (unsigned __int8)v29)
                 ^ 1;
          }
        }
        v66 = v30;
        sub_607160F4(
          v120,
          (int)(float)((float)(*(float *)&v142.field_0 - *v126) + *v125),
          (unsigned __int16)(int)(float)-(float)((float)(*(float *)&v142.field_4 - *v123) + *v124),
          **(unsigned __int8 **)(a1 + 160),
          1);
        v68 = 0;
        v70 = (v69 & 0xF) == 3;
        if ( (v69 & 0xF) != 3 )
          v70 = (v69 & 0xF) == 0;
        if ( v70 )
        {
          sub_607160F4(
            v120,
            (int)(float)(*(float *)&v142.field_0 - v49),
            (unsigned __int16)(int)(float)-(float)(*(float *)&v142.field_4 - v50),
            **(unsigned __int8 **)(a1 + 160),
            1);
          v73 = (v71 & 0xF) == 3;
          if ( (v71 & 0xF) != 3 )
            v73 = (v71 & 0xF) == 0;
          if ( v73 )
          {
            v74 = *(float **)(a1 + 352);
            v75 = *(_DWORD *)(a1 + 348);
            if ( v33 > 0 )
              v75 = v33;
            v76 = v75 - 1;
            if ( *(_DWORD *)(a1 + 348) > v76 )
              v74 += 8 * v76;
            v77 = v24 + v74[2];
            v137 = v25 + v74[1];
            v138 = v77;
            v78 = v74[4];
            v132 = v25 + v74[3];
            v133 = v24 + v78;
            sub_60166970(&v134, &v137, &v132, v72);
            v79 = *(float *)&v136 - v134;
            v80 = *((float *)&v136 + 1) - v135;
            if ( (float)(*(float *)&v136 - v134) > 0.0001 || v79 < -0.0001 )
            {
              if ( v80 > 0.0001 || v80 < -0.0001 )
              {
                v81 = sub_6000F7B8();
              }
              else
              {
                v81 = 0x80000000;
                if ( v79 >= 0.0 )
                  v81 = 0;
              }
            }
            else
            {
              v81 = -1073741824;
              if ( v80 >= 0.0 )
                v81 = 0x40000000;
            }
            v68 = (*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(a1, v81, (unsigned __int8)v29)
                ^ 1;
          }
        }
        v67 = v118;
        if ( v118 )
        {
LABEL_77:
          sub_60166E60(&v142, v119, a5, v68, v67);
          goto LABEL_78;
        }
      }
      if ( v68 == 1 )
        goto LABEL_77;
LABEL_78:
      v82 = *a4;
      v135 = a4[1];
      v134 = v82;
      v30 = v66;
      v136 = *(_QWORD *)v66;
      if ( ((int (__fastcall *)(ColliderNodeUnk1 *, float *, float *))loc_60166CF0)(&v142, &v137, &v134) == 1 )
      {
        v83 = v137;
        if ( a6[568] <= v137 && v137 <= a6[570] )
        {
          v84 = v138;
          if ( a6[569] <= v138 && v138 <= a6[571] )
          {
            v85 = (float)((float)(v51 - v138) * (float)(v51 - v138))
                + (float)((float)(v48 - v137) * (float)(v48 - v137));
            if ( v85 <= v28 )
            {
              *(_DWORD *)v122 = 16843009;
              v86 = *(_DWORD *)(a1 + 352);
              if ( *(_DWORD *)(a1 + 348) > (unsigned int)v33 )
                v86 += v32;
              v87 = *(_DWORD *)(v86 + 24);
              v88 = *(_DWORD *)(v86 + 28);
              *v117 = v87;
              v117[1] = v88;
              *(_DWORD *)(v122 + 4) = v33;
              *(_DWORD *)(v122 + 8) = *(_DWORD *)(v34 + 20);
              *(float *)(v122 + 12) = v83;
              *(float *)(v122 + 16) = v84;
              sub_6014A2F0(v122, a1);
              v28 = v85;
              v121 = 1;
            }
          }
        }
      }
LABEL_87:
      v23 = *(_DWORD *)(a1 + 348);
      ++v33;
      v32 += 32;
      if ( v33 >= v23 )
      {
        v6 = a5;
        v89 = 1;
        if ( (v121 & 1) != 0 )
          return v89 & 1;
        goto LABEL_91;
      }
    }
  }
  v28 = 3.4028e38;
LABEL_91:
  v89 = 0;
  if ( (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)a1 + 40))(a1, 0, a4) == 1 )
  {
    v90 = *(_DWORD *)(a1 + 348);
    if ( v90 >= 1 )
    {
      v91 = a5 ^ 1;
      v92 = 0;
      v89 = 0;
      v93 = 0;
      v94 = (float *)((char *)&unk_60AF7728 + 8 * v6);
      v128 = v94;
      v130 = v94 + 1;
      do
      {
        v95 = *(_DWORD *)(a1 + 352);
        if ( v90 > v93 )
          v95 += v92;
        v137 = *(float *)(v95 + 20);
        if ( sub_6015A9BC(&v137, v6, v91) == 1 )
        {
          v96 = *(_DWORD *)(a1 + 352);
          if ( *(_DWORD *)(a1 + 348) > v93 )
            v96 += v92;
          *(float *)&v97 = v25 + *(float *)(v96 + 4);
          *(float *)&v98 = v24 + *(float *)(v96 + 8);
          v99 = v25 + *(float *)(v96 + 12);
          *(float *)&v100 = v24 + *(float *)(v96 + 16);
          v142.field_0 = v97;
          v142.field_4 = v98;
          v142.field_8 = v99;
          v142.field_C = v100;
          if ( (*(_BYTE *)v96 & (unsigned __int8)(1 << (a5 ^ 1))) == 0 )
          {
            v101 = *(float *)&v100 - *(float *)&v98;
            v102 = v99 - *(float *)&v97;
            v103 = sqrtf((float)(v101 * v101) + (float)(v102 * v102));
            if ( v103 > 0.0 )
            {
              v104 = (float)((float)(v101 * (float)(1.0 / v103)) * *v130)
                   + (float)((float)(v102 * (float)(1.0 / v103)) * *v94);
              v105 = -v104;
              if ( v104 > 0.0 )
                v105 = v104;
              if ( v105 < 1.0 )
              {
                v106 = *a4;
                v140 = a4[1];
                v139 = v106;
                v141 = *(_QWORD *)v94;
                if ( ((int (__fastcall *)(ColliderNodeUnk1 *, float *, float *))loc_60166CF0)(&v142, &v134, &v139) == 1 )
                {
                  v107 = v134;
                  v108 = *a4;
                  v109 = v135;
                  v110 = a4[1];
                  v111 = *(_DWORD *)(a1 + 352);
                  v89 = 1;
                  if ( *(_DWORD *)(a1 + 348) > v93 )
                    v111 += v92;
                  if ( (float)((float)((float)(v110 - v135) * (float)(v110 - v135))
                             + (float)((float)(*a4 - v134) * (float)(*a4 - v134))) <= 64.0 )
                  {
                    v113 = *(_DWORD *)(v111 + 24);
                    v114 = *(_DWORD *)(v111 + 28);
                    v91 = v93;
                    v112 = 1;
                  }
                  else
                  {
                    v112 = 0;
                    v113 = *(_DWORD *)(a1 + 304);
                    v114 = *(_DWORD *)(a1 + 308);
                    v137 = *(float *)&arr_dword_60AF76E8[v6];
                    v91 = -1;
                    v107 = v108 + (float)(*v128 * 8.0);
                    v109 = v110 + (float)(*v130 * 8.0);
                    v134 = v107;
                    v135 = v109;
                  }
                  v115 = (float)((float)(v110 - v109) * (float)(v110 - v109))
                       + (float)((float)(v108 - v107) * (float)(v108 - v107));
                  if ( v115 <= v28 )
                  {
                    v89 = 1;
                    *(_BYTE *)v122 = 1;
                    *(_BYTE *)(v122 + 1) = 0;
                    *(_BYTE *)(v122 + 2) = v112;
                    *(_BYTE *)(v122 + 3) = 1;
                    *(_DWORD *)(v122 + 40) = v113;
                    *(_DWORD *)(v122 + 44) = v114;
                    *(_DWORD *)(v122 + 4) = v91;
                    *(float *)(v122 + 8) = v137;
                    *(float *)(v122 + 12) = v107;
                    *(float *)(v122 + 16) = v109;
                    sub_6014A2F0(v122, a1);
                    v28 = v115;
                  }
                }
                v94 = (float *)((char *)&unk_60AF7728 + 8 * v6);
              }
            }
          }
        }
        v90 = *(_DWORD *)(a1 + 348);
        ++v93;
        v92 += 32;
      }
      while ( (int)v93 < v90 );
    }
  }
  return v89 & 1;
}
