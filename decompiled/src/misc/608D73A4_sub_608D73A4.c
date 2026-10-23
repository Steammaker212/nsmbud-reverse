/* sub_608D73A4
 * address: 0x608D73A4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D73A4(int a1)
{
  int *v2; // r0
  int *v3; // r0

  v2 = sub_608C4DF4();
  sub_608C5128(v2, a1);
  nn__os__WaitEvent(a1 + 1984);
  FIELD_U32(a1, 2020) = a1;
  v3 = sub_608C4DF4();
  return sub_608C4F14((int)v3, (_DWORD *)(a1 + 1972), 1);
}
