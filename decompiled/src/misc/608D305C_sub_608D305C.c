/* sub_608D305C
 * address: 0x608D305C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D305C(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r4

  *(a1 - 41) = off_60C5B740;
  v1 = a1 - 41;
  *a1 = off_60C5B770;
  v2 = a1 - 40;
  sub_608D3188(a1 - 41);
  *v1 = off_60C5B7B8;
  return nn__os__FinalizeEvent(v2);
}
