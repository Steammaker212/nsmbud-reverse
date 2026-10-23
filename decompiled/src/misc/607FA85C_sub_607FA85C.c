/* sub_607FA85C
 * address: 0x607FA85C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607FA85C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C27D5C;
  a1[37] = EffectWrapper_vtable;
  v2 = a1 + 37;
  sub_60237560((int)(a1 + 37));
  sead__IDisposer__dtor(v2);
  a1[11] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 11));
  sead__IDisposer__dtor(a1 + 11);
  return sead__IDisposer__dtor(a1);
}
