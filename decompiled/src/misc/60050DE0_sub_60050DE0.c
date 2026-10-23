/* sub_60050DE0
 * address: 0x60050DE0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60050DE0(_DWORD *result)
{
  int v1; // r1

  v1 = result[1774];
  if ( result[20] )
    v1 = -v1;
  result[40] = v1;
  return result;
}
