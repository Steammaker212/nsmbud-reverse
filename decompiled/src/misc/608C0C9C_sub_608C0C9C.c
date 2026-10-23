/* sub_608C0C9C
 * address: 0x608C0C9C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C0C9C(_DWORD *result, unsigned int a2, int a3)
{
  int v3; // lr
  int v4; // r3
  bool v5; // cc

  if ( a2 )
  {
    v3 = result[250];
    if ( v3 >= 1 )
    {
      result += 13575;
      v4 = 1;
      do
      {
        if ( (a2 & 1) != 0 )
          *result = a3;
        if ( !(a2 >> 1) )
          break;
        v5 = v4 < v3;
        result += 28;
        a2 >>= 1;
        ++v4;
      }
      while ( v5 );
    }
  }
  return result;
}
