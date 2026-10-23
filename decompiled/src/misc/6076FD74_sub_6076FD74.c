/* sub_6076FD74
 * address: 0x6076FD74   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6076FD74(_DWORD *result)
{
  int v1; // r1

  v1 = result[302];
  if ( (v1 & 0x800000) != 0 )
  {
    result[302] = v1 & 0xFF7FFFFF;
    result[27] = result[2501];
    result[28] = result[2502];
  }
  return result;
}
