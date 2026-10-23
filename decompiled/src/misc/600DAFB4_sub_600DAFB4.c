/* sub_600DAFB4
 * address: 0x600DAFB4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600DAFB4(_DWORD *a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *a1 = off_60BCBC50;
  a1[2049] = EffectWrapper_vtable;
  v2 = a1 + 2049;
  sub_60237560((int)(a1 + 2049));
  sead__IDisposer__dtor(v2);
  v3 = KoopalingBase__dtor((int)a1);
  operator_delete(v3);
}
