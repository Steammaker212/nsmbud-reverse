/* sub_604FB454
 * address: 0x604FB454   size: 1492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604FB454(int a1)
{
  _BYTE *v2; // r4
  _BYTE *v3; // r5
  unsigned int result; // r0
  int v5; // r7
  int *v6; // r9
  int v7; // r0
  int *v8; // r11
  int *v9; // r1
  StateMgr *v10; // r0
  int v11; // r2
  _DWORD *v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r1
  unsigned int v18; // r3
  unsigned int v19; // r3
  int v20; // r2

  v2 = (_BYTE *)(a1 + 40113);
  v3 = (_BYTE *)(a1 + 36555);
  if ( FIELD_U8(a1, 40113) )
  {
    *v3 = 1;
    return 1;
  }
  *v3 = 0;
  result = FIELD_U8(a1, 36550);
  if ( !FIELD_U8(a1, 36550) )
  {
    v5 = FIELD_U32(a1, 36536);
    v6 = (int *)(a1 + 40088);
    switch ( v5 )
    {
      case 0:
        v7 = 0;
        if ( *v6 )
          goto LABEL_21;
        break;
      case 1:
        v7 = 1;
        if ( *v6 != 1 )
          goto LABEL_21;
        break;
      case 2:
        v7 = 2;
        if ( *v6 != 2 )
          goto LABEL_21;
        break;
      case 3:
        v7 = 3;
        if ( *v6 != 3 )
          goto LABEL_21;
        break;
      case 4:
        v7 = 4;
        if ( *v6 != 4 )
          goto LABEL_21;
        break;
      case 5:
        v7 = 5;
        if ( *v6 != 5 )
          goto LABEL_21;
        break;
      case 6:
        v7 = 6;
        if ( *v6 != 6 )
          goto LABEL_21;
        break;
      case 7:
        v7 = 7;
        if ( *v6 != 7 )
LABEL_21:
          *v6 = v7;
        break;
      case 8:
        if ( *v6 != 8 )
          *v6 = 8;
        break;
      default:
        break;
    }
    v8 = (int *)(a1 + 40080);
    sub_604FDEF8(a1, FIELD_U32(a1, 40080));
    if ( FIELD_U8(a1, 36551) )
    {
      if ( (v5 | 1) != 0x13 )
      {
        result = 9 * *v8 + *v6;
        if ( (int)result <= 53 )
        {
          v13 = a1;
          if ( result < 0x36 )
            v13 = a1 + result;
          if ( FIELD_U8(v13, 40014) )
          {
            sub_60807FC0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1048577);
            FIELD_U16(a1, 36560) = 0;
            sub_6047EABC((_DWORD *)(a1 + 35548));
            FIELD_U8(a1, 36551) = 0;
            result = 36548;
          }
          else
          {
            sub_60807FC0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1048577);
            StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA7178);
            result = 40114;
          }
          *(_BYTE *)(a1 + result) = 1;
        }
        return result;
      }
      FIELD_U8(a1, 40100) = v5 != 18;
      FIELD_U8(a1, 40103) = 1;
      v9 = &dword_60CA7158;
      v10 = (StateMgr *)(a1 + 24);
    }
    else
    {
      result = FIELD_U8(a1, 36554);
      if ( FIELD_U8(a1, 36554) )
        return result;
      result = FIELD_U32(a1, 40076);
      if ( !*v2 )
      {
        v14 = FIELD_U32(a1, 40076);
        if ( result >= 5 )
          v14 = 0;
        v15 = *(_DWORD *)(a1 + 404 * v14 + 37772);
        if ( (v15 & 0x2000) != 0 )
          return sub_60502694(v2 - 4605);
        if ( (v15 & 0x4000) != 0 )
        {
          *v3 = 1;
          sub_60402084(dword_60C99E68, FIELD_U32(a1, 36544));
          FIELD_U8(a1, 40102) = 1;
          StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA71B8);
          return sub_60807FC0(SoundSystem_instance, "SE_SYS_BACK", 0, 1048577);
        }
      }
      if ( result >= 5 )
        result = 0;
      v11 = *(_DWORD *)(a1 + 404 * result + 37780) | *(_DWORD *)(a1 + 404 * result + 37772);
      if ( (v11 & 0x10) != 0 )
      {
        FIELD_U32(a1, 37588) = 16;
        result = *v6;
        v16 = dword_60B035FC[*v6];
        if ( v16 == *v6 )
          return result;
        v17 = *v8;
        v18 = 9 * *v8 + v16;
        if ( v18 > 0x35 )
          return result;
      }
      else if ( (v11 & 0x20) != 0 )
      {
        FIELD_U32(a1, 37588) = 32;
        result = *v6;
        v16 = dword_60B03620[*v6];
        if ( v16 == *v6 )
          return result;
        v17 = *v8;
        v18 = 9 * *v8 + v16;
        if ( v18 > 0x35 )
          return result;
      }
      else if ( (v11 & 0x40) != 0 )
      {
        FIELD_U32(a1, 37588) = 64;
        result = *v6;
        v16 = dword_60B03644[*v6];
        v17 = *v8;
        v18 = 9 * *v8 + v16;
        if ( v18 > 0x35 )
          return result;
      }
      else
      {
        v12 = (_DWORD *)(a1 + 37588);
        if ( (v11 & 0x80) == 0 )
        {
          if ( *v12 != 0x7FFFF )
          {
            result = *(_DWORD *)(a1 + 404 * result + 38040);
            if ( (result & *v12) == 0 )
              *v12 = 0x7FFFF;
          }
          return result;
        }
        *v12 = 128;
        result = *v6;
        v16 = dword_60B03668[*v6];
        v17 = *v8;
        v18 = 9 * *v8 + v16;
        if ( v18 > 0x35 )
          return result;
      }
      v19 = *(_DWORD *)(dword_60C99E1C + 4 * v18 + 16);
      if ( v19 > 0x35 || !*(_DWORD *)(dword_60C99E1C + 4424 * v19 + 236) || v16 < 0 )
        return result;
      if ( result != v16 )
      {
        if ( (unsigned int)v16 > 8 )
          v16 = 0;
        *v6 = v16;
        result = dword_60B035D8[v16];
        FIELD_U32(a1, 36536) = result;
        return result;
      }
      v20 = FIELD_U32(a1, 40084);
      if ( !v17 && (v20 == 1 || result <= 6 && ((1 << result) & 0x49) != 0)
        || v17 == v20 - 1 && result <= 8 && ((1 << result) & 0x124) != 0 )
      {
        return result;
      }
      FIELD_U8(a1, 40100) = result != 6 && result != 0 && result != 3;
      FIELD_U8(a1, 40103) = 0;
      v10 = (StateMgr *)(a1 + 24);
      if ( FIELD_U32(a1, 40104) == 1 )
        v9 = &dword_60CA7138;
      else
        v9 = &dword_60CA7158;
    }
    return (unsigned int)StateMgr__changeState(v10, (StateBase *)v9);
  }
  return result;
}
