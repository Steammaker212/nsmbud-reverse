/* BoomBoomW1__dtor
 * address: 0x6004F090   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BoomBoomBase : 0x6004FA4C
// 
// Overridden by: None
int __fastcall BoomBoomW1__dtor(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BC3258;
  a1[2071] = EffectWrapper_vtable;
  v2 = a1 + 2071;
  sub_60237560((int)(a1 + 2071));
  sead__IDisposer__dtor(v2);
  a1[2045] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2045));
  sead__IDisposer__dtor(a1 + 2045);
  a1[2019] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2019));
  sead__IDisposer__dtor(a1 + 2019);
  a1[1993] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 1993));
  sead__IDisposer__dtor(a1 + 1993);
  return BoomBoomBase__dtor(a1);
}
