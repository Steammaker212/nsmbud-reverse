/* EffectWrapper_dtor
 * address: 0x6002168C   size: 44   group: misc
 * sym: # EffectWrapper_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall EffectWrapper_dtor(_DWORD *a1)
{
  *a1 = EffectWrapper_vtable;
  sub_60237560((int)a1);
  return sead__IDisposer__dtor(a1);
}
