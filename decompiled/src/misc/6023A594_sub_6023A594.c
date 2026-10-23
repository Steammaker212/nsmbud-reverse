/* sub_6023A594
 * address: 0x6023A594   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023A594(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60BD9608;
  sead__CriticalSection__dtor(a1 + 1828);
  v2 = (void *)sub_6088F868(a1);
  operator_delete(v2);
}
