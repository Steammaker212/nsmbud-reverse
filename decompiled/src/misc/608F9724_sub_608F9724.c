/* sub_608F9724
 * address: 0x608F9724   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F9724(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5C9F0;
  a1[6] = &off_60C5CA64;
  sead__CriticalSection__dtor(a1 + 21);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
