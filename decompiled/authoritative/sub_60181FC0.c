int __fastcall sub_60181FC0(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r0
  int (***v6)(); // r11
  int v7; // r8
  int v8; // r0
  int v9; // r4
  int *v10; // r7
  int n; // r1
  int *v12; // r0
  int v13; // r7
  int *v14; // r10
  int *v15; // r11
  signed int v16; // r4
  bool v17; // cc
  int v18; // r0
  char *v19; // r0
  int v20; // r1
  int v21; // r1
  char *v22; // r0
  int v23; // r1
  char *v24; // r0
  int v25; // r1
  char *v26; // r0
  int v27; // r1
  char *v28; // r0
  unsigned int v29; // r0
  int v30; // r4
  _BYTE *v31; // r10
  int v32; // r0
  size_t v33; // r4
  unsigned int v34; // r0
  unsigned int v35; // r0
  unsigned int v36; // r0
  char v37; // r12
  int *v38; // r7
  int j; // r1
  const char *v40; // r4
  int i; // r1
  int *v42; // r7
  int k; // r1
  int *v44; // r7
  int m; // r1
  int result; // r0
  int v47; // [sp+4h] [bp-12Ch]
  int v48; // [sp+18h] [bp-118h]
  int v49; // [sp+1Ch] [bp-114h]
  char v52; // [sp+68h] [bp-C8h]
  int v53; // [sp+74h] [bp-BCh]
  int v54; // [sp+8Ch] [bp-A4h]
  int (**v56)(); // [sp+94h] [bp-9Ch] BYREF
  const char *v57; // [sp+98h] [bp-98h]
  int v58; // [sp+9Ch] [bp-94h]
  int v59; // [sp+A0h] [bp-90h] BYREF
  int v60; // [sp+B0h] [bp-80h]
  int v61; // [sp+C0h] [bp-70h]
  int (**v62)(); // [sp+C4h] [bp-6Ch] BYREF
  int *v63; // [sp+C8h] [bp-68h]
  int v64; // [sp+CCh] [bp-64h]
  int v65; // [sp+D0h] [bp-60h] BYREF
  int (**v66)(); // [sp+D8h] [bp-58h] BYREF
  int *v67; // [sp+DCh] [bp-54h]
  int v68; // [sp+E0h] [bp-50h]
  int v69; // [sp+E4h] [bp-4Ch] BYREF
  int (**v70)(); // [sp+104h] [bp-2Ch] BYREF
  int *v71; // [sp+108h] [bp-28h]

  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 92))(a2);
  if ( v5 < 1 )
  {
    v9 = 5;
    v52 = 0;
  }
  else
  {
    v6 = &v66;
    v7 = 0;
    v53 = v5;
    v48 = v5 - 1;
    v49 = a1;
    v8 = a1 + 288812;
    v9 = 5;
    v47 = v8;
    v52 = 0;
    do
    {
      v54 = v9;
      v12 = (int *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 88))(a2, v7);
      v13 = (int)v6;
      v70 = &`vtable for'sead::SafeStringBase_char;
      v71 = v12;
      v67 = &v69;
      v66 = &BufferedSafeStringBase_char_vtable_probably;
      v68 = 32;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)v6);
      v66 = &off_60BD4C38;
      v14 = v67;
      ((void (__fastcall *)(int (***)()))v70[3])(&v70);
      v15 = v71;
      if ( v14 != v71 )
      {
        ((void (__fastcall *)(int (***)()))v70[3])(&v70);
        v16 = 0;
        while ( *((_BYTE *)v71 + v16) )
        {
          if ( !*((_BYTE *)v71 + v16 + 1) )
          {
            ++v16;
            break;
          }
          if ( !*((_BYTE *)v71 + v16 + 2) )
          {
            v16 += 2;
            break;
          }
          v17 = v16 + 2 <= 0x7FFFF;
          v16 += 3;
          if ( !v17 )
          {
            v16 = 0;
            break;
          }
        }
        if ( v16 >= v68 )
          v16 = v68 - 1;
        qmemcpy(v14, v15, v16);
        *((_BYTE *)v14 + v16) = 0;
      }
      v6 = (int (***)())v13;
      v66 = &off_60BD4C20;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_(v13);
      v18 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)v67 + v18) )
          goto LABEL_34;
        if ( !*((_BYTE *)v67 + v18 + 1) )
        {
          if ( v18 == 8 )
            goto LABEL_35;
          goto LABEL_104;
        }
        if ( !*((_BYTE *)v67 + v18 + 2) )
          break;
        v17 = v18 + 2 <= 0x7FFFF;
        v18 += 3;
        if ( !v17 )
          goto LABEL_104;
      }
      v18 += 2;
LABEL_34:
      if ( v18 == 9 )
      {
LABEL_35:
        ((void (__fastcall *)(int (***)()))v70[3])(&v70);
        v19 = (char *)v71;
        v20 = 0;
        while ( *((_BYTE *)v71 + v20) )
        {
          if ( !*((_BYTE *)v71 + v20 + 1) )
          {
            ++v20;
            break;
          }
          if ( !*((_BYTE *)v71 + v20 + 2) )
          {
            v20 += 2;
            break;
          }
          v17 = v20 + 2 <= 0x7FFFF;
          v20 += 3;
          if ( !v17 )
          {
            v20 = 0;
            break;
          }
        }
        if ( v20 < 0 )
          v19 = &byte_60B3BA34;
        if ( *v19 == 82 )
        {
          ((void (__fastcall *)(int (***)()))v70[3])(&v70);
          v21 = 0;
          while ( *((_BYTE *)v71 + v21) )
          {
            if ( !*((_BYTE *)v71 + v21 + 1) )
            {
              ++v21;
              break;
            }
            if ( !*((_BYTE *)v71 + v21 + 2) )
            {
              v21 += 2;
              break;
            }
            v17 = v21 + 2 <= 0x7FFFF;
            v21 += 3;
            if ( !v17 )
            {
              v21 = 0;
              break;
            }
          }
          v22 = (char *)(v71 + 1);
          if ( v21 < 4 )
            v22 = &byte_60B3BA34;
          if ( (unsigned __int8)*v22 >= 0x30u )
          {
            ((void (__fastcall *)(int (***)()))v70[3])(&v70);
            v23 = 0;
            while ( *((_BYTE *)v71 + v23) )
            {
              if ( !*((_BYTE *)v71 + v23 + 1) )
              {
                ++v23;
                break;
              }
              if ( !*((_BYTE *)v71 + v23 + 2) )
              {
                v23 += 2;
                break;
              }
              v17 = v23 + 2 <= 0x7FFFF;
              v23 += 3;
              if ( !v17 )
              {
                v23 = 0;
                break;
              }
            }
            v24 = (char *)(v71 + 1);
            if ( v23 < 4 )
              v24 = &byte_60B3BA34;
            if ( (unsigned __int8)*v24 <= 0x39u )
            {
              ((void (__fastcall *)(int (***)()))v70[3])(&v70);
              v25 = 0;
              while ( *((_BYTE *)v71 + v25) )
              {
                if ( !*((_BYTE *)v71 + v25 + 1) )
                {
                  ++v25;
                  break;
                }
                if ( !*((_BYTE *)v71 + v25 + 2) )
                {
                  v25 += 2;
                  break;
                }
                v17 = v25 + 2 <= 0x7FFFF;
                v25 += 3;
                if ( !v17 )
                {
                  v25 = 0;
                  break;
                }
              }
              v26 = (char *)(v71 + 2);
              if ( v25 < 8 )
                v26 = &byte_60B3BA34;
              if ( (unsigned __int8)*v26 >= 0x30u )
              {
                ((void (__fastcall *)(int (***)()))v70[3])(&v70);
                v27 = 0;
                while ( *((_BYTE *)v71 + v27) )
                {
                  if ( !*((_BYTE *)v71 + v27 + 1) )
                  {
                    ++v27;
                    break;
                  }
                  if ( !*((_BYTE *)v71 + v27 + 2) )
                  {
                    v27 += 2;
                    break;
                  }
                  v17 = v27 + 2 <= 0x7FFFF;
                  v27 += 3;
                  if ( !v17 )
                  {
                    v27 = 0;
                    break;
                  }
                }
                v28 = (char *)(v71 + 2);
                if ( v27 < 8 )
                  v28 = &byte_60B3BA34;
                if ( (unsigned __int8)*v28 <= 0x39u )
                {
                  v29 = *(_DWORD *)(v49 + 40);
                  if ( v29 >= 0x80 )
                    v29 = 0;
                  v30 = v49 + 828 * v29;
                  v31 = *(_BYTE **)(v30 + 288816);
                  ((void (__fastcall *)(int (***)()))v70[3])(&v70);
                  if ( v31 != (_BYTE *)v71 )
                  {
                    v32 = *(_DWORD *)(v30 + 288820);
                    v33 = v32 - 1;
                    if ( v32 > 9 )
                      v33 = 9;
                    qmemcpy(v31, v71, v33);
                    v31[v33] = 0;
                  }
                  v57 = (const char *)&v59;
                  v56 = &BufferedSafeStringBase_char_vtable_probably;
                  v58 = 5;
                  sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v56);
                  *v57 = 0;
                  v63 = &v65;
                  v62 = &BufferedSafeStringBase_char_vtable_probably;
                  v56 = &off_60BD4F38;
                  v64 = 5;
                  sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v62);
                  *(_BYTE *)v63 = 0;
                  v62 = &off_60BD4F38;
                  v34 = *(_DWORD *)(v49 + 40);
                  if ( v34 >= 0x80 )
                    v34 = 0;
                  sub_60199B6C(v47 + 828 * v34, &v56, 0);
                  v35 = *(_DWORD *)(v49 + 40);
                  if ( v35 >= 0x80 )
                    v35 = 0;
                  sub_60199C48(v47 + 828 * v35, &v62, 0);
                  v36 = *(_DWORD *)(v49 + 40);
                  *(_DWORD *)(v49 + 40) = v36 + 1;
                  if ( v7 < v48 )
                  {
                    if ( v36 >= 0x80 )
                      v36 = 0;
                    sub_60182C0C(v49 + 828 * v36, a2, v7, v49 + 828 * v36 + 288812);
                  }
LABEL_126:
                  v9 = v54;
                  goto LABEL_147;
                }
              }
            }
          }
        }
      }
LABEL_104:
      v56 = &`vtable for'sead::SafeStringBase_char;
      v57 = "start";
      if ( sub_6018506C(v13, &v56) == -1 )
      {
        v56 = &`vtable for'sead::SafeStringBase_char;
        v57 = "end";
        ((void (__fastcall *)(int))v66[3])(v13);
        ((void (__fastcall *)(int))v66[3])(v13);
        v40 = (const char *)v67;
        ((void (__fastcall *)(int (***)()))v56[3])(&v56);
        if ( v40 == v57 )
        {
LABEL_125:
          (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)a2 + 108))(a2, v7, &v56);
          *a4 = v59;
          a4[1] = v60;
          a4[2] = v61;
          v52 = 1;
        }
        else
        {
          for ( i = 1; *((unsigned __int8 *)v67 + i - 1) == (unsigned __int8)v57[i - 1]; i += 2 )
          {
            if ( !*((_BYTE *)v67 + i - 1) )
              goto LABEL_125;
            if ( i >= 524289 || *((unsigned __int8 *)v67 + i) != (unsigned __int8)v57[i] )
              break;
            if ( !*((_BYTE *)v67 + i) )
              goto LABEL_125;
          }
        }
        goto LABEL_126;
      }
      if ( ((unsigned int)&dword_60C89484 & ~(1612195816 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60C89484) )
      {
        arr_dword_60C89490[0] = &`vtable for'sead::SafeStringBase_char;
        arr_dword_60C89490[1] = "start";
        arr_dword_60C89490[2] = &`vtable for'sead::SafeStringBase_char;
        arr_dword_60C89490[3] = "startPan";
        arr_dword_60C89490[4] = &`vtable for'sead::SafeStringBase_char;
        arr_dword_60C89490[5] = "startTilt";
        arr_dword_60C89490[6] = &`vtable for'sead::SafeStringBase_char;
        arr_dword_60C89490[7] = "startFix";
        sub_60000288();
        _cxa_guard_release(&dword_60C89484);
      }
      ((void (__fastcall *)(int))v66[3])(v13);
      ((void (__fastcall *)(int))v66[3])(v13);
      v38 = v67;
      (*(void (__fastcall **)(_DWORD *))(arr_dword_60C89490[0] + 12))(dword_60C89490);
      v9 = 0;
      if ( v38 != (int *)arr_dword_60C89490[1] )
      {
        for ( j = 1; *((unsigned __int8 *)v67 + j - 1) == *(unsigned __int8 *)(arr_dword_60C89490[1] + j - 1); j += 2 )
        {
          if ( !*((_BYTE *)v67 + j - 1) )
            goto LABEL_146;
          if ( j >= 524289 || *((unsigned __int8 *)v67 + j) != *(unsigned __int8 *)(arr_dword_60C89490[1] + j) )
            break;
          if ( !*((_BYTE *)v67 + j) )
            goto LABEL_146;
        }
        ((void (__fastcall *)(int (***)()))v66[3])(v6);
        ((void (__fastcall *)(int (***)()))v66[3])(v6);
        v42 = v67;
        (*(void (__fastcall **)(_DWORD *))(arr_dword_60C89490[2] + 12))(&arr_dword_60C89490[2]);
        if ( v42 == (int *)arr_dword_60C89490[3] )
        {
          v9 = 1;
        }
        else
        {
          for ( k = 1; *((unsigned __int8 *)v67 + k - 1) == *(unsigned __int8 *)(arr_dword_60C89490[3] + k - 1); k += 2 )
          {
            v9 = 1;
            if ( !*((_BYTE *)v67 + k - 1) )
              goto LABEL_146;
            if ( k >= 524289 || *((unsigned __int8 *)v67 + k) != *(unsigned __int8 *)(arr_dword_60C89490[3] + k) )
              break;
            if ( !*((_BYTE *)v67 + k) )
              goto LABEL_146;
          }
          ((void (__fastcall *)(int (***)()))v66[3])(v6);
          ((void (__fastcall *)(int (***)()))v66[3])(v6);
          v44 = v67;
          (*(void (__fastcall **)(_DWORD *))(arr_dword_60C89490[4] + 12))(&arr_dword_60C89490[4]);
          v9 = 2;
          if ( v44 != (int *)arr_dword_60C89490[5] )
          {
            for ( m = 1; *((unsigned __int8 *)v67 + m - 1) == *(unsigned __int8 *)(arr_dword_60C89490[5] + m - 1); m += 2 )
            {
              if ( !*((_BYTE *)v67 + m - 1) )
                goto LABEL_146;
              if ( m >= 524289 || *((unsigned __int8 *)v67 + m) != *(unsigned __int8 *)(arr_dword_60C89490[5] + m) )
                break;
              if ( !*((_BYTE *)v67 + m) )
                goto LABEL_146;
            }
            ((void (__fastcall *)(int (***)()))v66[3])(v6);
            ((void (__fastcall *)(int (***)()))v66[3])(v6);
            v10 = v67;
            (*(void (__fastcall **)(_DWORD *))(arr_dword_60C89490[6] + 12))(&arr_dword_60C89490[6]);
            v9 = 3;
            if ( v10 != (int *)arr_dword_60C89490[7] )
            {
              for ( n = 1; *((unsigned __int8 *)v67 + n - 1) == *(unsigned __int8 *)(arr_dword_60C89490[7] + n - 1); n += 2 )
              {
                if ( !*((_BYTE *)v67 + n - 1) )
                  goto LABEL_146;
                if ( n >= 524289 || *((unsigned __int8 *)v67 + n) != *(unsigned __int8 *)(arr_dword_60C89490[7] + n) )
                  break;
                if ( !*((_BYTE *)v67 + n) )
                  goto LABEL_146;
              }
              v9 = v54;
            }
          }
        }
      }
LABEL_146:
      (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)a2 + 108))(a2, v7, &v56);
      *a3 = v59;
      a3[1] = v60;
      a3[2] = v61;
      v52 = 1;
LABEL_147:
      ++v7;
    }
    while ( v7 != v53 );
  }
  result = v9;
  if ( v9 == 5 )
    result = 0;
  if ( (v52 & 1) == 0 )
    return v9;
  return result;
}
