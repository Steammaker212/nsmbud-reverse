/* unititled_ref
 * address: 0x60973B00   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall unititled_ref(_DWORD *a1)
{
  *a1 = &off_60C5F3BC;
  a1[1] = &sead__SafeStringBase__vtable;
  a1[2] = "unititled";
  memset(a1 + 3, 0, 56);
  return a1;
}
