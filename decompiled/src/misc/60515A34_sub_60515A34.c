/* sub_60515A34
 * address: 0x60515A34   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60515A34(_BYTE *result, _DWORD *a2)
{
  _DWORD *v2; // r0

  if ( result[29972] )
  {
    if ( (result[14973] || (result[44] & 1) != 0) && result[14976] )
    {
      v2 = result + 48;
      return (_BYTE *)sub_60473B88(v2, a2, 0);
    }
  }
  else if ( (result[29957] || (result[15028] & 1) != 0) && result[29960] )
  {
    v2 = result + 15032;
    return (_BYTE *)sub_60473B88(v2, a2, 0);
  }
  return result;
}
