void __fastcall sub_607523E4(int a1, int a2)
{
  _BYTE **v4; // r6
  char *v5; // r5
  signed int i; // r6
  int v7; // r0
  char *v8; // r9
  signed int k; // r7
  char *v10; // r9
  signed int v11; // r7
  char *v12; // r5
  char *v13; // r9
  _BYTE *v14; // r0
  signed int j; // r6
  _BYTE *v16; // r0
  _BYTE *v17; // r0
  char *v18; // r9
  _BYTE *v19; // r0
  const char *v20; // r1
  const char *v21; // r1
  char *v22; // r5
  signed int m; // r6
  int v24; // r0
  unsigned int v25; // r1
  _DWORD *v26; // r0
  bool v27; // cc
  int v28; // r1
  const char *v29; // r1
  int v30; // r0
  unsigned int v31; // r1
  int v32; // r5
  int (**v33)(); // [sp+4h] [bp-4Ch] BYREF
  char *v34; // [sp+8h] [bp-48h]
  int v35; // [sp+Ch] [bp-44h]
  char v36; // [sp+10h] [bp-40h] BYREF

  v34 = &v36;
  v33 = &BufferedSafeStringBase_char_vtable_probably;
  v35 = 32;
  sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v33);
  if ( *(_DWORD *)(a1 + 300) == 5 )
  {
    if ( !*(_DWORD *)(a1 + 24) )
      return;
    v4 = (_BYTE **)sub_6078F298(a1, a2);
    if ( !*v4[1] )
      return;
    switch ( a2 )
    {
      case 2:
        v5 = v34;
        if ( *(_BYTE *)(a1 + 905) )
        {
          if ( v34 == "PEH_Rgoal_puton_cap" )
            goto LABEL_323;
          for ( i = 0; ; i += 2 )
          {
            if ( !aPehRgoalPutonC[i] )
              goto LABEL_306;
            if ( i > 0x7FFFF )
              break;
            if ( !aPehRgoalPutonC[i + 1] )
            {
              ++i;
LABEL_306:
              if ( i >= v35 )
                i = v35 - 1;
              v29 = "PEH_Rgoal_puton_cap";
              goto LABEL_322;
            }
          }
          i = 0;
          goto LABEL_306;
        }
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v18 = v4[1];
        if ( v5 == v18 )
          goto LABEL_323;
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v19 = v4[1];
        i = 0;
        while ( 2 )
        {
          if ( v19[i] )
          {
            if ( v19[i + 1] )
            {
              if ( v19[i + 2] )
              {
                v27 = i + 2 <= 0x7FFFF;
                i += 3;
                if ( !v27 )
                {
                  i = 0;
                  break;
                }
                continue;
              }
              i += 2;
            }
            else
            {
              ++i;
            }
          }
          break;
        }
        v29 = v18;
        if ( i >= v35 )
          i = v35 - 1;
LABEL_322:
        qmemcpy(v5, v29, i);
        v5[i] = 0;
LABEL_323:
        *(_BYTE *)(a1 + 905) = 0;
        goto LABEL_324;
      case 39:
        v12 = v34;
        if ( v34 == "PEH_dm_lookaround" )
          goto LABEL_324;
        for ( j = 0; ; j += 2 )
        {
          if ( !aPehDmLookaroun[j] )
            goto LABEL_298;
          if ( j > 0x7FFFF )
            break;
          if ( !aPehDmLookaroun[j + 1] )
          {
            ++j;
LABEL_298:
            if ( j >= v35 )
              j = v35 - 1;
            v20 = "PEH_dm_lookaround";
            goto LABEL_317;
          }
        }
        j = 0;
        goto LABEL_298;
      case 40:
        v12 = v34;
        if ( v34 == "PH_dm_notice2" )
          goto LABEL_324;
        j = 0;
        while ( 2 )
        {
          if ( aPhDmNotice2[j] )
          {
            if ( j > 0x7FFFF )
            {
              j = 0;
            }
            else
            {
              if ( aPhDmNotice2[j + 1] )
              {
                j += 2;
                continue;
              }
              ++j;
            }
          }
          break;
        }
        if ( j >= v35 )
          j = v35 - 1;
        v20 = "PH_dm_notice2";
        goto LABEL_317;
      case 43:
        v12 = v34;
        if ( *(_DWORD *)(a1 + 212) == 1 )
        {
          if ( v34 == "PEH_2jump1" )
            goto LABEL_324;
          for ( j = 0; ; j += 2 )
          {
            if ( !aPeh2jump1[j] )
              goto LABEL_310;
            if ( j > 0x7FFFF )
              break;
            if ( !aPeh2jump1[j + 1] )
            {
              ++j;
LABEL_310:
              if ( j >= v35 )
                j = v35 - 1;
              v20 = "PEH_2jump1";
              goto LABEL_317;
            }
          }
          j = 0;
          goto LABEL_310;
        }
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v13 = v4[1];
        if ( v12 == v13 )
          goto LABEL_324;
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v16 = v4[1];
        j = 0;
        while ( 1 )
        {
          if ( !v16[j] )
            goto LABEL_200;
          if ( !v16[j + 1] )
            goto LABEL_198;
          if ( !v16[j + 2] )
            goto LABEL_199;
          v27 = j + 2 <= 0x7FFFF;
          j += 3;
          if ( !v27 )
          {
            j = 0;
            goto LABEL_200;
          }
        }
      case 44:
        v12 = v34;
        if ( *(_DWORD *)(a1 + 212) == 1 )
        {
          if ( v34 == "PEH_2jump2" )
            goto LABEL_324;
          for ( j = 0; ; j += 2 )
          {
            if ( !aPeh2jump2[j] )
              goto LABEL_314;
            if ( j > 0x7FFFF )
              break;
            if ( !aPeh2jump2[j + 1] )
            {
              ++j;
LABEL_314:
              if ( j >= v35 )
                j = v35 - 1;
              v20 = "PEH_2jump2";
              goto LABEL_317;
            }
          }
          j = 0;
          goto LABEL_314;
        }
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v13 = v4[1];
        if ( v12 == v13 )
          goto LABEL_324;
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v17 = v4[1];
        j = 0;
        while ( 1 )
        {
          if ( !v17[j] )
            goto LABEL_200;
          if ( !v17[j + 1] )
            goto LABEL_198;
          if ( !v17[j + 2] )
            goto LABEL_199;
          v27 = j + 2 <= 0x7FFFF;
          j += 3;
          if ( !v27 )
          {
            j = 0;
            goto LABEL_200;
          }
        }
      default:
        v12 = v34;
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v13 = v4[1];
        if ( v12 == v13 )
          goto LABEL_324;
        (*((void (__fastcall **)(_BYTE **))*v4 + 3))(v4);
        v14 = v4[1];
        j = 0;
        break;
    }
    while ( v14[j] )
    {
      if ( !v14[j + 1] )
      {
LABEL_198:
        ++j;
        break;
      }
      if ( !v14[j + 2] )
      {
LABEL_199:
        j += 2;
        break;
      }
      v27 = j + 2 <= 0x7FFFF;
      j += 3;
      if ( !v27 )
      {
        j = 0;
        break;
      }
    }
LABEL_200:
    v20 = v13;
    if ( j >= v35 )
      j = v35 - 1;
LABEL_317:
    qmemcpy(v12, v20, j);
    v12[j] = 0;
LABEL_324:
    v30 = *(_DWORD *)(a1 + 24);
    v31 = *(_DWORD *)(v30 + 16);
    v26 = *(_DWORD **)(v30 + 20);
    v27 = v31 > 1;
    v28 = *(_DWORD *)(a1 + 1052);
  }
  else
  {
    v7 = 0;
    switch ( a2 )
    {
      case 2:
        v8 = v34;
        if ( v34 == "CH_goal_puton_cap" )
          goto LABEL_294;
        for ( k = 0; ; k += 2 )
        {
          if ( !aChGoalPutonCap[k] )
            goto LABEL_204;
          if ( k > 0x7FFFF )
            break;
          if ( !aChGoalPutonCap[k + 1] )
          {
            ++k;
LABEL_204:
            if ( k >= v35 )
              k = v35 - 1;
            v21 = "CH_goal_puton_cap";
            goto LABEL_277;
          }
        }
        k = 0;
        goto LABEL_204;
      case 4:
        v8 = v34;
        if ( v34 == "CH_P_goal_puton_cap" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChPGoalPutonCa[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChPGoalPutonCa[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_P_goal_puton_cap";
        goto LABEL_277;
      case 5:
        v8 = v34;
        if ( v34 == "CH_M_goal_puton_cap" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChMGoalPutonCa[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChMGoalPutonCa[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_M_goal_puton_cap";
        goto LABEL_277;
      case 7:
        v8 = v34;
        if ( v34 == "CH_M_Rgoal_puton_cap" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChMRgoalPutonC[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChMRgoalPutonC[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_M_Rgoal_puton_cap";
        goto LABEL_277;
      case 20:
        v8 = v34;
        if ( v34 == "CH_dm_glad_wait" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmGladWait[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmGladWait[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_glad_wait";
        goto LABEL_277;
      case 23:
        v8 = v34;
        if ( v34 == "CH_MG_glad" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChMgGlad[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChMgGlad[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_MG_glad";
        goto LABEL_277;
      case 24:
        v8 = v34;
        if ( v34 == "CH_MG_sad" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChMgSad[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChMgSad[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_MG_sad";
        goto LABEL_277;
      case 27:
        v8 = v34;
        if ( v34 == "CH_dm_thanksgift" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmThanksgift[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmThanksgift[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_thanksgift";
        goto LABEL_277;
      case 28:
        v8 = v34;
        if ( v34 == "CH_dm_hail" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmHail[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmHail[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_hail";
        goto LABEL_277;
      case 29:
        v8 = v34;
        if ( v34 == "CH_dm_damage" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmDamage[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmDamage[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_damage";
        goto LABEL_277;
      case 30:
        v8 = v34;
        if ( v34 == "CH_dm_awawa" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmAwawa[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmAwawa[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_awawa";
        goto LABEL_277;
      case 31:
        v8 = v34;
        if ( v34 == "CH_dm_shoot" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmShoot[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmShoot[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_shoot";
        goto LABEL_277;
      case 32:
        v8 = v34;
        if ( v34 == "CH_dm_escort" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmEscort[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmEscort[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_escort";
        goto LABEL_277;
      case 33:
        v8 = v34;
        if ( v34 == "CH_dm_escort_wait" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmEscortWait[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmEscortWait[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_escort_wait";
        goto LABEL_277;
      case 34:
        v10 = v34;
        if ( v34 == "CH_dm_ending1" )
          goto LABEL_263;
        v11 = 0;
        while ( 2 )
        {
          if ( aChDmEnding1[v11] )
          {
            if ( v11 > 0x7FFFF )
            {
              v11 = 0;
            }
            else
            {
              if ( aChDmEnding1[v11 + 1] )
              {
                v11 += 2;
                continue;
              }
              ++v11;
            }
          }
          break;
        }
        if ( v11 >= v35 )
          v11 = v35 - 1;
        qmemcpy(v34, "CH_dm_ending1", v11);
        v10[v11] = 0;
LABEL_263:
        v7 = 1;
        *(_BYTE *)(a1 + 903) = 1;
        *(_BYTE *)(a1 + 902) = 1;
        if ( a2 != 1 )
          goto LABEL_287;
        goto LABEL_279;
      case 35:
        v8 = v34;
        if ( v34 == "CH_dm_ending1_wait" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmEnding1Wai[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmEnding1Wai[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_ending1_wait";
        goto LABEL_277;
      case 36:
        v8 = v34;
        if ( v34 == "CH_dm_ending2" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChDmEnding2[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChDmEnding2[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_dm_ending2";
        goto LABEL_277;
      case 37:
        v8 = v34;
        if ( v34 == "CH_Metamorphose" )
          goto LABEL_294;
        k = 0;
        while ( 2 )
        {
          if ( aChMetamorphose[k] )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
            }
            else
            {
              if ( aChMetamorphose[k + 1] )
              {
                k += 2;
                continue;
              }
              ++k;
            }
          }
          break;
        }
        if ( k >= v35 )
          k = v35 - 1;
        v21 = "CH_Metamorphose";
LABEL_277:
        qmemcpy(v8, v21, k);
        v7 = 1;
        v8[k] = 0;
LABEL_278:
        if ( a2 != 1 )
          goto LABEL_287;
LABEL_279:
        if ( *(_BYTE *)(a1 + 903) )
        {
          v22 = v34;
          if ( v34 != "CH_dm_ending1_wait" )
          {
            for ( m = 0; ; m += 2 )
            {
              if ( !aChDmEnding1Wai[m] )
                goto LABEL_290;
              if ( m > 0x7FFFF )
                break;
              if ( !aChDmEnding1Wai[m + 1] )
              {
                ++m;
                goto LABEL_290;
              }
            }
            m = 0;
LABEL_290:
            if ( m >= v35 )
              m = v35 - 1;
            qmemcpy(v34, "CH_dm_ending1_wait", m);
            v22[m] = 0;
          }
          *(_BYTE *)(a1 + 903) = 0;
          goto LABEL_294;
        }
LABEL_287:
        if ( v7 != 1 )
        {
          sub_6078F234(a1, a2);
          return;
        }
LABEL_294:
        v24 = *(_DWORD *)(a1 + 292);
        if ( !v24 )
          return;
        v25 = *(_DWORD *)(v24 + 16);
        v26 = *(_DWORD **)(v24 + 20);
        v27 = v25 > 1;
        v28 = *(_DWORD *)(a1 + 16);
        break;
      default:
        goto LABEL_278;
    }
  }
  if ( v27 )
    ++v26;
  v32 = *v26;
  TexAnim_play(*v26, v28, &v33);
  AnimationCtrl_setRepeat((ModelAnimation *)(v32 + 4), 0);
}
