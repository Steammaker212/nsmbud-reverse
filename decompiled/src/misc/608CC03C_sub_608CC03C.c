/* sub_608CC03C
 * address: 0x608CC03C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC03C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *(a1 - 44) = off_60C5B420;
  v2 = a1 - 44;
  *(a1 - 3) = off_60C5B454;
  *a1 = off_60C5B468;
  sub_608CC238(a1 - 44);
  *v2 = off_60C5B7B8;
  return nn__os__FinalizeEvent(a1 - 43);
}
