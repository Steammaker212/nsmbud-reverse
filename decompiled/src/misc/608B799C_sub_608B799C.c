/* sub_608B799C
 * address: 0x608B799C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608B799C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *(a1 - 44) = off_60C5B058;
  v2 = a1 - 44;
  *(a1 - 3) = off_60C5B090;
  *a1 = off_60C5B0A4;
  sub_608B7B18(a1 - 44);
  *v2 = off_60C5B7B8;
  nn__os__FinalizeEvent(a1 - 43);
  operator_delete(v2);
}
