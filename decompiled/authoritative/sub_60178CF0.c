int __fastcall sub_60178CF0(int a1)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r1
  signed int v4; // r6
  bool v5; // cc
  signed int v6; // r0
  void *ResArchiveById; // r6
  void *Model; // r7
  ModelWrapper *v9; // r5
  ModelWrapper *v10; // r0
  void *v11; // r6
  void *v12; // r5
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  void *v15; // r6
  void *v16; // r5
  ModelWrapper *v17; // r7
  ModelWrapper *v18; // r0
  char *v19; // r0
  char *v20; // r4
  int v21; // r1
  int i; // r2
  const char *v23; // r5
  int v24; // r1
  int j; // r2
  void *v26; // r6
  void *v27; // r5
  ModelWrapper *v28; // r7
  ModelWrapper *v29; // r0
  int v30; // r6
  int v31; // r9
  int v32; // r5
  int v33; // r4
  char *v34; // r4
  unsigned __int8 *v35; // r1
  int v36; // r8
  int v37; // r6
  float v38; // s16
  int v39; // r4
  int v40; // r0
  char *v41; // r4
  int v42; // r1
  int k; // r2
  char *v44; // r4
  int v45; // r1
  int m; // r2
  char *v47; // r4
  int v48; // r1
  int n; // r2
  int v50; // r7
  int v51; // r5
  int v52; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r1
  int v57; // r1
  int v58; // r1
  int v59; // r1
  int v60; // r1
  int v61; // r1
  int v62; // r1
  int v63; // r1
  unsigned int v64; // r5
  int v65; // r0
  int v66; // r1
  int v67; // r1
  int v68; // r1
  int v69; // r1
  _DWORD *v70; // r0
  int v71; // r0
  int v72; // r1
  int v73; // r1
  int v74; // r1
  int v75; // r1
  int v76; // r1
  int v77; // r1
  int v78; // r1
  _DWORD *v79; // r0
  char *v80; // r4
  int v81; // r1
  int jj; // r2
  int v83; // r5
  unsigned int v84; // r0
  char *v85; // r4
  int v86; // r1
  int i1; // r2
  int v88; // r5
  unsigned int v89; // r0
  int v90; // r1
  int v91; // r1
  char *v92; // r0
  int ii; // r1
  char *v94; // r0
  int kk; // r1
  char *v96; // r0
  int mm; // r1
  char *v98; // r0
  int nn; // r2
  char *v100; // r0
  int i2; // r1
  char *v102; // r0
  int i3; // r1
  char *v104; // r0
  int i4; // r2
  int v106; // r1
  int v107; // r5
  unsigned int v108; // r0
  bool v109; // zf
  int v110; // r1
  int v111; // [sp+1Ch] [bp-14h]
  int (**v112)(); // [sp+20h] [bp-10h] BYREF
  const char *v113; // [sp+24h] [bp-Ch]
  sead::SafeString identifier; // [sp+28h] [bp-8h] BYREF

  v2 = *(_BYTE **)(a1 + 336);
  v3 = *(_BYTE **)(dword_60C8C188 + 3200);
  if ( v2 != v3 )
  {
    v4 = 0;
    while ( v3[v4] )
    {
      if ( !v3[v4 + 1] )
      {
        ++v4;
        break;
      }
      if ( !v3[v4 + 2] )
      {
        v4 += 2;
        break;
      }
      v5 = v4 + 2 <= 0x7FFFF;
      v4 += 3;
      if ( !v5 )
      {
        v4 = 0;
        break;
      }
    }
    v6 = *(_DWORD *)(a1 + 340);
    if ( v4 >= v6 )
      v4 = v6 - 1;
    qmemcpy(v2, v3, v4);
    v2[v4] = 0;
  }
  ResArchiveById = (void *)Profile::getResArchiveById(*(Profile **)(a1 + 12), 0);
  *(_DWORD *)(a1 + 280) = ResArchiveById;
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "cobCourse";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 1, 0, 0, 1, 0);
  v9 = (ModelWrapper *)operator new(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v10, (int)ResArchiveById, 0, 0);
  *(_DWORD *)(a1 + 268) = v9;
  if ( *(_DWORD *)(a1 + 240) == 8 )
  {
    v11 = (void *)Profile::getResArchiveById(*(Profile **)(a1 + 12), 2u);
    *(_DWORD *)(a1 + 288) = v11;
    identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
    identifier.cstr = "cobStarCoin";
    v12 = (void *)Resource_getModel(v11, &identifier, 6, 1, 0, 1, 0, 0, 1, 0);
    v13 = (ModelWrapper *)operator new(0x30u, 0, 4);
    v14 = ModelWrapper_ctor(v13, v12, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v14, (int)v11, 0, 0);
    *(_DWORD *)(a1 + 276) = v13;
    v15 = (void *)Profile::getResArchiveById(*(Profile **)(a1 + 12), 1u);
    *(_DWORD *)(a1 + 284) = v15;
    identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
    identifier.cstr = "cobRing";
    v16 = (void *)Resource_getModel(v15, &identifier, 6, 1, 0, 1, 0, 0, 1, 0);
    v17 = (ModelWrapper *)operator new(0x30u, 0, 4);
    v18 = ModelWrapper_ctor(v17, v16, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v18, (int)v15, 0, 0);
    *(_DWORD *)(a1 + 272) = v17;
    if ( *(int *)(a1 + 340) < 3 )
      v19 = &byte_60B3BA34;
    else
      v19 = (char *)(*(_DWORD *)(a1 + 336) + 2);
    if ( *v19 != 75 )
      goto LABEL_38;
LABEL_37:
    *(_DWORD *)(**(_DWORD **)(a1 + 268) + 36) = 2;
    goto LABEL_38;
  }
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W5A0";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v20 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v20 == identifier.cstr )
    goto LABEL_36;
  v21 = *(_DWORD *)(a1 + 336);
  for ( i = 1; *(unsigned __int8 *)(v21 + i - 1) == (unsigned __int8)identifier.cstr[i - 1]; i += 2 )
  {
    if ( !*(_BYTE *)(v21 + i - 1) )
      goto LABEL_36;
    if ( i >= 524289 || *(unsigned __int8 *)(v21 + i) != (unsigned __int8)identifier.cstr[i] )
      break;
    if ( !*(_BYTE *)(v21 + i) )
      goto LABEL_36;
  }
  v112 = &`vtable for'sead::SafeStringBase<char>;
  v113 = "W7A0";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v23 = *(const char **)(a1 + 336);
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v112);
  if ( v23 == v113 )
  {
LABEL_36:
    v26 = (void *)Profile::getResArchiveById(*(Profile **)(a1 + 12), 1u);
    *(_DWORD *)(a1 + 284) = v26;
    identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
    identifier.cstr = "cobRing";
    v27 = (void *)Resource_getModel(v26, &identifier, 6, 1, 0, 1, 0, 0, 1, 0);
    v28 = (ModelWrapper *)operator new(0x30u, 0, 4);
    v29 = ModelWrapper_ctor(v28, v27, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v29, (int)v26, 0, 0);
    *(_DWORD *)(a1 + 272) = v28;
    goto LABEL_37;
  }
  v24 = *(_DWORD *)(a1 + 336);
  for ( j = 1; *(unsigned __int8 *)(v24 + j - 1) == (unsigned __int8)v113[j - 1]; j += 2 )
  {
    if ( !*(_BYTE *)(v24 + j - 1) )
      goto LABEL_36;
    if ( j >= 524289 || *(unsigned __int8 *)(v24 + j) != (unsigned __int8)v113[j] )
      break;
    if ( !*(_BYTE *)(v24 + j) )
      goto LABEL_36;
  }
LABEL_38:
  v30 = *(_DWORD *)(a1 + 252);
  v31 = *(_DWORD *)(a1 + 240);
  v32 = dword_60CC6D78;
  v33 = sub_6019A120(v30);
  *(_DWORD *)(a1 + 328) = sub_6022C144(dword_60C8D864, a1 + 332);
  if ( !(v30 | v31) )
  {
    v40 = sub_6019A628(v31, v30);
    v38 = 1.0;
    v39 = 0;
    if ( (unsigned int)(v40 - 1) >= 3 )
    {
      if ( v40 == 6 )
      {
        v39 = 5;
      }
      else if ( v40 == 4 )
      {
        v39 = 1;
      }
      else
      {
        v39 = 2;
      }
    }
    goto LABEL_96;
  }
  v111 = v33;
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W6C";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v34 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v34 == identifier.cstr
    || (v35 = *(unsigned __int8 **)(a1 + 336), v36 = 0, *v35 == (unsigned __int8)*identifier.cstr)
    && (!*v35
     || v35[1] == *((unsigned __int8 *)identifier.cstr + 1)
     && (!v35[1] || v35[2] == *((unsigned __int8 *)identifier.cstr + 2))) )
  {
    identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
    identifier.cstr = "W6C0";
    sub_6022C144(dword_60C8D864, &identifier);
    v37 = sub_6019A628(v31, 22);
    v38 = 1.0;
    *(_DWORD *)(a1 + 328) = sub_6022C144(dword_60C8D864, a1 + 332);
    if ( (unsigned int)(v37 - 4) < 4 )
    {
      v39 = 5;
    }
    else
    {
      v39 = 0;
      if ( (unsigned int)(v37 - 1) >= 3 )
      {
        if ( v37 )
        {
          v38 = 0.0;
          v39 = sub_6019AB84(v31, 22);
        }
        else if ( !sub_6019AB84(v31, 22) )
        {
          v38 = 1.0;
          v39 = 2;
          if ( *(_DWORD *)(a1 + 328) < 2u )
          {
            v39 = 0;
            v38 = 0.0;
          }
        }
      }
    }
    goto LABEL_96;
  }
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W1X0";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v41 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v41 == identifier.cstr )
  {
LABEL_66:
    v38 = 1.0;
    v39 = 0;
    if ( (*(_BYTE *)(v32 + 2092) & 0x10) == 0 && (unsigned int)(sub_6019A628(v31, v30) - 1) >= 2 )
    {
      v39 = (unsigned __int16)(*(_WORD *)(v32 + 520) & 0x100) >> 7;
      if ( (*(_WORD *)(v32 + 520) & 0x100) != 0 )
        v38 = 1.0;
      else
        v38 = 0.0;
    }
    goto LABEL_96;
  }
  v42 = *(_DWORD *)(a1 + 336);
  for ( k = 1; *(unsigned __int8 *)(v42 + k - 1) == (unsigned __int8)identifier.cstr[k - 1]; k += 2 )
  {
    if ( !*(_BYTE *)(v42 + k - 1) )
      goto LABEL_66;
    if ( k >= 524289 || *(unsigned __int8 *)(v42 + k) != (unsigned __int8)identifier.cstr[k] )
      break;
    if ( !*(_BYTE *)(v42 + k) )
      goto LABEL_66;
  }
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W3G0";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v44 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v44 == identifier.cstr )
  {
LABEL_79:
    sub_6017A6F8(a1);
  }
  else
  {
    v45 = *(_DWORD *)(a1 + 336);
    for ( m = 1; *(unsigned __int8 *)(v45 + m - 1) == (unsigned __int8)identifier.cstr[m - 1]; m += 2 )
    {
      if ( !*(_BYTE *)(v45 + m - 1) )
        goto LABEL_79;
      if ( m >= 524289 || *(unsigned __int8 *)(v45 + m) != (unsigned __int8)identifier.cstr[m] )
        break;
      if ( !*(_BYTE *)(v45 + m) )
        goto LABEL_79;
    }
  }
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W801";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v47 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v47 == identifier.cstr )
  {
LABEL_88:
    v50 = v32;
    if ( *(_DWORD *)(a1 + 328) <= 1u )
      *(_DWORD *)(a1 + 328) = 3;
  }
  else
  {
    v48 = *(_DWORD *)(a1 + 336);
    for ( n = 1; *(unsigned __int8 *)(v48 + n - 1) == (unsigned __int8)identifier.cstr[n - 1]; n += 2 )
    {
      if ( !*(_BYTE *)(v48 + n - 1) )
        goto LABEL_88;
      if ( n >= 524289 || *(unsigned __int8 *)(v48 + n) != (unsigned __int8)identifier.cstr[n] )
        break;
      if ( !*(_BYTE *)(v48 + n) )
        goto LABEL_88;
    }
    v50 = v32;
  }
  v38 = 0.0;
  if ( v30 == 39 )
    goto LABEL_95;
  v54 = *(_DWORD *)(a1 + 328);
  if ( (unsigned int)(v54 - 2) < 2 )
  {
    v64 = sub_6019A628(v31, v30);
    v65 = *(_DWORD *)(a1 + 340);
    v66 = 0;
    if ( v65 >= 1 )
      v66 = **(unsigned __int8 **)(a1 + 336);
    if ( v66 != 87 )
      goto LABEL_140;
    v67 = 0;
    if ( v65 >= 3 )
      v67 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
    if ( v67 != 65 )
    {
LABEL_140:
      switch ( v64 )
      {
        case 0u:
          if ( v111 != 4 )
          {
            v109 = sub_6019AB84(v31, v30) == 0;
            v65 = *(_DWORD *)(a1 + 340);
            v39 = 2;
            v106 = 0;
            if ( !v109 )
              v39 = 0;
            if ( v65 >= 1 )
              v106 = **(unsigned __int8 **)(a1 + 336);
            goto LABEL_276;
          }
          v38 = 1.0;
          v39 = ((unsigned __int8)(*(_BYTE *)(v50 + 2092) & 0x10) >> 3) ^ 2;
          break;
        case 1u:
        case 2u:
        case 3u:
          if ( v111 == 4 )
            goto LABEL_216;
          v68 = 0;
          v39 = 0;
          if ( v65 >= 1 )
            v68 = **(unsigned __int8 **)(a1 + 336);
          v38 = 1.0;
          if ( v68 == 87 )
          {
            v69 = 0;
            if ( v65 >= 2 )
              v69 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
            if ( v69 == 57 )
            {
              if ( v65 >= 3 )
                v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
              if ( v36 == 48 )
              {
                v39 = 0;
                *(_BYTE *)(a1 + 419) = 1;
                *(_BYTE *)(a1 + 418) = 1;
                v70 = **(_DWORD ***)(*(_DWORD *)(a1 + 276) + 12);
                v70[6] = 0;
                goto LABEL_285;
              }
            }
          }
          break;
        case 4u:
        case 5u:
          v90 = 0;
          if ( v65 >= 1 )
            v90 = **(unsigned __int8 **)(a1 + 336);
          v38 = 1.0;
          v39 = 1;
          if ( v90 == 87 )
          {
            v91 = 0;
            if ( v65 >= 2 )
              v91 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
            if ( v91 == 57 )
            {
              if ( v65 >= 3 )
                v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
              if ( v36 == 48 )
              {
                v39 = 1;
                *(_BYTE *)(a1 + 419) = 1;
                *(_BYTE *)(a1 + 418) = 1;
                goto LABEL_284;
              }
            }
          }
          break;
        case 6u:
        case 7u:
          if ( v111 == 4 )
          {
LABEL_216:
            v39 = 0;
            if ( (*(_BYTE *)(v50 + 2092) & 0x10) != 0 )
              v38 = 1.0;
            else
              v38 = 0.0;
          }
          else
          {
            v106 = 0;
            if ( v65 >= 1 )
              v106 = **(unsigned __int8 **)(a1 + 336);
            v39 = 5;
LABEL_276:
            v38 = 1.0;
            if ( v106 == 87 )
            {
              v110 = 0;
              if ( v65 >= 2 )
                v110 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
              if ( v110 == 57 )
              {
                if ( v65 >= 3 )
                  v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
                if ( v36 == 48 )
                {
                  *(_BYTE *)(a1 + 419) = 1;
                  *(_BYTE *)(a1 + 418) = 1;
LABEL_284:
                  v70 = **(_DWORD ***)(*(_DWORD *)(a1 + 276) + 12);
                  v70[6] = 0;
LABEL_285:
                  v70[5] = v70[2];
                  v70[7] |= 2u;
                }
              }
            }
          }
          break;
        default:
          v39 = sub_6019AB84(v31, v30);
          break;
      }
      goto LABEL_96;
    }
    if ( sub_603F69FC(v50 + 796, (unsigned __int8)v31, (unsigned __int8)v30) >= 2 )
    {
      *(_BYTE *)(a1 + 418) = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
      (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
      v39 = 0;
      if ( v64 < 8 )
      {
        v38 = 1.0;
        v39 = dword_60AF7A60[v64];
      }
      goto LABEL_96;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
    v92 = *(char **)(a1 + 336);
    if ( v92 == "W5A0" )
    {
LABEL_264:
      identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
      identifier.cstr = "W7A0";
      v107 = sub_6022C144(dword_60C8D864, &identifier);
      v108 = sub_6019A628(6, 36);
      if ( v107 == 3 && v108 <= 6 && ((1 << v108) & 0x56) != 0 )
      {
        v38 = 1.0;
        *(_BYTE *)(a1 + 418) = 1;
        v39 = 2;
        goto LABEL_96;
      }
    }
    else
    {
      for ( ii = 0; ii < 524289; ++ii )
      {
        if ( v92[ii] != aW5a0[ii] )
          break;
        if ( !v92[ii] )
          goto LABEL_264;
      }
    }
    goto LABEL_270;
  }
  if ( v54 != 1 )
  {
    if ( !v54 )
    {
      v55 = *(_DWORD *)(a1 + 340);
      v56 = 0;
      if ( v55 >= 1 )
        v56 = **(unsigned __int8 **)(a1 + 336);
      if ( v56 == 87 )
      {
        v57 = 0;
        if ( v55 >= 3 )
          v57 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
        if ( v57 == 83 )
          goto LABEL_270;
      }
      v58 = 0;
      if ( v55 >= 1 )
        v58 = **(unsigned __int8 **)(a1 + 336);
      if ( v58 == 87 )
      {
        v59 = 0;
        if ( v55 >= 2 )
          v59 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
        if ( v59 == 57 )
        {
          v60 = 0;
          if ( v55 >= 3 )
            v60 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
          if ( v60 == 48 )
          {
            *(_BYTE *)(a1 + 416) = 0;
            v61 = 0;
            if ( v55 >= 4 )
              v61 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 3);
            v39 = 3;
            if ( v61 != 57 )
            {
              v62 = 0;
              if ( v55 >= 1 )
                v62 = **(unsigned __int8 **)(a1 + 336);
              if ( v62 == 87 )
              {
                v63 = 0;
                if ( v55 >= 2 )
                  v63 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
                if ( v63 == 57 )
                {
                  if ( v55 >= 3 )
                    v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
                  v39 = 3;
                  if ( v36 == 48 )
                    *(_BYTE *)(a1 + 419) = 1;
                }
              }
            }
            goto LABEL_96;
          }
        }
      }
      identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
      identifier.cstr = "W5A0";
      (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
      (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
      v80 = *(char **)(a1 + 336);
      (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
      if ( v80 != identifier.cstr )
      {
        v81 = *(_DWORD *)(a1 + 336);
        for ( jj = 1; *(unsigned __int8 *)(v81 + jj - 1) == (unsigned __int8)identifier.cstr[jj - 1]; jj += 2 )
        {
          if ( !*(_BYTE *)(v81 + jj - 1) )
            goto LABEL_187;
          if ( jj >= 524289 || *(unsigned __int8 *)(v81 + jj) != (unsigned __int8)identifier.cstr[jj] )
            break;
          if ( !*(_BYTE *)(v81 + jj) )
            goto LABEL_187;
        }
        (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
        (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
        v94 = *(char **)(a1 + 336);
        if ( v94 != "W7A0" )
        {
          for ( kk = 0; kk < 524289; ++kk )
          {
            if ( v94[kk] != aW7a0[kk] )
              break;
            if ( !v94[kk] )
              goto LABEL_268;
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
          (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
          v96 = *(char **)(a1 + 336);
          if ( v96 == "W8B1" )
            goto LABEL_271;
          for ( mm = 0; mm < 524289; ++mm )
          {
            if ( v96[mm] != aW8b1[mm] )
              break;
            if ( !v96[mm] )
              goto LABEL_271;
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
          (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
          v98 = *(char **)(a1 + 336);
          if ( v98 == "W804" )
          {
LABEL_271:
            v39 = 4;
            *(_BYTE *)(a1 + 416) = 0;
          }
          else
          {
            v39 = 0;
            for ( nn = 0; nn < 524289; ++nn )
            {
              if ( v98[nn] != aW804[nn] )
                break;
              if ( !v98[nn] )
                goto LABEL_271;
            }
          }
          goto LABEL_96;
        }
LABEL_268:
        if ( sub_603F69FC(v50 + 796, (unsigned __int8)v31, (unsigned __int8)v30) >= 2 )
        {
          v39 = 0;
          *(_BYTE *)(a1 + 418) = 1;
          goto LABEL_96;
        }
LABEL_270:
        v39 = 3;
        *(_BYTE *)(a1 + 416) = 0;
        goto LABEL_96;
      }
LABEL_187:
      if ( sub_603F69FC(v50 + 796, (unsigned __int8)v31, (unsigned __int8)v30) <= 1 )
      {
        identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
        identifier.cstr = "W7A0";
        v83 = sub_6022C144(dword_60C8D864, &identifier);
        v84 = sub_6019A628(6, 36);
        v39 = 0;
        if ( v83 == 3 && v84 <= 6 && ((1 << v84) & 0x56) != 0 )
        {
          *(_BYTE *)(a1 + 418) = 1;
          goto LABEL_96;
        }
        goto LABEL_270;
      }
    }
LABEL_95:
    v39 = 0;
    goto LABEL_96;
  }
  v71 = *(_DWORD *)(a1 + 340);
  v72 = 0;
  if ( v71 >= 1 )
    v72 = **(unsigned __int8 **)(a1 + 336);
  if ( v72 == 87 )
  {
    v73 = 0;
    if ( v71 >= 3 )
      v73 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
    if ( v73 == 83 )
    {
LABEL_158:
      v39 = 3;
      *(_BYTE *)(a1 + 416) = 0;
      *(_DWORD *)(a1 + 316) = 4;
      goto LABEL_96;
    }
  }
  v74 = 0;
  if ( v71 >= 1 )
    v74 = **(unsigned __int8 **)(a1 + 336);
  if ( v74 == 87 )
  {
    v75 = 0;
    if ( v71 >= 2 )
      v75 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
    if ( v75 == 57 )
    {
      v76 = 0;
      if ( v71 >= 3 )
        v76 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
      if ( v76 == 48 )
      {
        *(_BYTE *)(a1 + 416) = 0;
        *(_DWORD *)(a1 + 328) = 0;
        v77 = 0;
        if ( v71 >= 1 )
          v77 = **(unsigned __int8 **)(a1 + 336);
        if ( v77 == 87 )
        {
          v78 = 0;
          if ( v71 >= 2 )
            v78 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 1);
          if ( v78 == 57 )
          {
            if ( v71 >= 3 )
              v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 336) + 2);
            if ( v36 == 48 )
            {
              *(_BYTE *)(a1 + 419) = 1;
              *(_BYTE *)(a1 + 418) = 1;
              v79 = **(_DWORD ***)(*(_DWORD *)(a1 + 276) + 12);
              v79[6] = 0;
              v79[5] = v79[2];
              v79[7] |= 2u;
            }
          }
        }
        v39 = 3;
        *(_BYTE *)(a1 + 418) = 0;
        goto LABEL_96;
      }
    }
  }
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "W5A0";
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v85 = *(char **)(a1 + 336);
  (*((void (__fastcall **)(sead::SafeString *))identifier.vtable + 3))(&identifier);
  if ( v85 == identifier.cstr )
  {
LABEL_200:
    if ( sub_603F69FC(v50 + 796, (unsigned __int8)v31, (unsigned __int8)v30) <= 1 )
    {
      identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
      identifier.cstr = "W7A0";
      v88 = sub_6022C144(dword_60C8D864, &identifier);
      v89 = sub_6019A628(6, 36);
      if ( v88 == 3 && v89 <= 6 && ((1 << v89) & 0x56) != 0 )
      {
        *(_BYTE *)(a1 + 418) = 1;
        goto LABEL_95;
      }
    }
LABEL_257:
    v39 = 3;
    *(_BYTE *)(a1 + 416) = 0;
    *(_DWORD *)(a1 + 328) = 3;
    goto LABEL_96;
  }
  v86 = *(_DWORD *)(a1 + 336);
  for ( i1 = 1; *(unsigned __int8 *)(v86 + i1 - 1) == (unsigned __int8)identifier.cstr[i1 - 1]; i1 += 2 )
  {
    if ( !*(_BYTE *)(v86 + i1 - 1) )
      goto LABEL_200;
    if ( i1 >= 524289 || *(unsigned __int8 *)(v86 + i1) != (unsigned __int8)identifier.cstr[i1] )
      break;
    if ( !*(_BYTE *)(v86 + i1) )
      goto LABEL_200;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v100 = *(char **)(a1 + 336);
  if ( v100 == "W7A0" )
    goto LABEL_257;
  for ( i2 = 0; i2 < 524289; ++i2 )
  {
    if ( v100[i2] != aW7a0[i2] )
      break;
    if ( !v100[i2] )
      goto LABEL_257;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v102 = *(char **)(a1 + 336);
  if ( v102 == "W8B1" )
    goto LABEL_158;
  for ( i3 = 0; i3 < 524289; ++i3 )
  {
    if ( v102[i3] != aW8b1[i3] )
      break;
    if ( !v102[i3] )
      goto LABEL_158;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 332) + 12))(a1 + 332);
  v104 = *(char **)(a1 + 336);
  if ( v104 == "W804" )
    goto LABEL_158;
  v39 = 0;
  for ( i4 = 0; i4 < 524289; ++i4 )
  {
    if ( v104[i4] != aW804[i4] )
      break;
    if ( !v104[i4] )
      goto LABEL_158;
  }
LABEL_96:
  *(_DWORD *)(a1 + 308) = v39;
  *(float *)(a1 + 312) = v38;
  v51 = **(_DWORD **)(*(_DWORD *)(a1 + 268) + 28);
  identifier.vtable = &`vtable for'sead::SafeStringBase<char>;
  identifier.cstr = "cobCourse";
  v52 = LoadResource(ResourceMgrRelated_instance, &identifier);
  ShuAnim_play((_DWORD *)v51, v52, (int)&dword_60C88E90[2 * *(_DWORD *)(a1 + 308) + 3]);
  AnimationCtrl_setRepeat((ModelAnimation *)(v51 + 4), dword_60AF7A3C[*(_DWORD *)(a1 + 308)]);
  *(float *)(v51 + 24) = v38;
  if ( !v39 )
  {
    *(_DWORD *)(v51 + 24) = 0;
    *(float *)(v51 + 20) = v38;
    *(_DWORD *)(v51 + 28) |= 2u;
  }
  *(_DWORD *)(a1 + 292) = v51;
  return sub_6017A3E0(a1);
}
