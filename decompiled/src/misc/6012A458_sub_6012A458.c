/* sub_6012A458
 * address: 0x6012A458   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6012A458(_DWORD *a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *a1 = off_60BD1120;
  a1[2112] = EffectWrapper_vtable;
  v2 = a1 + 2112;
  sub_60237560((int)(a1 + 2112));
  sead__IDisposer__dtor(v2);
  a1[2086] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2086));
  sead__IDisposer__dtor(a1 + 2086);
  a1[2060] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2060));
  sead__IDisposer__dtor(a1 + 2060);
  v3 = KoopalingBase__dtor((int)a1);
  operator_delete(v3);
}
