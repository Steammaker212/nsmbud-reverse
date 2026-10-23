/* sub_608B78E0
 * address: 0x608B78E0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608B78E0(_DWORD *a1)
{
  *a1 = off_60C5B058;
  a1[41] = off_60C5B090;
  a1[44] = off_60C5B0A4;
  sub_608B7B18(a1);
  *a1 = off_60C5B7B8;
  nn__os__FinalizeEvent(a1 + 1);
  operator_delete(a1);
}
