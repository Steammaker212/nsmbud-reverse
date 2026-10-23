/* sub_604B0128
 * address: 0x604B0128   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B0128(int a1)
{
  int result; // r0
  int v3; // r0
  int *v4; // r6
  int v5; // r1
  int v6; // r1
  _DWORD *v7; // r1
  _DWORD *v8; // r4
  int v9; // t1
  int v10; // r1
  int v11; // r1

  result = FIELD_U8(a1, 38103);
  if ( !result )
  {
    LOBYTE(v3) = 1;
    if ( !FIELD_U8(a1, 38089) )
      v3 = FIELD_U8(a1, 38090) | (FIELD_U32(dword_60C99DD4, 1376) >> 3) & 1;
    FIELD_U8(a1, 4653) = v3;
    v4 = (int *)(a1 + 4636);
    result = FIELD_U32(a1, 4636);
    if ( FIELD_U8(a1, 4650) )
    {
      if ( (unsigned int)(result - 4) <= 2 )
        FIELD_U32(a1, 38068) = result;
      return result;
    }
    if ( FIELD_U8(a1, 4651) )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19D4);
    v5 = FIELD_U32(a1, 5692);
    if ( (v5 & 0xC00) != 0 )
    {
      sub_60402084(dword_60C99E68, FIELD_U32(a1, 4644));
      *v4 = 8;
      sub_60502694(a1 + 3608);
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19D4);
    }
    if ( (v5 & 0x2000) != 0 )
    {
      sub_60502694(a1 + 3608);
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19D4);
    }
    if ( !FIELD_U8(a1, 4654) )
    {
      switch ( result )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          if ( (v5 & 0x20) != 0 )
          {
            v9 = FIELD_U32(a1, 38068);
            v8 = (_DWORD *)(a1 + 38068);
            result = v9;
            if ( (unsigned int)(v9 - 4) >= 3 )
            {
              result = 4;
              *v8 = 4;
            }
            *v4 = result;
          }
          else if ( (v5 & 0x80) != 0 )
          {
            if ( result <= 0 )
              result = 0;
            if ( (unsigned int)result < 3 )
            {
              v6 = dword_60B02EA8[result];
              if ( !*(_BYTE *)(a1 + v6 + 4108) )
              {
                if ( (unsigned int)(result + 1) >= 3 )
                  return result;
                v6 = dword_60B02EA8[result + 1];
                if ( !*(_BYTE *)(a1 + v6 + 4108) )
                {
                  result += 2;
                  if ( (unsigned int)result > 2 )
                    return result;
                  v7 = dword_60B02EA8;
                  goto LABEL_64;
                }
              }
LABEL_51:
              *v4 = v6;
              return result;
            }
          }
          else if ( (v5 & 0x40) != 0 )
          {
            result = 3 - result;
            if ( result <= 0 )
              result = 0;
            if ( (unsigned int)result < 3 )
            {
              v6 = dword_60B02EB4[result];
              if ( !*(_BYTE *)(a1 + v6 + 4108) )
              {
                if ( (unsigned int)(result + 1) >= 3 )
                  return result;
                v6 = dword_60B02EB4[result + 1];
                if ( !*(_BYTE *)(a1 + v6 + 4108) )
                {
                  result += 2;
                  if ( (unsigned int)result > 2 )
                    return result;
                  v7 = dword_60B02EB4;
LABEL_64:
                  v11 = v7[result];
                  result = *(unsigned __int8 *)(a1 + v11 + 4108);
                  if ( *(_BYTE *)(a1 + v11 + 4108) )
                    *v4 = v11;
                  return result;
                }
              }
              goto LABEL_51;
            }
          }
          break;
        case 4:
          if ( (v5 & 0x80) != 0 )
            goto LABEL_52;
          result = FIELD_U32(a1, 38080);
          if ( result >= 2 )
          {
            result = FIELD_U32(a1, 5692) & 0x10;
            if ( (v5 & 0x10) != 0 )
            {
              v10 = 4;
              goto LABEL_43;
            }
          }
          return result;
        case 5:
          if ( (v5 & 0x40) != 0 )
          {
            *v4 = 4;
            return 4;
          }
          else if ( (v5 & 0x80) != 0 )
          {
            *v4 = 6;
            return 6;
          }
          else
          {
            result = FIELD_U32(a1, 38080);
            if ( result >= 2 )
            {
              result = FIELD_U32(a1, 5692) & 0x10;
              if ( (v5 & 0x10) != 0 )
              {
                v10 = 5;
                goto LABEL_43;
              }
            }
          }
          return result;
        case 6:
          if ( (v5 & 0x40) != 0 )
          {
LABEL_52:
            *v4 = 5;
            return 5;
          }
          else
          {
            result = FIELD_U32(a1, 38080);
            if ( result >= 2 )
            {
              result = FIELD_U32(a1, 5692) & 0x10;
              if ( (v5 & 0x10) != 0 )
              {
                v10 = 6;
LABEL_43:
                FIELD_U32(a1, 38068) = v10;
                if ( FIELD_U8(a1, 4108) )
                {
                  *v4 = 0;
                  return 0;
                }
                else if ( FIELD_U8(a1, 4109) )
                {
                  *v4 = 1;
                  return 1;
                }
                else if ( FIELD_U8(a1, 4110) )
                {
                  *v4 = 2;
                  return 2;
                }
                else
                {
                  result = FIELD_U8(a1, 4111);
                  if ( FIELD_U8(a1, 4111) )
                  {
                    *v4 = 3;
                    return 3;
                  }
                }
              }
            }
          }
          return result;
        default:
          return result;
      }
    }
  }
  return result;
}
