/* sub_6091228C
 * address: 0x6091228C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091228C(int a1)
{
  *(_DWORD *)a1 = &off_60C5D404;
  FIELD_U32(a1, 4) = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 8));
  return a1;
}
