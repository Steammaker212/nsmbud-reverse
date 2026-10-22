int *__fastcall sub_60787B8C(int a1, unsigned int a2, int a3)
{
  int Area; // r0
  unsigned __int16 *v7; // r0
  float *v8; // r2
  float v9; // s4
  float v10; // s6
  float v11; // s0
  unsigned int v12; // r10
  int v13; // r8
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r5
  int v17; // r1
  bool v18; // zf
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r10
  _DWORD *v24; // r1
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int *result; // r0
  int v29; // r1
  int v30; // r2
  _DWORD *v31; // r2
  int v32; // r0
  int v33; // r1
  int v34; // r2
  bool v35; // zf
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r7
  int v40; // r5
  int j; // r5
  int v42; // r0
  int v43; // r1
  int v44; // r2
  _WORD *v45; // r0
  int v46; // r3
  bool v47; // zf
  int v48; // r3
  int v49; // r3
  int v50; // r7
  int v51; // r3
  bool v52; // zf
  int v53; // r3
  int v54; // r3
  _DWORD *v55; // r2
  int v56; // r3
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r3
  bool v62; // zf
  int v63; // r3
  int v64; // r3
  int v65; // r3
  bool v66; // zf
  int v67; // r3
  int v68; // r6
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int i; // r9
  float *v73; // r1
  float v74; // s2
  int v75; // r6
  int v76; // r4
  int v77; // r8
  int v78; // r0
  int v79; // r1
  int v80; // r2
  _WORD *v81; // r0
  int v82; // r0
  float v83; // s2
  float v84; // s0
  float v85; // s2
  float v86; // s16
  int k; // r5
  int m; // r5
  unsigned int v89; // [sp+Ch] [bp-5Ch]
  _DWORD *v90; // [sp+10h] [bp-58h]
  int v91; // [sp+14h] [bp-54h] BYREF
  _BYTE v92[12]; // [sp+18h] [bp-50h] BYREF
  int v93; // [sp+24h] [bp-44h] BYREF
  int v94; // [sp+28h] [bp-40h]
  int v95; // [sp+2Ch] [bp-3Ch]
  int v96; // [sp+30h] [bp-38h] BYREF
  int v97; // [sp+40h] [bp-28h] BYREF
  int v98; // [sp+44h] [bp-24h]
  int v99; // [sp+48h] [bp-20h]
  int v100[4]; // [sp+4Ch] [bp-1Ch] BYREF
  float v101; // [sp+5Ch] [bp-Ch] BYREF
  float v102; // [sp+60h] [bp-8h]
  int v103; // [sp+64h] [bp-4h]

  Area = Level_getArea(Level_instance, a2);
  v7 = (unsigned __int16 *)sub_60727D48(Area, a3);
  v8 = (float *)((char *)&unk_60B0C0DC + 8 * *((unsigned __int8 *)v7 + 11));
  v9 = v8[1];
  v10 = (float)-v7[1];
  v101 = (float)*v7 + *v8;
  v11 = v101;
  v102 = v9 + v10;
  v103 = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(float *)(a1 + 192) = v11;
  *(float *)(a1 + 196) = v9 + v10;
  v12 = *((unsigned __int8 *)v7 + 11);
  v13 = v7[8] & 1;
  v90 = (_DWORD *)a1;
  if ( sub_6040E510(LevelInfo_instance) == 1 )
  {
    v100[0] = 0;
    v99 = 0;
    v98 = 0;
    v97 = 0;
    v14 = (_DWORD *)a1;
    v15 = *(_DWORD *)(a1 + 32);
    v16 = 15;
    v17 = *(unsigned __int8 *)(dword_60CC6D8C + 17);
    if ( *(_BYTE *)(dword_60CC6D8C + 17) )
    {
      v18 = v15 == 0;
      if ( v15 )
      {
        v17 = *(_DWORD *)(v15 + 1316);
        v18 = v17 == 0;
      }
      if ( v18 )
      {
        v19 = 0;
        v20 = 0;
      }
      else
      {
        v20 = 1;
        if ( (v17 | 1) == 3 || (v20 = 0, v17 != 6) )
        {
          v19 = dword_60B0C20C[v17];
          if ( (unsigned int)(v19 - 29) <= 3 )
          {
            v97 = v19;
            v16 = ~(1 << (v19 - 29)) & 0xF;
          }
          else
          {
            v19 = 0;
          }
        }
        else
        {
          v19 = 0;
        }
      }
      v21 = v14[9];
      if ( !v21 )
      {
        v23 = 0;
        goto LABEL_91;
      }
      v22 = *(_DWORD *)(v21 + 1316);
      if ( !v22 )
      {
        v23 = 0;
        goto LABEL_91;
      }
      if ( (v22 | 1) == 3 )
      {
        v18 = v20 == 0;
        v20 = 1;
        if ( !v18 )
        {
          v23 = 0;
          v20 = 1;
          goto LABEL_91;
        }
      }
      else if ( v22 == 6 )
      {
        v23 = 0;
        goto LABEL_91;
      }
      v23 = dword_60B0C20C[v22];
      v46 = v23 - 29;
      v47 = (v16 & (1 << (v23 - 29))) == 0;
      if ( (v16 & (1 << (v23 - 29))) != 0 )
        v46 = 1 << v46;
      else
        v23 = 0;
      if ( !v47 )
      {
        v98 = v23;
        v16 &= ~v46;
      }
LABEL_91:
      v48 = v14[10];
      if ( v48 && (v49 = *(_DWORD *)(v48 + 1316)) != 0 )
      {
        if ( (v49 | 1) == 3 )
        {
          v18 = v20 == 0;
          v20 = 1;
          if ( !v18 )
          {
            v50 = 0;
            v20 = 1;
            goto LABEL_104;
          }
LABEL_99:
          v50 = dword_60B0C20C[v49];
          v51 = v50 - 29;
          v52 = (v16 & (1 << (v50 - 29))) == 0;
          if ( (v16 & (1 << (v50 - 29))) != 0 )
            v51 = 1 << v51;
          else
            v50 = 0;
          if ( !v52 )
          {
            v99 = v50;
            v16 &= ~v51;
          }
          goto LABEL_104;
        }
        if ( v49 != 6 )
          goto LABEL_99;
        v50 = 0;
      }
      else
      {
        v50 = 0;
      }
LABEL_104:
      v53 = v14[11];
      if ( !v53 )
        goto LABEL_157;
      v54 = *(_DWORD *)(v53 + 1316);
      if ( !v54 )
        goto LABEL_157;
      if ( (v54 | 1) == 3 )
      {
        if ( v20 )
          goto LABEL_157;
      }
      else if ( v54 == 6 )
      {
        goto LABEL_157;
      }
      v55 = dword_60B0C20C;
LABEL_154:
      v68 = v55[v54];
      if ( (v16 & (1 << (v68 - 29))) != 0 )
      {
        v100[0] = v55[v54];
        v16 &= ~(1 << (v68 - 29));
        if ( v19 )
          goto LABEL_163;
LABEL_158:
        if ( v15 )
        {
          v69 = sub_608FBB8C((v16 & -v16) - 1);
          if ( v69 + 29 <= 32 && (v16 & (1 << v69)) != 0 )
          {
            v97 = v69 + 29;
            v16 &= ~(1 << v69);
          }
          v14 = v90;
        }
LABEL_163:
        if ( !v23 && v14[9] )
        {
          v70 = sub_608FBB8C((v16 & -v16) - 1);
          if ( v70 + 29 <= 32 && (v16 & (1 << v70)) != 0 )
          {
            v98 = v70 + 29;
            v16 &= ~(1 << v70);
          }
          v14 = v90;
        }
        if ( !v50 && v14[10] )
        {
          v71 = sub_608FBB8C((v16 & -v16) - 1);
          if ( v71 + 29 <= 32 && (v16 & (1 << v71)) != 0 )
          {
            v99 = v71 + 29;
            v16 &= ~(1 << v71);
          }
          v14 = v90;
        }
        v89 = a2;
        if ( !v68 )
        {
          if ( v14[11] )
          {
            v82 = sub_608FBB8C((v16 & -v16) - 1);
            v14 = v90;
            if ( v82 + 29 <= 32 && (v16 & (1 << v82)) != 0 )
              v100[0] = v82 + 29;
          }
        }
        for ( i = 0; i != 4; ++i )
        {
          result = &v14[i];
          v75 = result[8];
          if ( v75 )
          {
            v76 = v13;
            v77 = *(&v97 + i);
            if ( sub_6040E510(LevelInfo_instance) == 1
              && (v78 = Level_getArea(Level_instance, v89), v79 = *(_DWORD *)(v78 + 148), v79 >= 1) )
            {
              v80 = 0;
              v81 = (_WORD *)(*(_DWORD *)(v78 + 28) + 16);
              while ( *((unsigned __int8 *)v81 - 5) != v77 )
              {
                ++v80;
                v81 += 12;
                if ( v80 >= v79 )
                  goto LABEL_184;
              }
              v73 = (float *)((char *)&unk_60B0C0DC + 8 * v77);
              v74 = v73[1] + (float)-(unsigned __int16)*(v81 - 7);
              v101 = (float)(unsigned __int16)*(v81 - 8) + *v73;
              v102 = v74;
              v103 = 0;
              v13 = *v81 & 1;
            }
            else
            {
LABEL_184:
              v13 = v76;
            }
            result = (int *)(*(int (__fastcall **)(int, float *, _DWORD, int))(*(_DWORD *)v75 + 256))(
                              v75,
                              &v101,
                              0,
                              v13);
            v14 = v90;
          }
        }
        return result;
      }
LABEL_157:
      v68 = 0;
      if ( v19 )
        goto LABEL_163;
      goto LABEL_158;
    }
    if ( v15 )
    {
      v33 = *(_DWORD *)(v15 + 1316);
      v34 = 0;
      v35 = v33 == 0;
      if ( v33 )
      {
        v34 = 1;
        v35 = (v33 | 1) == 3;
      }
      if ( v35 || (v34 = 0, (unsigned int)(v33 - 5) >= 2) )
      {
        v19 = dword_60B0C1F4[v33];
        if ( (unsigned int)(v19 - 29) <= 3 )
        {
          v97 = v19;
          v16 = ~(1 << (v19 - 29)) & 0xF;
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        v19 = 0;
      }
    }
    else
    {
      v19 = 0;
      v34 = 0;
    }
    v56 = v14[9];
    if ( !v56 )
    {
      v23 = 0;
      goto LABEL_134;
    }
    v57 = *(_DWORD *)(v56 + 1316);
    if ( v57 )
    {
      if ( (v57 | 1) == 3 )
      {
        v18 = v34 == 0;
        v34 = 1;
        if ( !v18 )
        {
          v23 = 0;
          v34 = 1;
          goto LABEL_134;
        }
      }
      else if ( (unsigned int)(v57 - 5) < 2 )
      {
        v23 = 0;
        goto LABEL_134;
      }
    }
    v23 = dword_60B0C1F4[v57];
    v61 = v23 - 29;
    v62 = (v16 & (1 << (v23 - 29))) == 0;
    if ( (v16 & (1 << (v23 - 29))) != 0 )
      v61 = 1 << v61;
    else
      v23 = 0;
    if ( !v62 )
    {
      v98 = v23;
      v16 &= ~v61;
    }
LABEL_134:
    v63 = v14[10];
    if ( v63 )
    {
      v64 = *(_DWORD *)(v63 + 1316);
      if ( v64 )
      {
        if ( (v64 | 1) == 3 )
        {
          v18 = v34 == 0;
          v34 = 1;
          if ( !v18 )
          {
            v50 = 0;
            v34 = 1;
LABEL_147:
            v67 = v14[11];
            if ( !v67 )
              goto LABEL_157;
            v54 = *(_DWORD *)(v67 + 1316);
            if ( v54 )
            {
              if ( (v54 | 1) == 3 )
              {
                if ( v34 )
                  goto LABEL_157;
              }
              else if ( (unsigned int)(v54 - 5) < 2 )
              {
                goto LABEL_157;
              }
            }
            v55 = dword_60B0C1F4;
            goto LABEL_154;
          }
        }
        else if ( (unsigned int)(v64 - 5) < 2 )
        {
          v50 = 0;
          goto LABEL_147;
        }
      }
      v50 = dword_60B0C1F4[v64];
      v65 = v50 - 29;
      v66 = (v16 & (1 << (v50 - 29))) == 0;
      if ( (v16 & (1 << (v50 - 29))) != 0 )
        v65 = 1 << v65;
      else
        v50 = 0;
      if ( !v66 )
      {
        v99 = v50;
        v16 &= ~v65;
      }
      goto LABEL_147;
    }
    v50 = 0;
    goto LABEL_147;
  }
  if ( sub_6040E538(LevelInfo_instance) == 1 )
  {
    v24 = (_DWORD *)a1;
    v25 = *(_DWORD *)(a1 + 32);
    if ( v25 )
    {
      (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v25 + 256))(v25, &v101, 33, v13);
      v24 = (_DWORD *)a1;
    }
    v26 = v24[9];
    if ( v26 )
    {
      (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v26 + 256))(v26, &v101, 33, v13);
      v24 = (_DWORD *)a1;
    }
    v27 = v24[10];
    if ( v27 )
    {
      (*(void (__fastcall **)(int, float *, int, int))(*(_DWORD *)v27 + 256))(v27, &v101, 33, v13);
      v24 = (_DWORD *)a1;
    }
    result = (int *)v24[11];
    if ( !result )
      return result;
    v29 = *result;
    v30 = 33;
    return (int *)(*(int (__fastcall **)(int *, float *, int, int))(v29 + 256))(result, &v101, v30, v13);
  }
  v31 = (_DWORD *)a1;
  if ( v12 > 0x1B || ((1 << v12) & 0xA000083) == 0 )
  {
    v58 = *(_DWORD *)(a1 + 32);
    if ( v58 )
    {
      (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v58 + 256))(v58, &v101, v12, v13);
      v31 = (_DWORD *)a1;
    }
    v59 = v31[9];
    if ( v59 )
    {
      (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v59 + 256))(v59, &v101, v12, v13);
      v31 = (_DWORD *)a1;
    }
    v60 = v31[10];
    if ( v60 )
    {
      (*(void (__fastcall **)(int, float *, unsigned int, int))(*(_DWORD *)v60 + 256))(v60, &v101, v12, v13);
      v31 = (_DWORD *)a1;
    }
    result = (int *)v31[11];
    if ( !result )
      return result;
    v29 = *result;
    v30 = v12;
    return (int *)(*(int (__fastcall **)(int *, float *, int, int))(v29 + 256))(result, &v101, v30, v13);
  }
  *(_BYTE *)(a1 + 64) = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  sub_608DEB0C(&v97, 4, (int)v100);
  v93 = 0;
  v94 = 0;
  v95 = 0;
  sub_608DEB0C(&v93, 4, (int)&v96);
  v32 = *(_DWORD *)(a1 + 32);
  if ( v32 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    {
      if ( v93 < v94 )
        *(_DWORD *)(v95 + 4 * v93++) = v32;
    }
    else
    {
      if ( v97 < v98 )
        *(_DWORD *)(v99 + 4 * v97++) = v32;
      *(_BYTE *)(a1 + 64) |= 1u;
    }
  }
  v36 = *(_DWORD *)(a1 + 36);
  if ( v36 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
    {
      if ( v93 < v94 )
        *(_DWORD *)(v95 + 4 * v93++) = v36;
    }
    else
    {
      if ( v97 < v98 )
        *(_DWORD *)(v99 + 4 * v97++) = v36;
      *(_BYTE *)(a1 + 64) |= 2u;
    }
  }
  v37 = *(_DWORD *)(a1 + 40);
  if ( v37 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 4) != 0 )
    {
      if ( v93 < v94 )
        *(_DWORD *)(v95 + 4 * v93++) = v37;
    }
    else
    {
      if ( v97 < v98 )
        *(_DWORD *)(v99 + 4 * v97++) = v37;
      *(_BYTE *)(a1 + 64) |= 4u;
    }
  }
  v38 = *(_DWORD *)(a1 + 44);
  if ( v38 )
  {
    if ( (*(_BYTE *)(a1 + 152) & 8) != 0 )
    {
      if ( v93 < v94 )
        *(_DWORD *)(v95 + 4 * v93++) = v38;
    }
    else
    {
      if ( v97 < v98 )
        *(_DWORD *)(v99 + 4 * v97++) = v38;
      *(_BYTE *)(a1 + 64) |= 8u;
    }
  }
  v39 = v97;
  if ( sub_607888EC() )
  {
    v40 = 0;
    v91 = 0;
    if ( v39 >= 1 )
    {
      do
      {
        ((void (__fastcall *)(_DWORD *, _BYTE *, int *, unsigned int, _DWORD, int))loc_60788A10)(
          v90,
          v92,
          &v91,
          a2,
          *(char *)(*(_DWORD *)(v99 + 4 * v40) + 84),
          25);
        (*(void (__fastcall **)(_DWORD, _BYTE *, unsigned int, int))(**(_DWORD **)(v99 + 4 * v40) + 256))(
          *(_DWORD *)(v99 + 4 * v40),
          v92,
          v12,
          v91);
        ++v40;
      }
      while ( v39 != v40 );
    }
    result = (int *)v93;
    if ( v93 >= 1 )
    {
      for ( j = 0; j < v93; ++j )
      {
        (*(void (__fastcall **)(_DWORD, float *, unsigned int, int))(**(_DWORD **)(v95 + 4 * j) + 256))(
          *(_DWORD *)(v95 + 4 * j),
          &v101,
          v12,
          v13);
        result = (int *)v93;
      }
    }
  }
  else
  {
    if ( v12 != 27 )
      sub_608DEBEC(&v97, dword_60C9CF0C + 1340);
    if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
    {
      v42 = Level_getArea(Level_instance, a2);
      v43 = *(_DWORD *)(v42 + 148);
      if ( v43 >= 1 )
      {
        v44 = 0;
        v45 = (_WORD *)(*(_DWORD *)(v42 + 28) + 16);
        while ( *((_BYTE *)v45 - 5) != 26 )
        {
          ++v44;
          v45 += 12;
          if ( v44 >= v43 )
            goto LABEL_194;
        }
        v83 = (float)(-16 - (unsigned __int16)*(v45 - 7));
        v101 = (float)(unsigned __int16)*(v45 - 8) + 8.0;
        v102 = v83;
        v103 = 0;
        v13 = *v45 & 1;
      }
    }
LABEL_194:
    v84 = 40.0;
    if ( v12 != 27 )
      v84 = 24.0;
    v85 = 1.0;
    if ( v13 == 1 )
      v85 = -1.0;
    v101 = v101 + (float)((float)((float)(v84 * 0.5) * (float)(v39 - 1)) * v85);
    if ( v39 >= 1 )
    {
      v86 = v84 * v85;
      for ( k = 0; k != v39; ++k )
      {
        (*(void (__fastcall **)(_DWORD, float *, unsigned int, int))(**(_DWORD **)(v99 + 4 * k) + 256))(
          *(_DWORD *)(v99 + 4 * k),
          &v101,
          v12,
          v13);
        v101 = v101 - v86;
      }
    }
    result = (int *)v93;
    if ( v93 >= 1 )
    {
      for ( m = 0; m < v93; ++m )
      {
        (*(void (__fastcall **)(_DWORD, float *, unsigned int, int))(**(_DWORD **)(v95 + 4 * m) + 256))(
          *(_DWORD *)(v95 + 4 * m),
          &v101,
          v12,
          v13);
        result = (int *)v93;
      }
    }
  }
  return result;
}
