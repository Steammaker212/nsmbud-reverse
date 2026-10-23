/* sub_607EC148
 * address: 0x607EC148   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EC148(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C26DA4;
  v2 = a1 + 57;
  sub_604E36DC(a1 + 74);
  sub_60954610(v2);
  return sead__CalculateTask__dtor(a1);
}
