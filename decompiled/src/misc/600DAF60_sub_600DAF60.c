/* sub_600DAF60
 * address: 0x600DAF60   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600DAF60(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BCBC50;
  a1[2049] = EffectWrapper_vtable;
  v2 = a1 + 2049;
  sub_60237560((int)(a1 + 2049));
  sead__IDisposer__dtor(v2);
  return KoopalingBase__dtor((int)a1);
}
