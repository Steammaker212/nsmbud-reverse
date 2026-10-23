/* sub_607F6E74
 * address: 0x607F6E74   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F6E74(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  *a1 = off_60C278B0;
  v2 = a1 + 142;
  sub_60954610(a1 + 4770);
  sub_60954610(a1 + 4753);
  sub_60954610(a1 + 4736);
  sub_60954610(a1 + 4719);
  sub_6051933C(v2);
  v3 = (void *)sub_607E3494((int)a1);
  operator_delete(v3);
}
