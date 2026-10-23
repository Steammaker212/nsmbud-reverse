/* sub_6067CE60
 * address: 0x6067CE60   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6067CE60(_DWORD *a1)
{
  _DWORD *v2; // r5

  a1[669] = &off_60C16870;
  a1[680] = EffectWrapper_vtable;
  v2 = a1 + 680;
  sub_60237560((int)(a1 + 680));
  sead__IDisposer__dtor(v2);
  a1[578] = &off_60C16870;
  a1[589] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 589));
  sead__IDisposer__dtor(a1 + 589);
  a1[487] = &off_60C16870;
  a1[498] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 498));
  sead__IDisposer__dtor(a1 + 498);
  a1[396] = &off_60C16870;
  a1[407] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 407));
  sead__IDisposer__dtor(a1 + 407);
  a1[305] = &off_60C16870;
  a1[316] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 316));
  sead__IDisposer__dtor(a1 + 316);
  a1[214] = &off_60C16870;
  a1[225] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 225));
  sead__IDisposer__dtor(a1 + 225);
  a1[123] = &off_60C16870;
  a1[134] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 134));
  sead__IDisposer__dtor(a1 + 134);
  a1[9] = off_60C16894;
  LightSource__dtor(a1 + 103);
  a1[9] = &off_60C16870;
  a1[20] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 20));
  sead__IDisposer__dtor(a1 + 20);
  return a1;
}
