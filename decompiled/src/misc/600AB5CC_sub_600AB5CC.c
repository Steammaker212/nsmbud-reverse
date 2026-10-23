/* sub_600AB5CC
 * address: 0x600AB5CC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600AB5CC(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BC860C;
  a1[2132] = EffectWrapper_vtable;
  v2 = a1 + 2132;
  sub_60237560((int)(a1 + 2132));
  sead__IDisposer__dtor(v2);
  a1[2106] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2106));
  sead__IDisposer__dtor(a1 + 2106);
  a1[2080] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 2080));
  sead__IDisposer__dtor(a1 + 2080);
  return KoopalingBase__dtor((int)a1);
}
