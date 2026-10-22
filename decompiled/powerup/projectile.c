/* NSMBU Deluxe v1.0.0 -- projectile decompilation
 * Generated from the IDB; RVAs are image-relative (VA - 0x60000000).
 * Pseudocode is machine-produced and lightly readable; treat types and
 * field names as inferred unless a header in sweetdx/include documents them.
 */

/* ==========================================================================
 * sub_607A2708
 * RVA 0x007a2708   size 0x2c   callers 1
 * ========================================================================== */
bool __fastcall sub_607A26F8(int a1, int a2)
{
  int v2; // r12
  _BOOL4 result; // r0
  bool v4; // zf

  v2 = *(_DWORD *)(a1 + 11388);
  switch ( a2 )
  {
    case 1:
      v4 = v2 == 0;
      result = 1;
      if ( v2 )
        v4 = v2 == 3;
      if ( !v4 )
        result = 0;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
      result = v2 != a2;
      break;
    case 7:
      result = (unsigned int)(v2 - 7) > 1;
      break;
    case 9:
      result = sub_6075EE0C(a1) && v2 != 9;
      break;
  }
  return result;
}



/* ==========================================================================
 * sub_607AA954
 * RVA 0x007aa954   size 0xa4   callers 7
 * ========================================================================== */
int __fastcall sub_607AA954(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // r1
  int v8; // r2

  v2 = sub_60786670(a1 + 688);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 1320);
    if ( (unsigned int)(v4 - 5) >= 2 )
    {
      if ( v4 == 2 )
      {
        v7 = *(unsigned __int8 *)(a1 + 84);
        v8 = 0;
        result = 0;
        if ( v7 < 4 )
          v8 = (char)v7;
        if ( *(int *)(MEMORY[0xC7B420] + 8 * v8 + 104) < 2 )
          return 1;
      }
    }
    else
    {
      v5 = *(unsigned __int8 *)(a1 + 84);
      v6 = 0;
      result = 0;
      if ( v5 < 4 )
        v6 = (char)v5;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v6 + 136) <= 1 )
        return 1;
    }
  }
  return result;
}


/* STILL UNNAMED (next naming targets):
 *   0x00786670  sub_60786670
 */

/* ==========================================================================
 * sub_607AAA00
 * RVA 0x007aaa00   size 0x18c   callers 1
 * ========================================================================== */
int __fastcall sub_607AAA00(int a1)
{
  int v2; // r6
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  int CurrentState; // r0
  int v9; // r6
  int v10; // r7

  v2 = 0;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
    && (*(_BYTE *)(a1 + 1225) & 2) != 0
    && sub_60786670(a1 + 688) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 1320);
    if ( (unsigned int)(v3 - 5) >= 2 )
    {
      if ( v3 != 2 )
        return v2;
      v6 = *(unsigned __int8 *)(a1 + 84);
      v7 = 0;
      v2 = 0;
      if ( v6 < 4 )
        v7 = (char)v6;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v7 + 104) >= 2 )
        return v2;
    }
    else
    {
      v4 = *(unsigned __int8 *)(a1 + 84);
      v5 = 0;
      v2 = 0;
      if ( v4 < 4 )
        v5 = (char)v4;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v5 + 136) > 1 )
        return v2;
    }
    if ( (*(_BYTE *)(a1 + 1207) & 0x40) == 0 || (*(_BYTE *)(a1 + 6905) & 0x80) == 0 || (v2 = 0, !sub_60763E28(a1)) )
    {
      CurrentState = StateMgr::getCurrentState(a1 + 9916);
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
      if ( v9 == (*(int (**)(void))(MEMORY[0xCC4BE0] + 8))() )
      {
        v10 = sub_607865A4(a1 + 688, 5);
        Player_changeState(a1, 13389164, 0);
        v2 = 1;
        if ( v10 == 1 )
        {
          sub_6078667C((_DWORD *)(a1 + 688), 5);
          return 1;
        }
      }
      else
      {
        Player_changeState(a1, 13389164, 0);
        return 1;
      }
    }
  }
  return v2;
}


/* STILL UNNAMED (next naming targets):
 *   0x00763e28  sub_60763E28
 *   0x007865a4  sub_607865A4
 *   0x00786670  sub_60786670
 *   0x0078667c  sub_6078667C
 */

/* ==========================================================================
 * sub_607AABA0
 * RVA 0x007aaba0   size 0x344   callers 15
 * ========================================================================== */
void __fastcall sub_607AABA0(int a1, int a2)
{
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r0
  float v14; // s18
  float v15; // s16
  float v16; // s20
  int v17; // r0
  int v18; // r0
  _DWORD v19[2]; // [sp+4h] [bp-74h] BYREF
  float v20[2]; // [sp+Ch] [bp-6Ch] BYREF
  float v21; // [sp+14h] [bp-64h]
  float v22[3]; // [sp+18h] [bp-60h] BYREF
  float v23; // [sp+24h] [bp-54h]
  float v24; // [sp+28h] [bp-50h]
  float v25; // [sp+2Ch] [bp-4Ch]
  float v26; // [sp+30h] [bp-48h]
  float v27; // [sp+34h] [bp-44h]
  float v28; // [sp+38h] [bp-40h]
  float v29; // [sp+3Ch] [bp-3Ch]
  float v30; // [sp+40h] [bp-38h]
  float v31; // [sp+44h] [bp-34h]
  _DWORD v32[12]; // [sp+48h] [bp-30h] BYREF

  v4 = *(_DWORD *)(a1 + 1320);
  if ( v4 == 2 )
  {
    v5 = *(unsigned __int8 *)(a1 + 84);
    v6 = (char)v5;
    if ( v5 >= 4 )
      v6 = 0;
    if ( *(int *)(MEMORY[0xC7B420] + 8 * v6 + 100) < 6 )
      goto LABEL_17;
    sub_6000A2E8(MEMORY[0xC7B420], (char)v5);
    v4 = *(_DWORD *)(a1 + 1320);
  }
  v7 = v4 - 5;
  if ( (unsigned int)(v4 - 5) < 2 )
  {
    v8 = *(char *)(a1 + 84);
    v9 = v8;
    if ( (unsigned __int8)v8 >= 4u )
      v9 = 0;
    if ( *(int *)(MEMORY[0xC7B420] + 8 * v9 + 132) <= 5 && v7 < 2 )
    {
      if ( a2 )
        goto LABEL_15;
      if ( (unsigned __int8)v8 >= 4u )
        v8 = 0;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v8 + 136) < 2 )
      {
LABEL_15:
        memset(v32, 0, 0x2Cu);
        sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_THROW_ICEBALL", 0, 0);
        v10 = 11482256;
LABEL_25:
        v32[3] = Profile::get(*(_DWORD *)v10);
        v32[7] = sub_608336A8(*(_DWORD *)(a1 + 12048));
        v32[0] = ((*(_BYTE *)(a1 + 87) & 0xF) << 12)
               | (a2 << 16)
               | ((*(_BYTE *)(a1 + 86) & 0xF) << 8)
               | (unsigned __int8)(16 * *(_BYTE *)(a1 + 12048))
               | *(_BYTE *)(a1 + 84) & 0xF;
        v13 = *(_DWORD *)(a1 + 648);
        v20[0] = 1.7266e-38;
        LODWORD(v20[1]) = "wrist_l1";
        (*(void (__fastcall **)(_DWORD, float *, float *))(**(_DWORD **)(v13 + 4) + 144))(
          *(_DWORD *)(v13 + 4),
          v22,
          v20);
        v14 = v23 + (float)((float)((float)(v22[1] * 4.0) - v22[0]) + (float)(v22[2] * 4.0));
        v23 = v14;
        v15 = v27 + (float)((float)((float)(v25 * 4.0) - v24) + (float)(v26 * 4.0));
        v27 = v15;
        v16 = v31 + (float)((float)((float)(v29 * 4.0) - v28) + (float)(v30 * 4.0));
        v31 = v16;
        if ( a2 == 1 )
        {
          v17 = *(_DWORD *)(a1 + 648);
          v19[0] = 12321336;
          v19[1] = "skl_root";
          sub_60793F04(*(_DWORD *)(v17 + 4), v20, v19);
          v14 = v20[0]
              + (float)(sqrtf(
                          (float)((float)(v21 - v16) * (float)(v21 - v16))
                        + (float)((float)(v20[0] - v14) * (float)(v20[0] - v14)))
                      * *(float *)(4 * *(_DWORD *)(a1 + 12048) + 0xB0A898));
        }
        v18 = *(_DWORD *)(a1 + 116);
        *(float *)&v32[4] = v14;
        *(float *)&v32[5] = v15;
        v32[6] = v18;
        sub_600080BC(MEMORY[0xC7B400], v32);
        return;
      }
    }
    return;
  }
  if ( v4 != 2 )
    return;
LABEL_17:
  v11 = *(char *)(a1 + 84);
  v12 = v11;
  if ( (unsigned __int8)v11 >= 4u )
    v12 = 0;
  if ( *(int *)(MEMORY[0xC7B420] + 8 * v12 + 100) < 6 )
  {
    if ( a2 )
      goto LABEL_24;
    if ( (unsigned __int8)v11 >= 4u )
      v11 = 0;
    if ( *(int *)(MEMORY[0xC7B420] + 8 * v11 + 104) < 2 )
    {
LABEL_24:
      memset(v32, 0, 0x2Cu);
      sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_THROW_FIRE", 0, 0);
      v10 = 11482264;
      goto LABEL_25;
    }
  }
}


/* STILL UNNAMED (next naming targets):
 *   0x000080bc  sub_600080BC
 *   0x0000a2e8  sub_6000A2E8
 *   0x007734e8  sub_607734E8
 *   0x00793f04  sub_60793F04
 *   0x008336a8  sub_608336A8
 */

/* ==========================================================================
 * sub_607AAF80
 * RVA 0x007aaf80   size 0x324   callers 0
 * ========================================================================== */
int __fastcall sub_607AAF80(int a1)
{
  float v1; // s0
  unsigned int *v3; // r2
  int result; // r0
  unsigned int v5; // r5
  unsigned int v6; // r1
  int v7; // r1
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r1

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  sub_60771D8C(a1);
  sub_607711C8(a1);
  v3 = (unsigned int *)(a1 + 1224);
  result = *(_DWORD *)(a1 + 6900) & 1;
  v5 = *v3 & 0xFFFFBE3B;
  if ( !result )
    v5 = *v3 | 0x41C4;
  *v3 = v5;
  v6 = *(_DWORD *)(a1 + 1320);
  if ( v6 > 6 || ((1 << v6) & 0x64) == 0 )
  {
    if ( !result )
    {
      v9 = 0;
      v10 = 13388804;
      v11 = a1;
      return Player_changeState(v11, v10, v9);
    }
    v10 = 13388732;
LABEL_35:
    v11 = a1;
    v9 = 1;
    return Player_changeState(v11, v10, v9);
  }
  v8 = (_DWORD *)(a1 + 9940);
  v7 = *(_DWORD *)(a1 + 9940);
  if ( v7 == 1 )
  {
    if ( sub_60786670(a1 + 688) != 1 )
      goto LABEL_25;
    v12 = *(_DWORD *)(a1 + 1320);
    if ( (unsigned int)(v12 - 5) >= 2 )
    {
      if ( v12 != 2 )
        goto LABEL_25;
      v15 = *(unsigned __int8 *)(a1 + 84);
      v16 = 0;
      if ( v15 < 4 )
        v16 = (char)v15;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v16 + 104) >= 2 )
      {
LABEL_25:
        if ( (*(_BYTE *)(a1 + 6900) & 1) != 0 )
        {
          result = sub_6075FC38(a1);
          if ( result )
            return result;
          sub_60793184(*(_DWORD *)(a1 + 11360));
          if ( v1 < 10.0 || *(float *)(a1 + 88) == 0.0 )
          {
            result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
            if ( result != 1 )
              return result;
          }
          v10 = 13388732;
        }
        else
        {
          sub_60793184(*(_DWORD *)(a1 + 11360));
          if ( v1 < 10.0 )
          {
            result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
            if ( result != 1 || *(float *)(a1 + 124) > 0.0 )
              return result;
          }
          v10 = 13388804;
        }
        goto LABEL_35;
      }
    }
    else
    {
      v13 = *(unsigned __int8 *)(a1 + 84);
      v14 = 0;
      if ( v13 < 4 )
        v14 = (char)v13;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v14 + 136) > 1 )
        goto LABEL_25;
    }
    v17 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 12048) = v17;
    *(_DWORD *)(a1 + 160) = sub_60773F3C(a1, v17);
    *v8 = 0;
    sub_607948E8(a1 + 11356, 33);
    return sub_60793114(*(_DWORD *)(a1 + 11360));
  }
  if ( !v7 )
  {
    if ( result && sub_6078663C(a1 + 688) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 6902) & 4) != 0 )
      {
        *(_DWORD *)(a1 + 124) = *(_DWORD *)(20 * (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) + 0xB0BE6C);
      }
      else
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, 1);
        sub_6076FE18(a1);
      }
      sub_607AFBB0(a1);
    }
    result = sub_60793DA0(*(_DWORD *)(a1 + 11360));
    if ( result == 1 )
    {
      sub_607AABA0(a1, 0);
      *v8 = 1;
      result = *(_DWORD *)(a1 + 1224) & 0xFFFBFFFF;
      *(_DWORD *)(a1 + 1224) = result;
    }
  }
  return result;
}


/* STILL UNNAMED (next naming targets):
 *   0x0075fc38  sub_6075FC38
 *   0x0076fe18  sub_6076FE18
 *   0x007711c8  sub_607711C8
 *   0x007712d4  sub_607712D4
 *   0x00771d8c  sub_60771D8C
 *   0x00773f3c  sub_60773F3C
 *   0x0078663c  sub_6078663C
 *   0x00786670  sub_60786670
 *   0x00793184  sub_60793184
 *   0x00793ca8  sub_60793CA8
 *   0x00793da0  sub_60793DA0
 *   0x007948e8  sub_607948E8
 *   0x007aaba0  sub_607AABA0
 *   0x007afbb0  sub_607AFBB0
 */

/* ==========================================================================
 * loc_607AB0E4
 * RVA 0x007ab0e4   size 0x324   callers 1
 * ========================================================================== */
int __fastcall sub_607AAF80(int a1)
{
  float v1; // s0
  unsigned int *v3; // r2
  int result; // r0
  unsigned int v5; // r5
  unsigned int v6; // r1
  int v7; // r1
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r1

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  sub_60771D8C(a1);
  sub_607711C8(a1);
  v3 = (unsigned int *)(a1 + 1224);
  result = *(_DWORD *)(a1 + 6900) & 1;
  v5 = *v3 & 0xFFFFBE3B;
  if ( !result )
    v5 = *v3 | 0x41C4;
  *v3 = v5;
  v6 = *(_DWORD *)(a1 + 1320);
  if ( v6 > 6 || ((1 << v6) & 0x64) == 0 )
  {
    if ( !result )
    {
      v9 = 0;
      v10 = 13388804;
      v11 = a1;
      return Player_changeState(v11, v10, v9);
    }
    v10 = 13388732;
LABEL_35:
    v11 = a1;
    v9 = 1;
    return Player_changeState(v11, v10, v9);
  }
  v8 = (_DWORD *)(a1 + 9940);
  v7 = *(_DWORD *)(a1 + 9940);
  if ( v7 == 1 )
  {
    if ( sub_60786670(a1 + 688) != 1 )
      goto LABEL_25;
    v12 = *(_DWORD *)(a1 + 1320);
    if ( (unsigned int)(v12 - 5) >= 2 )
    {
      if ( v12 != 2 )
        goto LABEL_25;
      v15 = *(unsigned __int8 *)(a1 + 84);
      v16 = 0;
      if ( v15 < 4 )
        v16 = (char)v15;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v16 + 104) >= 2 )
      {
LABEL_25:
        if ( (*(_BYTE *)(a1 + 6900) & 1) != 0 )
        {
          result = sub_6075FC38(a1);
          if ( result )
            return result;
          sub_60793184(*(_DWORD *)(a1 + 11360));
          if ( v1 < 10.0 || *(float *)(a1 + 88) == 0.0 )
          {
            result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
            if ( result != 1 )
              return result;
          }
          v10 = 13388732;
        }
        else
        {
          sub_60793184(*(_DWORD *)(a1 + 11360));
          if ( v1 < 10.0 )
          {
            result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
            if ( result != 1 || *(float *)(a1 + 124) > 0.0 )
              return result;
          }
          v10 = 13388804;
        }
        goto LABEL_35;
      }
    }
    else
    {
      v13 = *(unsigned __int8 *)(a1 + 84);
      v14 = 0;
      if ( v13 < 4 )
        v14 = (char)v13;
      if ( *(int *)(MEMORY[0xC7B420] + 8 * v14 + 136) > 1 )
        goto LABEL_25;
    }
    v17 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 12048) = v17;
    *(_DWORD *)(a1 + 160) = sub_60773F3C(a1, v17);
    *v8 = 0;
    sub_607948E8(a1 + 11356, 33);
    return sub_60793114(*(_DWORD *)(a1 + 11360));
  }
  if ( !v7 )
  {
    if ( result && sub_6078663C(a1 + 688) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 6902) & 4) != 0 )
      {
        *(_DWORD *)(a1 + 124) = *(_DWORD *)(20 * (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) + 0xB0BE6C);
      }
      else
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, 1);
        sub_6076FE18(a1);
      }
      sub_607AFBB0(a1);
    }
    result = sub_60793DA0(*(_DWORD *)(a1 + 11360));
    if ( result == 1 )
    {
      sub_607AABA0(a1, 0);
      *v8 = 1;
      result = *(_DWORD *)(a1 + 1224) & 0xFFFBFFFF;
      *(_DWORD *)(a1 + 1224) = result;
    }
  }
  return result;
}


/* STILL UNNAMED (next naming targets):
 *   0x0075fc38  sub_6075FC38
 *   0x0076fe18  sub_6076FE18
 *   0x007711c8  sub_607711C8
 *   0x007712d4  sub_607712D4
 *   0x00771d8c  sub_60771D8C
 *   0x00773f3c  sub_60773F3C
 *   0x0078663c  sub_6078663C
 *   0x00786670  sub_60786670
 *   0x00793184  sub_60793184
 *   0x00793ca8  sub_60793CA8
 *   0x00793da0  sub_60793DA0
 *   0x007948e8  sub_607948E8
 *   0x007aaba0  sub_607AABA0
 *   0x007afbb0  sub_607AFBB0
 */

