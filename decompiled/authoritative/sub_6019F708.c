int __fastcall sub_6019F708(int a1)
{
  int v1; // r5
  int v2; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r4
  int v6; // r7
  int i; // r11
  _DWORD *v8; // r9
  _DWORD *v9; // r5
  const char *v10; // r7
  int v11; // r1
  int j; // r2
  const char *v13; // r7
  int v14; // r1
  int k; // r2
  const char *v16; // r7
  int v17; // r1
  int m; // r2
  int v19; // r0
  int v20; // r1
  bool v21; // cc
  char *v22; // r0
  int v23; // r0
  int v24; // r1
  char *v25; // r0
  int v26; // r1
  int v27; // r0
  int v28; // r9
  int v29; // r7
  _DWORD *v30; // r5
  int v31; // r0
  int v32; // r1
  char *v33; // r0
  int v34; // r0
  int v35; // r1
  char *v36; // r0
  int v37; // r1
  int v38; // r0
  int result; // r0
  int v40; // [sp+4h] [bp-7Ch]
  int v41; // [sp+10h] [bp-70h]
  int v42; // [sp+14h] [bp-6Ch]
  int v43; // [sp+24h] [bp-5Ch]
  int v44; // [sp+30h] [bp-50h]
  int v46; // [sp+3Ch] [bp-44h]
  int v47; // [sp+40h] [bp-40h]
  int (**v48)(); // [sp+44h] [bp-3Ch] BYREF
  const char *v49; // [sp+48h] [bp-38h]
  int (**v50)(); // [sp+4Ch] [bp-34h] BYREF
  const char *v51; // [sp+50h] [bp-30h]
  int (**v52)(); // [sp+54h] [bp-2Ch] BYREF
  const char *v53; // [sp+58h] [bp-28h]

  v47 = 0;
  LOBYTE(v41) = 0;
  if ( *(_DWORD *)(dword_60CC6D78 + 428) == 3 )
  {
    LOBYTE(v41) = 0;
    if ( *(_DWORD *)(dword_60CC6D78 + 440) == 15 )
    {
      LOBYTE(v41) = 0;
      if ( *(_DWORD *)(dword_60CC6D78 + 32) == 2 )
        v41 = sub_6019AE00(3) ^ 1;
    }
  }
  do
  {
    v1 = 0;
    do
    {
      v2 = sub_601A443C(dword_60C89E18, v47, v1);
      if ( !v2 )
        break;
      v40 = v1;
      v42 = *(_DWORD *)(v2 + 32);
      if ( v42 >= 1 )
      {
        v3 = 0;
        v46 = v2;
        while ( 1 )
        {
          v4 = sub_60182E38(v2, v3);
          v5 = sub_6040D864(v4);
          if ( v5 != -1 )
          {
            v43 = sub_6040D4F0(v4);
            v6 = v46;
            if ( sub_6019AE00(v43) || ((v5 == 15) & (unsigned __int8)v41 & (v43 == 3)) == 1 )
            {
              v44 = sub_60182F10(v46, 0, v3);
              if ( v44 >= 1 )
              {
                for ( i = 0; i != v44; ++i )
                {
                  v8 = (_DWORD *)sub_60182ED0(v6, 0, v3, i);
                  if ( ((v5 == 15) & (unsigned __int8)v41 & (v43 == 3)) != 0 )
                  {
                    v52 = &vtable_sead_SafeStringBase_char;
                    v53 = "RW6J2W6J3";
                    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                    v9 = v8 + 1;
                    v10 = (const char *)v8[1];
                    ((void (__fastcall *)(int (***)()))v52[3])(&v52);
                    if ( v10 != v53 )
                    {
                      v11 = *v9;
                      for ( j = 1; *(unsigned __int8 *)(v11 + j - 1) == (unsigned __int8)v53[j - 1]; j += 2 )
                      {
                        if ( !*(_BYTE *)(v11 + j - 1) )
                          goto LABEL_42;
                        if ( j >= 524289 || *(unsigned __int8 *)(v11 + j) != (unsigned __int8)v53[j] )
                          break;
                        if ( !*(_BYTE *)(v11 + j) )
                          goto LABEL_42;
                      }
                      v50 = &vtable_sead_SafeStringBase_char;
                      v51 = "RW6J3W6M0";
                      (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                      (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                      v13 = (const char *)v8[1];
                      ((void (__fastcall *)(int (***)()))v50[3])(&v50);
                      if ( v13 != v51 )
                      {
                        v14 = *v9;
                        for ( k = 1; *(unsigned __int8 *)(v14 + k - 1) == (unsigned __int8)v51[k - 1]; k += 2 )
                        {
                          if ( !*(_BYTE *)(v14 + k - 1) )
                            goto LABEL_42;
                          if ( k >= 524289 || *(unsigned __int8 *)(v14 + k) != (unsigned __int8)v51[k] )
                            break;
                          if ( !*(_BYTE *)(v14 + k) )
                            goto LABEL_42;
                        }
                        v48 = &vtable_sead_SafeStringBase_char;
                        v49 = "RW6M0W601";
                        (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                        (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                        v16 = (const char *)v8[1];
                        ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                        if ( v16 != v49 )
                        {
                          v17 = *v9;
                          for ( m = 1; *(unsigned __int8 *)(v17 + m - 1) == (unsigned __int8)v49[m - 1]; m += 2 )
                          {
                            if ( !*(_BYTE *)(v17 + m - 1) )
                              goto LABEL_42;
                            if ( m >= 524289 || *(unsigned __int8 *)(v17 + m) != (unsigned __int8)v49[m] )
                              break;
                            if ( !*(_BYTE *)(v17 + m) )
                              goto LABEL_42;
                          }
                          v6 = v46;
                          continue;
                        }
                      }
                    }
LABEL_42:
                    v6 = v46;
                  }
                  else
                  {
                    v9 = v8 + 1;
                  }
                  (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                  if ( sub_6022A8B4(*v9) != 1 )
                    goto LABEL_142;
                  (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                  v19 = *v9;
                  v20 = 0;
                  while ( *(_BYTE *)(v19 + v20) )
                  {
                    if ( !*(_BYTE *)(v19 + v20 + 1) )
                    {
                      ++v20;
                      break;
                    }
                    if ( !*(_BYTE *)(v19 + v20 + 2) )
                    {
                      v20 += 2;
                      break;
                    }
                    v21 = v20 + 2 <= 0x7FFFF;
                    v20 += 3;
                    if ( !v21 )
                    {
                      v20 = 0;
                      break;
                    }
                  }
                  v22 = (char *)(v19 + 1);
                  if ( v20 < 1 )
                    v22 = &byte_60B3BA34;
                  if ( *v22 != 70 )
                    goto LABEL_142;
                  (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
                  v23 = *v9;
                  v24 = 0;
                  while ( *(_BYTE *)(v23 + v24) )
                  {
                    if ( !*(_BYTE *)(v23 + v24 + 1) )
                    {
                      ++v24;
                      break;
                    }
                    if ( !*(_BYTE *)(v23 + v24 + 2) )
                    {
                      v24 += 2;
                      break;
                    }
                    v21 = v24 + 2 <= 0x7FFFF;
                    v24 += 3;
                    if ( !v21 )
                    {
                      v24 = 0;
                      break;
                    }
                  }
                  v25 = (char *)(v23 + 5);
                  if ( v24 < 5 )
                    v25 = &byte_60B3BA34;
                  if ( *v25 == 70 )
                  {
                    v26 = v43;
                    v27 = a1;
                  }
                  else
                  {
LABEL_142:
                    if ( sub_601A11E4(a1, v47, v8, 1) )
                      continue;
                    if ( !v47 )
                      goto LABEL_73;
                    if ( sub_601A11E4(a1, 0, v8, 1) )
                      continue;
                    if ( v47 != 1 )
                    {
LABEL_73:
                      if ( sub_601A11E4(a1, 1, v8, 1) )
                        continue;
                      if ( v47 == 2 )
                        goto LABEL_77;
                    }
                    if ( sub_601A11E4(a1, 2, v8, 1) )
                      continue;
                    if ( v47 != 3 )
                    {
LABEL_77:
                      if ( sub_601A11E4(a1, 3, v8, 1) )
                        continue;
                      if ( v47 == 4 )
                        goto LABEL_81;
                    }
                    if ( sub_601A11E4(a1, 4, v8, 1) )
                      continue;
                    if ( v47 != 5 )
                    {
LABEL_81:
                      if ( sub_601A11E4(a1, 5, v8, 1) )
                        continue;
                      if ( v47 == 6 )
                        goto LABEL_85;
                    }
                    if ( sub_601A11E4(a1, 6, v8, 1) )
                      continue;
                    if ( v47 != 7 )
                    {
LABEL_85:
                      if ( sub_601A11E4(a1, 7, v8, 1) || v47 == 8 )
                        continue;
                    }
                    v27 = a1;
                    v26 = 8;
                  }
                  sub_601A11E4(v27, v26, v8, 1);
                }
              }
            }
            if ( sub_6019AE80(v43) == 1 )
            {
              v28 = sub_60182F10(v46, 1, v3);
              if ( v28 >= 1 )
                break;
            }
          }
LABEL_137:
          ++v3;
          v2 = v46;
          if ( v3 == v42 )
            goto LABEL_138;
        }
        v29 = 0;
        while ( 2 )
        {
          v30 = (_DWORD *)sub_60182ED0(v46, 1, v3, v29);
          (*(void (__fastcall **)(_DWORD *))(*v30 + 12))(v30);
          if ( sub_6022A8B4(v30[1]) == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v30 + 12))(v30);
            v31 = v30[1];
            v32 = 0;
            while ( *(_BYTE *)(v31 + v32) )
            {
              if ( !*(_BYTE *)(v31 + v32 + 1) )
              {
                ++v32;
                break;
              }
              if ( !*(_BYTE *)(v31 + v32 + 2) )
              {
                v32 += 2;
                break;
              }
              v21 = v32 + 2 <= 0x7FFFF;
              v32 += 3;
              if ( !v21 )
              {
                v32 = 0;
                break;
              }
            }
            v33 = (char *)(v31 + 1);
            if ( v32 < 1 )
              v33 = &byte_60B3BA34;
            if ( *v33 == 70 )
            {
              (*(void (__fastcall **)(_DWORD *))(*v30 + 12))(v30);
              v34 = v30[1];
              v35 = 0;
              while ( *(_BYTE *)(v34 + v35) )
              {
                if ( !*(_BYTE *)(v34 + v35 + 1) )
                {
                  ++v35;
                  break;
                }
                if ( !*(_BYTE *)(v34 + v35 + 2) )
                {
                  v35 += 2;
                  break;
                }
                v21 = v35 + 2 <= 0x7FFFF;
                v35 += 3;
                if ( !v21 )
                {
                  v35 = 0;
                  break;
                }
              }
              v36 = (char *)(v34 + 5);
              if ( v35 < 5 )
                v36 = &byte_60B3BA34;
              if ( *v36 == 70 )
              {
                v37 = v47;
                v38 = a1;
                goto LABEL_116;
              }
            }
          }
          if ( !sub_601A11E4(a1, v47, v30, 1) )
          {
            if ( !v47 )
              goto LABEL_121;
            if ( !sub_601A11E4(a1, 0, v30, 1) )
            {
              if ( v47 == 1 )
                goto LABEL_123;
LABEL_121:
              if ( !sub_601A11E4(a1, 1, v30, 1) )
              {
                if ( v47 == 2 )
                  goto LABEL_125;
LABEL_123:
                if ( !sub_601A11E4(a1, 2, v30, 1) )
                {
                  if ( v47 == 3 )
                    goto LABEL_127;
LABEL_125:
                  if ( !sub_601A11E4(a1, 3, v30, 1) )
                  {
                    if ( v47 == 4 )
                      goto LABEL_129;
LABEL_127:
                    if ( !sub_601A11E4(a1, 4, v30, 1) )
                    {
                      if ( v47 == 5 )
                        goto LABEL_131;
LABEL_129:
                      if ( !sub_601A11E4(a1, 5, v30, 1) )
                      {
                        if ( v47 == 6 )
                        {
LABEL_133:
                          if ( !sub_601A11E4(a1, 7, v30, 1) && v47 != 8 )
                            goto LABEL_135;
                        }
                        else
                        {
LABEL_131:
                          if ( !sub_601A11E4(a1, 6, v30, 1) )
                          {
                            if ( v47 != 7 )
                              goto LABEL_133;
LABEL_135:
                            v38 = a1;
                            v37 = 8;
LABEL_116:
                            sub_601A11E4(v38, v37, v30, 1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( ++v29 == v28 )
            goto LABEL_137;
          continue;
        }
      }
LABEL_138:
      v1 = v40 + 1;
    }
    while ( v40 + 1 < 2 );
    result = ++v47;
  }
  while ( v47 != 9 );
  return result;
}
