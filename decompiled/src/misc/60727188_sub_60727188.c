/* sub_60727188
 * address: 0x60727188   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60727188(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C21DAC;
  v2 = a1 + 11;
  nullsub_111(a1 + 54);
  nullsub_113(v2);
  return sead__IDisposer__dtor(a1);
}
