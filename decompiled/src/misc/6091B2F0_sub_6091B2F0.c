/* sub_6091B2F0
 * address: 0x6091B2F0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091B2F0(int a1, int a2)
{
  _DWORD *result; // r0
  int i; // r2
  int v4; // r1

  result = (_DWORD *)(*(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 24);
  if ( a2 >= 1 )
  {
    for ( i = 0; (a2 & 3) != i; result = (_DWORD *)((char *)result + *result) )
      ++i;
    if ( (unsigned int)(a2 - 1) >= 3 )
    {
      v4 = a2 - i;
      do
      {
        v4 -= 4;
        result = (_DWORD *)((char *)result
                          + *result
                          + *(_DWORD *)((char *)result + *result)
                          + *(_DWORD *)((char *)result + *result + *(_DWORD *)((char *)result + *result))
                          + *(_DWORD *)((char *)result
                                      + *result
                                      + *(_DWORD *)((char *)result + *result)
                                      + *(_DWORD *)((char *)result + *result + *(_DWORD *)((char *)result + *result))));
      }
      while ( v4 );
    }
  }
  return result;
}
