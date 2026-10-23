/* sub_604463A4
 * address: 0x604463A4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604463A4(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60BFAF6C;
  a1[4] = &off_60BFAFC8;
  sub_60954610(a1 + 1339);
  sub_60959BAC(a1 + 1224);
  sub_6095D730(a1 + 108);
  v2 = (void *)sub_60443614((int)a1);
  operator_delete(v2);
}
