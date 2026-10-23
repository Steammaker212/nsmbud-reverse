/* sub_60986D00
 * address: 0x60986D00   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60986D00(_DWORD *result, int a2, signed int a3)
{
  _DWORD *v4; // r6
  unsigned int v5; // r0
  int v6; // r2
  int v7; // kr00_4
  unsigned int v8; // r3
  _DWORD *v9; // r2

  v4 = result;
  if ( a3 >= 1 )
  {
    v7 = 8 * a3;
    v6 = (unsigned int)a3 >> 29;
    v5 = v7;
    if ( !is_mul_ok(8u, a3) )
      v6 = 1;
    if ( v6 )
      v5 = -1;
    result = (_DWORD *)sub_608DE334(v5, a2, 4);
    if ( result )
    {
      v8 = (unsigned int)(8 * a3 - 8) >> 3;
      if ( ((8 * a3 - 8) & 8) != 0 )
      {
        v9 = result;
        if ( !v8 )
        {
LABEL_12:
          v4[9] = a3;
          v4[10] = result;
          return result;
        }
      }
      else
      {
        *result = -1;
        v9 = result + 2;
        result[1] = -1;
        if ( !v8 )
          goto LABEL_12;
      }
      do
      {
        *v9 = -1;
        v9[1] = -1;
        v9[2] = -1;
        v9[3] = -1;
        v9 += 4;
      }
      while ( v9 != &result[2 * a3] );
      goto LABEL_12;
    }
  }
  return result;
}
