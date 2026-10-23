int __fastcall sub_60459990(int a1)
{
  int v1; // r7
  int v2; // r0
  sead_IDisposer *(__fastcall *v3)(int); // r0
  sead_IDisposer *(__fastcall *v4)(int); // r1
  bool v5; // zf
  int v6; // r1
  int v7; // r0
  int v8; // r5
  int v9; // r0
  char v10; // r12
  int v11; // r4
  int (__fastcall *v12)(int); // r0
  int v13; // r6
  int *v14; // r5
  int v15; // r11
  int v16; // r0
  int v17; // r10
  int v18; // r8
  int v19; // r5
  int v20; // r9
  int v21; // r4
  int *v22; // r6
  int v23; // r7
  int v24; // r0
  int v25; // r4
  int *v26; // r6
  int v27; // r10
  int v28; // r0
  int v29; // r4
  int *v30; // r6
  int v31; // r7
  int v32; // r0
  int v33; // r4
  int *v34; // r6
  int v35; // r7
  int v36; // r0
  int v37; // r4
  int v38; // r6
  int v39; // r3
  int v40; // r11
  int v41; // r5
  int v42; // r0
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r1
  int v47; // r1
  int v48; // r0
  int v49; // r1
  int (*v50)(); // r0
  sead_IDisposer *(__fastcall *v51)(int); // r1
  bool v52; // zf
  int v53; // r0
  int v54; // r0
  int v55; // r1
  int v56; // r5
  int v57; // r0
  int v58; // r1
  int v60; // [sp+10h] [bp-260h]
  int v61; // [sp+14h] [bp-25Ch]
  _BYTE v62[4]; // [sp+28h] [bp-248h] BYREF
  int v63; // [sp+2Ch] [bp-244h]
  char v64; // [sp+30h] [bp-240h] BYREF
  char v65; // [sp+31h] [bp-23Fh]
  char v66; // [sp+32h] [bp-23Eh]
  char v67; // [sp+33h] [bp-23Dh]
  char v68; // [sp+34h] [bp-23Ch]
  char v69; // [sp+35h] [bp-23Bh]
  char v70; // [sp+36h] [bp-23Ah]
  char v71; // [sp+47h] [bp-229h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 76);
  if ( !v2 )
    goto LABEL_18;
  *(_DWORD *)(v1 + 76) = v2 - 1;
  if ( v2 > 1 || *(_DWORD *)(dword_60CC62E4 + 84) != 2 )
    goto LABEL_18;
  v3 = *(sead_IDisposer *(__fastcall **)(int))(dword_60CC62E4 + 88);
  if ( v3 == CourseSelectTask_create )
  {
    if ( dword_60C8C188 && *(_BYTE *)(dword_60C8C188 + 3225) )
      goto LABEL_18;
LABEL_17:
    sub_600241EC();
    goto LABEL_18;
  }
  v4 = (sead_IDisposer *(__fastcall *)(int))sub_600246FC;
  v5 = (char *)v3 == (char *)sub_600246FC;
  if ( (char *)v3 != (char *)sub_600246FC )
  {
    v4 = AreaTask_create;
    v5 = v3 == AreaTask_create;
  }
  if ( v5 )
  {
    if ( !dword_60C99DD4 )
      goto LABEL_17;
    v6 = sub_603FB2C8(dword_60C99DD4, v4);
    v7 = 1;
    if ( !v6 )
      v7 = sub_6040E438(LevelInfo_instance);
    if ( v7 == 1 && *(_DWORD *)(dword_60C99DD4 + 764) != 3 )
      goto LABEL_17;
  }
LABEL_18:
  v8 = *(unsigned __int8 *)(v1 + 83);
  v9 = sub_607F6904(dword_60CC62E4);
  if ( *(_DWORD *)(dword_60CC62E4 + 84) == 2 )
  {
    v11 = 1;
    if ( v9 | (v8 == 0) )
      return v11;
    v12 = *(int (__fastcall **)(int))(dword_60CC62E4 + 88);
    if ( v12 == DemoScene_create || (char *)v12 == (char *)DarkCloudDemoScene_create )
      return v11;
  }
  else
  {
    v11 = 1;
    if ( !v8 || (v9 ^ 1) != 1 )
      return v11;
  }
  v13 = dword_60CCF448;
  if ( *(_DWORD *)(dword_60CCF448 + 212) )
  {
    v60 = v1;
    v14 = *(int **)(dword_60CCF448 + 220);
    while ( 1 )
    {
      v15 = *v14;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615174492 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v16 = (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C8C220);
      if ( v15 )
      {
        if ( v16 == 1 )
          break;
      }
      if ( ++v14 == (int *)(*(_DWORD *)(v13 + 220) + 4 * *(_DWORD *)(v13 + 212)) )
      {
        v15 = 0;
        break;
      }
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = dword_60CCF448;
    v61 = 0;
    if ( *(_DWORD *)(dword_60CCF448 + 212) )
    {
      v22 = *(int **)(dword_60CCF448 + 220);
      v23 = 1;
      do
      {
        v18 = *v22;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615174724 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v24 = (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C8C220);
        if ( v18 && v24 == 1 )
        {
          if ( !v23 )
            goto LABEL_45;
          --v23;
        }
        ++v22;
      }
      while ( v22 != (int *)(*(_DWORD *)(v21 + 220) + 4 * *(_DWORD *)(v21 + 212)) );
      v18 = 0;
LABEL_45:
      v25 = dword_60CCF448;
      if ( *(_DWORD *)(dword_60CCF448 + 212) )
      {
        v26 = *(int **)(dword_60CCF448 + 220);
        v27 = 2;
        do
        {
          v19 = *v26;
          if ( ((unsigned int)&dword_60C8C224 & ~(1615174952 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
          {
            dword_60C8C220 = (int)&off_60BD84A8;
            _cxa_guard_release(&dword_60C8C224);
          }
          v28 = (**(int (__fastcall ***)(int, int *))v19)(v19, &dword_60C8C220);
          if ( v19 && v28 == 1 )
          {
            if ( !v27 )
              goto LABEL_56;
            --v27;
          }
          ++v26;
        }
        while ( v26 != (int *)(*(_DWORD *)(v25 + 220) + 4 * *(_DWORD *)(v25 + 212)) );
        v19 = 0;
LABEL_56:
        v29 = dword_60CCF448;
        if ( *(_DWORD *)(dword_60CCF448 + 212) )
        {
          v30 = *(int **)(dword_60CCF448 + 220);
          v31 = 3;
          do
          {
            v17 = *v30;
            if ( ((unsigned int)&dword_60C8C224 & ~(1615175188 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
            {
              dword_60C8C220 = (int)&off_60BD84A8;
              _cxa_guard_release(&dword_60C8C224);
            }
            v32 = (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60C8C220);
            if ( v17 && v32 == 1 )
            {
              if ( !v31 )
                goto LABEL_67;
              --v31;
            }
            ++v30;
          }
          while ( v30 != (int *)(*(_DWORD *)(v29 + 220) + 4 * *(_DWORD *)(v29 + 212)) );
          v17 = 0;
LABEL_67:
          v33 = dword_60CCF448;
          if ( *(_DWORD *)(dword_60CCF448 + 212) )
          {
            v34 = *(int **)(dword_60CCF448 + 220);
            v35 = 4;
            do
            {
              v20 = *v34;
              if ( ((unsigned int)&dword_60C8C224 & ~(1615175428 << v10) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8C224) )
              {
                dword_60C8C220 = (int)&off_60BD84A8;
                _cxa_guard_release(&dword_60C8C224);
              }
              v36 = (**(int (__fastcall ***)(int, int *))v20)(v20, &dword_60C8C220);
              if ( v20 && v36 == 1 )
              {
                if ( !v35 )
                  goto LABEL_82;
                --v35;
              }
              ++v34;
            }
            while ( v34 != (int *)(*(_DWORD *)(v33 + 220) + 4 * *(_DWORD *)(v33 + 212)) );
          }
        }
        else
        {
          v17 = 0;
        }
      }
      else
      {
        v17 = 0;
        v19 = 0;
      }
      v20 = 0;
    }
LABEL_82:
    if ( v15 )
      v61 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15);
    v40 = 0;
    v38 = 0;
    if ( v18 )
      v38 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18);
    if ( v19 )
      v40 = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 20))(v19);
    v41 = 0;
    v37 = 0;
    if ( v17 )
      v37 = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 20))(v17);
    if ( v20 )
      v41 = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20);
    v1 = v60;
    v39 = v61;
  }
  else
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
  }
  v42 = *(_DWORD *)(v1 + 24);
  if ( v42 > 1 )
  {
    v45 = 3;
    *(_BYTE *)(v1 + 81) = 0;
    if ( v37 )
      v45 = 4;
    v46 = v39 & v38;
    if ( (v39 & v38) != 0 )
      v39 = 2;
    if ( !v40 )
      v45 = v39;
    v5 = v46 == 0;
    v47 = 30;
    if ( v5 )
      v45 = v39;
    if ( v45 < v42 )
    {
      v48 = *(_DWORD *)(v1 + 32);
      if ( !v48 )
        goto LABEL_124;
      v47 = v48 - 1;
    }
    *(_DWORD *)(v1 + 32) = v47;
    goto LABEL_136;
  }
  v43 = 0;
  if ( *(_BYTE *)(v1 + 85) )
  {
    *(_BYTE *)(v1 + 85) = 0;
    v43 = 1;
  }
  if ( *(_BYTE *)(v1 + 82) )
  {
    *(_BYTE *)(v1 + 82) = 0;
    if ( !(v39 | v41 ^ 1) )
      *(_BYTE *)(v1 + 81) = 1;
  }
  if ( *(_BYTE *)(v1 + 81) )
  {
    if ( v41 )
    {
LABEL_103:
      v44 = 420;
LABEL_104:
      *(_DWORD *)(v1 + 36) = v44;
      goto LABEL_123;
    }
    if ( v39 )
    {
      *(_BYTE *)(v1 + 81) = 0;
      goto LABEL_103;
    }
    v55 = *(_DWORD *)(v1 + 36);
    if ( v55 )
    {
      v44 = v55 - 1;
      goto LABEL_104;
    }
LABEL_148:
    *(_BYTE *)(v1 + 80) = v41;
LABEL_124:
    if ( *(_DWORD *)(dword_60CC62E4 + 84) == 2 )
    {
      v50 = *(int (**)())(dword_60CC62E4 + 88);
      v51 = CourseSelectTask_create;
      if ( (char *)v50 != (char *)CourseSelectTask_create )
      {
        v51 = (sead_IDisposer *(__fastcall *)(int))sub_600246FC;
        v52 = v50 == sub_600246FC;
        if ( v50 != sub_600246FC )
        {
          v51 = AreaTask_create;
          v52 = (char *)v50 == (char *)AreaTask_create;
        }
        if ( !v52 )
          goto LABEL_150;
        if ( dword_60C99DD4 )
        {
          v51 = (sead_IDisposer *(__fastcall *)(int))sub_603FB2C8(dword_60C99DD4, v51);
          v53 = 1;
          if ( !v51 )
            v53 = sub_6040E438(LevelInfo_instance);
          if ( v53 != 1 || *(_DWORD *)(dword_60C99DD4 + 764) == 3 )
            goto LABEL_150;
        }
LABEL_141:
        v11 = 1;
        if ( *(_DWORD *)(v1 + 76) )
          return v11;
        v54 = *(_DWORD *)(v1 + 72);
        if ( !v54 )
        {
          sub_600241CC(0, v51);
          v54 = *(_DWORD *)(v1 + 72);
        }
        if ( v54 <= 1 )
        {
          *(_DWORD *)(v1 + 72) = v54 + 1;
          return v11;
        }
        *(_DWORD *)(v1 + 72) = 0;
        goto LABEL_150;
      }
      if ( !dword_60C8C188 || !*(_BYTE *)(dword_60C8C188 + 3225) )
        goto LABEL_141;
    }
LABEL_150:
    v56 = *(_DWORD *)(v1 + 24);
    v64 = 0;
    v65 = 4;
    v66 = 1;
    v67 = 1;
    v68 = 1;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    if ( v56 <= 1 )
    {
      v69 = 1;
    }
    else
    {
      v64 = v56;
      v65 = v56;
    }
    v57 = nn__hid__ShowControllerSupport(v62, &v64);
    v58 = *(_DWORD *)(v1 + 24);
    if ( v58 <= 1 && v57 && *(_BYTE *)(v1 + 81) )
      *(_BYTE *)(v1 + 85) = 1;
    v11 = 0;
    *(_BYTE *)(v1 + 81) = 0;
    if ( v56 <= 1 && v63 == 32 )
      *(_BYTE *)(v1 + 81) = 1;
    *(_BYTE *)(v1 + 82) = 1;
    if ( !v57 || v58 <= 1 )
    {
      v11 = 1;
      *(_DWORD *)(v1 + 76) = 2;
      *(_DWORD *)(v1 + 28) = 30;
      *(_DWORD *)(v1 + 32) = 30;
      *(_DWORD *)(v1 + 36) = 420;
    }
    return v11;
  }
  if ( v39 )
  {
    *(_DWORD *)(v1 + 28) = 30;
  }
  else
  {
    v49 = *(_DWORD *)(v1 + 28);
    if ( !v49 )
      goto LABEL_148;
    *(_DWORD *)(v1 + 28) = v49 - 1;
    if ( *(unsigned __int8 *)(v1 + 80) != v41 && v41 == 1 )
      *(_BYTE *)(v1 + 81) = 1;
  }
LABEL_123:
  *(_BYTE *)(v1 + 80) = v41;
  if ( v43 )
    goto LABEL_124;
LABEL_136:
  v11 = 1;
  if ( *(_DWORD *)(v1 + 72) )
  {
    *(_DWORD *)(v1 + 72) = 0;
    *(_DWORD *)(v1 + 76) = 2;
  }
  return v11;
}
