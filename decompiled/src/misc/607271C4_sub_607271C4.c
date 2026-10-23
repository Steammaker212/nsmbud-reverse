/* sub_607271C4
 * address: 0x607271C4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607271C4(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60C21DAC;
  v2 = a1 + 11;
  nullsub_111(a1 + 54);
  nullsub_113(v2);
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
