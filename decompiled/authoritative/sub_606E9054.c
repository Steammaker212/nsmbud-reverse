int __fastcall sub_606E9054(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r2
  _BOOL4 v7; // r3
  bool v8; // zf
  int v9; // r11
  int v10; // r5
  float v11; // s16
  float v12; // s18
  int v13; // r0
  int v14; // r9
  int v15; // r8
  float v16; // r1
  int v17; // r2
  float v18; // s16
  float v19; // s18
  int v20; // r0
  _BYTE *v21; // r10
  float v22; // r1
  float v23; // r2
  int v24; // r7
  int v25; // r0
  _BYTE *v26; // r5
  char v27; // r12
  float *v28; // r5
  float v29; // s0
  int v30; // r7
  int v31; // r1
  float v32; // s0
  _BOOL4 v33; // r0
  int settings1; // s0
  int v35; // s2
  int v36; // r0
  int v37; // r0
  int *v38; // r1
  bool v39; // zf
  int v40; // r0
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // s2
  float v45; // r2
  float v46; // s0
  int v47; // r0
  int *v48; // r1
  bool v49; // zf
  int v50; // r0
  int v51; // r1
  int v52; // r6
  int v53; // r0
  float v54; // s4
  float v55; // s0
  int v56; // r0
  float v57; // s0
  float v58; // s0
  int v59; // r5
  const char *v60; // r1
  int v61; // r5
  float v62; // [sp+8h] [bp-C0h] BYREF
  float v63; // [sp+Ch] [bp-BCh]
  float v64; // [sp+10h] [bp-B8h] BYREF
  float v65; // [sp+14h] [bp-B4h]
  int v66; // [sp+18h] [bp-B0h]
  float v67; // [sp+20h] [bp-A8h] BYREF
  float v68; // [sp+24h] [bp-A4h]
  float v69[2]; // [sp+28h] [bp-A0h] BYREF
  ActorBuildInfo v70[3]; // [sp+30h] [bp-98h] BYREF

  v2 = *(_DWORD *)(a1 + 144);
  if ( v2 )
  {
    result = v2 - 1;
    *(_DWORD *)(a1 + 144) = result;
  }
  else
  {
    result = 0;
  }
  v4 = *(_DWORD *)(a1 + 2704);
  if ( v4 )
    *(_DWORD *)(a1 + 2704) = v4 - 1;
  v5 = dword_60C9CF0C;
  if ( *(char *)(dword_60C9CF0C + 1404) >= 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 167);
    if ( *(_BYTE *)(dword_60C9CF0C + 1406) )
    {
      if ( !*(_BYTE *)(a1 + 167) )
        goto LABEL_11;
      return result;
    }
    v7 = v6 == 0;
    v8 = result == 0;
    if ( !result )
      v8 = v7;
    if ( v8 )
    {
      result = *(unsigned __int8 *)(dword_60C9CF0C + 1364);
      if ( (result & 2) != 0 )
        return result;
      *(_BYTE *)(a1 + 167) = 1;
    }
    if ( *(_BYTE *)(a1 + 156) )
    {
      sub_606EAE84(a1, v5, v6, v7);
      *(_BYTE *)(a1 + 156) = 0;
    }
    v9 = 0;
    v10 = dword_60CC6484;
    v11 = *(float *)(dword_60CC6484 + 104);
    v12 = *(float *)(dword_60CC6484 + 108);
    *(_BYTE *)(a1 + 2714) = 0;
    if ( sub_6045AF54(dword_60C9CFB8, 0, 1, 1) == 1 )
    {
      *(_BYTE *)(a1 + 2714) = 1;
      v9 = 1;
    }
    if ( (*(_DWORD *)(AreaTask_intance + 1868) & 0xFFFFFFFC) == 4 || *(_WORD *)(AreaTask_intance + 1873) )
    {
      v13 = 4;
      v14 = 0;
      v15 = 1;
    }
    else
    {
      ((void (__fastcall *)(int))loc_606EB040)(a1);
      if ( (*(_BYTE *)(dword_60C9CF0C + 1364) & 2) == 0 )
      {
        v15 = 0;
        v14 = 0;
        *(_DWORD *)(a1 + 2700) = 0;
LABEL_26:
        v16 = *(float *)(a1 + 2676);
        v17 = *(_DWORD *)(a1 + 2680);
        v64 = *(float *)(a1 + 2672);
        v65 = v16;
        v66 = v17;
        if ( !v10 || !sub_607FCA74(v10) )
          v65 = v65 + 4.0;
        sub_60833074(&v64);
        LODWORD(v69[0]) = (int)v64;
        LODWORD(v69[1]) = -(int)v65;
        sub_60455008(dword_60C9CF0C, (int)v64, COERCE_FLOAT((int)v64));
        sub_606EB468(a1);
        sub_603F4BF4(AreaTask_intance, &v62, v69);
        v18 = (float)((float)(int)(float)(v62 * 0.0625) * 16.0) + 8.0;
        v19 = -8.0 - (float)((float)(int)(float)(v63 * -0.0625) * 16.0);
        sub_60455014(dword_60C9CF0C, 0, v18, v19, 8000.0);
        v62 = v18;
        v63 = v19;
        if ( *(float *)(a1 + 40) == v18
          && *(float *)(a1 + 44) == v19
          && (v21 = (_BYTE *)(a1 + 148), v20 = *(unsigned __int8 *)(a1 + 148), v20 == *(unsigned __int8 *)(a1 + 149)) )
        {
          v22 = v19;
          v23 = v18;
        }
        else
        {
          v21 = (_BYTE *)(a1 + 148);
          v24 = *(unsigned __int8 *)(a1 + 148);
          *(_BYTE *)(a1 + 149) = v24;
          memset(&v70[0].settings2, 0, 36);
          v25 = 196612;
          if ( v24 )
            v25 = 196613;
          v70[0].settings1 = v25;
          v70[0].profile = Profile__get(0xAu);
          v70[0].position.x = v18;
          v70[0].position.y = v19;
          v70[0].position.z = 0.0;
          v70[0].field_20 = 0;
          v70[0].eventId1 = 0;
          v70[0].eventId2 = 0;
          v70[0].field_28 = 0;
          v26 = ActorMgr__create((void *)ActorMgr::instance, v70, 0);
          if ( ((unsigned int)&dword_60C7B364 & ~(1617859460 << v27) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          if ( v26 )
            (**(void (__fastcall ***)(_BYTE *, int *))v26)(v26, &StageActor_RTTI);
          v23 = v62;
          *(float *)(a1 + 40) = v62;
          v22 = v63;
          *(float *)(a1 + 44) = v63;
          v20 = *(unsigned __int8 *)(a1 + 148);
        }
        *(float *)(a1 + 32) = v23;
        v28 = (float *)(a1 + 32);
        *(float *)(a1 + 36) = v22;
        if ( !v20 )
          goto LABEL_44;
        if ( ((int (__fastcall *)(int, float *, int, int, _DWORD))loc_606EA8E8)(a1, &v62, 1, 1, 0) != 1 )
          goto LABEL_50;
        if ( !*v21 )
        {
LABEL_44:
          if ( ((int (__fastcall *)(int, float *, _DWORD, _DWORD, int))loc_606EA8E8)(a1, &v62, 0, 0, 1) != 1 )
            goto LABEL_50;
        }
        v29 = 1.0;
        if ( (float)(*(float *)(dword_60CC6484 + 40) + 1.0) > *v28 )
          goto LABEL_49;
        if ( *v28 > (float)(*(float *)(dword_60CC6484 + 48) + -1.0) )
          goto LABEL_49;
        v29 = *(float *)(dword_60CC6484 + 44) + 1.0;
        if ( v29 > *(float *)(a1 + 36) )
          goto LABEL_49;
        v42 = ((int (__fastcall *)(int, int))loc_606EA7A4)(a1, a1 + 32);
        if ( v42 != 1 )
          goto LABEL_50;
        v29 = *(float *)(EnemyCounterMaybe_instance + 16);
        if ( v29 > 0.0 && (v29 = v29 + -16.0, v29 < v62) )
        {
LABEL_49:
          *(_BYTE *)(a1 + 157) = 1;
        }
        else if ( *(_BYTE *)(a1 + 154) )
        {
          v30 = 1;
          v31 = 1;
          goto LABEL_51;
        }
LABEL_50:
        v30 = 0;
        v31 = 0;
LABEL_51:
        result = sub_6045516C(dword_60C9CF0C, v31, v29);
        if ( v15 )
          return result;
        if ( (v9 | v14) != 1 )
        {
          if ( *(_BYTE *)(a1 + 2712) )
          {
            if ( (*(_BYTE *)(dword_60C9CF0C + 1364) & 4) == 0 )
              goto LABEL_114;
          }
          else if ( *(_BYTE *)(a1 + 2714) )
          {
            goto LABEL_114;
          }
          *(_DWORD *)(a1 + 144) = 5;
          *(_BYTE *)(a1 + 151) = 0;
          *(_BYTE *)(a1 + 153) = 0;
          *(_BYTE *)(a1 + 158) = 0;
          *(_BYTE *)(a1 + 157) = 0;
          *(_DWORD *)(a1 + 112) = 0;
          *(_BYTE *)(a1 + 150) = *(_BYTE *)(a1 + 148);
          goto LABEL_114;
        }
        v33 = *(_BYTE *)(a1 + 151) == 0;
        if ( (v14 & v33) != 0 || v33 )
        {
          *(_BYTE *)(a1 + 151) = 1;
          *(_BYTE *)(a1 + 2712) = v14;
          sub_603F4BF4(AreaTask_intance, v70, v69);
          settings1 = v70[0].settings1;
          *(_DWORD *)(a1 + 32) = v70[0].settings1;
          v35 = (int)(float)(*(float *)&v70[0].settings2 * -0.0625);
          *(_DWORD *)(a1 + 36) = v70[0].settings2;
          *(float *)(a1 + 24) = (float)((float)(int)(float)(*(float *)&settings1 * 0.0625) * 16.0) + 8.0;
          *(float *)(a1 + 28) = -8.0 - (float)((float)v35 * 16.0);
          if ( !((int (__fastcall *)(int, int, _DWORD, _DWORD, _DWORD))loc_606EA8E8)(a1, a1 + 24, 0, 0, 0) )
          {
            *(_DWORD *)(a1 + 116) = 1;
            goto LABEL_84;
          }
          v36 = 2;
          *(_BYTE *)(a1 + 153) = 0;
          *(_BYTE *)(a1 + 158) = 0;
          *(_BYTE *)(a1 + 157) = 0;
          *(_DWORD *)(a1 + 112) = 0;
          if ( *(_BYTE *)(a1 + 148) )
            v36 = 3;
          sub_606EA09C(v36, a1 + 24);
          v37 = *(unsigned __int8 *)(a1 + 148);
          v38 = (int *)(a1 + 104);
          v39 = v37 == 0;
          *(_BYTE *)(a1 + 150) = v37;
          *(_DWORD *)(a1 + 116) = 0;
          if ( !v37 )
            v38 = (int *)(a1 + 100);
          v40 = *v38;
          v41 = 3;
          if ( v39 )
            v41 = 300;
          if ( v40 >= v41 )
          {
            v32 = 1.0;
            if ( (float)(*(float *)(dword_60CC6484 + 40) + 1.0) > *v28 )
              goto LABEL_67;
            if ( *v28 > (float)(*(float *)(dword_60CC6484 + 48) + -1.0) )
              goto LABEL_67;
            v32 = *(float *)(dword_60CC6484 + 44) + 1.0;
            if ( v32 > *(float *)(a1 + 36) )
              goto LABEL_67;
            v56 = ((int (__fastcall *)(int, int))loc_606EA7A4)(a1, a1 + 32);
            if ( v56 == 1 )
            {
              v57 = *(float *)(EnemyCounterMaybe_instance + 16);
              if ( v57 <= 0.0 || (v32 = v57 + -16.0, v32 >= *(float *)&v70[0].settings1) )
              {
                sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_EMPTY", 0, 1);
                sub_603F5030(AreaTask_intance);
                *(_BYTE *)(a1 + 158) = 1;
                goto LABEL_84;
              }
LABEL_67:
              *(_BYTE *)(a1 + 157) = 1;
            }
          }
        }
LABEL_84:
        if ( *(_DWORD *)(a1 + 116) )
        {
          v45 = *(float *)(dword_60C9CF0C + 1416);
          v63 = *(float *)(dword_60C9CF0C + 1420);
          v62 = v45;
          sub_603F4BF4(AreaTask_intance, v70, &v62);
          if ( ((int (__fastcall *)(int, ActorBuildInfo *))loc_606EA7A4)(a1, v70) == 1
            && (!*v21 || ((int (__fastcall *)(int, int, _DWORD, int, _DWORD))loc_606EA8E8)(a1, a1 + 24, 0, 1, 0) == 1) )
          {
            ((void (__fastcall *)(int, ActorBuildInfo *))loc_606EA364)(a1, v70);
            goto LABEL_114;
          }
          if ( sub_6045ADE4(dword_60C9CFB8, 0, 1, 1, v46) != 1 )
            goto LABEL_114;
          sub_604551A8(dword_60C9CF0C);
LABEL_91:
          sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_INVALID", 0, 1);
          goto LABEL_114;
        }
        if ( *(_BYTE *)(a1 + 153) && (v47 = *(unsigned __int8 *)(a1 + 150), v47 == *(unsigned __int8 *)(a1 + 148)) )
        {
          v48 = (int *)(a1 + 104);
          v49 = v47 == 0;
          if ( !*(_BYTE *)(a1 + 150) )
            v48 = (int *)(a1 + 100);
          v50 = *v48;
          v51 = 3;
          if ( v49 )
            v51 = 300;
          if ( v50 >= v51 )
          {
            sub_603F5030(AreaTask_intance);
            goto LABEL_111;
          }
          if ( *(_DWORD *)(a1 + 112) == 1 )
          {
            if ( v30 != 1 )
              goto LABEL_106;
            v52 = *(int *)(a1 + 24);
            v70[0].settings2 = *(_DWORD *)(a1 + 28);
            v70[0].settings1 = v52;
            if ( ((int (__fastcall *)(int, ActorBuildInfo *, int, _DWORD, float, _DWORD))loc_606EA8E8)(
                   a1,
                   v70,
                   1,
                   0,
                   v32,
                   0) != 1 )
              goto LABEL_106;
            if ( (float)(*(float *)(dword_60CC6484 + 40) + 1.0) > *v28
              || *v28 > (float)(*(float *)(dword_60CC6484 + 48) + -1.0)
              || (float)(*(float *)(dword_60CC6484 + 44) + 1.0) > *(float *)(a1 + 36) )
            {
              goto LABEL_105;
            }
            if ( ((int (__fastcall *)(int, int))loc_606EA7A4)(a1, a1 + 32) != 1 )
              goto LABEL_106;
            v58 = *(float *)(EnemyCounterMaybe_instance + 16);
            if ( v58 > 0.0 && (float)(v58 + -16.0) < *(float *)&v52 )
            {
LABEL_105:
              *(_BYTE *)(a1 + 157) = 1;
LABEL_106:
              *(_BYTE *)(a1 + 153) = 0;
              *(_DWORD *)(a1 + 112) = 0;
              goto LABEL_111;
            }
            v59 = sub_606E9F24(a1, &v70[0].settings1, *(unsigned __int8 *)(a1 + 148), 1);
            if ( !v59 )
            {
              v61 = 0;
LABEL_145:
              sub_606EA1E4(a1, v70, v61);
              goto LABEL_106;
            }
            if ( *v21 )
            {
              ++*(_DWORD *)(a1 + 104);
              if ( !*(_DWORD *)(a1 + 2704) )
              {
                *(_DWORD *)(a1 + 2704) = 4;
                v60 = "SE_SYS_CE_PUT_STARCOIN";
LABEL_143:
                sub_60807EF0(SoundSystem_instance, v60, 0, 1);
              }
            }
            else
            {
              ++*(_DWORD *)(a1 + 100);
              if ( !*(_DWORD *)(a1 + 2704) )
              {
                *(_DWORD *)(a1 + 2704) = 4;
                v60 = "SE_SYS_CE_PUT_COIN";
                goto LABEL_143;
              }
            }
            v61 = *(_DWORD *)(v59 + 8);
            sub_604551A8(dword_60C9CF0C);
            goto LABEL_145;
          }
        }
        else if ( !v30 && sub_6045ADE4(dword_60C9CFB8, 0, 1, 1, v32) == 1 )
        {
          sub_604551A8(dword_60C9CF0C);
          sub_60807EF0(SoundSystem_instance, "SE_SYS_CE_INVALID", 0, 1);
        }
LABEL_111:
        if ( *(_BYTE *)(a1 + 157) )
        {
          if ( !*(_BYTE *)(a1 + 158) )
          {
            *(_BYTE *)(a1 + 158) = 1;
            sub_603F4BF4(AreaTask_intance, v70, dword_60C9CF0C + 1368);
            if ( ((int (__fastcall *)(int, ActorBuildInfo *))loc_606EA7A4)(a1, v70) == 1 )
              goto LABEL_91;
          }
        }
LABEL_114:
        v53 = *(_DWORD *)(a1 + 2540);
        v54 = *(float *)(dword_60CC6484 + 116) + (float)(*(float *)(dword_60CC6484 + 104) * 0.5);
        if ( ((v53 & 0x80) != 0 && *(float *)(a1 + 2672) >= v54
           || (v53 & 0x40) != 0 && *(float *)(a1 + 2672) <= v54
           || (v55 = *(float *)(dword_60CC6484 + 128) - (float)(*(float *)(dword_60CC6484 + 108) * 0.5),
               (v53 & 0x10) != 0)
           && *(float *)(a1 + 2676) >= v55
           || (v53 & 0x20) != 0 && *(float *)(a1 + 2676) <= v55)
          && !*(_BYTE *)(a1 + 151) )
        {
          result = *(_DWORD *)(a1 + 2696);
          if ( !result || *(_DWORD *)(a1 + 2684) )
            return result;
          --result;
        }
        else
        {
          result = 75;
        }
        *(_DWORD *)(a1 + 2696) = result;
        return result;
      }
      v43 = *(_DWORD *)(a1 + 2700);
      v15 = 0;
      v14 = 0;
      if ( v43 >= 3 )
      {
        sub_603F4BF4(AreaTask_intance, &v67, dword_60C9CF0C + 1368);
        v67 = (float)((float)(int)(float)(v67 * 0.0625) * 16.0) + 8.0;
        v44 = (int)(float)((float)((float)((float)((float)(int)(float)(v68 * 0.0625) * 16.0) + -8.0) - (float)(v12 * 0.5))
                         * -0.0625);
        v68 = (float)((float)(int)(float)(v68 * 0.0625) * 16.0) + -8.0;
        *(float *)(a1 + 2672) = (float)((float)(int)(float)((float)((float)(v11 * 0.5) + v67) * 0.0625) * 16.0) + 8.0;
        *(float *)(a1 + 2676) = -8.0 - (float)((float)v44 * 16.0);
        sub_606EB2D4(a1);
        v14 = 1;
        *(_BYTE *)(AreaTask_intance + 1872) = 1;
        v43 = *(_DWORD *)(a1 + 2700);
        if ( v43 > 3 )
          goto LABEL_26;
      }
      v13 = v43 + 1;
    }
    *(_DWORD *)(a1 + 2700) = v13;
    goto LABEL_26;
  }
  result = *(unsigned __int8 *)(a1 + 167);
  if ( !*(_BYTE *)(a1 + 167) )
  {
LABEL_11:
    *(_DWORD *)(a1 + 144) = 2;
    return 2;
  }
  return result;
}
