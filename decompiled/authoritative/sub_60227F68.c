int __fastcall sub_60227F68(int a1)
{
  int v2; // r9
  unsigned int v3; // r4
  int result; // r0
  unsigned int v5; // r0
  unsigned __int8 v6; // r1
  int v7; // r7
  unsigned int v8; // r11
  float v9; // s2
  char *v10; // r4
  int v11; // r1
  unsigned int v12; // r10
  float v13; // s2
  float v14; // s2
  char *v15; // r4
  int v16; // r1
  char *v17; // r4
  int v18; // r1
  char *v19; // r4
  int v20; // r1
  char *v21; // r4
  float v22; // r7
  int m; // r1
  char *v24; // r4
  char *v25; // r4
  int v26; // r1
  char *v27; // r4
  char *v28; // r4
  int v29; // r1
  char *v30; // r4
  char v31; // r12
  int n; // r4
  int v33; // r5
  char *v34; // r4
  int v35; // r1
  unsigned int v36; // r0
  char *v37; // r2
  int v38; // r2
  unsigned int v39; // r1
  float *v40; // r0
  unsigned int v41; // r11
  int v42; // r4
  int v43; // r7
  int v44; // r1
  int v45; // r4
  float v46; // r11
  char *v47; // r7
  const void *settings2; // r6
  signed int v49; // r5
  bool v50; // cc
  int v51; // r7
  char *v52; // r2
  int v53; // r2
  char *v54; // r1
  unsigned int v55; // r0
  float v56; // s2
  char *v57; // r4
  int i; // r1
  float v59; // s2
  char *v60; // r4
  int j; // r1
  unsigned int v62; // r0
  float v63; // s2
  char *v64; // r4
  int k; // r1
  char *v66; // r4
  int ii; // r1
  int v68; // r5
  int v69; // r11
  void *v70; // r7
  const void *v71; // r6
  signed int v72; // r5
  bool v73; // zf
  unsigned int v74; // r5
  const char *v75; // r4
  int v76; // r10
  char *v77; // r7
  char *v78; // r6
  signed int v79; // r5
  bool v80; // zf
  bool v81; // zf
  bool v82; // zf
  const char *v83; // r4
  int (***v84)(); // r1
  signed int v85; // r0
  unsigned __int8 v86; // r0
  unsigned int v87; // [sp+3Ch] [bp-274h]
  int v88; // [sp+CCh] [bp-1E4h]
  int v89; // [sp+184h] [bp-12Ch]
  int v90; // [sp+1A0h] [bp-110h]
  int v91; // [sp+1A4h] [bp-10Ch]
  int v92; // [sp+1A8h] [bp-108h]
  const char *v93; // [sp+1ACh] [bp-104h]
  int v94; // [sp+1B0h] [bp-100h]
  float v95; // [sp+1B4h] [bp-FCh]
  float v96; // [sp+1B8h] [bp-F8h]
  int v97; // [sp+1BCh] [bp-F4h]
  int v98; // [sp+1C0h] [bp-F0h]
  float v99; // [sp+1C4h] [bp-ECh]
  int (**v100)(); // [sp+1C8h] [bp-E8h] BYREF
  const char *v101; // [sp+1CCh] [bp-E4h]
  ActorBuildInfo buildInfo; // [sp+1D0h] [bp-E0h] BYREF
  ActorBuildInfo v103; // [sp+200h] [bp-B0h] BYREF
  int (**v104)(); // [sp+230h] [bp-80h] BYREF
  char *v105; // [sp+234h] [bp-7Ch]
  int v106; // [sp+238h] [bp-78h]
  int v107; // [sp+23Ch] [bp-74h] BYREF
  char v108[12]; // [sp+25Ch] [bp-54h] BYREF
  float v109; // [sp+268h] [bp-48h]
  float v110; // [sp+278h] [bp-38h]
  float v111; // [sp+288h] [bp-28h]

  v2 = *(_DWORD *)(a1 + 1764);
  v3 = *(_DWORD *)(a1 + 1768);
  v97 = sub_601A443C(dword_60C89E18, v2, v3);
  v89 = a1;
  v92 = **(_DWORD **)(a1 + 4);
  result = (*(int (**)(void))(*(_DWORD *)v92 + 92))();
  v91 = result;
  if ( result >= 1 )
  {
    v5 = 0;
    v6 = v3;
    v7 = 0;
    v94 = v3;
    if ( v3 < 2 )
      v5 = v3;
    v87 = v5;
    if ( v3 != 1 )
      v6 = 0;
    v90 = (v2 == 7) & v6;
    v88 = 0;
    while ( 1 )
    {
      v41 = v3;
      v42 = v7;
      v43 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v92 + 88))(v92, v7);
      v44 = v42;
      v98 = v42;
      v45 = v41;
      (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v92 + 108))(v92, v44, v108);
      v46 = v109;
      v93 = (const char *)v43;
      v99 = v110;
      v95 = v111;
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = v43;
      v105 = (char *)&v107;
      v104 = &BufferedSafeStringBase_char_vtable_probably;
      v106 = 32;
      sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v104);
      v104 = &off_60BD4C38;
      v47 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      settings2 = (const void *)v103.settings2;
      if ( v47 != (char *)v103.settings2 )
      {
        (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
        v49 = 0;
        while ( *(_BYTE *)(v103.settings2 + v49) )
        {
          if ( !*(_BYTE *)(v103.settings2 + v49 + 1) )
          {
            ++v49;
            break;
          }
          if ( !*(_BYTE *)(v103.settings2 + v49 + 2) )
          {
            v49 += 2;
            break;
          }
          v50 = v49 + 2 <= 0x7FFFF;
          v49 += 3;
          if ( !v50 )
          {
            v49 = 0;
            break;
          }
        }
        if ( v49 >= v106 )
          v49 = v106 - 1;
        qmemcpy(v47, settings2, v49);
        v47[v49] = 0;
        v45 = v94;
      }
      v104 = &off_60BD4C20;
      v51 = sub_60181AB4(v97, &v104);
      v52 = v105;
      if ( v106 <= 0 )
        v52 = &byte_60B3BA34;
      v53 = (unsigned __int8)*v52;
      v96 = v46;
      if ( v53 == 70 )
        break;
      if ( v53 == 87 )
      {
        v54 = &byte_60B3BA34;
        v12 = -1;
        v8 = v45;
        if ( v106 > 2 )
          v54 = v105 + 2;
        v55 = (unsigned __int8)*v54;
        if ( v55 >= 0x30 )
        {
          v22 = v99;
          if ( v55 >= 0x3A )
          {
            v62 = v55 - 65;
            if ( v62 <= 0x17 && ((1 << v62) & 0xCC0447) != 0 )
              v12 = 866;
          }
          else
          {
            v12 = 866;
          }
          goto LABEL_199;
        }
        goto LABEL_198;
      }
      v8 = v45;
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobPeachGates1st";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v57 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v57 == (char *)v103.settings2 )
      {
LABEL_169:
        v12 = 864;
        goto LABEL_198;
      }
      for ( i = 1; v105[i - 1] == *(_BYTE *)(v103.settings2 + i - 1); i += 2 )
      {
        if ( !v105[i - 1] )
          goto LABEL_169;
        if ( i >= 524289 || v105[i] != *(_BYTE *)(v103.settings2 + i) )
          break;
        if ( !v105[i] )
          goto LABEL_169;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobPeachGates2nd";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v60 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v60 == (char *)v103.settings2 )
      {
LABEL_180:
        v12 = 865;
        goto LABEL_198;
      }
      for ( j = 1; v105[j - 1] == *(_BYTE *)(v103.settings2 + j - 1); j += 2 )
      {
        if ( !v105[j - 1] )
          goto LABEL_180;
        if ( j >= 524289 || v105[j] != *(_BYTE *)(v103.settings2 + j) )
          break;
        if ( !v105[j] )
          goto LABEL_180;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobCastle";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v64 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v64 == (char *)v103.settings2 )
      {
LABEL_197:
        v12 = 859;
        goto LABEL_198;
      }
      for ( k = 1; v105[k - 1] == *(_BYTE *)(v103.settings2 + k - 1); k += 2 )
      {
        if ( !v105[k - 1] )
          goto LABEL_197;
        if ( k >= 524289 || v105[k] != *(_BYTE *)(v103.settings2 + k) )
          break;
        if ( !v105[k] )
          goto LABEL_197;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobToride";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v10 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v10 == (char *)v103.settings2 )
      {
LABEL_14:
        v12 = 860;
LABEL_198:
        v22 = v99;
        goto LABEL_199;
      }
      v11 = 0;
      while ( v105[v11] == *(_BYTE *)(v103.settings2 + v11) )
      {
        if ( v105[v11] )
        {
          if ( ++v11 < 9 )
            continue;
        }
        goto LABEL_14;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobKinoko1up";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v15 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v15 == (char *)v103.settings2 )
      {
LABEL_24:
        v12 = 861;
        goto LABEL_198;
      }
      v16 = 0;
      while ( v105[v16] == *(_BYTE *)(v103.settings2 + v16) )
      {
        if ( v105[v16] )
        {
          if ( ++v16 < 12 )
            continue;
        }
        goto LABEL_24;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobKinokoShuffle";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v17 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v17 == (char *)v103.settings2 )
      {
LABEL_31:
        v12 = 862;
        goto LABEL_198;
      }
      v18 = 0;
      while ( v105[v18] == *(_BYTE *)(v103.settings2 + v18) )
      {
        if ( v105[v18] )
        {
          if ( ++v18 < 16 )
            continue;
        }
        goto LABEL_31;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobKinokoSlot";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v19 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      if ( v19 == (char *)v103.settings2 )
      {
LABEL_37:
        v12 = 863;
        goto LABEL_198;
      }
      v20 = 0;
      while ( v105[v20] == *(_BYTE *)(v103.settings2 + v20) )
      {
        if ( v105[v20] )
        {
          if ( ++v20 < 13 )
            continue;
        }
        goto LABEL_37;
      }
      v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
      v103.settings2 = (int)"cobGhost";
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      ((void (__fastcall *)(int (***)()))v104[3])(&v104);
      v21 = v105;
      (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
      v22 = v99;
      if ( v21 == (char *)v103.settings2 )
      {
LABEL_46:
        v12 = 869;
      }
      else
      {
        for ( m = 1; ; m += 2 )
        {
          v22 = v99;
          if ( v105[m - 1] != *(_BYTE *)(v103.settings2 + m - 1) )
            break;
          if ( !v105[m - 1] )
            goto LABEL_46;
          if ( m >= 524289 )
            break;
          v22 = v99;
          if ( v105[m] != *(_BYTE *)(v103.settings2 + m) )
            break;
          if ( !v105[m] )
            goto LABEL_46;
        }
        v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
        v103.settings2 = (int)"cobFlag";
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        v24 = v105;
        (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
        if ( v24 != (char *)v103.settings2
          && (*v105 != *(_BYTE *)v103.settings2
           || *v105
           && (v105[1] != *(_BYTE *)(v103.settings2 + 1)
            || v105[1]
            && (v105[2] != *(_BYTE *)(v103.settings2 + 2)
             || v105[2]
             && (v105[3] != *(_BYTE *)(v103.settings2 + 3)
              || v105[3]
              && (v105[4] != *(_BYTE *)(v103.settings2 + 4)
               || v105[4]
               && (v105[5] != *(_BYTE *)(v103.settings2 + 5) || v105[5] && v105[6] != *(_BYTE *)(v103.settings2 + 6))))))) )
        {
          v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
          v103.settings2 = (int)"cobPakkun";
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          v25 = v105;
          (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
          if ( v25 == (char *)v103.settings2 )
          {
LABEL_67:
            v12 = 900;
            goto LABEL_198;
          }
          v26 = 0;
          while ( v105[v26] == *(_BYTE *)(v103.settings2 + v26) )
          {
            if ( v105[v26] )
            {
              if ( ++v26 < 9 )
                continue;
            }
            goto LABEL_67;
          }
          v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
          v103.settings2 = (int)"cobUnizo";
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          v27 = v105;
          (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
          if ( v27 == (char *)v103.settings2
            || *v105 == *(_BYTE *)v103.settings2
            && (!*v105
             || v105[1] == *(_BYTE *)(v103.settings2 + 1)
             && (!v105[1]
              || v105[2] == *(_BYTE *)(v103.settings2 + 2)
              && (!v105[2]
               || v105[3] == *(_BYTE *)(v103.settings2 + 3)
               && (!v105[3]
                || v105[4] == *(_BYTE *)(v103.settings2 + 4)
                && (!v105[4]
                 || v105[5] == *(_BYTE *)(v103.settings2 + 5)
                 && (!v105[5]
                  || v105[6] == *(_BYTE *)(v103.settings2 + 6)
                  && (!v105[6] || v105[7] == *(_BYTE *)(v103.settings2 + 7)))))))) )
          {
            v12 = 902;
            goto LABEL_198;
          }
          v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
          v103.settings2 = (int)"cobStarGate";
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          v28 = v105;
          (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
          if ( v28 == (char *)v103.settings2 )
          {
LABEL_90:
            v12 = 909;
            goto LABEL_198;
          }
          v29 = 0;
          while ( v105[v29] == *(_BYTE *)(v103.settings2 + v29) )
          {
            if ( v105[v29] )
            {
              if ( ++v29 < 11 )
                continue;
            }
            goto LABEL_90;
          }
          v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
          v103.settings2 = (int)"cobShip";
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          v30 = v105;
          (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
          if ( v30 == (char *)v103.settings2
            || *v105 == *(_BYTE *)v103.settings2
            && (!*v105
             || v105[1] == *(_BYTE *)(v103.settings2 + 1)
             && (!v105[1]
              || v105[2] == *(_BYTE *)(v103.settings2 + 2)
              && (!v105[2]
               || v105[3] == *(_BYTE *)(v103.settings2 + 3)
               && (!v105[3]
                || v105[4] == *(_BYTE *)(v103.settings2 + 4)
                && (!v105[4]
                 || v105[5] == *(_BYTE *)(v103.settings2 + 5) && (!v105[5] || v105[6] == *(_BYTE *)(v103.settings2 + 6))))))) )
          {
            if ( !*(_BYTE *)(dword_60CC6D78 + 28) )
              goto LABEL_127;
            if ( ((unsigned int)dword_60C8D840 & ~(1612877116 << v31) & 1) == 0 && _cxa_guard_acquire(dword_60C8D840) )
            {
              arr_dword_60C8D840[1] = 871;
              arr_dword_60C8D840[2] = 872;
              arr_dword_60C8D840[3] = 873;
              arr_dword_60C8D840[4] = 874;
              arr_dword_60C8D840[5] = 875;
              arr_dword_60C8D840[6] = 876;
              arr_dword_60C8D840[7] = 877;
              _cxa_guard_release(dword_60C8D840);
            }
            for ( n = 1; n != 8; ++n )
            {
              v12 = arr_dword_60C8D840[n];
              v33 = sub_6022A7E4(*(_DWORD *)(v89 + 4), v98);
              memset(&v103, 0, sizeof(v103));
              v103.profile = Profile__get(v12);
              v103.position.x = v96;
              v103.position.y = v99;
              v103.position.z = v95;
              v103.eventId2 = v2;
              v103.field_20 = v94;
              buildInfo.settings1 = (int)&vtable_sead_SafeStringBase_char;
              buildInfo.settings2 = v33;
              v103.eventId1 = sub_6040D864(&buildInfo);
              v103.linkId = 0;
              v103.settings1 = 3;
              ActorMgr__create((void *)ActorMgr::instance, &v103, 0);
            }
            if ( v12 == 877 )
              v12 = -1;
          }
          else
          {
            v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
            v103.settings2 = (int)"lookW";
            ((void (__fastcall *)(int (***)()))v104[3])(&v104);
            ((void (__fastcall *)(int (***)()))v104[3])(&v104);
            v34 = v105;
            (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
            if ( v34 == (char *)v103.settings2
              || *v105 == *(_BYTE *)v103.settings2
              && (!*v105
               || v105[1] == *(_BYTE *)(v103.settings2 + 1)
               && (!v105[1]
                || v105[2] == *(_BYTE *)(v103.settings2 + 2)
                && (!v105[2]
                 || v105[3] == *(_BYTE *)(v103.settings2 + 3) && (!v105[3] || v105[4] == *(_BYTE *)(v103.settings2 + 4))))) )
            {
              v35 = 0;
              v36 = -49;
              v37 = &byte_60B3BA34;
              if ( v106 > 5 )
              {
                v36 = (unsigned __int8)v105[5] - 49;
                if ( v106 == 6 )
                {
                  v35 = 0;
                  v37 = &byte_60B3BA34;
                }
                else
                {
                  v35 = 10 * (unsigned __int8)v105[6];
                  if ( v106 < 8 )
                    v37 = &byte_60B3BA34;
                  else
                    v37 = v105 + 7;
                }
              }
              v38 = (unsigned __int8)*v37;
              v12 = -1;
              if ( v36 >= 9 )
                v36 = 0;
              v39 = v35 + v38 - 529;
              if ( v39 >= 0x1F )
                v39 = 0;
              v40 = (float *)(dword_60CC6D78 + 1488 * v36 + 744 * v87 + 24 * v39);
              v40[537] = v96;
              v22 = v99;
              v40[538] = v99;
              v40[539] = v95;
              v8 = v94;
              goto LABEL_199;
            }
LABEL_127:
            v12 = -1;
          }
          v8 = v94;
          goto LABEL_198;
        }
        v12 = 892;
      }
LABEL_199:
      if ( v90 == 1 )
      {
        v103.settings1 = (int)&vtable_sead_SafeStringBase_char;
        v103.settings2 = (int)"W8B1";
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        v66 = v105;
        (*(void (__fastcall **)(ActorBuildInfo *))(v103.settings1 + 12))(&v103);
        if ( v66 == (char *)v103.settings2 )
        {
LABEL_208:
          if ( sub_6019B154(7, 42) != 1 || sub_6019AF00(7, 42) == 1 )
          {
            v68 = sub_6022A7E4(*(_DWORD *)(v89 + 4), v98);
            memset(&v103, 0, sizeof(v103));
            v103.profile = Profile__get(0x38Au);
            v8 = v94;
            v103.position.x = v96;
            v103.position.y = v22;
            v103.position.z = v95;
            v103.eventId2 = v2;
            v103.field_20 = v94;
            buildInfo.settings1 = (int)&vtable_sead_SafeStringBase_char;
            buildInfo.settings2 = v68;
            v103.eventId1 = sub_6040D864(&buildInfo);
            v103.linkId = 0;
            v103.settings1 = 3;
            ActorMgr__create((void *)ActorMgr::instance, &v103, 0);
          }
        }
        else
        {
          for ( ii = 1; ; ii += 2 )
          {
            v22 = v99;
            if ( v105[ii - 1] != *(_BYTE *)(v103.settings2 + ii - 1) )
              break;
            if ( !v105[ii - 1] )
              goto LABEL_208;
            if ( ii >= 524289 )
              break;
            v22 = v99;
            if ( v105[ii] != *(_BYTE *)(v103.settings2 + ii) )
              break;
            if ( !v105[ii] )
              goto LABEL_208;
          }
        }
      }
      v3 = v8;
      if ( v12 != -1 )
      {
        v69 = sub_6022A7E4(*(_DWORD *)(v89 + 4), v98);
        buildInfo.settings1 = (int)&vtable_sead_SafeStringBase_char;
        buildInfo.settings2 = v69;
        v103.settings2 = (int)&v103.profile;
        v103.settings1 = (int)&BufferedSafeStringBase_char_vtable_probably;
        v103.parentId = 32;
        sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v103);
        v103.settings1 = (int)&off_60BD4C38;
        v70 = (void *)v103.settings2;
        (*(void (__fastcall **)(ActorBuildInfo *))(buildInfo.settings1 + 12))(&buildInfo);
        v71 = (const void *)buildInfo.settings2;
        if ( v70 != (void *)buildInfo.settings2 )
        {
          (*(void (__fastcall **)(ActorBuildInfo *))(buildInfo.settings1 + 12))(&buildInfo);
          v72 = 0;
          while ( *(_BYTE *)(buildInfo.settings2 + v72) )
          {
            if ( !*(_BYTE *)(buildInfo.settings2 + v72 + 1) )
            {
              ++v72;
              break;
            }
            if ( !*(_BYTE *)(buildInfo.settings2 + v72 + 2) )
            {
              v72 += 2;
              break;
            }
            v50 = v72 + 2 <= 0x7FFFF;
            v72 += 3;
            if ( !v50 )
            {
              v72 = 0;
              break;
            }
          }
          if ( v72 >= v103.parentId )
            v72 = v103.parentId - 1;
          qmemcpy(v70, v71, v72);
          *((_BYTE *)v70 + v72) = 0;
          v3 = v94;
        }
        v103.settings1 = (int)&off_60BD4C20;
        v73 = v12 == 862;
        if ( v12 != 862 )
          v73 = v12 == 863;
        if ( v73 || v12 == 861 )
          sub_60181BE0(v97, &v103, v12);
        memset(&buildInfo, 0, sizeof(buildInfo));
        buildInfo.profile = Profile__get(v12);
        v74 = v3;
        buildInfo.position.x = v96;
        buildInfo.position.y = v99;
        buildInfo.position.z = v95;
        buildInfo.eventId2 = v2;
        buildInfo.field_20 = v3;
        v100 = &vtable_sead_SafeStringBase_char;
        v101 = "cob";
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        ((void (__fastcall *)(int (***)()))v104[3])(&v104);
        v75 = v105;
        ((void (__fastcall *)(int (***)()))v100[3])(&v100);
        if ( v75 == v101 || *v105 == *v101 && (!*v105 || v105[1] == v101[1] && (!v105[1] || v105[2] == v101[2])) )
        {
          v100 = &vtable_sead_SafeStringBase_char;
          v101 = (const char *)v69;
        }
        else
        {
          v100 = &vtable_sead_SafeStringBase_char;
          v101 = v93;
        }
        buildInfo.eventId1 = sub_6040D864(&v100);
        v3 = v74;
        buildInfo.linkId = 0;
        if ( v12 == 866 )
        {
          v76 = dword_60C8C188;
          v77 = *(char **)(dword_60C8C188 + 3200);
          ((void (__fastcall *)(int (***)()))v104[3])(&v104);
          v78 = v105;
          if ( v77 != v105 )
          {
            ((void (__fastcall *)(int (***)()))v104[3])(&v104);
            v79 = 0;
            while ( v105[v79] )
            {
              if ( !v105[v79 + 1] )
              {
                ++v79;
                break;
              }
              if ( !v105[v79 + 2] )
              {
                v79 += 2;
                break;
              }
              v50 = v79 + 2 <= 0x7FFFF;
              v79 += 3;
              if ( !v50 )
              {
                v79 = 0;
                break;
              }
            }
            v85 = *(_DWORD *)(v76 + 3204);
            if ( v79 >= v85 )
              v79 = v85 - 1;
            qmemcpy(v77, v78, v79);
            v77[v79] = 0;
            v3 = v94;
          }
          buildInfo.movementId = sub_60181AB4(v97, &v104);
          v86 = sub_6040D4F0(&v104);
          buildInfo.eventId2 = v86;
          if ( v86 > 8u )
            v86 = v2;
          buildInfo.linkId = v86;
        }
        else
        {
          if ( v12 == 859 )
            goto LABEL_256;
          v80 = v12 == 860;
          if ( v12 != 860 )
            v80 = v12 == 861;
          if ( v80 )
            goto LABEL_256;
          v81 = v12 == 862;
          if ( v12 != 862 )
            v81 = v12 == 863;
          if ( v81 )
            goto LABEL_256;
          v82 = v12 == 869;
          if ( v12 != 869 )
            v82 = v12 == 864;
          if ( v82 || v12 == 865 )
          {
LABEL_256:
            v100 = &vtable_sead_SafeStringBase_char;
            v101 = "cob";
            ((void (__fastcall *)(int (***)()))v104[3])(&v104);
            ((void (__fastcall *)(int (***)()))v104[3])(&v104);
            v83 = v105;
            ((void (__fastcall *)(int (***)()))v100[3])(&v100);
            v84 = (int (***)())&v103;
            if ( v83 != v101 )
            {
              v84 = &v104;
              if ( *v105 == *v101 )
              {
                v84 = (int (***)())&v103;
                if ( *v105 )
                {
                  v84 = &v104;
                  if ( v105[1] == v101[1] )
                  {
                    v84 = (int (***)())&v103;
                    if ( v105[1] )
                    {
                      v84 = &v104;
                      if ( v105[2] == v101[2] )
                        v84 = (int (***)())&v103;
                    }
                  }
                }
              }
            }
            buildInfo.movementId = sub_60181AB4(v97, v84);
            v3 = v74;
            if ( (unsigned __int8)buildInfo.movementId == 255 )
            {
              v100 = &vtable_sead_SafeStringBase_char;
              v101 = "cob";
              ((void (__fastcall *)(int (***)()))v104[3])(&v104);
              ((void (__fastcall *)(int (***)()))v104[3])(&v104);
              ((void (__fastcall *)(int (***)()))v100[3])(&v100);
            }
          }
        }
        ActorMgr__create((void *)ActorMgr::instance, &buildInfo, 0);
      }
      result = v91;
      v7 = v98 + 1;
      if ( v98 + 1 == v91 )
        return result;
    }
    buildInfo.settings1 = v2;
    buildInfo.settings2 = v45;
    buildInfo.parentId = v51;
    if ( sub_601D9E28(&buildInfo) == 1 )
    {
      memset(&v103, 0, sizeof(v103));
      v103.eventId2 = v2;
      v103.field_20 = v45;
      v8 = v45;
      v103.movementId = v51;
      *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
      v103.position.z = v56;
      v103.profile = Profile__get(0x363u);
      goto LABEL_160;
    }
    if ( sub_60183054(v97, v51, 0x20000) )
    {
      memset(&v103, 0, sizeof(v103));
      v103.eventId2 = v2;
      v103.field_20 = v45;
      v103.movementId = v51;
      v8 = v45;
      v103.linkId = 0;
      *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
      v103.position.z = v59;
      v103.profile = Profile__get(0x371u);
LABEL_187:
      sub_600080BC((_DWORD *)ActorMgr::instance, &v103);
      goto LABEL_188;
    }
    if ( sub_60183054(v97, v51, 0x40000) )
    {
      memset(&v103, 0, sizeof(v103));
      v103.eventId2 = v2;
      v103.field_20 = v45;
      v103.movementId = v51;
      v8 = v45;
      v103.linkId = 1;
      *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
      v103.position.z = v63;
      v103.profile = Profile__get(0x372u);
      goto LABEL_187;
    }
    if ( sub_601DA52C(&buildInfo) == 1 )
    {
      memset(&v103, 0, sizeof(v103));
      v103.eventId2 = v2;
      v103.field_20 = v45;
      v8 = v45;
      v103.movementId = v51;
      *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
      v103.position.z = v9;
      v103.profile = Profile__get(0x37Eu);
LABEL_160:
      ActorMgr__create((void *)ActorMgr::instance, &v103, 0);
      goto LABEL_188;
    }
    if ( sub_601DA114(&buildInfo) == 1 )
    {
      memset(&v103, 0, sizeof(v103));
      v103.eventId2 = v2;
      v103.field_20 = v45;
      v8 = v45;
      v103.movementId = v51;
      *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
      v103.position.z = v13;
      v103.settings1 = (unsigned __int8)v88;
      v103.profile = Profile__get(0x37Fu);
      ActorMgr__create((void *)ActorMgr::instance, &v103, 0);
      ++v88;
    }
    else
    {
      if ( sub_601DAC28(&buildInfo) == 1 )
      {
        memset(&v103, 0, sizeof(v103));
        v103.eventId2 = v2;
        v103.field_20 = v45;
        v8 = v45;
        v103.movementId = v51;
        *(_QWORD *)&v103.position.x = sub_6019B73C(v92, v93);
        v103.position.z = v14;
        v103.profile = Profile__get(0x387u);
        goto LABEL_160;
      }
      v8 = v45;
    }
LABEL_188:
    v22 = v99;
    v12 = -1;
    goto LABEL_199;
  }
  return result;
}
