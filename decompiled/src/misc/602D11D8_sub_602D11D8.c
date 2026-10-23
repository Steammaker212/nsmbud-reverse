/* sub_602D11D8
 * address: 0x602D11D8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602D11D8(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BE62DC;
  a1[31] = EffectWrapper_vtable;
  v2 = a1 + 31;
  sub_60237560((int)(a1 + 31));
  sead__IDisposer__dtor(v2);
  operator_delete(a1);
}
