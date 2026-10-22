int __fastcall sub_60753720(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v9; // r0
  char *v10; // r7
  signed int n; // r5
  char *v12; // r6
  signed int i; // r5
  char *v14; // r6
  signed int m; // r5
  int v16; // r1
  int result; // r0
  char *v18; // r7
  signed int v19; // r5
  char *v20; // r6
  signed int j; // r5
  char *v22; // r6
  signed int k; // r5
  signed int v24; // r0
  const char *v25; // r1
  signed int v26; // r0
  signed int v27; // r0
  int v28; // r0
  signed int v29; // r0
  const char *v30; // r1
  signed int v31; // r0
  int v32; // r5
  int v33; // r0
  bool v34; // cc
  signed int v35; // r0
  signed int v36; // r0
  signed int v37; // r0
  signed int v38; // r0
  signed int v39; // r0
  signed int v40; // r0
  signed int v41; // r0
  signed int v42; // r0
  signed int v43; // r0
  signed int v44; // r0
  int v45; // r0
  signed int v46; // r0
  int v47; // r0
  int v48; // r11
  signed int v49; // r6
  signed int v50; // r0
  char *v51; // r0
  signed int v52; // r0
  signed int v53; // r0
  signed int v54; // r0
  signed int v55; // r0
  signed int v56; // r0
  signed int v57; // r0
  signed int v58; // r0
  const char *v59; // r1
  signed int v60; // r0
  signed int v61; // r0
  signed int v62; // r0
  signed int v63; // r0
  signed int v64; // r0
  signed int v65; // r0
  signed int v66; // r0
  signed int v67; // r0
  signed int v68; // r0
  signed int v69; // r0
  signed int v70; // r0
  signed int v71; // r0
  signed int v72; // r0
  signed int v73; // r0
  signed int v74; // r0
  signed int v75; // r0
  signed int v76; // r0
  signed int v77; // r0
  signed int v78; // r0
  signed int v79; // r0
  signed int v80; // r0
  signed int v81; // r0
  signed int v82; // r0
  signed int v83; // r0
  signed int v84; // r0
  int v85; // [sp+8h] [bp-28h]

  v9 = *(_DWORD *)(a1 + 300);
  if ( v9 == 5 )
  {
    *a3 = *(_DWORD *)(a1 + 1056);
    if ( a5 > 173 )
    {
      switch ( a5 )
      {
        case 174:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "floatingR" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aFloatingr[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aFloatingr[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v29 = *(_DWORD *)(a4 + 8);
          if ( i >= v29 )
            i = v29 - 1;
          v30 = "floatingR";
          goto LABEL_491;
        case 175:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "floating" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aFloating[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aFloating[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v35 = *(_DWORD *)(a4 + 8);
          if ( i >= v35 )
            i = v35 - 1;
          v30 = "floating";
          goto LABEL_491;
        case 176:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "floating_carryR" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aFloatingCarryr[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aFloatingCarryr[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v36 = *(_DWORD *)(a4 + 8);
          if ( i >= v36 )
            i = v36 - 1;
          v30 = "floating_carryR";
          goto LABEL_491;
        case 177:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "floating_carry" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aFloatingCarry[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aFloatingCarry[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v37 = *(_DWORD *)(a4 + 8);
          if ( i >= v37 )
            i = v37 - 1;
          v30 = "floating_carry";
          goto LABEL_491;
        case 178:
          v12 = *(char **)(a4 + 4);
          if ( (*(_BYTE *)(a1 + 208) & 0x20) == 0 )
          {
            if ( v12 == "floatingR" )
              goto LABEL_492;
            for ( i = 0; ; i += 2 )
            {
              if ( !aFloatingr[i] )
                goto LABEL_476;
              if ( i > 0x7FFFF )
                break;
              if ( !aFloatingr[i + 1] )
              {
                ++i;
LABEL_476:
                v54 = *(_DWORD *)(a4 + 8);
                if ( i >= v54 )
                  i = v54 - 1;
                v30 = "floatingR";
                goto LABEL_491;
              }
            }
            i = 0;
            goto LABEL_476;
          }
          if ( v12 == "floating_carriedR" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aFloatingCarrie[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aFloatingCarrie[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v56 = *(_DWORD *)(a4 + 8);
          if ( i >= v56 )
            i = v56 - 1;
          v30 = "floating_carriedR";
          goto LABEL_491;
        case 179:
          v12 = *(char **)(a4 + 4);
          if ( (*(_BYTE *)(a1 + 208) & 0x20) == 0 )
          {
            if ( v12 == "floating" )
              goto LABEL_492;
            for ( i = 0; ; i += 2 )
            {
              if ( !aFloating[i] )
                goto LABEL_480;
              if ( i > 0x7FFFF )
                break;
              if ( !aFloating[i + 1] )
              {
                ++i;
LABEL_480:
                v55 = *(_DWORD *)(a4 + 8);
                if ( i >= v55 )
                  i = v55 - 1;
                v30 = "floating";
                goto LABEL_491;
              }
            }
            i = 0;
            goto LABEL_480;
          }
          if ( v12 == "floating_carried" )
            goto LABEL_492;
          i = 0;
          break;
        case 232:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "Metamorphose" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aMetamorphose[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aMetamorphose[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v38 = *(_DWORD *)(a4 + 8);
          if ( i >= v38 )
            i = v38 - 1;
          v30 = "Metamorphose";
          goto LABEL_491;
        case 234:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "spike" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aSpike[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aSpike[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v39 = *(_DWORD *)(a4 + 8);
          if ( i >= v39 )
            i = v39 - 1;
          v30 = "spike";
          goto LABEL_491;
        case 235:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "spikeR" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aSpiker[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aSpiker[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v40 = *(_DWORD *)(a4 + 8);
          if ( i >= v40 )
            i = v40 - 1;
          v30 = "spikeR";
          goto LABEL_491;
        case 236:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "ride_cloud_wait" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aRideCloudWait[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aRideCloudWait[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v41 = *(_DWORD *)(a4 + 8);
          if ( i >= v41 )
            i = v41 - 1;
          v30 = "ride_cloud_wait";
          goto LABEL_491;
        case 237:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "ride_cloud_stoop_start" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aRideCloudStoop[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aRideCloudStoop[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v42 = *(_DWORD *)(a4 + 8);
          if ( i >= v42 )
            i = v42 - 1;
          v30 = "ride_cloud_stoop_start";
          goto LABEL_491;
        case 238:
          v12 = *(char **)(a4 + 4);
          if ( v12 == "ride_cloud_stoop" )
            goto LABEL_492;
          i = 0;
          while ( 2 )
          {
            if ( aRideCloudStoop_0[i] )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
              }
              else
              {
                if ( aRideCloudStoop_0[i + 1] )
                {
                  i += 2;
                  continue;
                }
                ++i;
              }
            }
            break;
          }
          v43 = *(_DWORD *)(a4 + 8);
          if ( i >= v43 )
            i = v43 - 1;
          v30 = "ride_cloud_stoop";
          goto LABEL_491;
        default:
          goto LABEL_41;
      }
      while ( aFloatingCarrie_0[i] )
      {
        if ( i > 0x7FFFF )
        {
          i = 0;
          break;
        }
        if ( !aFloatingCarrie_0[i + 1] )
        {
          ++i;
          break;
        }
        i += 2;
      }
      v57 = *(_DWORD *)(a4 + 8);
      if ( i >= v57 )
        i = v57 - 1;
      v30 = "floating_carried";
LABEL_491:
      qmemcpy(v12, v30, i);
      v12[i] = 0;
      goto LABEL_492;
    }
    switch ( a5 )
    {
      case 22:
        v20 = *(char **)(a4 + 4);
        if ( v20 != "slip" )
        {
          for ( j = 0; aSlip[j]; j += 2 )
          {
            if ( j > 0x7FFFF )
            {
              j = 0;
              break;
            }
            if ( !aSlip[j + 1] )
            {
              ++j;
              break;
            }
          }
          v44 = *(_DWORD *)(a4 + 8);
          if ( j >= v44 )
            j = v44 - 1;
          qmemcpy(*(void **)(a4 + 4), "slip", j);
          v20[j] = 0;
        }
        if ( (*(_BYTE *)(a1 + 210) & 2) != 0 )
          goto LABEL_492;
        v85 = *(_DWORD *)(a4 + 4);
        (*(void (__fastcall **)(int))(*(_DWORD *)a4 + 12))(a4);
        v32 = 0;
        v45 = *(_DWORD *)(a4 + 4);
        while ( *(_BYTE *)(v45 + v32) )
        {
          if ( !*(_BYTE *)(v45 + v32 + 1) )
          {
            ++v32;
            break;
          }
          if ( !*(_BYTE *)(v45 + v32 + 2) )
          {
            v32 += 2;
            break;
          }
          v34 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v34 )
          {
            v32 = 0;
            break;
          }
        }
        v48 = 0;
        v49 = 0;
        if ( v32 > 0 )
          v48 = v32;
        while ( aR[v49] )
        {
          if ( v49 > 0x7FFFF )
          {
            v49 = 0;
            break;
          }
          if ( !aR[v49 + 1] )
          {
            ++v49;
            break;
          }
          v49 += 2;
        }
        v52 = *(_DWORD *)(a4 + 8) - v48;
        if ( v49 >= v52 )
          v49 = v52 - 1;
        if ( v49 < 1 )
          goto LABEL_492;
        v51 = (char *)(v85 + v48);
        break;
      case 23:
        v22 = *(char **)(a4 + 4);
        if ( v22 != "sliped" )
        {
          for ( k = 0; aSliped[k]; k += 2 )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
              break;
            }
            if ( !aSliped[k + 1] )
            {
              ++k;
              break;
            }
          }
          v46 = *(_DWORD *)(a4 + 8);
          if ( k >= v46 )
            k = v46 - 1;
          qmemcpy(*(void **)(a4 + 4), "sliped", k);
          v22[k] = 0;
        }
        if ( (*(_BYTE *)(a1 + 210) & 2) != 0 )
          goto LABEL_492;
        v85 = *(_DWORD *)(a4 + 4);
        (*(void (__fastcall **)(int))(*(_DWORD *)a4 + 12))(a4);
        v32 = 0;
        v47 = *(_DWORD *)(a4 + 4);
        while ( *(_BYTE *)(v47 + v32) )
        {
          if ( !*(_BYTE *)(v47 + v32 + 1) )
          {
            ++v32;
            break;
          }
          if ( !*(_BYTE *)(v47 + v32 + 2) )
          {
            v32 += 2;
            break;
          }
          v34 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v34 )
          {
            v32 = 0;
            break;
          }
        }
        v48 = 0;
        v49 = 0;
        if ( v32 > 0 )
          v48 = v32;
        while ( aR[v49] )
        {
          if ( v49 > 0x7FFFF )
          {
            v49 = 0;
            break;
          }
          if ( !aR[v49 + 1] )
          {
            ++v49;
            break;
          }
          v49 += 2;
        }
        v53 = *(_DWORD *)(a4 + 8) - v48;
        if ( v49 >= v53 )
          v49 = v53 - 1;
        if ( v49 < 1 )
          goto LABEL_492;
        v51 = (char *)(v85 + v48);
        break;
      case 24:
        v14 = *(char **)(a4 + 4);
        if ( v14 != "slip_to_stoop" )
        {
          for ( m = 0; aSlipToStoop[m]; m += 2 )
          {
            if ( m > 0x7FFFF )
            {
              m = 0;
              break;
            }
            if ( !aSlipToStoop[m + 1] )
            {
              ++m;
              break;
            }
          }
          v31 = *(_DWORD *)(a4 + 8);
          if ( m >= v31 )
            m = v31 - 1;
          qmemcpy(*(void **)(a4 + 4), "slip_to_stoop", m);
          v14[m] = 0;
        }
        if ( (*(_BYTE *)(a1 + 210) & 2) != 0 )
          goto LABEL_492;
        v85 = *(_DWORD *)(a4 + 4);
        (*(void (__fastcall **)(int))(*(_DWORD *)a4 + 12))(a4);
        v32 = 0;
        v33 = *(_DWORD *)(a4 + 4);
        while ( *(_BYTE *)(v33 + v32) )
        {
          if ( !*(_BYTE *)(v33 + v32 + 1) )
          {
            ++v32;
            break;
          }
          if ( !*(_BYTE *)(v33 + v32 + 2) )
          {
            v32 += 2;
            break;
          }
          v34 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v34 )
          {
            v32 = 0;
            break;
          }
        }
        v48 = 0;
        v49 = 0;
        if ( v32 > 0 )
          v48 = v32;
        while ( aR[v49] )
        {
          if ( v49 > 0x7FFFF )
          {
            v49 = 0;
            break;
          }
          if ( !aR[v49 + 1] )
          {
            ++v49;
            break;
          }
          v49 += 2;
        }
        v50 = *(_DWORD *)(a4 + 8) - v48;
        if ( v49 >= v50 )
          v49 = v50 - 1;
        if ( v49 < 1 )
          goto LABEL_492;
        v51 = (char *)(v85 + v48);
        break;
      default:
        goto LABEL_41;
    }
    qmemcpy(v51, "R", v49);
    if ( v49 + v48 > v32 )
    {
      *(_BYTE *)(v85 + v49 + v48) = 0;
      if ( a6 )
        goto LABEL_494;
      goto LABEL_493;
    }
LABEL_492:
    if ( a6 )
    {
LABEL_494:
      v28 = *(_DWORD *)(a1 + 200) | 0x600000;
LABEL_603:
      *(_DWORD *)(a1 + 200) = v28;
      return 1;
    }
LABEL_493:
    *(_DWORD *)(a1 + 196) |= 0x600000u;
    goto LABEL_494;
  }
  if ( v9 == 3 )
  {
    switch ( a5 )
    {
      case 122:
        v10 = *(char **)(a4 + 4);
        if ( v10 != "PCB_star_roll" )
        {
          for ( n = 0; aPcbStarRoll[n]; n += 2 )
          {
            if ( n > 0x7FFFF )
            {
              n = 0;
              break;
            }
            if ( !aPcbStarRoll[n + 1] )
            {
              ++n;
              break;
            }
          }
          v26 = *(_DWORD *)(a4 + 8);
          if ( n >= v26 )
            n = v26 - 1;
          v25 = "PCB_star_roll";
          goto LABEL_161;
        }
        goto LABEL_162;
      case 93:
        v10 = *(char **)(a4 + 4);
        if ( v10 != "PCB_goal_puton_cap" )
        {
          for ( n = 0; aPcbGoalPutonCa[n]; n += 2 )
          {
            if ( n > 0x7FFFF )
            {
              n = 0;
              break;
            }
            if ( !aPcbGoalPutonCa[n + 1] )
            {
              ++n;
              break;
            }
          }
          v27 = *(_DWORD *)(a4 + 8);
          if ( n >= v27 )
            n = v27 - 1;
          v25 = "PCB_goal_puton_cap";
          goto LABEL_161;
        }
LABEL_162:
        *a3 = *(_DWORD *)(a1 + 544);
        if ( !a6 )
          *(_DWORD *)(a1 + 196) |= 0xA00000u;
        v28 = *(_DWORD *)(a1 + 200) | 0xA00000;
        goto LABEL_603;
      case 0:
        v10 = *(char **)(a4 + 4);
        if ( v10 != "PCB_wait" )
        {
          for ( n = 0; aPcbWait[n]; n += 2 )
          {
            if ( n > 0x7FFFF )
            {
              n = 0;
              break;
            }
            if ( !aPcbWait[n + 1] )
            {
              ++n;
              break;
            }
          }
          v24 = *(_DWORD *)(a4 + 8);
          if ( n >= v24 )
            n = v24 - 1;
          v25 = "PCB_wait";
LABEL_161:
          qmemcpy(v10, v25, n);
          v10[n] = 0;
          goto LABEL_162;
        }
        goto LABEL_162;
    }
  }
LABEL_41:
  v16 = sub_6078F32C((_DWORD *)a1, a2, (int)a3, a4, a5, a6);
  result = 1;
  if ( !v16 )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 300) != 5 )
    {
      switch ( a5 )
      {
        case 0:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_wait" )
            goto LABEL_600;
          v19 = 0;
          break;
        case 11:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_roll_jump" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbRollJump[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbRollJump[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v60 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v60 )
            v19 = v60 - 1;
          v59 = "CB_roll_jump";
          goto LABEL_599;
        case 20:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_stoop" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbStoop[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbStoop[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v61 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v61 )
            v19 = v61 - 1;
          v59 = "CB_stoop";
          goto LABEL_599;
        case 21:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_stoop_start" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbStoopStart[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbStoopStart[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v62 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v62 )
            v19 = v62 - 1;
          v59 = "CB_stoop_start";
          goto LABEL_599;
        case 91:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_goal_puton_cap" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbGoalPutonCap[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbGoalPutonCap[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v63 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v63 )
            v19 = v63 - 1;
          v59 = "CB_goal_puton_cap";
          goto LABEL_599;
        case 94:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "MCB_goal_puton_cap" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aMcbGoalPutonCa[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aMcbGoalPutonCa[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v64 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v64 )
            v19 = v64 - 1;
          v59 = "MCB_goal_puton_cap";
          goto LABEL_599;
        case 97:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "MCB_Rgoal_puton_cap" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aMcbRgoalPutonC[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aMcbRgoalPutonC[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v65 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v65 )
            v19 = v65 - 1;
          v59 = "MCB_Rgoal_puton_cap";
          goto LABEL_599;
        case 122:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_star_roll" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbStarRoll[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbStarRoll[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v66 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v66 )
            v19 = v66 - 1;
          v59 = "CB_star_roll";
          goto LABEL_599;
        case 125:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_Sjumped" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbSjumped[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbSjumped[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v67 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v67 )
            v19 = v67 - 1;
          v59 = "CB_Sjumped";
          goto LABEL_599;
        case 191:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_glad_wait" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmGladWait[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmGladWait[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v68 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v68 )
            v19 = v68 - 1;
          v59 = "CB_dm_glad_wait";
          goto LABEL_599;
        case 194:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_thanksgift" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmThanksgift[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmThanksgift[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v69 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v69 )
            v19 = v69 - 1;
          v59 = "CB_dm_thanksgift";
          goto LABEL_599;
        case 195:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_hail" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmHail[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmHail[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v70 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v70 )
            v19 = v70 - 1;
          v59 = "CB_dm_hail";
          goto LABEL_599;
        case 197:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_MG_glad" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbMgGlad[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbMgGlad[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v71 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v71 )
            v19 = v71 - 1;
          v59 = "CB_MG_glad";
          goto LABEL_599;
        case 198:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_MG_sad" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbMgSad[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbMgSad[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v72 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v72 )
            v19 = v72 - 1;
          v59 = "CB_MG_sad";
          goto LABEL_599;
        case 200:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_damage" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmDamage[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmDamage[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v73 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v73 )
            v19 = v73 - 1;
          v59 = "CB_dm_damage";
          goto LABEL_599;
        case 201:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_awawa" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmAwawa[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmAwawa[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v74 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v74 )
            v19 = v74 - 1;
          v59 = "CB_dm_awawa";
          goto LABEL_599;
        case 207:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_shoot" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmShoot[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmShoot[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v75 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v75 )
            v19 = v75 - 1;
          v59 = "CB_dm_shoot";
          goto LABEL_599;
        case 208:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_escort" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmEscort[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmEscort[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v76 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v76 )
            v19 = v76 - 1;
          v59 = "CB_dm_escort";
          goto LABEL_599;
        case 209:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_escort_wait" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmEscortWait[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmEscortWait[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v77 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v77 )
            v19 = v77 - 1;
          v59 = "CB_dm_escort_wait";
          goto LABEL_599;
        case 210:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_ending1" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmEnding1[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmEnding1[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v78 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v78 )
            v19 = v78 - 1;
          v59 = "CB_dm_ending1";
          goto LABEL_599;
        case 211:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_ending1_wait" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmEnding1Wai[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmEnding1Wai[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v79 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v79 )
            v19 = v79 - 1;
          v59 = "CB_dm_ending1_wait";
          goto LABEL_599;
        case 212:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_dm_ending2" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDmEnding2[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDmEnding2[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v80 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v80 )
            v19 = v80 - 1;
          v59 = "CB_dm_ending2";
          goto LABEL_599;
        case 218:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_demo_talk" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbDemoTalk[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbDemoTalk[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v81 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v81 )
            v19 = v81 - 1;
          v59 = "CB_demo_talk";
          goto LABEL_599;
        case 219:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_busy_wait" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbBusyWait[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbBusyWait[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v82 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v82 )
            v19 = v82 - 1;
          v59 = "CB_busy_wait";
          goto LABEL_599;
        case 221:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_ending_wait" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbEndingWait[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbEndingWait[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v83 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v83 )
            v19 = v83 - 1;
          v59 = "CB_ending_wait";
          goto LABEL_599;
        case 223:
          v18 = *(char **)(a4 + 4);
          if ( v18 == "CB_jump_stoop" )
            goto LABEL_600;
          v19 = 0;
          while ( 2 )
          {
            if ( aCbJumpStoop[v19] )
            {
              if ( v19 > 0x7FFFF )
              {
                v19 = 0;
              }
              else
              {
                if ( aCbJumpStoop[v19 + 1] )
                {
                  v19 += 2;
                  continue;
                }
                ++v19;
              }
            }
            break;
          }
          v84 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v84 )
            v19 = v84 - 1;
          v59 = "CB_jump_stoop";
LABEL_599:
          qmemcpy(v18, v59, v19);
          v18[v19] = 0;
LABEL_600:
          *a3 = *(_DWORD *)(a1 + 544);
          if ( !a6 )
            *(_DWORD *)(a1 + 196) |= 0x200000u;
          v28 = *(_DWORD *)(a1 + 200) | 0x200000;
          goto LABEL_603;
        case 232:
          goto LABEL_600;
        default:
          return result;
      }
      while ( 1 )
      {
        if ( !aCbWait[v19] )
          goto LABEL_496;
        if ( v19 > 0x7FFFF )
          break;
        if ( !aCbWait[v19 + 1] )
        {
          ++v19;
LABEL_496:
          v58 = *(_DWORD *)(a4 + 8);
          if ( v19 >= v58 )
            v19 = v58 - 1;
          v59 = "CB_wait";
          goto LABEL_599;
        }
        v19 += 2;
      }
      v19 = 0;
      goto LABEL_496;
    }
  }
  return result;
}
