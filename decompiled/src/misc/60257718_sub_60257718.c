/* sub_60257718
 * address: 0x60257718   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60257718(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BDAB98;
  a1[19] = EffectWrapper_vtable;
  v2 = a1 + 19;
  sub_60237560((int)(a1 + 19));
  sead__IDisposer__dtor(v2);
  operator_delete(a1);
}
