/* sub_6082D730
 * address: 0x6082D730   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6082D730(_DWORD *result, int a2)
{
  int v2; // r1
  int v3; // r1
  unsigned int v4; // r2
  _DWORD *v5; // r3

  v2 = FIELD_U32(a2, 64);
  if ( (unsigned int)FIELD_U8(v2, 533) - 1 <= 1 )
  {
    result = (_DWORD *)result[16];
    if ( result[1526] == -1 )
    {
      v3 = FIELD_S8(v2, 84);
      v5 = result + 1525;
      v4 = result[1525];
      if ( v4 >= 4 )
        v4 = 0;
      result[v4 + 1527] = v3;
      result = (_DWORD *)(*v5 + 1);
      *v5 = result;
    }
  }
  return result;
}
