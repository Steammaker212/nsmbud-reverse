/* sub_604097D0
 * address: 0x604097D0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604097D0(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  unsigned int v4; // r2
  _DWORD *v5; // r1
  char v6; // r3
  _DWORD *v7; // lr

  v3 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    if ( FIELD_U8(a1, 6549) )
    {
      v4 = (int)(float)(sub_603FC760(dword_60C99DE4) * 100.0);
      if ( (int)v4 <= 0 )
        v4 = 0;
      FIELD_U32(a1, 6504) = v4;
      result = a1 + 6504;
      v5 = *(_DWORD **)(a1 + 6472);
      if ( v5 )
      {
        v6 = 2;
        if ( 100 * v5[23] >= v4 || (v6 = 1, 100 * v5[22] >= v4) || (v7 = v5 + 21, v6 = 0, 100 * v5[21] >= v4) )
        {
          *v3 = 2;
          FIELD_U8(a1, 6560) = v6;
          return 6560;
        }
        else
        {
          *v3 = 2;
          FIELD_U8(a1, 6560) = 0;
          if ( FIELD_U8(a1, 6476) )
            v7 = v5 + 14;
          *(_DWORD *)result = *v7;
        }
      }
      else
      {
        *v3 = 2;
        FIELD_U8(a1, 6560) = 0;
        *(_DWORD *)result = 500;
      }
    }
    else
    {
      result = FIELD_U8(a1, 6476);
      if ( result == 5 )
      {
        result = FIELD_U8(a1, 6478);
        if ( result == 1 )
        {
          *v3 = 2;
          FIELD_U8(a1, 6560) = 2;
          result = 6504;
          FIELD_U32(a1, 6504) = 0;
        }
      }
    }
  }
  return result;
}
