/* sub_603FFBBC
 * address: 0x603FFBBC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FFBBC(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r0

  *a1 = off_60BF9834;
  v2 = a1 + 532;
  a1[721] = EffectWrapper_vtable;
  v3 = a1 + 721;
  sub_60237560((int)(a1 + 721));
  sead__IDisposer__dtor(v3);
  a1[695] = EffectWrapper_vtable;
  sub_60237560((int)(a1 + 695));
  sead__IDisposer__dtor(a1 + 695);
  sub_6045C0A0(v2);
  sub_6045C0A0(a1 + 431);
  sub_6045C0A0(a1 + 330);
  sub_6045C0A0(a1 + 229);
  sub_6045C0A0(a1 + 128);
  sub_60026BFC(a1 + 14);
  v4 = sead__IDisposer__dtor(a1);
  operator_delete(v4);
}
