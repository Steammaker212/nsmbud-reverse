/* sub_6055A178
 * address: 0x6055A178   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6055A178(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  *a1 = off_60C00E84;
  v2 = a1 + 10;
  a1[897] = EffectWrapper_vtable;
  v3 = a1 + 897;
  sub_60237560((int)(a1 + 897));
  sead__IDisposer__dtor(v3);
  sub_60475AE8(v2);
  operator_delete(a1);
}
