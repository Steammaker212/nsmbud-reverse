/* sub_600F45C4
 * address: 0x600F45C4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600F45C4(_DWORD *a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *a1 = off_60BCE3A4;
  v2 = (ActiveCollider *)(a1 + 2030);
  a1[2137] = EffectWrapper_vtable;
  v3 = a1 + 2137;
  sub_60237560((int)(a1 + 2137));
  sead__IDisposer__dtor(v3);
  a1[2111] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2111));
  sead__IDisposer__dtor(a1 + 2111);
  ActiveCollider_dtor(v2);
  v4 = KoopalingBase__dtor((int)a1);
  operator_delete(v4);
}
