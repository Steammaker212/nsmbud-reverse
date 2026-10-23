int __fastcall sub_6014DEE4(int a1, int a2)
{
  int v4; // r8
  int result; // r0
  float *v6; // r10
  float *v7; // r6
  int v8; // r7
  int v9; // r11
  float *v10; // r0
  float v11; // s18
  float v12; // s20
  float v13; // s16
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r3
  bool v19; // vf
  int v20; // r0
  float v21; // s0
  int v22; // r0
  signed int v23; // r3
  signed int v24; // r1
  float v25; // s10
  float v26; // s12
  float v27; // s4
  float v28; // s2
  int v29; // r0
  int v30; // r1
  unsigned int v31; // r0
  int v32; // r1
  float v33; // s12
  float v34; // s0
  float v35; // s6
  float v36; // s4
  int *v37; // r0
  float v38; // s4
  float v39; // s10
  float v40; // s2
  float v41; // s2
  float v42; // s0
  int v43; // r0
  float *v44; // r0
  unsigned int v45; // r9
  float v46; // s2
  float v47; // s2
  int v48; // r0
  int v49; // r7
  int v50; // r1
  int v51; // r0
  int v52; // r1
  int v53; // r3
  int v54; // r0
  unsigned int v55; // r0
  int v56; // r0
  unsigned int v57; // r0
  float *v58; // r2
  int v59; // r1
  float v60; // s12
  float v61; // s0
  float v62; // s6
  float v63; // s4
  int *v64; // r0
  float v65; // s4
  float v66; // s8
  float v67; // s2
  float v68; // s2
  float v69; // s0
  _BYTE *v70; // r8
  int v71; // t1
  float v72; // s0
  float v73; // s2
  float v74; // s4
  _BOOL4 v75; // r2
  _BOOL4 v76; // r1
  int v77; // r2
  float *v78; // r1
  float v79; // s4
  float v80; // s6
  float v81; // s8
  _BOOL4 v82; // r7
  _BOOL4 v83; // r3
  int v84; // r3
  float v85; // s8
  float *v86; // [sp+8h] [bp-58h]
  float *v87; // [sp+8h] [bp-58h]
  float *v88; // [sp+Ch] [bp-54h]
  TileCheck_Result resultStruct; // [sp+10h] [bp-50h] BYREF
  Vec2 positionOffset; // [sp+3Ch] [bp-24h] BYREF
  Vec2 position; // [sp+44h] [bp-1Ch] BYREF
  float v92; // [sp+4Ch] [bp-14h] BYREF
  float v93; // [sp+50h] [bp-10h]
  __int16 v94; // [sp+54h] [bp-Ch] BYREF
  char v95; // [sp+56h] [bp-Ah]
  char v96; // [sp+57h] [bp-9h]
  int v97; // [sp+58h] [bp-8h]
  int v98; // [sp+5Ch] [bp-4h]

  v4 = a1 + a2;
  result = *(unsigned __int8 *)(a1 + a2 + 2349);
  if ( !result )
    return result;
  v6 = (float *)(a1 + 12 * a2);
  v7 = v6 + 601;
  if ( *(_BYTE *)(a1 + 2352) )
  {
    sub_60153134(a1 + 2440, &v92);
    v8 = 0;
    v9 = 0;
    v10 = *(float **)(a1 + 2204);
    v86 = v6 + 602;
    v11 = v6[602];
    v12 = v10[1];
    v13 = v12 + *v7;
    position.x = *v10 + v92;
    position.y = v13;
    positionOffset.x = *v10 + v6[603];
    positionOffset.y = v13;
    if ( (*(_BYTE *)(a1 + 2232) & 1) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 2588);
      v9 = 0;
      if ( v14 <= 5 )
        v9 = *(_DWORD *)(a1 + 56 * v14 + 4952);
    }
    resultStruct.field_C = 0;
    resultStruct.field_10 = 0;
    v94 = 0;
    v95 = **(_BYTE **)(a1 + 2212);
    v96 = **(_BYTE **)(a1 + 2216);
    v97 = 0;
    v98 = a1 + 80;
    sub_6015D144((TileCheck *)(a1 + 4), (int)&v94);
    v15 = *(_DWORD *)(a1 + 2196);
    *(_DWORD *)(a1 + 12) = v15;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    v16 = *(_DWORD *)(a1 + 24);
    if ( v16 >= 1 )
    {
      *(_DWORD *)(a1 + 32) = 1;
      **(_DWORD **)(a1 + 20) = v15;
      v16 = *(_DWORD *)(a1 + 24);
      v8 = *(_DWORD *)(a1 + 32);
    }
    if ( v8 < v16 )
    {
      v17 = *(_DWORD *)(a1 + 2200);
      *(_DWORD *)(a1 + 32) = v8 + 1;
      v18 = *(_DWORD *)(a1 + 28) + v8;
      v19 = __OFSUB__(v18, v16);
      v20 = v18 - v16;
      if ( v20 < 0 != v19 )
        v20 = *(_DWORD *)(a1 + 28) + v8;
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v20) = v17;
    }
    *(_WORD *)(a1 + 4) = 257;
    if ( TileCheck_check((TileCheck *)(a1 + 4), &resultStruct, &position, &positionOffset, 8) != 1 )
      goto LABEL_42;
    v21 = v12 + v11;
    if ( a2 )
    {
      if ( a2 != 1 )
        goto LABEL_24;
      v22 = resultStruct.field_C;
      if ( resultStruct.field_C >= 0 )
        goto LABEL_24;
    }
    else
    {
      v22 = resultStruct.field_C;
      if ( resultStruct.field_C <= 0 )
        goto LABEL_24;
    }
    if ( v9 != v22 )
    {
      if ( a2 )
      {
        if ( v9 > v22 )
          v9 = v22;
      }
      else if ( v9 < v22 )
      {
        v9 = v22;
      }
    }
LABEL_24:
    v23 = ((int)v13 + ((unsigned int)((int)v13 >> 31) >> 28)) & 0xFFFFFFF0;
    v24 = ((int)v21 + ((unsigned int)((int)v21 >> 31) >> 28)) & 0xFFFFFFF0;
    if ( (int)v13 % 16 )
      v25 = (float)v23;
    else
      v25 = (float)(int)v13;
    if ( (int)v21 % 16 )
      v26 = (float)v24;
    else
      v26 = (float)(int)v21;
    if ( (float)(int)v13 == v13 )
      v27 = v25;
    else
      v27 = (float)v23;
    if ( (float)(int)v21 == v21 )
      v28 = v26;
    else
      v28 = (float)v24;
    if ( SLODWORD(v27) != SLODWORD(v28) )
    {
      position.y = (float)(int)v27 + 0.1;
      positionOffset.y = position.y;
      if ( TileCheck_check((TileCheck *)(a1 + 4), &resultStruct, &position, &positionOffset, 8) == 1 )
      {
        if ( a2 )
        {
          v7 = v6 + 601;
          if ( a2 != 1 )
            goto LABEL_43;
          v29 = resultStruct.field_C;
          if ( resultStruct.field_C >= 0 )
            goto LABEL_43;
        }
        else
        {
          v29 = resultStruct.field_C;
          v7 = v6 + 601;
          if ( resultStruct.field_C <= 0 )
            goto LABEL_43;
        }
        if ( v9 != v29 )
        {
          if ( a2 )
          {
            if ( v9 > v29 )
            {
LABEL_44:
              v30 = -11930464;
              if ( !a2 )
                v30 = 11930464;
              v31 = v29 + v30;
              v32 = (v31 >> 20) & 0xFF0;
              v33 = (float)(v31 & 0xFFFFFF) * 0.000000059605;
              v34 = v6[603];
              v35 = *(float *)((char *)&sinLutTable[2] + v32) + (float)(v33 * *(float *)((char *)&sinLutTable[3] + v32));
              v36 = *(float *)((char *)sinLutTable + v32) + (float)(v33 * *(float *)((char *)&sinLutTable[1] + v32));
              if ( v35 > 0.00000011921 || v35 < -0.00000011921 )
              {
                v38 = v36 / v35;
              }
              else
              {
                v37 = dword_6014E620;
                if ( v36 > 0.0 )
                  v37 = &arr_dword_6014E620[1];
                v38 = *(float *)v37;
              }
              if ( v34 <= 0.0 )
                v39 = -v34;
              else
                v39 = v6[603];
              if ( (float)(v93 + (float)(v34 * v38)) <= (float)(v93
                                                              + (float)(v39
                                                                      * (float)((float)((float)(0.0085513 * 0.77778)
                                                                                      + 0.93299)
                                                                              / (float)((float)(-0.023005 * 0.77778)
                                                                                      + 0.3599)))) )
                v40 = v93 + (float)(v34 * v38);
              else
                v40 = *v7;
              v41 = v40 + 2.0;
              if ( v41 > *v7 )
              {
                v6[627] = v34;
                v6[625] = v41;
                v42 = *v86;
                v6[626] = *v86;
                if ( v42 < v41 )
                  v6[626] = v41;
                *(_BYTE *)(v4 + 2524) = 1;
              }
              goto LABEL_62;
            }
          }
          else if ( v9 < v29 )
          {
            goto LABEL_44;
          }
        }
LABEL_43:
        v29 = v9;
        if ( !v9 )
          goto LABEL_62;
        goto LABEL_44;
      }
    }
LABEL_42:
    v7 = v6 + 601;
    goto LABEL_43;
  }
LABEL_62:
  if ( !*(_BYTE *)(a1 + 2351) )
    goto LABEL_114;
  if ( (*(_BYTE *)(a1 + 2224) & 1) != 0 )
  {
    v43 = *(_DWORD *)(a1 + 2572);
    if ( v43 <= 5 )
    {
      if ( *(_BYTE *)(a1 + 56 * v43 + 3603) )
        goto LABEL_114;
    }
  }
  sub_60153134(a1 + 2428, &v92);
  v44 = *(float **)(a1 + 2204);
  v45 = 0x80000000;
  v46 = v44[1] + *v7;
  position.x = *v44 + v92;
  position.y = v46;
  v47 = v44[1] + v6[602];
  positionOffset.x = *v44 + v6[603];
  positionOffset.y = v47;
  v88 = v6 + 602;
  v87 = v6 + 603;
  if ( (*(_DWORD *)(a1 + 2232) & 0x10400) == 0x400 )
  {
    v48 = *(_DWORD *)(a1 + 2584);
    if ( v48 <= 5 )
      v45 = *(_DWORD *)(a1 + 56 * v48 + 4616);
  }
  v49 = 0;
  resultStruct.field_C = 0;
  resultStruct.field_10 = 0;
  v94 = 0;
  v95 = **(_BYTE **)(a1 + 2212);
  v96 = **(_BYTE **)(a1 + 2216);
  v97 = 0;
  v98 = a1 + 80;
  sub_6015D144((TileCheck *)(a1 + 4), (int)&v94);
  v50 = *(_DWORD *)(a1 + 2196);
  *(_DWORD *)(a1 + 12) = v50;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v51 = *(_DWORD *)(a1 + 24);
  if ( v51 >= 1 )
  {
    *(_DWORD *)(a1 + 32) = 1;
    **(_DWORD **)(a1 + 20) = v50;
    v51 = *(_DWORD *)(a1 + 24);
    v49 = *(_DWORD *)(a1 + 32);
  }
  if ( v49 < v51 )
  {
    v52 = *(_DWORD *)(a1 + 2200);
    *(_DWORD *)(a1 + 32) = v49 + 1;
    v53 = *(_DWORD *)(a1 + 28) + v49;
    v19 = __OFSUB__(v53, v51);
    v54 = v53 - v51;
    if ( v54 < 0 != v19 )
      v54 = *(_DWORD *)(a1 + 28) + v49;
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v54) = v52;
  }
  *(_WORD *)(a1 + 4) = 257;
  if ( TileCheck_check((TileCheck *)(a1 + 4), &resultStruct, &position, &positionOffset, 4) != 1 )
    goto LABEL_82;
  if ( a2 )
  {
    if ( a2 != 1 || (v55 = resultStruct.field_C, resultStruct.field_C >= 0) )
    {
LABEL_82:
      if ( v45 == 0x80000000 )
        goto LABEL_114;
      goto LABEL_96;
    }
  }
  else
  {
    v55 = resultStruct.field_C;
    if ( resultStruct.field_C <= 0 )
      goto LABEL_82;
  }
  if ( v45 == v55 )
    goto LABEL_82;
  if ( !a2 )
  {
    if ( v45 > v55 )
      v45 = v55;
LABEL_95:
    if ( v45 == 0x80000000 )
      goto LABEL_114;
    goto LABEL_96;
  }
  if ( v45 >= v55 )
    goto LABEL_95;
  v45 = v55;
  if ( v55 == 0x80000000 )
    goto LABEL_114;
LABEL_96:
  v56 = 11930464;
  if ( !a2 )
    v56 = -11930464;
  v57 = v45 + v56;
  v58 = sinLutTable;
  v59 = (v57 >> 20) & 0xFF0;
  v60 = (float)(v57 & 0xFFFFFF) * 0.000000059605;
  v61 = *v87;
  v62 = *(float *)((char *)v58 + v59 + 8) + (float)(v60 * *(float *)((char *)v58 + v59 + 12));
  v63 = *(float *)((char *)v58 + v59) + (float)(v60 * *(float *)((char *)v58 + v59 + 4));
  if ( v62 > 0.00000011921 || v62 < -0.00000011921 )
  {
    v65 = v63 / v62;
  }
  else
  {
    v64 = dword_6014E8A0;
    if ( v63 > 0.0 )
      v64 = &arr_dword_6014E8A0[1];
    v65 = *(float *)v64;
  }
  if ( v61 <= 0.0 )
    v66 = -v61;
  else
    v66 = *v87;
  if ( (float)(v93
             + (float)(v66
                     * (float)((float)((float)(-0.0096698 * 0.35556) + 0.92388)
                             / (float)((float)(-0.022558 * 0.35556) + -0.38268)))) <= (float)(v93 + (float)(v61 * v65)) )
    v67 = v93 + (float)(v61 * v65);
  else
    v67 = *v88;
  v68 = v67 + -2.0;
  if ( v68 < *v88 )
  {
    v6[627] = v61;
    v69 = *v7;
    v6[625] = *v7;
    v6[626] = v68;
    if ( v69 > v68 )
      v6[625] = v68;
    *(_BYTE *)(v4 + 2524) = 1;
  }
LABEL_114:
  result = *(unsigned __int8 *)(v4 + 2526);
  if ( !*(_BYTE *)(v4 + 2526) )
    return result;
  v71 = *(unsigned __int8 *)(v4 + 2524);
  v70 = (_BYTE *)(v4 + 2524);
  result = v71;
  if ( v71 )
    return result;
  v72 = *v7;
  result = (int)(v6 + 625);
  v73 = v6[625];
  if ( v73 >= *v7 )
  {
    v77 = 1;
    if ( v73 <= *v7 )
      goto LABEL_124;
    v74 = v73 + -1.0;
    v75 = v73 < (float)(v73 + -1.0);
    v76 = (float)(v73 + -1.0) <= v72;
  }
  else
  {
    v74 = v73 + 1.0;
    v75 = (float)(v73 + 1.0) < v73;
    v76 = (float)(v73 + 1.0) >= v72;
  }
  v77 = v76 || v75;
  if ( v77 )
    v73 = *v7;
  else
    v73 = v74;
  *(float *)result = v73;
LABEL_124:
  v78 = v6 + 626;
  v79 = v6[602];
  v80 = v6[626];
  if ( v80 >= v79 )
  {
    v84 = 1;
    if ( v80 <= v79 )
      goto LABEL_132;
    v81 = v80 + -1.0;
    v82 = v80 < (float)(v80 + -1.0);
    v83 = (float)(v80 + -1.0) <= v79;
  }
  else
  {
    v81 = v80 + 1.0;
    v82 = (float)(v80 + 1.0) < v80;
    v83 = (float)(v80 + 1.0) >= v79;
  }
  v84 = v83 || v82;
  if ( v84 )
    v80 = v6[602];
  else
    v80 = v81;
  *v78 = v80;
LABEL_132:
  if ( (v77 & v84) == 0 )
  {
    v85 = v72;
    if ( v73 >= v72 )
    {
      v85 = v73;
      if ( v73 > v79 )
        v85 = v79;
    }
    *(float *)result = v85;
    if ( v80 >= v72 )
    {
      v72 = v80;
      if ( v80 > v79 )
        v72 = v79;
    }
    result = 1;
    *v78 = v72;
    *v70 = 1;
  }
  return result;
}
