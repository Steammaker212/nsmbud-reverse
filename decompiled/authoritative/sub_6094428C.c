int __fastcall sub_6094428C(int result, int a2)
{
  int v2; // r7
  int v3; // r1
  int v4; // r4
  bool v5; // zf
  char *v6; // r5
  int i; // r1
  int v8; // r0
  char *v9; // r5
  int j; // r1
  int v11; // r4
  char *v12; // r0
  bool v13; // cc
  char *v14; // r7
  int (***v15)(); // r5
  int v16; // r6
  int (**v17)(); // r1
  int v18; // r0
  int v19; // r5
  char *v20; // r9
  int v21; // r7
  int (**v22)(); // r4
  int v23; // r0
  int k; // r1
  bool v25; // zf
  unsigned int v26; // r0
  int (***v27)(); // r5
  int v28; // r6
  int (**v29)(); // r1
  int v30; // r0
  int v31; // r5
  char *v32; // r9
  int v33; // r7
  int (**v34)(); // r4
  int v35; // r0
  int m; // r1
  bool v37; // zf
  int v38; // r5
  int (***v39)(); // r4
  int v40; // r6
  int (**v41)(); // r1
  int v42; // r0
  int v43; // r4
  char *v44; // r7
  int v45; // r9
  int (**v46)(); // r5
  int v47; // r0
  int n; // r1
  bool v49; // zf
  int v50; // s0
  int v51; // r1
  int v52; // [sp+4h] [bp-1ECh]
  unsigned int v53; // [sp+8h] [bp-1E8h]
  unsigned int v54; // [sp+Ch] [bp-1E4h]
  int v55; // [sp+10h] [bp-1E0h]
  int v56; // [sp+14h] [bp-1DCh]
  char *v57; // [sp+1Ch] [bp-1D4h]
  _DWORD v58[30]; // [sp+20h] [bp-1D0h] BYREF
  int (**v59)(); // [sp+98h] [bp-158h] BYREF
  char *v60; // [sp+9Ch] [bp-154h]
  int v61; // [sp+A0h] [bp-150h]
  int v62; // [sp+A4h] [bp-14Ch] BYREF
  int (***v63)(); // [sp+1A4h] [bp-4Ch] BYREF
  char *v64; // [sp+1A8h] [bp-48h]
  int (**v65)(); // [sp+1ACh] [bp-44h] BYREF
  const char *v66; // [sp+1B0h] [bp-40h]
  int (**v67)(); // [sp+1B4h] [bp-3Ch] BYREF
  char *v68; // [sp+1B8h] [bp-38h]
  _DWORD v69[2]; // [sp+1BCh] [bp-34h] BYREF
  int (**v70)(); // [sp+1C4h] [bp-2Ch] BYREF
  char *v71; // [sp+1C8h] [bp-28h]

  v3 = *(_DWORD *)(a2 + 8);
  v4 = 2;
  v5 = v3 == 0;
  if ( v3 )
  {
    v2 = v3 - 4;
    v5 = v3 == 4;
  }
  if ( v5 )
    goto LABEL_153;
  v56 = result;
  while ( 1 )
  {
    v58[0] = &`vtable for'sead::SafeStringBase_char;
    v58[1] = "name";
    sub_609A5C60(&v59, v2, v58);
    v63 = (int (***)())&`vtable for'sead::SafeStringBase_char;
    v64 = off_60C5CB34;
    ((void (__fastcall *)(int (***)()))v59[3])(&v59);
    ((void (__fastcall *)(int (***)()))v59[3])(&v59);
    v6 = v60;
    ((void (__fastcall *)(int (****)()))v63[3])(&v63);
    result = (int)v64;
    if ( v6 != v64 )
    {
      for ( i = 1; v60[i - 1] == v64[i - 1]; i += 2 )
      {
        if ( !v60[i - 1] )
          goto LABEL_13;
        if ( i >= 524289 || v60[i] != v64[i] )
          break;
        if ( !v60[i] )
          goto LABEL_13;
      }
      goto LABEL_22;
    }
LABEL_13:
    v69[0] = &`vtable for'sead::SafeStringBase_char;
    v69[1] = "type";
    sub_609A5C60(&v70, v2, v69);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v56 + 28))(v56);
    v67 = &`vtable for'sead::SafeStringBase_char;
    v68 = arr_off_60C5E518[v8 - 9];
    ((void (__fastcall *)(int (***)()))v70[3])(&v70);
    ((void (__fastcall *)(int (***)()))v70[3])(&v70);
    v9 = v71;
    ((void (__fastcall *)(int (***)()))v67[3])(&v67);
    result = (int)v68;
    if ( v9 == v68 )
      break;
    for ( j = 1; v71[j - 1] == v68[j - 1]; j += 2 )
    {
      if ( !v71[j - 1] )
        goto LABEL_26;
      if ( j >= 524289 || v71[j] != v68[j] )
        break;
      if ( !v71[j] )
        goto LABEL_26;
    }
LABEL_22:
    v2 = *(_DWORD *)(v2 + 12);
    if ( v2 )
      v2 -= 4;
    if ( !v2 )
      goto LABEL_153;
  }
LABEL_26:
  if ( (unsigned int)((*(int (__fastcall **)(int))(*(_DWORD *)v56 + 28))(v56) - 9) > 3 )
    goto LABEL_152;
  v11 = 0;
  v12 = *(char **)(v2 + 96);
  v63 = &v70;
  v64 = 0;
  v70 = &`vtable for'sead::SafeStringBase_char;
  v65 = &`vtable for'sead::SafeStringBase_char;
  v71 = v12;
  v66 = " \r\n\t";
  while ( v12[v11] )
  {
    if ( !v12[v11 + 1] )
    {
      ++v11;
      break;
    }
    if ( !v12[v11 + 2] )
    {
      v11 += 2;
      break;
    }
    v13 = v11 + 2 <= 0x7FFFF;
    v11 += 3;
    if ( !v13 )
    {
      v11 = 0;
      break;
    }
  }
  v60 = (char *)&v62;
  v59 = &BufferedSafeStringBase_char_vtable_probably;
  v61 = 256;
  sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v59);
  v14 = (char *)(v11 + 1);
  *v60 = 0;
  v15 = v63;
  v16 = (int)v64;
  v59 = &off_60BD94BC;
  if ( v63 == &v70 && v64 == v14 )
    goto LABEL_150;
  v57 = (char *)(v11 + 1);
  if ( v64 != v14 || v63 != &v70 )
  {
    do
    {
      ((void (__fastcall *)(int (***)()))(*v15)[3])(v15);
      v17 = v15[1];
      v18 = 0;
      while ( *((_BYTE *)v17 + v18) )
      {
        if ( !*((_BYTE *)v17 + v18 + 1) )
        {
          ++v18;
          if ( v16 < 0 )
            goto LABEL_65;
          goto LABEL_50;
        }
        if ( !*((_BYTE *)v17 + v18 + 2) )
        {
          v18 += 2;
          break;
        }
        v13 = v18 + 2 <= 0x7FFFF;
        v18 += 3;
        if ( !v13 )
        {
          v18 = 0;
          if ( v16 < 0 )
            goto LABEL_65;
          goto LABEL_50;
        }
      }
      if ( v16 < 0 )
        goto LABEL_65;
LABEL_50:
      if ( v16 <= v18 )
      {
        ((void (__fastcall *)(int (***)()))v59[3])(&v59);
        v19 = v61;
        if ( v61 >= 1 )
        {
          v20 = v60;
          v21 = 0;
          while ( 1 )
          {
            v22 = v63[1];
            if ( !*((_BYTE *)v22 + v16) )
              break;
            ((void (__fastcall *)(int (***)()))v65[3])(&v65);
            v23 = *((unsigned __int8 *)v22 + v16);
            for ( k = 1; v66[k - 1]; k += 2 )
            {
              if ( (unsigned __int8)v66[k - 1] == v23 )
                goto LABEL_64;
              if ( k >= 524289 || !v66[k] )
                break;
              if ( (unsigned __int8)v66[k] == v23 )
                goto LABEL_64;
            }
            v20[v21++] = v23;
            ++v16;
            if ( v19 <= v21 )
              goto LABEL_65;
          }
LABEL_64:
          v20[v21] = 0;
          v64 = (char *)(v16 + 1);
        }
      }
LABEL_65:
      v14 = v57;
      if ( *v60 )
        break;
      v15 = v63;
      v16 = (int)v64;
      v25 = v64 == v57;
      if ( v64 == v57 )
        v25 = v63 == &v70;
    }
    while ( !v25 );
  }
  v26 = sub_60901464(&v59, -1);
  v27 = v63;
  v28 = (int)v64;
  v53 = v26;
  if ( v26 >= 0x1E )
    v26 = 30;
  v54 = v26;
  if ( v63 == &v70 && v64 == v14 )
  {
LABEL_150:
    v4 = 1;
  }
  else
  {
    if ( v64 != v14 || v63 != &v70 )
    {
      do
      {
        ((void (__fastcall *)(int (***)()))(*v27)[3])(v27);
        v29 = v27[1];
        v30 = 0;
        while ( *((_BYTE *)v29 + v30) )
        {
          if ( !*((_BYTE *)v29 + v30 + 1) )
          {
            ++v30;
            if ( v28 < 0 )
              goto LABEL_102;
            goto LABEL_87;
          }
          if ( !*((_BYTE *)v29 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v13 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v13 )
          {
            v30 = 0;
            if ( v28 < 0 )
              goto LABEL_102;
            goto LABEL_87;
          }
        }
        if ( v28 < 0 )
          goto LABEL_102;
LABEL_87:
        if ( v28 <= v30 )
        {
          ((void (__fastcall *)(int (***)()))v59[3])(&v59);
          v31 = v61;
          if ( v61 >= 1 )
          {
            v32 = v60;
            v33 = 0;
            while ( 1 )
            {
              v34 = v63[1];
              if ( !*((_BYTE *)v34 + v28) )
                break;
              ((void (__fastcall *)(int (***)()))v65[3])(&v65);
              v35 = *((unsigned __int8 *)v34 + v28);
              for ( m = 1; v66[m - 1]; m += 2 )
              {
                if ( (unsigned __int8)v66[m - 1] == v35 )
                  goto LABEL_101;
                if ( m >= 524289 || !v66[m] )
                  break;
                if ( (unsigned __int8)v66[m] == v35 )
                  goto LABEL_101;
              }
              v32[v33++] = v35;
              ++v28;
              if ( v31 <= v33 )
                goto LABEL_102;
            }
LABEL_101:
            v32[v33] = 0;
            v64 = (char *)(v28 + 1);
          }
        }
LABEL_102:
        v14 = v57;
        if ( *v60 )
          break;
        v27 = v63;
        v28 = (int)v64;
        v37 = v64 == v57;
        if ( v64 == v57 )
          v37 = v63 == &v70;
      }
      while ( !v37 );
    }
    v52 = sub_60901464(&v59, -1);
    if ( v54 )
    {
      v38 = 0;
      do
      {
        v39 = v63;
        v40 = (int)v64;
        v55 = v38;
        if ( v63 == &v70 && v64 == v14 )
          goto LABEL_150;
        if ( v64 != v14 || v63 != &v70 )
        {
          do
          {
            ((void (__fastcall *)(int (***)()))(*v39)[3])(v39);
            v41 = v39[1];
            v42 = 0;
            while ( *((_BYTE *)v41 + v42) )
            {
              if ( !*((_BYTE *)v41 + v42 + 1) )
              {
                ++v42;
                if ( v40 < 0 )
                  goto LABEL_139;
                goto LABEL_124;
              }
              if ( !*((_BYTE *)v41 + v42 + 2) )
              {
                v42 += 2;
                break;
              }
              v13 = v42 + 2 <= 0x7FFFF;
              v42 += 3;
              if ( !v13 )
              {
                v42 = 0;
                if ( v40 < 0 )
                  goto LABEL_139;
                goto LABEL_124;
              }
            }
            if ( v40 < 0 )
              goto LABEL_139;
LABEL_124:
            if ( v40 <= v42 )
            {
              ((void (__fastcall *)(int (***)()))v59[3])(&v59);
              v43 = v61;
              if ( v61 >= 1 )
              {
                v44 = v60;
                v45 = 0;
                while ( 1 )
                {
                  v46 = v63[1];
                  if ( !*((_BYTE *)v46 + v40) )
                    break;
                  ((void (__fastcall *)(int (***)()))v65[3])(&v65);
                  v47 = *((unsigned __int8 *)v46 + v40);
                  for ( n = 1; v66[n - 1]; n += 2 )
                  {
                    if ( (unsigned __int8)v66[n - 1] == v47 )
                      goto LABEL_138;
                    if ( n >= 524289 || !v66[n] )
                      break;
                    if ( (unsigned __int8)v66[n] == v47 )
                      goto LABEL_138;
                  }
                  v44[v45++] = v47;
                  ++v40;
                  if ( v43 <= v45 )
                    goto LABEL_139;
                }
LABEL_138:
                v44[v45] = 0;
                v64 = (char *)(v40 + 1);
              }
            }
LABEL_139:
            v14 = v57;
            if ( *v60 )
              break;
            v39 = v63;
            v40 = (int)v64;
            v49 = v64 == v57;
            if ( v64 == v57 )
              v49 = v63 == &v70;
          }
          while ( !v49 );
        }
        sub_60901490((int)&v59);
        v38 = v55 + 1;
        v58[v55] = v50;
      }
      while ( v55 + 1 < v54 );
    }
    *(_BYTE *)(v56 + 20) = v52;
    *(_BYTE *)(v56 + 23) = v54;
    *(_DWORD *)(v56 + 24) = v54;
    *(_DWORD *)(v56 + 28) = v52;
    if ( v54 )
    {
      v51 = ~v53;
      if ( v53 == 30 || ~v53 < 0xFFFFFFE1 )
        v51 = -31;
      qmemcpy((void *)(v56 + 32), v58, -4 - 4 * v51);
    }
    v4 = 6;
  }
  result = 1;
  if ( v4 == 6 )
  {
LABEL_152:
    v4 = 1;
    result = 0;
  }
LABEL_153:
  if ( v4 == 2 )
    return 2;
  return result;
}
