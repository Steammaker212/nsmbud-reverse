/* sub_60401A20
 * address: 0x60401A20   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60401A20(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BF9A18;
  v2 = a1 + 5;
  sub_6052AD9C(a1 + 1177);
  sub_6052586C(v2);
  operator_delete(a1);
}
