unsigned int __fastcall sub_6017BE9C(int a1)
{
  int worldId; // r8
  int v3; // r0
  _DWORD *v4; // r11
  int v5; // r5
  int v6; // r0
  int v7; // r2
  int *v8; // r8
  int v9; // r4
  int *v10; // r11
  int *v11; // r4
  signed int v12; // r7
  bool v13; // cc
  unsigned int v14; // r2
  int v15; // r0
  unsigned int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r7
  char *v20; // r1
  int v21; // r2
  char *v22; // r2
  int v23; // r7
  int v24; // r11
  int v25; // r1
  char *v26; // r1
  int v27; // r2
  char *v28; // r2
  int v29; // r7
  int v30; // r1
  char *v31; // r1
  int v32; // r2
  char *v33; // r2
  int v34; // r4
  int v35; // r7
  char *v36; // r1
  int v37; // r2
  char *v38; // r2
  int v39; // r4
  int v40; // r7
  int v41; // r1
  char *v42; // r1
  int v43; // r2
  char *v44; // r2
  int v45; // r4
  int v46; // r7
  char *v47; // r1
  int v48; // r2
  char *v49; // r2
  int v50; // r4
  int v51; // r7
  int v52; // r1
  char *v53; // r1
  int v54; // r2
  char *v55; // r2
  int v56; // r4
  int v57; // r7
  char *v58; // r1
  int v59; // r2
  char *v60; // r2
  int v61; // r7
  int v62; // r1
  char *v63; // r1
  int v64; // r2
  char *v65; // r2
  int v66; // r4
  int v67; // r7
  int v68; // r1
  char *v69; // r1
  int v70; // r2
  char *v71; // r2
  int v72; // r7
  int v73; // r1
  char *v74; // r1
  int v75; // r2
  char *v76; // r2
  int v77; // r4
  int v78; // r7
  int v79; // r1
  char *v80; // r1
  int v81; // r2
  char *v82; // r2
  int v83; // r0
  int *v84; // r5
  int *v85; // r11
  signed int v86; // r7
  unsigned int v87; // r0
  int v88; // r2
  unsigned int v89; // r1
  int v90; // r2
  char *v91; // r3
  unsigned int result; // r0
  int v93; // [sp+64h] [bp-31ACh]
  int (**v94)(); // [sp+68h] [bp-31A8h] BYREF
  int *v95; // [sp+6Ch] [bp-31A4h]
  int v96; // [sp+70h] [bp-31A0h]
  int v97; // [sp+74h] [bp-319Ch] BYREF
  unsigned int v98; // [sp+2074h] [bp-119Ch] BYREF
  int (**v99)(); // [sp+2078h] [bp-1198h] BYREF
  int *v100; // [sp+207Ch] [bp-1194h]
  int v101; // [sp+2080h] [bp-1190h]
  int v102; // [sp+2084h] [bp-118Ch] BYREF
  _BYTE v103[268]; // [sp+3084h] [bp-18Ch] BYREF
  int v104; // [sp+3190h] [bp-80h] BYREF
  const char *v105; // [sp+3194h] [bp-7Ch]
  unsigned int v106; // [sp+31BCh] [bp-54h] BYREF
  int (**v107)(); // [sp+31C0h] [bp-50h] BYREF
  int *v108; // [sp+31C4h] [bp-4Ch]
  int v109; // [sp+31C8h] [bp-48h]
  int v110; // [sp+31CCh] [bp-44h] BYREF

  v108 = &v110;
  v107 = &BufferedSafeStringBase_char_vtable_probably;
  v109 = 32;
  sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v107);
  *(_BYTE *)v108 = 0;
  v106 = 0;
  v107 = &off_60BD4C20;
  worldId = *(_DWORD *)(a1 + 20) + 1;
  v3 = sub_6017D524(&v104, "CS_W%d", worldId);
  (*(void (__fastcall **)(int))(v104 + 12))(v3);
  sub_6017D5C0(v103, "Model/%s%s.szs", v105, ".Nin_NX_NVN");
  v4 = (_DWORD *)(a1 + 24);
  if ( sub_60822378(ArchiveManagerMaybe_instance, v103) != 1 )
  {
    sub_608FDDF4((int)&v104, "CS_W%d%c", worldId, *(_DWORD *)(a1 + 24) + 97);
    (*(void (__fastcall **)(int *))(v104 + 12))(&v104);
    sub_608FDDF4((int)v103, "Model/%s%s.szs", v105, ".Nin_NX_NVN");
  }
  v5 = a1;
  v93 = a1;
  if ( *v4 )
  {
    sub_608FDDF4((int)&v107, "pointW%x%c.csv", worldId, *v4 + 0x61);
    v6 = sub_608226EC(ArchiveManagerMaybe_instance, &v104, &v107, &v106);
    v7 = worldId;
    v8 = (int *)v6;
    sub_608FDDF4((int)&v107, "routeW%x%c.csv", v7, *v4 + 97);
  }
  else
  {
    sub_608FDDF4((int)&v107, "pointW%x.csv", worldId);
    v9 = worldId;
    v8 = (int *)sub_608226EC(ArchiveManagerMaybe_instance, &v104, &v107, &v106);
    if ( v8 )
    {
      sub_608FDDF4((int)&v107, "routeW%x.csv", v9);
    }
    else
    {
      sub_608FDDF4((int)&v107, "pointW%x%c.csv", v9, *v4 + 97);
      v8 = (int *)sub_608226EC(ArchiveManagerMaybe_instance, &v104, &v107, &v106);
      sub_608FDDF4((int)&v107, "routeW%x%c.csv", v9, *v4 + 97);
    }
    v5 = a1;
  }
  v94 = &`vtable for'sead::SafeStringBase_char;
  v95 = v8;
  v100 = &v102;
  v99 = &BufferedSafeStringBase_char_vtable_probably;
  v101 = 4096;
  sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v99);
  v99 = &off_60BD5118;
  v10 = v100;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v94);
  v11 = v95;
  if ( v10 != v95 )
  {
    ((void (__fastcall *)(int (***)()))v94[3])(&v94);
    v12 = 0;
    while ( *((_BYTE *)v95 + v12) )
    {
      if ( !*((_BYTE *)v95 + v12 + 1) )
      {
        ++v12;
        break;
      }
      if ( !*((_BYTE *)v95 + v12 + 2) )
      {
        v12 += 2;
        break;
      }
      v13 = v12 + 2 <= 0x7FFFF;
      v12 += 3;
      if ( !v13 )
      {
        v12 = 0;
        break;
      }
    }
    if ( v12 >= v101 )
      v12 = v101 - 1;
    qmemcpy(v10, v11, v12);
    *((_BYTE *)v10 + v12) = 0;
  }
  v14 = 0;
  v98 = 0;
  v99 = &off_60BD5100;
  do
  {
    do
    {
      v15 = *((unsigned __int8 *)v8 + v14++);
      v98 = v14;
    }
    while ( v15 != 44 );
    v16 = *(_DWORD *)(v5 + 28);
    v17 = 0;
    if ( v16 >= 0x100 )
      v16 = 0;
    v18 = sub_60181410(v5 + 1096 * v16 + 44, &v99);
    v19 = v98 + v18;
    v98 += v18;
    v5 = v93;
    ((void (__fastcall *)(int (***)()))v99[3])(&v99);
    while ( *((_BYTE *)v100 + v17) )
    {
      if ( !*((_BYTE *)v100 + v17 + 1) )
      {
        ++v17;
        break;
      }
      if ( !*((_BYTE *)v100 + v17 + 2) )
      {
        v17 += 2;
        break;
      }
      v13 = v17 + 2 <= 0x7FFFF;
      v17 += 3;
      if ( !v13 )
      {
        v17 = 0;
        break;
      }
    }
    v20 = &byte_60B3BA34;
    if ( v17 >= v19 )
      v20 = (char *)v100 + v19;
    if ( v19 < 0 )
      v20 = &byte_60B3BA34;
    if ( *v20 != 13 )
      goto LABEL_51;
    ((void (__fastcall *)(int (***)()))v99[3])(&v99);
    v21 = 0;
    while ( *((_BYTE *)v100 + v21) )
    {
      if ( !*((_BYTE *)v100 + v21 + 1) )
      {
        ++v21;
        break;
      }
      if ( !*((_BYTE *)v100 + v21 + 2) )
      {
        v21 += 2;
        break;
      }
      v13 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v13 )
      {
        v21 = 0;
        break;
      }
    }
    v13 = v21 <= v19;
    v22 = &byte_60B3BA34;
    if ( !v13 )
      v22 = (char *)v100 + v19 + 1;
    if ( v19 < -1 )
      v22 = &byte_60B3BA34;
    if ( *v22 != 10 )
    {
LABEL_51:
      v23 = v98;
      v24 = ++v98;
      ((void (__fastcall *)(int (***)()))v99[3])(&v99);
      v25 = 0;
      while ( *((_BYTE *)v100 + v25) )
      {
        if ( !*((_BYTE *)v100 + v25 + 1) )
        {
          ++v25;
          break;
        }
        if ( !*((_BYTE *)v100 + v25 + 2) )
        {
          v25 += 2;
          break;
        }
        v13 = v25 + 2 <= 0x7FFFF;
        v25 += 3;
        if ( !v13 )
        {
          v25 = 0;
          break;
        }
      }
      v13 = v25 <= v23;
      v26 = &byte_60B3BA34;
      if ( !v13 )
        v26 = (char *)v100 + v24;
      if ( v23 < -1 )
        v26 = &byte_60B3BA34;
      if ( *v26 != 13 )
        goto LABEL_77;
      ((void (__fastcall *)(int (***)()))v99[3])(&v99);
      v27 = 0;
      while ( *((_BYTE *)v100 + v27) )
      {
        if ( !*((_BYTE *)v100 + v27 + 1) )
        {
          ++v27;
          break;
        }
        if ( !*((_BYTE *)v100 + v27 + 2) )
        {
          v27 += 2;
          break;
        }
        v13 = v27 + 2 <= 0x7FFFF;
        v27 += 3;
        if ( !v13 )
        {
          v27 = 0;
          break;
        }
      }
      v13 = v27 <= v24;
      v28 = &byte_60B3BA34;
      if ( !v13 )
        v28 = (char *)v100 + v23 + 2;
      if ( v24 < -1 )
        v28 = &byte_60B3BA34;
      if ( *v28 != 10 )
      {
LABEL_77:
        sub_6017D65C(v93, &v99, &v98);
        v29 = v98;
        ((void (__fastcall *)(int (***)()))v99[3])(&v99);
        v30 = 0;
        while ( *((_BYTE *)v100 + v30) )
        {
          if ( !*((_BYTE *)v100 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*((_BYTE *)v100 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v13 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v13 )
          {
            v30 = 0;
            break;
          }
        }
        v13 = v30 < v29;
        v31 = &byte_60B3BA34;
        if ( !v13 )
          v31 = (char *)v100 + v29;
        if ( v29 < 0 )
          v31 = &byte_60B3BA34;
        if ( *v31 != 13 )
          goto LABEL_103;
        ((void (__fastcall *)(int (***)()))v99[3])(&v99);
        v32 = 0;
        while ( *((_BYTE *)v100 + v32) )
        {
          if ( !*((_BYTE *)v100 + v32 + 1) )
          {
            ++v32;
            break;
          }
          if ( !*((_BYTE *)v100 + v32 + 2) )
          {
            v32 += 2;
            break;
          }
          v13 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v13 )
          {
            v32 = 0;
            break;
          }
        }
        v13 = v32 <= v29;
        v33 = &byte_60B3BA34;
        if ( !v13 )
          v33 = (char *)v100 + v29 + 1;
        if ( v29 < -1 )
          v33 = &byte_60B3BA34;
        if ( *v33 != 10 )
        {
LABEL_103:
          v34 = 0;
          sub_6017E728(v93, &v99, &v98, 0);
          v35 = v98;
          v5 = v93;
          ((void (__fastcall *)(int (***)()))v99[3])(&v99);
          while ( *((_BYTE *)v100 + v34) )
          {
            if ( !*((_BYTE *)v100 + v34 + 1) )
            {
              ++v34;
              break;
            }
            if ( !*((_BYTE *)v100 + v34 + 2) )
            {
              v34 += 2;
              break;
            }
            v13 = v34 + 2 <= 0x7FFFF;
            v34 += 3;
            if ( !v13 )
            {
              v34 = 0;
              break;
            }
          }
          v36 = &byte_60B3BA34;
          if ( v34 >= v35 )
            v36 = (char *)v100 + v35;
          if ( v35 < 0 )
            v36 = &byte_60B3BA34;
          if ( *v36 != 13 )
            goto LABEL_129;
          ((void (__fastcall *)(int (***)()))v99[3])(&v99);
          v37 = 0;
          while ( *((_BYTE *)v100 + v37) )
          {
            if ( !*((_BYTE *)v100 + v37 + 1) )
            {
              ++v37;
              break;
            }
            if ( !*((_BYTE *)v100 + v37 + 2) )
            {
              v37 += 2;
              break;
            }
            v13 = v37 + 2 <= 0x7FFFF;
            v37 += 3;
            if ( !v13 )
            {
              v37 = 0;
              break;
            }
          }
          v13 = v37 <= v35;
          v38 = &byte_60B3BA34;
          if ( !v13 )
            v38 = (char *)v100 + v35 + 1;
          if ( v35 < -1 )
            v38 = &byte_60B3BA34;
          if ( *v38 != 10 )
          {
LABEL_129:
            v39 = v98;
            v40 = ++v98;
            ((void (__fastcall *)(int (***)()))v99[3])(&v99);
            v41 = 0;
            while ( *((_BYTE *)v100 + v41) )
            {
              if ( !*((_BYTE *)v100 + v41 + 1) )
              {
                ++v41;
                break;
              }
              if ( !*((_BYTE *)v100 + v41 + 2) )
              {
                v41 += 2;
                break;
              }
              v13 = v41 + 2 <= 0x7FFFF;
              v41 += 3;
              if ( !v13 )
              {
                v41 = 0;
                break;
              }
            }
            v13 = v41 <= v39;
            v42 = &byte_60B3BA34;
            if ( !v13 )
              v42 = (char *)v100 + v40;
            if ( v39 < -1 )
              v42 = &byte_60B3BA34;
            if ( *v42 != 13 )
              goto LABEL_155;
            ((void (__fastcall *)(int (***)()))v99[3])(&v99);
            v43 = 0;
            while ( *((_BYTE *)v100 + v43) )
            {
              if ( !*((_BYTE *)v100 + v43 + 1) )
              {
                ++v43;
                break;
              }
              if ( !*((_BYTE *)v100 + v43 + 2) )
              {
                v43 += 2;
                break;
              }
              v13 = v43 + 2 <= 0x7FFFF;
              v43 += 3;
              if ( !v13 )
              {
                v43 = 0;
                break;
              }
            }
            v13 = v43 <= v40;
            v44 = &byte_60B3BA34;
            if ( !v13 )
              v44 = (char *)v100 + v39 + 2;
            if ( v40 < -1 )
              v44 = &byte_60B3BA34;
            if ( *v44 != 10 )
            {
LABEL_155:
              v45 = 0;
              sub_6017F25C(v93, &v99, &v98, 0);
              v46 = v98;
              v5 = v93;
              ((void (__fastcall *)(int (***)()))v99[3])(&v99);
              while ( *((_BYTE *)v100 + v45) )
              {
                if ( !*((_BYTE *)v100 + v45 + 1) )
                {
                  ++v45;
                  break;
                }
                if ( !*((_BYTE *)v100 + v45 + 2) )
                {
                  v45 += 2;
                  break;
                }
                v13 = v45 + 2 <= 0x7FFFF;
                v45 += 3;
                if ( !v13 )
                {
                  v45 = 0;
                  break;
                }
              }
              v47 = &byte_60B3BA34;
              if ( v45 >= v46 )
                v47 = (char *)v100 + v46;
              if ( v46 < 0 )
                v47 = &byte_60B3BA34;
              if ( *v47 != 13 )
                goto LABEL_181;
              ((void (__fastcall *)(int (***)()))v99[3])(&v99);
              v48 = 0;
              while ( *((_BYTE *)v100 + v48) )
              {
                if ( !*((_BYTE *)v100 + v48 + 1) )
                {
                  ++v48;
                  break;
                }
                if ( !*((_BYTE *)v100 + v48 + 2) )
                {
                  v48 += 2;
                  break;
                }
                v13 = v48 + 2 <= 0x7FFFF;
                v48 += 3;
                if ( !v13 )
                {
                  v48 = 0;
                  break;
                }
              }
              v13 = v48 <= v46;
              v49 = &byte_60B3BA34;
              if ( !v13 )
                v49 = (char *)v100 + v46 + 1;
              if ( v46 < -1 )
                v49 = &byte_60B3BA34;
              if ( *v49 != 10 )
              {
LABEL_181:
                v50 = v98;
                v51 = ++v98;
                ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                v52 = 0;
                while ( *((_BYTE *)v100 + v52) )
                {
                  if ( !*((_BYTE *)v100 + v52 + 1) )
                  {
                    ++v52;
                    break;
                  }
                  if ( !*((_BYTE *)v100 + v52 + 2) )
                  {
                    v52 += 2;
                    break;
                  }
                  v13 = v52 + 2 <= 0x7FFFF;
                  v52 += 3;
                  if ( !v13 )
                  {
                    v52 = 0;
                    break;
                  }
                }
                v13 = v52 <= v50;
                v53 = &byte_60B3BA34;
                if ( !v13 )
                  v53 = (char *)v100 + v51;
                if ( v50 < -1 )
                  v53 = &byte_60B3BA34;
                if ( *v53 != 13 )
                  goto LABEL_207;
                ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                v54 = 0;
                while ( *((_BYTE *)v100 + v54) )
                {
                  if ( !*((_BYTE *)v100 + v54 + 1) )
                  {
                    ++v54;
                    break;
                  }
                  if ( !*((_BYTE *)v100 + v54 + 2) )
                  {
                    v54 += 2;
                    break;
                  }
                  v13 = v54 + 2 <= 0x7FFFF;
                  v54 += 3;
                  if ( !v13 )
                  {
                    v54 = 0;
                    break;
                  }
                }
                v13 = v54 <= v51;
                v55 = &byte_60B3BA34;
                if ( !v13 )
                  v55 = (char *)v100 + v50 + 2;
                if ( v51 < -1 )
                  v55 = &byte_60B3BA34;
                if ( *v55 != 10 )
                {
LABEL_207:
                  v56 = 0;
                  sub_6018018C(v93, &v99, &v98, 0);
                  v57 = v98;
                  ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                  while ( *((_BYTE *)v100 + v56) )
                  {
                    if ( !*((_BYTE *)v100 + v56 + 1) )
                    {
                      ++v56;
                      break;
                    }
                    if ( !*((_BYTE *)v100 + v56 + 2) )
                    {
                      v56 += 2;
                      break;
                    }
                    v13 = v56 + 2 <= 0x7FFFF;
                    v56 += 3;
                    if ( !v13 )
                    {
                      v56 = 0;
                      break;
                    }
                  }
                  v5 = v93;
                  v58 = &byte_60B3BA34;
                  if ( v56 >= v57 )
                    v58 = (char *)v100 + v57;
                  if ( v57 < 0 )
                    v58 = &byte_60B3BA34;
                  if ( *v58 != 13 )
                    goto LABEL_233;
                  ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                  v59 = 0;
                  while ( *((_BYTE *)v100 + v59) )
                  {
                    if ( !*((_BYTE *)v100 + v59 + 1) )
                    {
                      ++v59;
                      break;
                    }
                    if ( !*((_BYTE *)v100 + v59 + 2) )
                    {
                      v59 += 2;
                      break;
                    }
                    v13 = v59 + 2 <= 0x7FFFF;
                    v59 += 3;
                    if ( !v13 )
                    {
                      v59 = 0;
                      break;
                    }
                  }
                  v13 = v59 <= v57;
                  v60 = &byte_60B3BA34;
                  if ( !v13 )
                    v60 = (char *)v100 + v57 + 1;
                  if ( v57 < -1 )
                    v60 = &byte_60B3BA34;
                  if ( *v60 != 10 )
                  {
LABEL_233:
                    sub_6017E728(v93, &v99, &v98, 1);
                    v61 = v98;
                    ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                    v62 = 0;
                    while ( *((_BYTE *)v100 + v62) )
                    {
                      if ( !*((_BYTE *)v100 + v62 + 1) )
                      {
                        ++v62;
                        break;
                      }
                      if ( !*((_BYTE *)v100 + v62 + 2) )
                      {
                        v62 += 2;
                        break;
                      }
                      v13 = v62 + 2 <= 0x7FFFF;
                      v62 += 3;
                      if ( !v13 )
                      {
                        v62 = 0;
                        break;
                      }
                    }
                    v13 = v62 < v61;
                    v63 = &byte_60B3BA34;
                    if ( !v13 )
                      v63 = (char *)v100 + v61;
                    if ( v61 < 0 )
                      v63 = &byte_60B3BA34;
                    if ( *v63 != 13 )
                      goto LABEL_259;
                    ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                    v64 = 0;
                    while ( *((_BYTE *)v100 + v64) )
                    {
                      if ( !*((_BYTE *)v100 + v64 + 1) )
                      {
                        ++v64;
                        break;
                      }
                      if ( !*((_BYTE *)v100 + v64 + 2) )
                      {
                        v64 += 2;
                        break;
                      }
                      v13 = v64 + 2 <= 0x7FFFF;
                      v64 += 3;
                      if ( !v13 )
                      {
                        v64 = 0;
                        break;
                      }
                    }
                    v13 = v64 <= v61;
                    v65 = &byte_60B3BA34;
                    if ( !v13 )
                      v65 = (char *)v100 + v61 + 1;
                    if ( v61 < -1 )
                      v65 = &byte_60B3BA34;
                    if ( *v65 != 10 )
                    {
LABEL_259:
                      v66 = v98;
                      v67 = ++v98;
                      ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                      v68 = 0;
                      while ( *((_BYTE *)v100 + v68) )
                      {
                        if ( !*((_BYTE *)v100 + v68 + 1) )
                        {
                          ++v68;
                          break;
                        }
                        if ( !*((_BYTE *)v100 + v68 + 2) )
                        {
                          v68 += 2;
                          break;
                        }
                        v13 = v68 + 2 <= 0x7FFFF;
                        v68 += 3;
                        if ( !v13 )
                        {
                          v68 = 0;
                          break;
                        }
                      }
                      v13 = v68 <= v66;
                      v69 = &byte_60B3BA34;
                      if ( !v13 )
                        v69 = (char *)v100 + v67;
                      if ( v66 < -1 )
                        v69 = &byte_60B3BA34;
                      if ( *v69 != 13 )
                        goto LABEL_285;
                      ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                      v70 = 0;
                      while ( *((_BYTE *)v100 + v70) )
                      {
                        if ( !*((_BYTE *)v100 + v70 + 1) )
                        {
                          ++v70;
                          break;
                        }
                        if ( !*((_BYTE *)v100 + v70 + 2) )
                        {
                          v70 += 2;
                          break;
                        }
                        v13 = v70 + 2 <= 0x7FFFF;
                        v70 += 3;
                        if ( !v13 )
                        {
                          v70 = 0;
                          break;
                        }
                      }
                      v13 = v70 <= v67;
                      v71 = &byte_60B3BA34;
                      if ( !v13 )
                        v71 = (char *)v100 + v66 + 2;
                      if ( v67 < -1 )
                        v71 = &byte_60B3BA34;
                      if ( *v71 != 10 )
                      {
LABEL_285:
                        sub_6017F25C(v93, &v99, &v98, 1);
                        v72 = v98;
                        ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                        v73 = 0;
                        while ( *((_BYTE *)v100 + v73) )
                        {
                          if ( !*((_BYTE *)v100 + v73 + 1) )
                          {
                            ++v73;
                            break;
                          }
                          if ( !*((_BYTE *)v100 + v73 + 2) )
                          {
                            v73 += 2;
                            break;
                          }
                          v13 = v73 + 2 <= 0x7FFFF;
                          v73 += 3;
                          if ( !v13 )
                          {
                            v73 = 0;
                            break;
                          }
                        }
                        v13 = v73 < v72;
                        v74 = &byte_60B3BA34;
                        if ( !v13 )
                          v74 = (char *)v100 + v72;
                        if ( v72 < 0 )
                          v74 = &byte_60B3BA34;
                        if ( *v74 != 13 )
                          goto LABEL_311;
                        ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                        v75 = 0;
                        while ( *((_BYTE *)v100 + v75) )
                        {
                          if ( !*((_BYTE *)v100 + v75 + 1) )
                          {
                            ++v75;
                            break;
                          }
                          if ( !*((_BYTE *)v100 + v75 + 2) )
                          {
                            v75 += 2;
                            break;
                          }
                          v13 = v75 + 2 <= 0x7FFFF;
                          v75 += 3;
                          if ( !v13 )
                          {
                            v75 = 0;
                            break;
                          }
                        }
                        v13 = v75 <= v72;
                        v76 = &byte_60B3BA34;
                        if ( !v13 )
                          v76 = (char *)v100 + v72 + 1;
                        if ( v72 < -1 )
                          v76 = &byte_60B3BA34;
                        if ( *v76 != 10 )
                        {
LABEL_311:
                          v77 = v98;
                          v78 = ++v98;
                          ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                          v79 = 0;
                          while ( *((_BYTE *)v100 + v79) )
                          {
                            if ( !*((_BYTE *)v100 + v79 + 1) )
                            {
                              ++v79;
                              break;
                            }
                            if ( !*((_BYTE *)v100 + v79 + 2) )
                            {
                              v79 += 2;
                              break;
                            }
                            v13 = v79 + 2 <= 0x7FFFF;
                            v79 += 3;
                            if ( !v13 )
                            {
                              v79 = 0;
                              break;
                            }
                          }
                          v13 = v79 <= v77;
                          v80 = &byte_60B3BA34;
                          if ( !v13 )
                            v80 = (char *)v100 + v78;
                          if ( v77 < -1 )
                            v80 = &byte_60B3BA34;
                          if ( *v80 != 13 )
                            goto LABEL_337;
                          ((void (__fastcall *)(int (***)()))v99[3])(&v99);
                          v81 = 0;
                          while ( *((_BYTE *)v100 + v81) )
                          {
                            if ( !*((_BYTE *)v100 + v81 + 1) )
                            {
                              ++v81;
                              break;
                            }
                            if ( !*((_BYTE *)v100 + v81 + 2) )
                            {
                              v81 += 2;
                              break;
                            }
                            v13 = v81 + 2 <= 0x7FFFF;
                            v81 += 3;
                            if ( !v13 )
                            {
                              v81 = 0;
                              break;
                            }
                          }
                          v13 = v81 <= v78;
                          v82 = &byte_60B3BA34;
                          if ( !v13 )
                            v82 = (char *)v100 + v77 + 2;
                          if ( v78 < -1 )
                            v82 = &byte_60B3BA34;
                          if ( *v82 != 10 )
LABEL_337:
                            sub_6018018C(v93, &v99, &v98, 1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v83 = *(_DWORD *)(v5 + 28) + 1;
    *(_DWORD *)(v5 + 28) = v83;
    v14 = v98 + 2;
    v98 = v14;
  }
  while ( v14 < v106 );
  *(_DWORD *)(v5 + 32) = v83;
  v84 = (int *)sub_608226EC(ArchiveManagerMaybe_instance, &v104, &v107, &v106);
  v95 = &v97;
  v94 = &BufferedSafeStringBase_char_vtable_probably;
  v96 = 0x2000;
  sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v94);
  v94 = &off_60BD5148;
  v85 = v95;
  if ( v95 != v84 )
  {
    v86 = 0;
    while ( *((_BYTE *)v84 + v86) )
    {
      if ( !*((_BYTE *)v84 + v86 + 1) )
      {
        ++v86;
        break;
      }
      if ( !*((_BYTE *)v84 + v86 + 2) )
      {
        v86 += 2;
        break;
      }
      v13 = v86 + 2 <= 0x7FFFF;
      v86 += 3;
      if ( !v13 )
      {
        v86 = 0;
        break;
      }
    }
    if ( v86 >= v96 )
      v86 = v96 - 1;
    qmemcpy(v95, v84, v86);
    *((_BYTE *)v85 + v86) = 0;
  }
  v94 = &off_60BD5130;
  v98 = 0;
  do
  {
    sub_60180C24(v93, &v94, &v98);
    ++v98;
    sub_60180FE8(v93, &v94, &v98);
    v87 = v98;
    v88 = 0;
    ++v98;
    v89 = *(_DWORD *)(v93 + 36);
    if ( v89 < 0x100 )
      v88 = *(_DWORD *)(v93 + 36);
    v90 = v93 + 32 * v88;
    v91 = &byte_60B3BA34;
    if ( *(int *)(v90 + 280628) >= 1 )
      v91 = *(char **)(v90 + 280624);
    if ( *v91 != 48 )
      *(_DWORD *)(v93 + 36) = v89 + 1;
    result = v87 + 3;
    v98 = result;
  }
  while ( result < v106 );
  return result;
}
