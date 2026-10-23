/* sub_608D30AC
 * address: 0x608D30AC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608D30AC(_DWORD *a1)
{
  *a1 = off_60C5B740;
  a1[41] = off_60C5B770;
  sub_608D3188(a1);
  *a1 = off_60C5B7B8;
  nn__os__FinalizeEvent(a1 + 1);
  operator_delete(a1);
}
