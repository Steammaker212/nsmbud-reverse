/* sub_608CA470
 * address: 0x608CA470   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608CA470(_DWORD *result, int a2)
{
  _DWORD *v2; // r12
  int v3; // r3

  if ( (int)result[100] >= 1 )
  {
    v2 = result + 42;
    v3 = 0;
    do
    {
      *v2 = a2;
      v2 += 50;
      ++v3;
    }
    while ( v3 < result[100] );
    result[139] = a2;
  }
  return result;
}
