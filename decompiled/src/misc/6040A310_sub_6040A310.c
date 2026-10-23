/* sub_6040A310
 * address: 0x6040A310   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040A310(int a1, int a2)
{
  int result; // r0
  _BYTE *v4; // r5
  int v5; // r0
  unsigned int v6; // r2
  _DWORD *v7; // r1
  char v8; // r3
  _DWORD *v9; // lr
  int v10; // t1
  int v11; // r2
  bool v12; // zf

  v4 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    FIELD_U8(a1, 6539) = 1;
    result = FIELD_U8(a1, 6476);
    if ( result == 9 )
    {
      v10 = FIELD_U8(a1, 6478);
      FIELD_U8(a1, 6478) = v10 + 1;
      return v10 + 1;
    }
    else if ( result == 5 )
    {
      result = a1 + 6478;
      v11 = FIELD_U8(a1, 6478);
      if ( v11 == 15 )
      {
        *v4 = 2;
        return 2;
      }
      else if ( v11 == 11 )
      {
        FIELD_U8(a1, 6529) = 1;
        return 6529;
      }
      else
      {
        v12 = v11 == 0;
        if ( !FIELD_U8(a1, 6478) )
        {
          result = FIELD_U8(a1, 6479);
          v12 = result == a2;
        }
        if ( v12 )
        {
          *v4 = 3;
          return 3;
        }
      }
    }
    else if ( !FIELD_U8(a1, 6476) )
    {
      result = FIELD_U8(a1, 6478);
      if ( result == 9 )
      {
        result = FIELD_U8(a1, 6540);
        if ( FIELD_U8(a1, 6540) )
        {
          v5 = dword_60C99DE4;
          ++FIELD_U32(dword_60C99DE4, 16);
          v6 = (int)(float)(sub_603FC760(v5) * 100.0);
          if ( (int)v6 <= 0 )
            v6 = 0;
          FIELD_U32(a1, 6504) = v6;
          result = a1 + 6504;
          v7 = *(_DWORD **)(a1 + 6472);
          if ( v7 )
          {
            v8 = 2;
            if ( 100 * v7[23] >= v6 || (v8 = 1, 100 * v7[22] >= v6) || (v9 = v7 + 21, v8 = 0, 100 * v7[21] >= v6) )
            {
              *v4 = 2;
              FIELD_U8(a1, 6560) = v8;
              return 6560;
            }
            else
            {
              *v4 = 2;
              FIELD_U8(a1, 6560) = 0;
              if ( FIELD_U8(a1, 6476) )
                v9 = v7 + 14;
              *(_DWORD *)result = *v9;
            }
          }
          else
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = 0;
            *(_DWORD *)result = 500;
          }
        }
      }
    }
  }
  return result;
}
