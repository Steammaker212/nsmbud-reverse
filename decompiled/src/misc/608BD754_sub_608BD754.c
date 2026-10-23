/* sub_608BD754
 * address: 0x608BD754   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608BD754(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r4

  *(a1 - 41) = off_60C5B20C;
  v1 = a1 - 41;
  *a1 = off_60C5B23C;
  v2 = a1 - 40;
  sub_608BDC1C(a1 - 41);
  *v1 = off_60C5B7B8;
  nn__os__FinalizeEvent(v2);
  operator_delete(v1);
}
