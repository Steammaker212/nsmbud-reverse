int __fastcall sub_609925B8(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r1
  int v11; // r8
  int v12; // r6
  int result; // r0
  int v14; // r6
  bool v15; // zf
  int v16; // r10
  _DWORD *v17; // r5
  _DWORD *v18; // r7
  _DWORD *v19; // r6
  int v20; // r5
  int v21; // r1
  int v22; // r7
  int v23; // r6
  int v24; // r6
  __int16 v25; // r1
  __int16 v26; // r2
  int v27; // r6
  int (*v28)(void); // r1
  int v29; // r0
  int v30; // r7
  bool v31; // zf
  int v32; // r6
  bool v33; // zf
  int v34; // r0
  int *v35; // r6
  int *v36; // r8
  int *v37; // r7
  int *v38; // r5
  int v39; // r0
  int *v40; // r4
  int *v41; // r1
  int v42; // r2
  int v43; // r6
  int v44; // r10
  int v45; // [sp+4h] [bp-34h]

  v9 = a1[6];
  if ( v9 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 136))(v9, a2);
    if ( a2 )
    {
      v10 = a1[7];
      v11 = 0;
      v12 = 0;
      if ( (v10 & 2) != 0 )
      {
        result = a1[6];
        v11 = 0;
        v12 = 0;
        if ( (*(_BYTE *)(result + 30) & 0x10) != 0 )
        {
          if ( (v10 & 1) == 0 || (v14 = a1[2], (_DWORD *)v14 == a1 + 1) )
          {
LABEL_11:
            v12 = 2;
            if ( result )
            {
              v11 = result;
              if ( a4 != 1 )
                goto LABEL_134;
            }
            else
            {
              v11 = 0;
            }
          }
          else
          {
            while ( (*(_BYTE *)(v14 + 26) & 0x20) == 0 || !sub_60992444(v14 - 4) )
            {
              v14 = *(_DWORD *)(v14 + 4);
              if ( (_DWORD *)v14 == a1 + 1 )
              {
                result = a1[6];
                goto LABEL_11;
              }
            }
            v12 = 1;
            v11 = 0;
          }
        }
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1[6] + 140))(a1[6], a2);
    if ( (*(_BYTE *)(a1[6] + 30) & 0x40) != 0 )
      a1[5] = 0;
    a1[6] = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  v15 = a2 == 0;
  if ( a2 )
    v15 = (a1[7] & 2) == 0;
  if ( !v15 )
  {
    v16 = a3;
    v17 = (_DWORD *)a1[2];
    v18 = a1 + 1;
    if ( a1 + 1 != v17 )
    {
      v45 = v12;
      v19 = a1 + 1;
      while ( (*(_BYTE *)(*v19 + 26) & 0x10) == 0
           || (*(int (__fastcall **)(int, int))(*(_DWORD *)(*v19 - 4) + 128))(*v19 - 4, a2) != 1 )
      {
        v19 = (_DWORD *)*v19;
        if ( v19 == v17 )
        {
          a3 = v16;
LABEL_37:
          v12 = v45;
          goto LABEL_43;
        }
      }
      a3 = v16;
      if ( v45 == 1 )
      {
        v12 = 1;
        goto LABEL_43;
      }
      if ( !v45 )
      {
        v45 = 2;
        if ( (a1[7] & 1) != 0 )
        {
          v20 = a1[2];
          if ( (_DWORD *)v20 != v18 )
          {
            while ( (*(_BYTE *)(v20 + 26) & 0x20) == 0 || !sub_60992444(v20 - 4) )
            {
              v20 = *(_DWORD *)(v20 + 4);
              if ( (_DWORD *)v20 == v18 )
                goto LABEL_35;
            }
            v12 = 1;
            goto LABEL_42;
          }
LABEL_35:
          a3 = v16;
        }
      }
      v11 = *v19 - 4;
      goto LABEL_37;
    }
LABEL_42:
    a3 = v16;
  }
LABEL_43:
  v21 = a1[7];
  result = a1[5];
  if ( (v21 & 4) == 0 )
  {
    if ( result != v11 )
    {
      if ( result )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
      if ( v11 )
      {
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v11 + 16) + 72) + 129) = 1;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
      }
      a1[5] = v11;
    }
    if ( v11 )
    {
      if ( a3 )
        goto LABEL_69;
      if ( a5 != 1 )
      {
        v22 = v12;
        goto LABEL_90;
      }
      result = *(unsigned __int8 *)(v11 + 30);
      if ( (result & 0x80) != 0 )
      {
LABEL_69:
        if ( v12 == 1 )
        {
          v22 = 1;
        }
        else
        {
          if ( v12 )
          {
            v22 = v12;
          }
          else
          {
            v22 = 2;
            if ( (a1[7] & 1) != 0 )
            {
              v24 = a1[2];
              if ( (_DWORD *)v24 != a1 + 1 )
              {
                while ( 1 )
                {
                  if ( (*(_BYTE *)(v24 + 26) & 0x20) != 0 )
                  {
                    result = sub_60992444(v24 - 4);
                    if ( result )
                      break;
                  }
                  v24 = *(_DWORD *)(v24 + 4);
                  if ( (_DWORD *)v24 == a1 + 1 )
                  {
                    v11 = a1[5];
                    goto LABEL_77;
                  }
                }
                v22 = 1;
                goto LABEL_90;
              }
LABEL_77:
              v22 = 2;
            }
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 28))(v11);
          result = a1[5];
          v25 = *(_WORD *)(result + 30);
          v26 = v25 & 0xBFFF;
          if ( a5 )
            v26 = v25 | 0x4000;
          *(_WORD *)(result + 30) = v26;
        }
      }
      else
      {
        v22 = v12;
      }
    }
    else
    {
      v22 = v12;
    }
LABEL_90:
    v27 = a1[5];
    goto LABEL_117;
  }
  if ( result != v11 )
  {
    if ( !result || (*(_BYTE *)(result + 31) & 2) != 0 )
    {
      v22 = v12;
      goto LABEL_100;
    }
    if ( a4 == 1 )
    {
      v22 = 1;
      if ( v12 != 1 )
      {
        if ( v12 )
        {
          v22 = v12;
        }
        else
        {
          if ( (v21 & 1) != 0 )
          {
            v23 = a1[2];
            if ( (_DWORD *)v23 != a1 + 1 )
            {
              while ( (*(_BYTE *)(v23 + 26) & 0x20) == 0 || !sub_60992444(v23 - 4) )
              {
                v23 = *(_DWORD *)(v23 + 4);
                if ( (_DWORD *)v23 == a1 + 1 )
                {
                  result = a1[5];
                  goto LABEL_67;
                }
              }
              result = a1[5];
              v22 = 1;
              goto LABEL_92;
            }
          }
LABEL_67:
          v22 = 2;
        }
        v28 = *(int (**)(void))(*(_DWORD *)result + 28);
        goto LABEL_99;
      }
    }
    else
    {
      v22 = v12;
    }
LABEL_92:
    v28 = *(int (**)(void))(*(_DWORD *)result + 24);
LABEL_99:
    result = v28();
LABEL_100:
    v27 = 0;
    if ( !v11 )
      goto LABEL_116;
    if ( a3 == 1 )
    {
      if ( v22 == 1 )
      {
        v22 = 1;
        goto LABEL_111;
      }
      if ( !v22 )
      {
        v22 = 2;
        if ( (a1[7] & 1) != 0 )
        {
          v30 = a1[2];
          if ( (_DWORD *)v30 != a1 + 1 )
          {
            while ( (*(_BYTE *)(v30 + 26) & 0x20) == 0 || !sub_60992444(v30 - 4) )
            {
              v30 = *(_DWORD *)(v30 + 4);
              if ( (_DWORD *)v30 == a1 + 1 )
                goto LABEL_109;
            }
            a3 = 1;
            v22 = 1;
            goto LABEL_111;
          }
LABEL_109:
          a3 = 1;
          v22 = 2;
        }
      }
LABEL_112:
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v11 + 16) + 72) + 129) = 1;
      if ( (*(_BYTE *)(v11 + 31) & 2) != 0 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 28))(v11);
      else
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
      v27 = v11;
      goto LABEL_116;
    }
LABEL_111:
    result = *(unsigned __int8 *)(v11 + 31);
    if ( (result & 1) != 0 )
      goto LABEL_112;
LABEL_116:
    a1[5] = v27;
    goto LABEL_117;
  }
  if ( !v11 || (result = a5 ^ 1) != 0 )
  {
    v22 = v12;
    goto LABEL_90;
  }
  result = *(unsigned __int8 *)(v11 + 30);
  if ( (result & 0x80) == 0 )
  {
    v22 = v12;
    goto LABEL_90;
  }
  v22 = 1;
  if ( v12 == 1 )
    goto LABEL_90;
  v29 = v11;
  if ( !v12 )
  {
    v12 = 2;
    if ( (v21 & 1) != 0 )
    {
      v43 = a1[2];
      if ( (_DWORD *)v43 != a1 + 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v43 + 26) & 0x20) != 0 )
          {
            result = sub_60992444(v43 - 4);
            if ( result )
              break;
          }
          v43 = *(_DWORD *)(v43 + 4);
          if ( (_DWORD *)v43 == a1 + 1 )
          {
            v29 = a1[5];
            goto LABEL_149;
          }
        }
        v22 = 1;
        goto LABEL_90;
      }
      v29 = v11;
LABEL_149:
      v12 = 2;
    }
    else
    {
      v29 = v11;
    }
  }
  v44 = v12;
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 28))(v29);
  *(_WORD *)(a1[5] + 30) |= 0x4000u;
  v27 = a1[5];
  result = *(unsigned __int8 *)(v27 + 31);
  if ( (result & 2) == 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
    v22 = v44;
    goto LABEL_90;
  }
  v22 = v44;
LABEL_117:
  v31 = v27 == 0;
  if ( v27 )
  {
    result = *(unsigned __int16 *)(v27 + 30);
    v31 = (result & 0x400) == 0;
  }
  if ( !v31 )
  {
    if ( (result & 0x40) != 0 )
      goto LABEL_129;
    if ( a3 != 1 || v22 == 1 )
      goto LABEL_134;
    if ( v22 || (a1[7] & 1) == 0 || (v32 = a1[2], (_DWORD *)v32 == a1 + 1) )
    {
LABEL_129:
      result = a1[6];
      v33 = result == 0;
      if ( !result )
        v33 = a4 == 0;
      if ( v33 )
      {
        v34 = a1[5];
        a1[6] = v34;
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v34 + 132))(v34, a2);
      }
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v32 + 26) & 0x20) != 0 )
        {
          result = sub_60992444(v32 - 4);
          if ( result )
            break;
        }
        v32 = *(_DWORD *)(v32 + 4);
        if ( (_DWORD *)v32 == a1 + 1 )
          goto LABEL_129;
      }
    }
  }
LABEL_134:
  v35 = (int *)a1[4];
  v36 = a1 + 3;
  while ( v35 != v36 )
  {
    v37 = v35;
    v38 = v35;
    v40 = v35 - 5;
    v39 = *(v35 - 5);
    v35 = (int *)v35[1];
    (*(void (__fastcall **)(int *, float))(v39 + 16))(v40, 1.0);
    result = *((unsigned __int8 *)v40 + 28);
    if ( !*((_BYTE *)v40 + 28) && v37 != v36 )
    {
      result = v37[4];
      if ( !result )
      {
        v41 = (int *)v37[1];
        v42 = *v41;
        *(_DWORD *)(*v37 + 4) = v41;
        result = *v38;
        *v41 = *v38;
        *(_DWORD *)(v42 + 4) = v37;
        *v37 = v42;
      }
    }
  }
  return result;
}
