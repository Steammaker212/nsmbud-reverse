/* sub_603FC57C
 * address: 0x603FC57C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FC57C(int a1, int a2, int a3)
{
  unsigned int result; // r0
  bool v5; // zf
  unsigned int v6; // r1
  unsigned int v7; // r0

  result = dword_60C995D0;
  v5 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
  {
    result = FIELD_U32(dword_60C995D0, 32);
    v5 = result == 0;
  }
  if ( v5 )
  {
    result = FIELD_U32(a1, 16);
    if ( !result )
    {
      result = FIELD_U8(a1, 29);
      if ( !FIELD_U8(a1, 29) )
      {
        v6 = 92;
        v7 = FIELD_U32(a1, 20);
        if ( FIELD_U8(dword_60CC6D8C, 17) )
          v6 = 68;
        if ( v7 <= v6 )
        {
          FIELD_U32(a1, 20) = 0;
          result = FIELD_U8(a1, 28);
          if ( FIELD_U8(a1, 28) )
            return result;
          goto LABEL_16;
        }
        a3 = FIELD_U8(dword_60C99DD4, 732);
        if ( FIELD_U8(dword_60C99DD4, 732) )
        {
          v7 -= v6;
          FIELD_U32(a1, 20) = v7;
        }
        result = v7 + 4095;
        if ( FIELD_U8(a1, 28) )
        {
          if ( result < 0x65000 )
            return result;
          sub_60816F60(dword_60CC6B68, 16);
          result = 0;
          goto LABEL_17;
        }
        result >>= 12;
        if ( result <= 0x64 )
        {
LABEL_16:
          sub_60816D48(dword_60CC6B68, 16, a3);
          result = 1;
LABEL_17:
          FIELD_U8(a1, 28) = result;
        }
      }
    }
  }
  return result;
}
