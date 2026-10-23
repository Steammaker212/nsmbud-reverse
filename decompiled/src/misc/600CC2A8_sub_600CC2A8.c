/* sub_600CC2A8
 * address: 0x600CC2A8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600CC2A8(_DWORD *result, int a2, _DWORD *a3)
{
  int v3; // r3

  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    v3 = 0;
    *result = 0;
  }
  else
  {
    v3 = dword_60AF5B70[a2 - 1];
    *result = v3;
    if ( a2 == 1 )
    {
      *result = v3 - *a3;
      return result;
    }
  }
  *result = *a3 + v3;
  return result;
}
