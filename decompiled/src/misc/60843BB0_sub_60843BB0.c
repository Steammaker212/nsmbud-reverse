/* sub_60843BB0
 * address: 0x60843BB0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_60843BB0(_WORD *result, unsigned int *a2, unsigned int a3)
{
  unsigned int i; // r2
  unsigned int v4; // r6
  unsigned int v5; // r8
  int v6; // r5
  __int16 v7; // r6
  int v8; // r9

  if ( a3 >> 2 )
  {
    for ( i = a3 >> 2; i; --i )
    {
      v4 = *a2;
      v5 = *a2 & 0x7F800000;
      v6 = HIWORD(*a2) & 0x8000;
      if ( v5 == 2139095040 )
      {
        if ( (v4 & 0x7FFFFF) != 0 )
        {
          if ( (v4 & 0x7FFFFF) > 0x3FFFFF )
          {
            v6 = HIWORD(v4);
            v7 = 0x7FFF;
          }
          else
          {
            v7 = 32255;
          }
          LOWORD(v6) = v6 | v7;
          goto LABEL_13;
        }
      }
      else
      {
        v8 = (v5 >> 23) - 112;
        if ( v8 < 31 )
        {
          if ( v5 >= 0x38000001 )
            v6 |= (v4 >> 13) & 0x3FF | (v8 << 10) & 0x7C00;
          goto LABEL_13;
        }
      }
      LOWORD(v6) = v6 | 0x7C00;
LABEL_13:
      *result++ = v6;
      ++a2;
    }
  }
  return result;
}
