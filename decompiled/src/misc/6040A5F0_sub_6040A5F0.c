/* sub_6040A5F0
 * address: 0x6040A5F0   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6040A5F0(int a1, unsigned int a2)
{
  unsigned int result; // r0
  _BYTE *v5; // r6
  bool v6; // zf
  int v7; // r0
  unsigned int v8; // r2
  _DWORD *v9; // r1
  char v10; // r3
  _DWORD *v11; // r5

  v5 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    FIELD_U32(a1, 6500) = a2;
    if ( FIELD_U8(a1, 6528) )
    {
LABEL_3:
      result = 3;
      *v5 = 3;
      return result;
    }
    if ( FIELD_U8(a1, 6534) && ((int (__fastcall *)(int))loc_60583CD4)(dword_60CAF15C) <= 0 )
      FIELD_U8(a1, 6535) = 1;
    if ( FIELD_U32(a1, 6492) <= a2 )
      FIELD_U8(a1, 6540) = 1;
    result = FIELD_U8(a1, 6476);
    if ( result == 2 )
    {
      result = FIELD_U16(a1, 6478);
      if ( result >= a2 )
        return result;
      goto LABEL_3;
    }
    if ( !FIELD_U8(a1, 6476) )
    {
      result = FIELD_U8(a1, 6478);
      if ( result != 9 )
      {
        if ( result != 2 )
          return result;
        result = FIELD_U8(a1, 6540);
        if ( !FIELD_U8(a1, 6540) )
          return result;
        goto LABEL_21;
      }
      result = FIELD_U8(a1, 6540);
      v6 = result == 0;
      if ( FIELD_U8(a1, 6540) )
      {
        result = FIELD_U8(a1, 6539);
        v6 = result == 0;
      }
      if ( !v6 )
      {
LABEL_21:
        v7 = dword_60C99DE4;
        ++FIELD_U32(dword_60C99DE4, 16);
        v8 = (int)(float)(sub_603FC760(v7) * 100.0);
        if ( (int)v8 <= 0 )
          v8 = 0;
        FIELD_U32(a1, 6504) = v8;
        result = a1 + 6504;
        v9 = *(_DWORD **)(a1 + 6472);
        if ( v9 )
        {
          v10 = 2;
          if ( 100 * v9[23] >= v8 || (v10 = 1, 100 * v9[22] >= v8) || (v11 = v9 + 21, v10 = 0, 100 * v9[21] >= v8) )
          {
            *v5 = 2;
            FIELD_U8(a1, 6560) = v10;
            return 6560;
          }
          else
          {
            *v5 = 2;
            FIELD_U8(a1, 6560) = 0;
            if ( FIELD_U8(a1, 6476) )
              v11 = v9 + 14;
            *(_DWORD *)result = *v11;
          }
        }
        else
        {
          *v5 = 2;
          FIELD_U8(a1, 6560) = 0;
          *(_DWORD *)result = 500;
        }
      }
    }
  }
  return result;
}
