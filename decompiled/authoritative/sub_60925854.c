int __fastcall sub_60925854(int a1, int a2, int a3, unsigned int a4, float a5)
{
  int v6; // r5
  char v8; // r12
  int *v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r11
  unsigned int v18; // r8
  unsigned int v19; // r0
  int v20; // r9
  char *v21; // r10
  int v22; // r0
  int v23; // r5
  int v24; // r0
  bool v25; // zf
  int v26; // r6
  _DWORD *v27; // r2
  int v28; // r0
  int v29; // r7
  const char *v30; // r5
  int v31; // r1
  int i; // r2
  int v33; // r0
  _DWORD *v34; // r3
  unsigned int v35; // r0
  unsigned __int16 *v36; // r1
  unsigned int v37; // r2
  int v38; // r5
  unsigned int v39; // r1
  int v40; // r2
  _BYTE *v41; // r12
  _BYTE *v42; // r0
  int v43; // r1
  _DWORD *v44; // r6
  _DWORD *v45; // r4
  int v46; // r7
  int v47; // r4
  int v48; // r1
  int j; // r2
  _BYTE *v50; // r9
  _DWORD *v51; // r6
  const char *v52; // r7
  int v53; // r1
  int k; // r2
  int v55; // r0
  unsigned int v56; // r2
  unsigned int v57; // r1
  _DWORD *v58; // r0
  unsigned int v59; // r1
  int v60; // r6
  char *v61; // r5
  int v62; // r0
  int v63; // r1
  int v64; // r0
  const char *v65; // r7
  int m; // r1
  int v68; // [sp+8h] [bp-A0h]
  int v69; // [sp+10h] [bp-98h]
  unsigned int v70; // [sp+14h] [bp-94h]
  int v71; // [sp+20h] [bp-88h]
  unsigned int v72; // [sp+24h] [bp-84h]
  unsigned int v73; // [sp+24h] [bp-84h]
  int v74; // [sp+28h] [bp-80h]
  int v75; // [sp+2Ch] [bp-7Ch]
  _BYTE *v76; // [sp+30h] [bp-78h]
  _BYTE *v77; // [sp+30h] [bp-78h]
  _DWORD *v79; // [sp+3Ch] [bp-6Ch]
  int v81; // [sp+44h] [bp-64h]
  unsigned int v82; // [sp+4Ch] [bp-5Ch]
  int (**v83)(); // [sp+50h] [bp-58h] BYREF
  int v84; // [sp+54h] [bp-54h]
  char *v85; // [sp+58h] [bp-50h] BYREF
  char *v86; // [sp+5Ch] [bp-4Ch] BYREF
  int (**v87)(); // [sp+60h] [bp-48h] BYREF
  const char *v88; // [sp+64h] [bp-44h]
  int v89; // [sp+68h] [bp-40h] BYREF
  int v90; // [sp+6Ch] [bp-3Ch] BYREF

  v6 = a2;
  v90 = a2;
  v89 = a3;
  v68 = a1 + 512;
  sead::CriticalSection::lock(a1 + 512);
  if ( a5 <= 0.0 )
  {
    v9 = &v89;
    goto LABEL_5;
  }
  if ( a5 >= 1.0 )
  {
    v9 = &v90;
    v6 = a3;
LABEL_5:
    *v9 = v6;
  }
  if ( ((unsigned int)&dword_60CD09B0 & ~(1620203728 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CD09B0) )
  {
    v87 = &`vtable for'sead::SafeStringBase<char>;
    v88 = "name";
    dword_60CD09AC = sub_60941AB4(&v87);
    _cxa_guard_release(&dword_60CD09B0);
  }
  if ( ((unsigned int)&dword_60CD09B8 & ~(1620203832 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CD09B8) )
  {
    v87 = &`vtable for'sead::SafeStringBase<char>;
    v88 = "group";
    dword_60CD09B4 = sub_60941AB4(&v87);
    _cxa_guard_release(&dword_60CD09B8);
  }
  v69 = v90;
  v10 = v90 + *(_DWORD *)(v90 + 20);
  v11 = *(_DWORD *)(v10 + 52);
  if ( HIWORD(v11) )
  {
    v12 = v10 + 48;
    v25 = HIWORD(v11) == 0;
    v70 = HIWORD(v11);
    v13 = (4 * v11) & 0x3FFFC;
    v14 = (_DWORD *)HIWORD(v11);
    if ( !v25 )
      v14 = (_DWORD *)(v12 + v13);
    v15 = 0;
    v79 = v14;
    while ( 1 )
    {
      v74 = v15;
      v16 = *(_DWORD *)(a1 + 100);
      if ( v16 )
      {
        v17 = 0;
        v18 = 0;
        while ( *v79 != *(_DWORD *)(v16 + 20) )
        {
          v16 = *(_DWORD *)(v16 + 24);
          v17 += 4;
          ++v18;
          if ( !v16 )
            goto LABEL_104;
        }
        v19 = v79[2];
        if ( HIWORD(v19) )
          break;
      }
LABEL_104:
      v15 = v74 + 1;
      v79 += 3;
      if ( v74 + 1 == v70 )
        goto LABEL_105;
    }
    v20 = 0;
    v82 = HIWORD(v19);
    v21 = (char *)v79 + ((4 * v19) & 0x3FFFC);
    v81 = -1;
    while ( 1 )
    {
      v86 = v21;
      v22 = sub_609515BC(&v86, dword_60CD09B4);
      v23 = 0;
      if ( v22 != -1 )
        v23 = (int)&v86[8 * v22 + ((4 * *((_DWORD *)v86 + 1)) & 0x3FFFC)];
      v24 = sub_609515BC(&v86, dword_60CD09AC);
      v25 = v24 == -1;
      if ( v24 != -1 )
        v25 = v23 == 0;
      if ( !v25 )
      {
        v26 = (int)&v86[8 * v24 + ((4 * *((_DWORD *)v86 + 1)) & 0x3FFFC)];
        if ( v26 )
        {
          v27 = (_DWORD *)a1;
          if ( a4 != -1 )
          {
            v28 = *(_DWORD *)(v23 + 4);
            v87 = &`vtable for'sead::SafeStringBase<char>;
            v88 = (const char *)(v23 + ((4 * v28) & 0x3FFFFFC));
            v29 = *(_DWORD *)(a1 + 48);
            if ( *(_DWORD *)(a1 + 44) > a4 )
              v29 += 324 * a4;
            (*(void (__fastcall **)(int))(*(_DWORD *)(v29 + 12) + 12))(v29 + 12);
            (*(void (__fastcall **)(int))(*(_DWORD *)(v29 + 12) + 12))(v29 + 12);
            v30 = *(const char **)(v29 + 16);
            ((void (__fastcall *)(int (***)()))v87[3])(&v87);
            if ( v30 != v88 )
            {
              v31 = *(_DWORD *)(v29 + 16);
              for ( i = 1; *(unsigned __int8 *)(v31 + i - 1) == (unsigned __int8)v88[i - 1]; i += 2 )
              {
                if ( !*(_BYTE *)(v31 + i - 1) )
                  goto LABEL_40;
                if ( i >= 524289 || *(unsigned __int8 *)(v31 + i) != (unsigned __int8)v88[i] )
                  break;
                if ( !*(_BYTE *)(v31 + i) )
                  goto LABEL_40;
              }
              goto LABEL_103;
            }
LABEL_40:
            v27 = (_DWORD *)a1;
          }
          v33 = *(_DWORD *)(v26 + 4);
          v34 = v27;
          v87 = &`vtable for'sead::SafeStringBase<char>;
          v88 = (const char *)(v26 + ((4 * v33) & 0x3FFFFFC));
          v35 = v27[3];
          v36 = (unsigned __int16 *)v27[4];
          v37 = v27[5];
          if ( v35 > v18 )
            v36 = (unsigned __int16 *)((char *)v36 + v17);
          v38 = *v36;
          v39 = v36[1] + v38;
          if ( v37 < v39 )
            v39 = v37;
          if ( v37 < v38 )
            v38 = v37;
          if ( v38 != v39 )
          {
            v40 = v34[6];
            v41 = 0;
            v75 = v20;
            v72 = v39;
            v71 = v40;
            while ( 1 )
            {
              v42 = *(_BYTE **)(v40 + 4 * v38);
              if ( (v42[110] & 1) != 0 )
                break;
LABEL_74:
              if ( ++v38 == v39 )
                goto LABEL_77;
            }
            v76 = *(_BYTE **)(v40 + 4 * v38);
            if ( v41 )
            {
              v43 = v81;
            }
            else if ( v81 >= v38 )
            {
              v41 = 0;
              v43 = v81;
            }
            else
            {
              v44 = (_DWORD *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v42 + 68))(v42);
              v45 = (_DWORD *)sub_609405A4();
              (*(void (__fastcall **)(_DWORD *))(*v44 + 12))(v44);
              (*(void (__fastcall **)(_DWORD *))(*v44 + 12))(v44);
              v46 = v44[1];
              (*(void (__fastcall **)(_DWORD *))(*v45 + 12))(v45);
              v42 = v76;
              v47 = v45[1];
              v43 = v38;
              v41 = v76;
              if ( v46 != v47 )
              {
                v48 = v44[1];
                for ( j = 1; *(unsigned __int8 *)(v48 + j - 1) == *(unsigned __int8 *)(v47 + j - 1); j += 2 )
                {
                  if ( !*(_BYTE *)(v48 + j - 1) )
                    goto LABEL_61;
                  if ( j >= 524289 || *(unsigned __int8 *)(v48 + j) != *(unsigned __int8 *)(v47 + j) )
                    break;
                  if ( !*(_BYTE *)(v48 + j) )
                  {
LABEL_61:
                    v42 = v76;
                    v43 = v38;
                    v41 = v76;
                    goto LABEL_64;
                  }
                }
                v43 = v81;
                v42 = v76;
                v41 = 0;
              }
            }
LABEL_64:
            v81 = v43;
            v50 = v41;
            v51 = (_DWORD *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v42 + 64))(v42);
            (*(void (__fastcall **)(_DWORD *))(*v51 + 12))(v51);
            (*(void (__fastcall **)(_DWORD *))(*v51 + 12))(v51);
            v52 = (const char *)v51[1];
            ((void (__fastcall *)(int (***)()))v87[3])(&v87);
            if ( v52 == v88 )
            {
              v41 = v76;
              v20 = v75;
              goto LABEL_78;
            }
            v53 = v51[1];
            v41 = v50;
            v20 = v75;
            for ( k = 1; ; k += 2 )
            {
              if ( *(unsigned __int8 *)(v53 + k - 1) != (unsigned __int8)v88[k - 1] )
                goto LABEL_73;
              if ( !*(_BYTE *)(v53 + k - 1) )
                break;
              if ( k >= 524289 || *(unsigned __int8 *)(v53 + k) != (unsigned __int8)v88[k] )
              {
LABEL_73:
                v39 = v72;
                v40 = v71;
                goto LABEL_74;
              }
              if ( !*(_BYTE *)(v53 + k) )
                break;
            }
            v41 = v76;
LABEL_77:
            if ( !v41 )
              goto LABEL_103;
LABEL_78:
            if ( v69 == v89 )
              goto LABEL_100;
            v55 = v89 + *(_DWORD *)(v89 + 20);
            v56 = *(_DWORD *)(v55 + 52);
            if ( !HIWORD(v56) )
              goto LABEL_100;
            v57 = HIWORD(v56);
            v58 = (_DWORD *)(v55 + 48 + ((4 * v56) & 0x3FFFC));
            while ( *v79 != *v58 )
            {
              --v57;
              v58 += 3;
              if ( !v57 )
                goto LABEL_100;
            }
            if ( v58 )
            {
              v59 = v58[2];
              if ( HIWORD(v59) )
              {
                v60 = 0;
                v77 = v41;
                v73 = HIWORD(v59);
                v61 = (char *)v58 + ((4 * v59) & 0x3FFFC);
                while ( 1 )
                {
                  v85 = v61;
                  v62 = sub_609515BC(&v85, dword_60CD09AC);
                  v63 = 0;
                  if ( v62 != -1 )
                    v63 = (int)&v85[8 * v62 + ((4 * *((_DWORD *)v85 + 1)) & 0x3FFFC)];
                  v64 = *(_DWORD *)(v63 + 4);
                  v83 = &`vtable for'sead::SafeStringBase<char>;
                  v84 = v63 + ((4 * v64) & 0x3FFFFFC);
                  ((void (__fastcall *)(int (***)()))v87[3])(&v87);
                  ((void (__fastcall *)(int (***)()))v87[3])(&v87);
                  v65 = v88;
                  ((void (__fastcall *)(int (***)()))v83[3])(&v83);
                  if ( v65 == (const char *)v84 )
                    break;
                  for ( m = 1; (unsigned __int8)v88[m - 1] == *(unsigned __int8 *)(v84 + m - 1); m += 2 )
                  {
                    if ( !v88[m - 1] )
                      goto LABEL_102;
                    if ( m >= 524289 || (unsigned __int8)v88[m] != *(unsigned __int8 *)(v84 + m) )
                      break;
                    if ( !v88[m] )
                      goto LABEL_102;
                  }
                  ++v60;
                  v61 += 8;
                  if ( v60 == v73 )
                    goto LABEL_103;
                }
LABEL_102:
                sub_60947D30(v77, v86, v85, 0, a5);
              }
            }
            else
            {
LABEL_100:
              sub_60947DB0(v41, 0, v86, 0, 0.0, 0);
            }
          }
        }
      }
LABEL_103:
      ++v20;
      v21 += 8;
      if ( v20 == v82 )
        goto LABEL_104;
    }
  }
LABEL_105:
  *(_DWORD *)(a1 + 484) |= 1u;
  *(_WORD *)(a1 + 84) |= 1u;
  return sead::CriticalSection::unlock(v68);
}
