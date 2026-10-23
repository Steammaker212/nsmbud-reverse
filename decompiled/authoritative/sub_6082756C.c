int *__fastcall sub_6082756C(int a1)
{
  int *result; // r0
  _DWORD *v3; // r4
  int v4; // r7
  int v5; // r8
  int v6; // r0
  nn::oe *v7; // r0
  int OperationMode; // r2
  int v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r2
  int v13; // r5
  int v14; // r0
  _DWORD *v15; // r6
  _DWORD *v16; // r0
  int v17; // r2
  int v18; // r2
  unsigned int v19; // r0
  int v20; // r7
  int v21; // r6
  int v22; // r5
  int v23; // r8
  int v24; // r9
  int v25; // r11
  int v26; // r2
  int v27; // r7
  int v28; // r6
  int v29; // r5
  int v30; // r8
  int v31; // r9
  int v32; // r11
  int v33; // r0
  int v34; // r2
  void *v35; // r6
  int v36; // r7
  int v37; // r0
  int v38; // [sp+8h] [bp-40h]
  int v39; // [sp+Ch] [bp-3Ch]
  int v40; // [sp+10h] [bp-38h]
  int v41; // [sp+14h] [bp-34h]
  int (**v42)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v43; // [sp+20h] [bp-28h]

  result = &dword_60CBEA44;
  v3 = (_DWORD *)dword_60CBEA44;
  if ( dword_60CBEA44 )
  {
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "end_course";
    sub_6074E918(dword_60CBEA44, &v42);
    v4 = dword_60C99DD4;
    v5 = dword_60C99DEC;
    v6 = *(_DWORD *)(a1 + 40);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "AppBootCnt";
    v7 = (nn::oe *)sub_6074EC10(v3, &v42, *(_DWORD *)(v6 + 44124));
    OperationMode = nn__oe__GetOperationMode(v7);
    v42 = &vtable_sead_SafeStringBase_char;
    if ( OperationMode != 1 )
      OperationMode = 0;
    v43 = "TVConnected";
    sub_6074EC10(v3, &v42, OperationMode);
    v9 = *(_DWORD *)(a1 + 40);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "KeyMapType";
    sub_6074EC10(v3, &v42, *(unsigned __int8 *)(v9 + 9));
    v10 = v4 + 272;
    if ( !v4 )
      v10 = v5 + 16;
    v11 = *(_DWORD *)(v10 + 492);
    v12 = 2;
    switch ( v11 )
    {
      case 0:
        v12 = *(unsigned __int8 *)(dword_60CC6D8C + 17);
        break;
      case 1:
        break;
      case 2:
        v12 = 4;
        break;
      case 4:
        v12 = 3;
        break;
      default:
        v12 = 0;
        if ( v11 == 3 )
          v12 = 5;
        break;
    }
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "GameModeType";
    sub_6074EC10(v3, &v42, v12);
    v13 = LevelInfo_instance;
    if ( LevelInfo_instance )
    {
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "WorldNo";
      sub_6074EC10(v3, &v42, *(unsigned __int8 *)(LevelInfo_instance + 16) + 1);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "CourseNo";
      sub_6074EC10(v3, &v42, *(unsigned __int8 *)(v13 + 17) + 1);
    }
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "PlayerNum";
    v14 = sub_603FD0B4(v10);
    sub_6074EC10(v3, &v42, v14);
    v15 = (_DWORD *)dword_60C9CFB8;
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "StyleNumFullKeyStick";
    if ( dword_60C9CFB8 )
    {
      sub_6074EC10(v3, &v42, *(_DWORD *)(dword_60C9CFB8 + 40));
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumFullKeyCross";
      sub_6074EC10(v3, &v42, v15[11]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumHandheldStick";
      sub_6074EC10(v3, &v42, v15[12]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumHandheldCross";
      sub_6074EC10(v3, &v42, v15[13]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumDualStick";
      sub_6074EC10(v3, &v42, v15[14]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumDualCross";
      sub_6074EC10(v3, &v42, v15[15]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumLeft";
      sub_6074EC10(v3, &v42, v15[16]);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumRight";
      v16 = v3;
      v17 = v15[17];
    }
    else
    {
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumFullKeyCross";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumHandheldStick";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumHandheldCross";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumDualStick";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumDualCross";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v43 = "StyleNumLeft";
      sub_6074EC10(v3, &v42, 0);
      v42 = &vtable_sead_SafeStringBase_char;
      v17 = 0;
      v43 = "StyleNumRight";
      v16 = v3;
    }
    sub_6074EC10(v16, &v42, v17);
    v18 = 0;
    if ( *(_BYTE *)(v10 + 20) )
    {
      v19 = *(_DWORD *)(v10 + 32);
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if ( v19 <= 6 )
      {
        v25 = arr_dword_60B0DEC0[v19];
        v24 = arr_dword_60B0DEA0[v19];
        v23 = arr_dword_60B0DE80[v19];
        v22 = arr_dword_60B0DE60[v19];
        v21 = arr_dword_60B0DE40[v19];
        v20 = arr_dword_60B0DE20[v19];
        v18 = arr_dword_60B0DE00[v19];
      }
    }
    else
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
    }
    if ( *(_BYTE *)(v10 + 92) )
    {
      switch ( *(_DWORD *)(v10 + 104) )
      {
        case 0:
          ++v18;
          break;
        case 1:
          ++v20;
          break;
        case 2:
          ++v21;
          break;
        case 3:
          ++v25;
          break;
        case 4:
          ++v22;
          break;
        case 5:
          ++v23;
          break;
        case 6:
          ++v24;
          break;
        default:
          break;
      }
    }
    if ( *(_BYTE *)(v10 + 164) )
    {
      switch ( *(_DWORD *)(v10 + 176) )
      {
        case 0:
          ++v18;
          break;
        case 1:
          ++v20;
          break;
        case 2:
          ++v21;
          break;
        case 3:
          ++v25;
          break;
        case 4:
          ++v22;
          break;
        case 5:
          ++v23;
          break;
        case 6:
          ++v24;
          break;
        default:
          break;
      }
    }
    if ( *(_BYTE *)(v10 + 236) )
    {
      switch ( *(_DWORD *)(v10 + 248) )
      {
        case 0:
          ++v18;
          break;
        case 1:
          ++v20;
          break;
        case 2:
          ++v21;
          break;
        case 3:
          ++v25;
          break;
        case 4:
          ++v22;
          break;
        case 5:
          ++v23;
          break;
        case 6:
          ++v24;
          break;
        default:
          break;
      }
    }
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumMario";
    sub_6074EC10(v3, &v42, v18);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumLuigi";
    sub_6074EC10(v3, &v42, v20);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumKinopioYellow";
    sub_6074EC10(v3, &v42, v21);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumKinopico";
    sub_6074EC10(v3, &v42, v22);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumTotten";
    sub_6074EC10(v3, &v42, v23);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumMii";
    sub_6074EC10(v3, &v42, v24);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "CharaNumKinopioBlue";
    sub_6074EC10(v3, &v42, v25);
    v26 = *(unsigned __int8 *)(dword_60C9CFB8 + 84);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "ValidSkySpinByJump";
    sub_6074EC10(v3, &v42, v26);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "SkySpinCountByShake";
    sub_6074EC10(v3, &v42, v3[5]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "SkySpinCountByR";
    sub_6074EC10(v3, &v42, v3[6]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "SkySpinCountByJump";
    sub_6074EC10(v3, &v42, v3[7]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "MusaRiseCountByShake";
    sub_6074EC10(v3, &v42, v3[8]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "MusaRiseCountByR";
    sub_6074EC10(v3, &v42, v3[9]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "BubbleRiseCountByShake";
    sub_6074EC10(v3, &v42, v3[10]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "BubbleRiseCountByR";
    sub_6074EC10(v3, &v42, v3[11]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "BubbleRiseCountByJump";
    sub_6074EC10(v3, &v42, v3[12]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "WaterSpinCountByShake";
    sub_6074EC10(v3, &v42, v3[13]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "WaterSpinCountByR";
    sub_6074EC10(v3, &v42, v3[14]);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "WaterSpinCountByJump";
    sub_6074EC10(v3, &v42, v3[15]);
    v27 = dword_60C99DC8;
    v28 = *(unsigned __int8 *)(sub_603F7EFC(dword_60C99DC8, 0) + 2);
    v41 = *(unsigned __int8 *)(sub_603F7EFC(v27, 1) + 2);
    v40 = *(unsigned __int8 *)(sub_603F7EFC(v27, 2) + 2);
    v39 = *(unsigned __int8 *)(sub_603F7EFC(v27, 3) + 2);
    v38 = *(unsigned __int8 *)(sub_603F7EFC(v27, 4) + 2);
    v29 = *(unsigned __int8 *)(sub_603F7EFC(v27, 5) + 2);
    v30 = *(unsigned __int8 *)(sub_603F7EFC(v27, 6) + 2);
    v31 = *(unsigned __int8 *)(sub_603F7EFC(v27, 7) + 2);
    v32 = *(unsigned __int8 *)(sub_603F7EFC(v27, 8) + 2);
    v33 = *(unsigned __int8 *)(sub_603F7EFC(v27, 9) + 2);
    v42 = &vtable_sead_SafeStringBase_char;
    if ( v28 != 1 )
      v28 = 0;
    v43 = "EditCourseNum";
    if ( v41 == 1 )
      ++v28;
    if ( v40 == 1 )
      ++v28;
    if ( v39 == 1 )
      ++v28;
    if ( v38 == 1 )
      ++v28;
    if ( v29 == 1 )
      ++v28;
    if ( v30 == 1 )
      ++v28;
    if ( v31 == 1 )
      ++v28;
    if ( v32 == 1 )
      ++v28;
    if ( v33 == 1 )
      ++v28;
    sub_6074EC10(v3, &v42, v28);
    if ( sub_603FD0B4(v10) == 3 )
    {
      v34 = *(unsigned __int8 *)(v10 + 506);
    }
    else
    {
      if ( sub_603FD0B4(v10) == 4 )
      {
        v35 = v3 + 5;
        v34 = 0;
        v36 = 0;
        if ( *(_BYTE *)(v10 + 506) )
        {
          v34 = 0;
          v37 = *(_DWORD *)(v10 + 40) == 0;
          if ( !*(_DWORD *)(v10 + 112) )
            ++v37;
          if ( !*(_DWORD *)(v10 + 184) )
            ++v37;
          v36 = 1;
          if ( !*(_DWORD *)(v10 + 256) )
            ++v37;
          if ( (v37 | 2) == 3 )
            v36 = 2;
        }
        goto LABEL_84;
      }
      v34 = 0;
    }
    v35 = v3 + 5;
    v36 = 0;
LABEL_84:
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "Team3";
    sub_6074EC10(v3, &v42, v34);
    v42 = &vtable_sead_SafeStringBase_char;
    v43 = "Team4";
    sub_6074EC10(v3, &v42, v36);
    sub_6074EC70((int)v3);
    return (int *)memset(v35, 0, 44);
  }
  return result;
}
