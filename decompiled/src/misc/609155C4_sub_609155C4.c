/* sub_609155C4
 * address: 0x609155C4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609155C4(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5D528;
  v2 = a1 + 5;
  sub_608DEB70(a1 + 14);
  sead__CriticalSection__dtor(v2);
  operator_delete(a1);
}
