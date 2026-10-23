/* sub_6047F0B0
 * address: 0x6047F0B0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047F0B0(_DWORD *result, int a2)
{
  _DWORD *v2; // r3
  int v3; // r12
  int v4; // r1
  char *v5; // r2

  v2 = (_DWORD *)result[4];
  if ( v2 != result + 3 )
  {
    v3 = result[6];
    v4 = a2 + 1;
    v5 = (char *)v2 - v3;
    while ( --v4 >= 1 )
    {
      v2 = (_DWORD *)v2[1];
      v5 = (char *)v2 - v3;
      if ( (char *)v2 - v3 == (char *)result - v3 + 12 )
        return result;
    }
    if ( v5 )
    {
      if ( *((_DWORD *)v5 + 41) == 4 )
      {
        result[2] = 0;
        v5[168] = 0;
        result[8] = 0;
      }
      return (_DWORD *)sub_60478440(v5);
    }
  }
  return result;
}
