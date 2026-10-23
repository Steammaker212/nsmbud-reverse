/* sub_6099EBC0
 * address: 0x6099EBC0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6099EBC0(_DWORD *result)
{
  int v1; // r2
  int v2; // r3
  _DWORD *v3; // r1
  unsigned int v4; // [sp+0h] [bp-Ch]

  result[20] = 5;
  v1 = result[24];
  if ( v1 >= 1 )
  {
    v2 = 0;
    do
    {
      v4 = v2++;
      v3 = (_DWORD *)result[25];
      if ( v1 > v4 )
        v3 += v4;
      *v3 = 0;
      v1 = result[24];
    }
    while ( v2 < v1 );
  }
  result[30] = 0;
  result[31] = 0;
  result[3] = 0;
  return result;
}
