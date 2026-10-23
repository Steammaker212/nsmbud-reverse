/* sub_6002160C
 * address: 0x6002160C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6002160C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BC1440;
  a1[67] = EffectWrapper_vtable;
  v2 = a1 + 67;
  sub_60237560((int)(a1 + 67));
  sead__IDisposer__dtor(v2);
  a1[37] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 37));
  sead__IDisposer__dtor(a1 + 37);
  a1[7] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 7));
  sead__IDisposer__dtor(a1 + 7);
  operator_delete(a1);
}
