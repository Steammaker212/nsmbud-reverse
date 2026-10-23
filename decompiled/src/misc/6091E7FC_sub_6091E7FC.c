/* sub_6091E7FC
 * address: 0x6091E7FC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6091E7FC(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5D698;
  a1[4] = &off_60C5D6A8;
  sub_6091E758((int)a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
