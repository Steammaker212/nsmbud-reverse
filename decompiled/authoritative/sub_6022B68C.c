int __fastcall sub_6022B68C(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // r5
  _DWORD *v7; // r10
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r7
  int v13; // r1
  int v14; // r0
  bool v15; // cc
  char *v16; // r0
  unsigned __int8 *v17; // r5
  unsigned __int8 *v18; // r1
  _BOOL4 v19; // r11
  int v20; // r0
  int v21; // r1
  char *v22; // r0
  unsigned __int8 *v23; // r5
  unsigned __int8 *v24; // r1
  _BOOL4 v25; // r8
  int v26; // r0
  int v27; // r1
  char *v28; // r0
  unsigned __int8 *v29; // r5
  unsigned __int8 *v30; // r1
  _BOOL4 v31; // r7
  _BOOL4 v32; // r5
  int v33; // r0
  int v34; // r1
  char *v35; // r0
  unsigned __int8 *v36; // r6
  unsigned __int8 *v37; // r1
  _BOOL4 v38; // r6
  int v39; // r0
  int v40; // r8
  bool v41; // zf
  int v42; // r6
  _DWORD *v43; // r5
  unsigned __int8 *v44; // r7
  unsigned __int8 *v45; // r0
  unsigned __int8 *v46; // r1
  int v47; // r2
  bool v48; // zf
  int v49; // r6
  _DWORD *v50; // r5
  unsigned __int8 *v51; // r7
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r1
  int v54; // r2
  bool v55; // zf
  int v56; // r11
  char v57; // r8
  char v58; // r5
  _DWORD *v59; // r6
  unsigned __int8 *v60; // r7
  unsigned __int8 *v61; // r0
  unsigned __int8 *v62; // r1
  unsigned __int8 *v63; // r7
  unsigned __int8 *v64; // r0
  unsigned __int8 *v65; // r1
  int v66; // r0
  const char *v67; // r2
  int v68; // r7
  _DWORD *v69; // r4
  int result; // r0
  int v71; // r1
  int i; // [sp+Ch] [bp-64h]
  _DWORD *v74; // [sp+10h] [bp-60h]
  int v75; // [sp+14h] [bp-5Ch]
  int v76; // [sp+18h] [bp-58h]
  int v77; // [sp+2Ch] [bp-44h]
  _DWORD *v78; // [sp+30h] [bp-40h]
  int v79; // [sp+34h] [bp-3Ch]
  int v80; // [sp+38h] [bp-38h]
  int (**v81)(); // [sp+3Ch] [bp-34h] BYREF
  unsigned __int8 *v82; // [sp+40h] [bp-30h]
  _DWORD v83[11]; // [sp+44h] [bp-2Ch]

  v5 = a2;
  v83[0] = *a2;
  v83[1] = *a3;
  v7 = (_DWORD *)sub_601E0010(a2);
  v8 = (_DWORD *)sub_601E0010(a3);
  v9 = v83[0];
  v74 = v5;
  for ( i = 0; ; ++i )
  {
    v75 = v9;
    v79 = sub_601A443C(dword_60C89E18, v9, v5[1]);
    v76 = *(_DWORD *)(v79 + 40);
    if ( v76 >= 1 )
      break;
LABEL_2:
    v10 = i + 1;
    if ( i + 1 > 1 )
    {
      v71 = -1;
      **(_BYTE **)(a5 + 4) = 0;
      result = 0;
      v69 = a4;
      *a4 = -1;
      goto LABEL_159;
    }
    v5 = v74;
    v9 = v83[v10];
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = (_DWORD *)sub_6018308C(v79, v11);
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v78 = v12;
    v13 = 0;
    v14 = v12[1];
    v80 = v11;
    while ( *(_BYTE *)(v14 + v13) )
    {
      if ( !*(_BYTE *)(v14 + v13 + 1) )
      {
        ++v13;
        break;
      }
      if ( !*(_BYTE *)(v14 + v13 + 2) )
      {
        v13 += 2;
        break;
      }
      v15 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v15 )
      {
        v13 = 0;
        break;
      }
    }
    v16 = (char *)(v14 + 1);
    v81 = &`vtable for'sead::SafeStringBase_char;
    if ( v13 < 1 )
      v16 = &byte_60B3BA34;
    v82 = (unsigned __int8 *)v16;
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    v17 = (unsigned __int8 *)v7[1];
    ((void (__fastcall *)(int (***)()))v81[3])(&v81);
    if ( v17 == v82 )
      goto LABEL_19;
    v18 = (unsigned __int8 *)v7[1];
    v19 = 0;
    if ( *v18 == *v82 )
    {
      if ( *v18 )
      {
        if ( v18[1] != v82[1] )
          goto LABEL_20;
        if ( v18[1] )
        {
          if ( v18[2] == v82[2] )
          {
            v19 = 1;
            if ( v18[2] )
              v19 = v18[3] == v82[3];
          }
          goto LABEL_20;
        }
      }
LABEL_19:
      v19 = 1;
    }
LABEL_20:
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v20 = v12[1];
    v21 = 0;
    while ( *(_BYTE *)(v20 + v21) )
    {
      if ( !*(_BYTE *)(v20 + v21 + 1) )
      {
        ++v21;
        break;
      }
      if ( !*(_BYTE *)(v20 + v21 + 2) )
      {
        v21 += 2;
        break;
      }
      v15 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v15 )
      {
        v21 = 0;
        break;
      }
    }
    v22 = (char *)(v20 + 5);
    v81 = &`vtable for'sead::SafeStringBase_char;
    if ( v21 < 5 )
      v22 = &byte_60B3BA34;
    v82 = (unsigned __int8 *)v22;
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    v23 = (unsigned __int8 *)v7[1];
    ((void (__fastcall *)(int (***)()))v81[3])(&v81);
    if ( v23 == v82 )
      goto LABEL_33;
    v24 = (unsigned __int8 *)v7[1];
    v25 = 0;
    if ( *v24 == *v82 )
    {
      if ( *v24 )
      {
        if ( v24[1] != v82[1] )
          goto LABEL_34;
        if ( v24[1] )
        {
          if ( v24[2] == v82[2] )
          {
            v25 = 1;
            if ( v24[2] )
              v25 = v24[3] == v82[3];
          }
          goto LABEL_34;
        }
      }
LABEL_33:
      v25 = 1;
    }
LABEL_34:
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v26 = v12[1];
    v27 = 0;
    while ( *(_BYTE *)(v26 + v27) )
    {
      if ( !*(_BYTE *)(v26 + v27 + 1) )
      {
        ++v27;
        break;
      }
      if ( !*(_BYTE *)(v26 + v27 + 2) )
      {
        v27 += 2;
        break;
      }
      v15 = v27 + 2 <= 0x7FFFF;
      v27 += 3;
      if ( !v15 )
      {
        v27 = 0;
        break;
      }
    }
    v28 = (char *)(v26 + 1);
    v81 = &`vtable for'sead::SafeStringBase_char;
    if ( v27 < 1 )
      v28 = &byte_60B3BA34;
    v82 = (unsigned __int8 *)v28;
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    v29 = (unsigned __int8 *)v8[1];
    ((void (__fastcall *)(int (***)()))v81[3])(&v81);
    if ( v29 == v82 )
    {
LABEL_47:
      v32 = v25;
LABEL_48:
      v31 = 1;
      goto LABEL_50;
    }
    v30 = (unsigned __int8 *)v8[1];
    v31 = 0;
    if ( *v30 == *v82 )
    {
      if ( !*v30 )
        goto LABEL_47;
      v32 = v25;
      if ( v30[1] == v82[1] )
      {
        if ( !v30[1] )
          goto LABEL_48;
        if ( v30[2] == v82[2] )
        {
          v31 = 1;
          if ( v30[2] )
            v31 = v30[3] == v82[3];
        }
      }
    }
    else
    {
      v32 = v25;
    }
LABEL_50:
    (*(void (__fastcall **)(_DWORD *))(*v78 + 12))(v78);
    v33 = v78[1];
    v34 = 0;
    while ( *(_BYTE *)(v33 + v34) )
    {
      if ( !*(_BYTE *)(v33 + v34 + 1) )
      {
        ++v34;
        break;
      }
      if ( !*(_BYTE *)(v33 + v34 + 2) )
      {
        v34 += 2;
        break;
      }
      v15 = v34 + 2 <= 0x7FFFF;
      v34 += 3;
      if ( !v15 )
      {
        v34 = 0;
        break;
      }
    }
    v35 = (char *)(v33 + 5);
    v81 = &`vtable for'sead::SafeStringBase_char;
    if ( v34 < 5 )
      v35 = &byte_60B3BA34;
    v82 = (unsigned __int8 *)v35;
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
    v36 = (unsigned __int8 *)v8[1];
    ((void (__fastcall *)(int (***)()))v81[3])(&v81);
    if ( v36 == v82 )
      goto LABEL_63;
    v37 = (unsigned __int8 *)v8[1];
    v38 = 0;
    if ( *v37 != *v82 )
      goto LABEL_64;
    if ( !*v37 )
    {
LABEL_63:
      v38 = 1;
      goto LABEL_64;
    }
    if ( v37[1] == v82[1] )
    {
      if ( !v37[1] )
        goto LABEL_63;
      if ( v37[2] == v82[2] )
      {
        v38 = 1;
        if ( v37[2] )
          v38 = v37[3] == v82[3];
      }
    }
LABEL_64:
    v39 = sub_60183650(v79, v80);
    v40 = v39;
    v41 = !v32 || !v31;
    if ( !v32 || !v31 )
      v41 = !v19 || !v38;
    if ( !v41 )
      goto LABEL_148;
    if ( !v19 && !v32 )
      break;
    if ( v39 >= 1 )
    {
      v42 = 0;
      do
      {
        v43 = (_DWORD *)sub_60183600(v79, v80, v42);
        (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
        (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
        v44 = (unsigned __int8 *)v8[1];
        (*(void (__fastcall **)(_DWORD *))(*v43 + 12))(v43);
        v45 = (unsigned __int8 *)v43[1];
        if ( v44 == v45 )
          goto LABEL_148;
        v46 = (unsigned __int8 *)v8[1];
        if ( *v46 == *v45 )
        {
          if ( !*v46 )
            goto LABEL_148;
          if ( v46[1] == v45[1] )
          {
            if ( !v46[1] )
              goto LABEL_148;
            v47 = v46[2];
            if ( v47 == v45[2] )
            {
              v48 = v47 == 0;
              if ( v46[2] )
                v48 = v46[3] == v45[3];
              if ( v48 )
                goto LABEL_148;
            }
          }
        }
      }
      while ( ++v42 < v40 );
    }
LABEL_146:
    v11 = v80 + 1;
    if ( v80 + 1 >= v76 )
      goto LABEL_2;
  }
  if ( !v31 && !v38 )
  {
    if ( v39 >= 2 )
    {
      v77 = v39;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      do
      {
        v59 = (_DWORD *)sub_60183600(v79, v80, v56);
        if ( (v57 & 1) == 0 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
          (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
          v60 = (unsigned __int8 *)v7[1];
          (*(void (__fastcall **)(_DWORD *))(*v59 + 12))(v59);
          v61 = (unsigned __int8 *)v59[1];
          if ( v60 == v61
            || (v62 = (unsigned __int8 *)v7[1], *v62 == *v61)
            && (!*v62 || v62[1] == v61[1] && (!v62[1] || v62[2] == v61[2] && (!v62[2] || v62[3] == v61[3]))) )
          {
            v57 |= 1u;
          }
        }
        if ( (v57 & 2) == 0 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
          (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
          v63 = (unsigned __int8 *)v8[1];
          (*(void (__fastcall **)(_DWORD *))(*v59 + 12))(v59);
          v64 = (unsigned __int8 *)v59[1];
          if ( v63 == v64
            || (v65 = (unsigned __int8 *)v8[1], *v65 == *v64)
            && (!*v65 || v65[1] == v64[1] && (!v65[1] || v65[2] == v64[2] && (!v65[2] || v65[3] == v64[3]))) )
          {
            v57 |= 2u;
          }
        }
        ++v56;
        v66 = 0;
        if ( v57 == 3 )
          v58 = 1;
        else
          v66 = 1;
      }
      while ( v56 < v77 && v66 );
      if ( (v58 & 1) != 0 )
        goto LABEL_148;
    }
    goto LABEL_146;
  }
  if ( v39 < 1 )
    goto LABEL_146;
  v49 = 0;
  while ( 1 )
  {
    v50 = (_DWORD *)sub_60183600(v79, v80, v49);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    v51 = (unsigned __int8 *)v7[1];
    (*(void (__fastcall **)(_DWORD *))(*v50 + 12))(v50);
    v52 = (unsigned __int8 *)v50[1];
    if ( v51 == v52 )
      break;
    v53 = (unsigned __int8 *)v7[1];
    if ( *v53 == *v52 )
    {
      if ( !*v53 )
        break;
      if ( v53[1] == v52[1] )
      {
        if ( !v53[1] )
          break;
        v54 = v53[2];
        if ( v54 == v52[2] )
        {
          v55 = v54 == 0;
          if ( v53[2] )
            v55 = v53[3] == v52[3];
          if ( v55 )
            break;
        }
      }
    }
    if ( ++v49 >= v40 )
      goto LABEL_146;
  }
LABEL_148:
  (*(void (__fastcall **)(_DWORD *))(*v78 + 12))(v78);
  v67 = (const char *)v78[1];
  v68 = 0;
  while ( v67[v68] )
  {
    if ( !v67[v68 + 1] )
    {
      ++v68;
      break;
    }
    if ( !v67[v68 + 2] )
    {
      v68 += 2;
      break;
    }
    v15 = v68 + 2 <= 0x7FFFF;
    v68 += 3;
    if ( !v15 )
    {
      v68 = 0;
      break;
    }
  }
  v69 = a4;
  if ( v68 < 0 )
    v67 = &byte_60B3BA34;
  sub_608FDDF4(a5, "%s", v67);
  *a4 = v75;
  result = 1;
  v71 = v74[1];
LABEL_159:
  v69[1] = v71;
  return result;
}
