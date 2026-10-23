/* sub_606F2C4C
 * address: 0x606F2C4C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606F2C4C(_DWORD *a1)
{
  _DWORD *v2; // r5

  a1[234] = EffectWrapper_vtable;
  v2 = a1 + 234;
  sub_60237560((int)(a1 + 234));
  sead__IDisposer__dtor(v2);
  a1[208] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 208));
  sead__IDisposer__dtor(a1 + 208);
  a1[182] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 182));
  sead__IDisposer__dtor(a1 + 182);
  a1[156] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 156));
  sead__IDisposer__dtor(a1 + 156);
  a1[130] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 130));
  sead__IDisposer__dtor(a1 + 130);
  a1[104] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 104));
  sead__IDisposer__dtor(a1 + 104);
  a1[78] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 78));
  sead__IDisposer__dtor(a1 + 78);
  a1[52] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 52));
  sead__IDisposer__dtor(a1 + 52);
  a1[26] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 26));
  sead__IDisposer__dtor(a1 + 26);
  *a1 = EffectWrapper_vtable;
  sub_60237560((int)a1);
  return sead__IDisposer__dtor(a1);
}
