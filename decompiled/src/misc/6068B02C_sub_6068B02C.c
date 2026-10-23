/* sub_6068B02C
 * address: 0x6068B02C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6068B02C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C17448;
  sub_609175E4(a1 + 90);
  sub_609175E4(a1 + 22);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
