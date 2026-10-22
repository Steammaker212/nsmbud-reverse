void __fastcall sub_60787B8C(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
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
        float a44,
        float a45,
        int a46)
{
  int Area; // r0
  unsigned __int16 *v34; // r0
  float *v35; // r2
  float v36; // s4
  float v37; // s6
  float v38; // s0
  unsigned int v39; // r10
  int v40; // r8
  _DWORD *v41; // r4
  int v42; // r0
  int v43; // r5
  int v44; // r1
  bool v45; // zf
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r3
  int v50; // r10
  _DWORD *v51; // r1
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int *v55; // r0
  int v56; // r1
  int v57; // r2
  _DWORD *v58; // r2
  int v59; // r0
  int v60; // r1
  int v61; // r2
  bool v62; // zf
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r7
  int v67; // r5
  int i; // r5
  int v69; // r0
  int v70; // r1
  int v71; // r2
  int v72; // r0
  int v73; // r3
  bool v74; // zf
  int v75; // r3
  int v76; // r3
  int v77; // r7
  int v78; // r3
  bool v79; // zf
  int v80; // r3
  int v81; // r3
  _DWORD *v82; // r2
  int v83; // r3
  int v84; // r3
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r3
  bool v89; // zf
  int v90; // r3
  int v91; // r3
  int v92; // r3
  bool v93; // zf
  int v94; // r3
  int v95; // r6
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int j; // r9
  float *v100; // r1
  float v101; // s2
  int v102; // r6
  int v103; // r4
  int v104; // r8
  int v105; // r0
  int v106; // r1
  int v107; // r2
  _WORD *v108; // r0
  int v109; // r0
  float v110; // s2
  unsigned int v111; // [sp+A4h] [bp+3Ch]
  _DWORD *v112; // [sp+A8h] [bp+40h]

  Area = Level_getArea(Level_instance, a2);
  v34 = (unsigned __int16 *)sub_60727D48(Area, a3);
  v35 = (float *)((char *)&unk_60B0C0DC + 8 * *((unsigned __int8 *)v34 + 11));
  v36 = v35[1];
  v37 = (float)-v34[1];
  a44 = (float)*v34 + *v35;
  v38 = a44;
  a45 = v36 + v37;
  a46 = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(float *)(a1 + 192) = v38;
  *(float *)(a1 + 196) = v36 + v37;
  v39 = *((unsigned __int8 *)v34 + 11);
  v40 = v34[8] & 1;
  v112 = (_DWORD *)a1;
  if ( sub_6040E510(LevelInfo_instance) != 1 )
  {
    if ( sub_6040E538(LevelInfo_instance) == 1 )
    {
      v51 = (_DWORD *)a1;
      v52 = *(_DWORD *)(a1 + 32);
      if ( v52 )
      {
        (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v52 + 256))(v52, &a44, 33, v40);
        v51 = (_DWORD *)a1;
      }
      v53 = v51[9];
      if ( v53 )
      {
        (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v53 + 256))(v53, &a44, 33, v40);
        v51 = (_DWORD *)a1;
      }
      v54 = v51[10];
      if ( v54 )
      {
        (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v54 + 256))(v54, &a44, 33, v40);
        v51 = (_DWORD *)a1;
      }
      v55 = (int *)v51[11];
      if ( !v55 )
        goto LABEL_187;
      v56 = *v55;
      v57 = 33;
    }
    else
    {
      v58 = (_DWORD *)a1;
      if ( v39 <= 0x1B && ((1 << v39) & 0xA000083) != 0 )
      {
        *(_BYTE *)(a1 + 64) = 0;
        a37 = 0;
        a38 = 0;
        a39 = 0;
        sub_608DEB0C(&a37, 4, (int)&a40);
        a30 = 0;
        a31 = 0;
        a32 = 0;
        sub_608DEB0C(&a30, 4, (int)&a33);
        v59 = *(_DWORD *)(a1 + 32);
        if ( v59 )
        {
          if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
          {
            if ( a30 < a31 )
              *(_DWORD *)(a32 + 4 * a30++) = v59;
          }
          else
          {
            if ( a37 < a38 )
              *(_DWORD *)(a39 + 4 * a37++) = v59;
            *(_BYTE *)(a1 + 64) |= 1u;
          }
        }
        v63 = *(_DWORD *)(a1 + 36);
        if ( v63 )
        {
          if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
          {
            if ( a30 < a31 )
              *(_DWORD *)(a32 + 4 * a30++) = v63;
          }
          else
          {
            if ( a37 < a38 )
              *(_DWORD *)(a39 + 4 * a37++) = v63;
            *(_BYTE *)(a1 + 64) |= 2u;
          }
        }
        v64 = *(_DWORD *)(a1 + 40);
        if ( v64 )
        {
          if ( (*(_BYTE *)(a1 + 152) & 4) != 0 )
          {
            if ( a30 < a31 )
              *(_DWORD *)(a32 + 4 * a30++) = v64;
          }
          else
          {
            if ( a37 < a38 )
              *(_DWORD *)(a39 + 4 * a37++) = v64;
            *(_BYTE *)(a1 + 64) |= 4u;
          }
        }
        v65 = *(_DWORD *)(a1 + 44);
        if ( v65 )
        {
          if ( (*(_BYTE *)(a1 + 152) & 8) != 0 )
          {
            if ( a30 < a31 )
              *(_DWORD *)(a32 + 4 * a30++) = v65;
          }
          else
          {
            if ( a37 < a38 )
              *(_DWORD *)(a39 + 4 * a37++) = v65;
            *(_BYTE *)(a1 + 64) |= 8u;
          }
        }
        v66 = a37;
        if ( !sub_607888EC() )
        {
          if ( v39 != 27 )
            sub_608DEBEC(&a37, dword_60C9CF0C + 1340);
          if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
          {
            v69 = Level_getArea(Level_instance, a2);
            v70 = *(_DWORD *)(v69 + 148);
            if ( v70 >= 1 )
            {
              v71 = 0;
              v72 = *(_DWORD *)(v69 + 28) + 16;
              while ( *(_BYTE *)(v72 - 5) != 26 )
              {
                ++v71;
                v72 += 24;
                if ( v71 >= v70 )
                  goto LABEL_194;
              }
              v110 = (float)(-16 - *(unsigned __int16 *)(v72 - 14));
              a44 = (float)*(unsigned __int16 *)(v72 - 16) + 8.0;
              a45 = v110;
              a46 = 0;
            }
          }
LABEL_194:
          JUMPOUT(0x60788794);
        }
        v67 = 0;
        a26 = 0;
        if ( v66 >= 1 )
        {
          do
          {
            ((void (__fastcall *)(_DWORD *, int *, int *, unsigned int))loc_60788A10)(v112, &a27, &a26, a2);
            (*(void (__fastcall **)(_DWORD, int *, unsigned int, int))(**(_DWORD **)(a39 + 4 * v67) + 256))(
              *(_DWORD *)(a39 + 4 * v67),
              &a27,
              v39,
              a26);
            ++v67;
          }
          while ( v66 != v67 );
        }
        if ( a30 >= 1 )
        {
          for ( i = 0; i < a30; ++i )
            (*(void (__fastcall **)(_DWORD, float *, unsigned int, int))(**(_DWORD **)(a32 + 4 * i) + 256))(
              *(_DWORD *)(a32 + 4 * i),
              &a44,
              v39,
              v40);
        }
LABEL_187:
        __asm { POP             {R4-R11,PC} }
      }
      v85 = *(_DWORD *)(a1 + 32);
      if ( v85 )
      {
        (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v85 + 256))(v85, &a44, v39, v40);
        v58 = (_DWORD *)a1;
      }
      v86 = v58[9];
      if ( v86 )
      {
        (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v86 + 256))(v86, &a44, v39, v40);
        v58 = (_DWORD *)a1;
      }
      v87 = v58[10];
      if ( v87 )
      {
        (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v87 + 256))(v87, &a44, v39, v40);
        v58 = (_DWORD *)a1;
      }
      v55 = (int *)v58[11];
      if ( !v55 )
        goto LABEL_187;
      v56 = *v55;
      v57 = v39;
    }
    (*(void (__fastcall **)(int *, float *, int, int))(v56 + 256))(v55, &a44, v57, v40);
    goto LABEL_187;
  }
  a40 = 0;
  a39 = 0;
  a38 = 0;
  a37 = 0;
  v41 = (_DWORD *)a1;
  v42 = *(_DWORD *)(a1 + 32);
  v43 = 15;
  v44 = *(unsigned __int8 *)(dword_60CC6D8C + 17);
  if ( *(_BYTE *)(dword_60CC6D8C + 17) )
  {
    v45 = v42 == 0;
    if ( v42 )
    {
      v44 = *(_DWORD *)(v42 + 1316);
      v45 = v44 == 0;
    }
    if ( v45 )
    {
      v46 = 0;
      v47 = 0;
    }
    else
    {
      v47 = 1;
      if ( (v44 | 1) == 3 || (v47 = 0, v44 != 6) )
      {
        v46 = dword_60B0C20C[v44];
        if ( (unsigned int)(v46 - 29) <= 3 )
        {
          a37 = v46;
          v43 = ~(1 << (v46 - 29)) & 0xF;
        }
        else
        {
          v46 = 0;
        }
      }
      else
      {
        v46 = 0;
      }
    }
    v48 = v41[9];
    if ( !v48 )
    {
      v50 = 0;
      goto LABEL_91;
    }
    v49 = *(_DWORD *)(v48 + 1316);
    if ( !v49 )
    {
      v50 = 0;
      goto LABEL_91;
    }
    if ( (v49 | 1) == 3 )
    {
      v45 = v47 == 0;
      v47 = 1;
      if ( !v45 )
      {
        v50 = 0;
        v47 = 1;
        goto LABEL_91;
      }
    }
    else if ( v49 == 6 )
    {
      v50 = 0;
      goto LABEL_91;
    }
    v50 = dword_60B0C20C[v49];
    v73 = v50 - 29;
    v74 = (v43 & (1 << (v50 - 29))) == 0;
    if ( (v43 & (1 << (v50 - 29))) != 0 )
      v73 = 1 << v73;
    else
      v50 = 0;
    if ( !v74 )
    {
      a38 = v50;
      v43 &= ~v73;
    }
LABEL_91:
    v75 = v41[10];
    if ( v75 && (v76 = *(_DWORD *)(v75 + 1316)) != 0 )
    {
      if ( (v76 | 1) == 3 )
      {
        v45 = v47 == 0;
        v47 = 1;
        if ( !v45 )
        {
          v77 = 0;
          v47 = 1;
          goto LABEL_104;
        }
LABEL_99:
        v77 = dword_60B0C20C[v76];
        v78 = v77 - 29;
        v79 = (v43 & (1 << (v77 - 29))) == 0;
        if ( (v43 & (1 << (v77 - 29))) != 0 )
          v78 = 1 << v78;
        else
          v77 = 0;
        if ( !v79 )
        {
          a39 = v77;
          v43 &= ~v78;
        }
        goto LABEL_104;
      }
      if ( v76 != 6 )
        goto LABEL_99;
      v77 = 0;
    }
    else
    {
      v77 = 0;
    }
LABEL_104:
    v80 = v41[11];
    if ( !v80 )
      goto LABEL_157;
    v81 = *(_DWORD *)(v80 + 1316);
    if ( !v81 )
      goto LABEL_157;
    if ( (v81 | 1) == 3 )
    {
      if ( v47 )
        goto LABEL_157;
    }
    else if ( v81 == 6 )
    {
      goto LABEL_157;
    }
    v82 = dword_60B0C20C;
LABEL_154:
    v95 = v82[v81];
    if ( (v43 & (1 << (v95 - 29))) != 0 )
    {
      a40 = v82[v81];
      v43 &= ~(1 << (v95 - 29));
      if ( v46 )
        goto LABEL_163;
LABEL_158:
      if ( v42 )
      {
        v96 = sub_608FBB8C((v43 & -v43) - 1);
        if ( v96 + 29 <= 32 && (v43 & (1 << v96)) != 0 )
        {
          a37 = v96 + 29;
          v43 &= ~(1 << v96);
        }
        v41 = v112;
      }
LABEL_163:
      if ( !v50 && v41[9] )
      {
        v97 = sub_608FBB8C((v43 & -v43) - 1);
        if ( v97 + 29 <= 32 && (v43 & (1 << v97)) != 0 )
        {
          a38 = v97 + 29;
          v43 &= ~(1 << v97);
        }
        v41 = v112;
      }
      if ( !v77 && v41[10] )
      {
        v98 = sub_608FBB8C((v43 & -v43) - 1);
        if ( v98 + 29 <= 32 && (v43 & (1 << v98)) != 0 )
        {
          a39 = v98 + 29;
          v43 &= ~(1 << v98);
        }
        v41 = v112;
      }
      v111 = a2;
      if ( !v95 )
      {
        if ( v41[11] )
        {
          v109 = sub_608FBB8C((v43 & -v43) - 1);
          v41 = v112;
          if ( v109 + 29 <= 32 && (v43 & (1 << v109)) != 0 )
            a40 = v109 + 29;
        }
      }
      for ( j = 0; j != 4; ++j )
      {
        v102 = v41[j + 8];
        if ( v102 )
        {
          v103 = v40;
          v104 = *(&a37 + j);
          if ( sub_6040E510(LevelInfo_instance) == 1
            && (v105 = Level_getArea(Level_instance, v111), v106 = *(_DWORD *)(v105 + 148), v106 >= 1) )
          {
            v107 = 0;
            v108 = (_WORD *)(*(_DWORD *)(v105 + 28) + 16);
            while ( *((unsigned __int8 *)v108 - 5) != v104 )
            {
              ++v107;
              v108 += 12;
              if ( v107 >= v106 )
                goto LABEL_184;
            }
            v100 = (float *)((char *)&unk_60B0C0DC + 8 * v104);
            v101 = v100[1] + (float)-(unsigned __int16)*(v108 - 7);
            a44 = (float)(unsigned __int16)*(v108 - 8) + *v100;
            a45 = v101;
            a46 = 0;
            v40 = *v108 & 1;
          }
          else
          {
LABEL_184:
            v40 = v103;
          }
          (*(void (__fastcall **)(int, float *, _DWORD, int))(*(_DWORD *)v102 + 256))(v102, &a44, 0, v40);
          v41 = v112;
        }
      }
      goto LABEL_187;
    }
LABEL_157:
    v95 = 0;
    if ( v46 )
      goto LABEL_163;
    goto LABEL_158;
  }
  if ( v42 )
  {
    v60 = *(_DWORD *)(v42 + 1316);
    v61 = 0;
    v62 = v60 == 0;
    if ( v60 )
    {
      v61 = 1;
      v62 = (v60 | 1) == 3;
    }
    if ( v62 || (v61 = 0, (unsigned int)(v60 - 5) >= 2) )
    {
      v46 = dword_60B0C1F4[v60];
      if ( (unsigned int)(v46 - 29) <= 3 )
      {
        a37 = v46;
        v43 = ~(1 << (v46 - 29)) & 0xF;
      }
      else
      {
        v46 = 0;
      }
    }
    else
    {
      v46 = 0;
    }
  }
  else
  {
    v46 = 0;
    v61 = 0;
  }
  v83 = v41[9];
  if ( !v83 )
  {
    v50 = 0;
    goto LABEL_134;
  }
  v84 = *(_DWORD *)(v83 + 1316);
  if ( v84 )
  {
    if ( (v84 | 1) == 3 )
    {
      v45 = v61 == 0;
      v61 = 1;
      if ( !v45 )
      {
        v50 = 0;
        v61 = 1;
        goto LABEL_134;
      }
    }
    else if ( (unsigned int)(v84 - 5) < 2 )
    {
      v50 = 0;
      goto LABEL_134;
    }
  }
  v50 = dword_60B0C1F4[v84];
  v88 = v50 - 29;
  v89 = (v43 & (1 << (v50 - 29))) == 0;
  if ( (v43 & (1 << (v50 - 29))) != 0 )
    v88 = 1 << v88;
  else
    v50 = 0;
  if ( !v89 )
  {
    a38 = v50;
    v43 &= ~v88;
  }
LABEL_134:
  v90 = v41[10];
  if ( v90 )
  {
    v91 = *(_DWORD *)(v90 + 1316);
    if ( v91 )
    {
      if ( (v91 | 1) == 3 )
      {
        v45 = v61 == 0;
        v61 = 1;
        if ( !v45 )
        {
          v77 = 0;
          v61 = 1;
LABEL_147:
          v94 = v41[11];
          if ( !v94 )
            goto LABEL_157;
          v81 = *(_DWORD *)(v94 + 1316);
          if ( v81 )
          {
            if ( (v81 | 1) == 3 )
            {
              if ( v61 )
                goto LABEL_157;
            }
            else if ( (unsigned int)(v81 - 5) < 2 )
            {
              goto LABEL_157;
            }
          }
          v82 = dword_60B0C1F4;
          goto LABEL_154;
        }
      }
      else if ( (unsigned int)(v91 - 5) < 2 )
      {
        v77 = 0;
        goto LABEL_147;
      }
    }
    v77 = dword_60B0C1F4[v91];
    v92 = v77 - 29;
    v93 = (v43 & (1 << (v77 - 29))) == 0;
    if ( (v43 & (1 << (v77 - 29))) != 0 )
      v92 = 1 << v92;
    else
      v77 = 0;
    if ( !v93 )
    {
      a39 = v77;
      v43 &= ~v92;
    }
    goto LABEL_147;
  }
  v77 = 0;
  goto LABEL_147;
}
