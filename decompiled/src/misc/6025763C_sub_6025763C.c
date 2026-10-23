/* sub_6025763C
 * address: 0x6025763C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6025763C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BDAB98;
  a1[19] = EffectWrapper_vtable;
  v2 = a1 + 19;
  sub_60237560((int)(a1 + 19));
  sead__IDisposer__dtor(v2);
  return a1;
}
