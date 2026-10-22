int __fastcall sub_60758544(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  char *v9; // r7
  signed int i; // r5
  int v11; // r1
  int result; // r0
  char *v13; // r7
  signed int v14; // r5
  signed int v15; // r0
  const char *v16; // r1
  signed int v17; // r0
  signed int v18; // r0
  int v19; // r0
  signed int v20; // r0
  const char *v21; // r1
  signed int v22; // r0
  signed int v23; // r0
  signed int v24; // r0
  signed int v25; // r0
  signed int v26; // r0
  signed int v27; // r0
  signed int v28; // r0
  signed int v29; // r0
  signed int v30; // r0
  signed int v31; // r0
  signed int v32; // r0
  signed int v33; // r0
  signed int v34; // r0
  signed int v35; // r0
  signed int v36; // r0
  signed int v37; // r0
  signed int v38; // r0
  signed int v39; // r0
  signed int v40; // r0
  signed int v41; // r0

  if ( a1[75] == 3 )
  {
    switch ( a5 )
    {
      case 122:
        v9 = *(char **)(a4 + 4);
        if ( v9 == "PKB_star_roll" )
          goto LABEL_56;
        for ( i = 0; aPkbStarRoll[i]; i += 2 )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
            break;
          }
          if ( !aPkbStarRoll[i + 1] )
          {
            ++i;
            break;
          }
        }
        v17 = *(_DWORD *)(a4 + 8);
        if ( i >= v17 )
          i = v17 - 1;
        v16 = "PKB_star_roll";
        goto LABEL_55;
      case 93:
        v9 = *(char **)(a4 + 4);
        if ( v9 == "PKB_goal_puton_cap" )
          goto LABEL_56;
        for ( i = 0; aPkbGoalPutonCa[i]; i += 2 )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
            break;
          }
          if ( !aPkbGoalPutonCa[i + 1] )
          {
            ++i;
            break;
          }
        }
        v18 = *(_DWORD *)(a4 + 8);
        if ( i >= v18 )
          i = v18 - 1;
        v16 = "PKB_goal_puton_cap";
LABEL_55:
        qmemcpy(v9, v16, i);
        v9[i] = 0;
LABEL_56:
        *a3 = a1[136];
        if ( !a6 )
          a1[49] |= 0xA00000u;
        v19 = a1[50] | 0xA00000;
LABEL_280:
        a1[50] = v19;
        return 1;
      case 0:
        v9 = *(char **)(a4 + 4);
        if ( v9 == "PKB_wait" )
          goto LABEL_56;
        for ( i = 0; aPkbWait[i]; i += 2 )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
            break;
          }
          if ( !aPkbWait[i + 1] )
          {
            ++i;
            break;
          }
        }
        v15 = *(_DWORD *)(a4 + 8);
        if ( i >= v15 )
          i = v15 - 1;
        v16 = "PKB_wait";
        goto LABEL_55;
    }
  }
  v11 = sub_6078F32C(a1, a2, (int)a3, a4, a5, a6);
  result = 1;
  if ( !v11 )
  {
    result = 0;
    switch ( a5 )
    {
      case 91:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_goal_puton_cap" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbGoalPutonCap[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbGoalPutonCap[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v20 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v20 )
          v14 = v20 - 1;
        v21 = "KB_goal_puton_cap";
        goto LABEL_276;
      case 92:
      case 93:
      case 95:
      case 96:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 123:
      case 124:
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 135:
      case 136:
      case 137:
      case 138:
      case 139:
      case 140:
      case 141:
      case 142:
      case 143:
      case 144:
      case 145:
      case 146:
      case 147:
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
      case 154:
      case 155:
      case 156:
      case 157:
      case 158:
      case 159:
      case 160:
      case 161:
      case 162:
      case 163:
      case 164:
      case 165:
      case 166:
      case 167:
      case 168:
      case 169:
      case 170:
      case 171:
      case 172:
      case 173:
      case 174:
      case 175:
      case 176:
      case 177:
      case 178:
      case 179:
      case 180:
      case 181:
      case 182:
      case 183:
      case 184:
      case 185:
      case 186:
      case 187:
      case 188:
      case 189:
      case 190:
      case 192:
      case 193:
      case 196:
      case 199:
      case 202:
      case 203:
      case 204:
      case 205:
      case 206:
      case 208:
      case 209:
      case 210:
      case 211:
      case 212:
      case 213:
      case 214:
      case 215:
      case 216:
      case 217:
      case 220:
      case 222:
        return result;
      case 94:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "MKB_goal_puton_cap" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aMkbGoalPutonCa[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aMkbGoalPutonCa[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v23 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v23 )
          v14 = v23 - 1;
        v21 = "MKB_goal_puton_cap";
        goto LABEL_276;
      case 97:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "MKB_Rgoal_puton_cap" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aMkbRgoalPutonC[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aMkbRgoalPutonC[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v24 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v24 )
          v14 = v24 - 1;
        v21 = "MKB_Rgoal_puton_cap";
        goto LABEL_276;
      case 122:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_star_roll" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbStarRoll[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbStarRoll[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v25 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v25 )
          v14 = v25 - 1;
        v21 = "KB_star_roll";
        goto LABEL_276;
      case 125:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_Sjumped" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbSjumped[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbSjumped[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v26 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v26 )
          v14 = v26 - 1;
        v21 = "KB_Sjumped";
        goto LABEL_276;
      case 191:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_glad_wait" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmGladWait[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmGladWait[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v27 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v27 )
          v14 = v27 - 1;
        v21 = "KB_dm_glad_wait";
        goto LABEL_276;
      case 194:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_thanksgift" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmThanksgift[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmThanksgift[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v28 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v28 )
          v14 = v28 - 1;
        v21 = "KB_dm_thanksgift";
        goto LABEL_276;
      case 195:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_hail" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmHail[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmHail[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v29 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v29 )
          v14 = v29 - 1;
        v21 = "KB_dm_hail";
        goto LABEL_276;
      case 197:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_MG_glad" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbMgGlad[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbMgGlad[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v30 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v30 )
          v14 = v30 - 1;
        v21 = "KB_MG_glad";
        goto LABEL_276;
      case 198:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_MG_sad" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbMgSad[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbMgSad[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v31 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v31 )
          v14 = v31 - 1;
        v21 = "KB_MG_sad";
        goto LABEL_276;
      case 200:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_damage" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmDamage[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmDamage[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v32 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v32 )
          v14 = v32 - 1;
        v21 = "KB_dm_damage";
        goto LABEL_276;
      case 201:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_awawa" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmAwawa[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmAwawa[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v33 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v33 )
          v14 = v33 - 1;
        v21 = "KB_dm_awawa";
        goto LABEL_276;
      case 207:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_dm_shoot" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDmShoot[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDmShoot[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v34 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v34 )
          v14 = v34 - 1;
        v21 = "KB_dm_shoot";
        goto LABEL_276;
      case 218:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_demo_talk" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbDemoTalk[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbDemoTalk[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v35 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v35 )
          v14 = v35 - 1;
        v21 = "KB_demo_talk";
        goto LABEL_276;
      case 219:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_busy_wait" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbBusyWait[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbBusyWait[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v36 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v36 )
          v14 = v36 - 1;
        v21 = "KB_busy_wait";
        goto LABEL_276;
      case 221:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_ending_wait" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbEndingWait[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbEndingWait[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v37 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v37 )
          v14 = v37 - 1;
        v21 = "KB_ending_wait";
        goto LABEL_276;
      case 223:
        v13 = *(char **)(a4 + 4);
        if ( v13 == "KB_jump_stoop" )
          goto LABEL_277;
        v14 = 0;
        while ( 2 )
        {
          if ( aKbJumpStoop[v14] )
          {
            if ( v14 > 0x7FFFF )
            {
              v14 = 0;
            }
            else
            {
              if ( aKbJumpStoop[v14 + 1] )
              {
                v14 += 2;
                continue;
              }
              ++v14;
            }
          }
          break;
        }
        v38 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v38 )
          v14 = v38 - 1;
        v21 = "KB_jump_stoop";
LABEL_276:
        qmemcpy(v13, v21, v14);
        v13[v14] = 0;
LABEL_277:
        *a3 = a1[136];
        if ( !a6 )
          a1[49] |= 0x200000u;
        v19 = a1[50] | 0x200000;
        goto LABEL_280;
      default:
        switch ( a5 )
        {
          case 0:
            v13 = *(char **)(a4 + 4);
            if ( v13 == "KB_wait" )
              goto LABEL_277;
            v14 = 0;
            break;
          case 11:
            v13 = *(char **)(a4 + 4);
            if ( v13 == "KB_roll_jump" )
              goto LABEL_277;
            v14 = 0;
            while ( 2 )
            {
              if ( aKbRollJump[v14] )
              {
                if ( v14 > 0x7FFFF )
                {
                  v14 = 0;
                }
                else
                {
                  if ( aKbRollJump[v14 + 1] )
                  {
                    v14 += 2;
                    continue;
                  }
                  ++v14;
                }
              }
              break;
            }
            v39 = *(_DWORD *)(a4 + 8);
            if ( v14 >= v39 )
              v14 = v39 - 1;
            v21 = "KB_roll_jump";
            goto LABEL_276;
          case 20:
            v13 = *(char **)(a4 + 4);
            if ( v13 == "KB_stoop" )
              goto LABEL_277;
            v14 = 0;
            while ( 2 )
            {
              if ( aKbStoop[v14] )
              {
                if ( v14 > 0x7FFFF )
                {
                  v14 = 0;
                }
                else
                {
                  if ( aKbStoop[v14 + 1] )
                  {
                    v14 += 2;
                    continue;
                  }
                  ++v14;
                }
              }
              break;
            }
            v40 = *(_DWORD *)(a4 + 8);
            if ( v14 >= v40 )
              v14 = v40 - 1;
            v21 = "KB_stoop";
            goto LABEL_276;
          case 21:
            v13 = *(char **)(a4 + 4);
            if ( v13 == "KB_stoop_start" )
              goto LABEL_277;
            v14 = 0;
            while ( 2 )
            {
              if ( aKbStoopStart[v14] )
              {
                if ( v14 > 0x7FFFF )
                {
                  v14 = 0;
                }
                else
                {
                  if ( aKbStoopStart[v14 + 1] )
                  {
                    v14 += 2;
                    continue;
                  }
                  ++v14;
                }
              }
              break;
            }
            v41 = *(_DWORD *)(a4 + 8);
            if ( v14 >= v41 )
              v14 = v41 - 1;
            v21 = "KB_stoop_start";
            goto LABEL_276;
          default:
            return result;
        }
        break;
    }
    while ( 1 )
    {
      if ( !aKbWait[v14] )
        goto LABEL_197;
      if ( v14 > 0x7FFFF )
        break;
      if ( !aKbWait[v14 + 1] )
      {
        ++v14;
LABEL_197:
        v22 = *(_DWORD *)(a4 + 8);
        if ( v14 >= v22 )
          v14 = v22 - 1;
        v21 = "KB_wait";
        goto LABEL_276;
      }
      v14 += 2;
    }
    v14 = 0;
    goto LABEL_197;
  }
  return result;
}
