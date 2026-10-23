/* sub_608C0CF0
 * address: 0x608C0CF0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C0CF0(_DWORD *result, unsigned int a2)
{
  int v2; // r2
  int v3; // r3
  bool v4; // cc

  if ( a2 )
  {
    v2 = result[250];
    if ( v2 >= 1 )
    {
      result += 13575;
      v3 = 1;
      do
      {
        if ( (a2 & 1) != 0 )
          *result = -1;
        if ( !(a2 >> 1) )
          break;
        v4 = v3 < v2;
        result += 28;
        a2 >>= 1;
        ++v3;
      }
      while ( v4 );
    }
  }
  return result;
}
