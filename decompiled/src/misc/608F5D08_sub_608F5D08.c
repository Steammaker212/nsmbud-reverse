/* sub_608F5D08
 * address: 0x608F5D08   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F5D08(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5C8B8;
  a1[6] = &off_60C5C934;
  sub_608F9760(a1);
  v2 = (void *)sub_608F96EC(a1);
  operator_delete(v2);
}
