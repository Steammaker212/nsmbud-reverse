/* sub_60907FE0
 * address: 0x60907FE0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60907FE0(_DWORD *a1)
{
  *a1 = off_60C5CDA8;
  nn__os__FinalizeLightEvent(a1 + 4);
  return sead__IDisposer__dtor(a1);
}
