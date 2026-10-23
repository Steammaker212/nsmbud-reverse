/* sub_608DEB0C
 * address: 0x608DEB0C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DEB0C(_DWORD *result, signed int a2, int a3)
{
  if ( a2 >= 1 )
  {
    if ( a3 )
    {
      *result = 0;
      result[1] = a2;
      result[2] = a3;
    }
  }
  return result;
}
