/* sub_60815858
 * address: 0x60815858   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60815858(_DWORD *result, int a2)
{
  unsigned int v2; // r3
  int v3; // r2
  unsigned __int8 v4; // lr
  unsigned int v5; // r0

  v2 = result[5];
  if ( v2 - 8 >= 9 )
  {
    result[9] = a2;
    if ( a2 == 3 )
    {
      v3 = 0;
      v4 = 2;
      if ( v2 <= 7 && ((1 << v2) & 0xD0) != 0 )
      {
        v5 = result[4];
        if ( v5 > 0x1D )
        {
          v3 = 120;
        }
        else if ( ((1 << v5) & 0x260E0000) == 0 )
        {
          v3 = 120;
        }
      }
    }
    else
    {
      v3 = 0;
      v4 = 1;
      if ( (v2 | 2) == 6 )
        v3 = 60;
      if ( v2 == 7 )
        v3 = 60;
    }
    return (_DWORD *)sub_6080C0EC(dword_60CC6B0C, v4, v3, 0);
  }
  return result;
}
