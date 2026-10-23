/* sub_60422384
 * address: 0x60422384   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60422384(_DWORD *a1)
{
  *a1 = off_60BFA048;
  sead__MethodTreeNode__detachAll((int)a1);
  return sead__IDisposer__dtor(a1);
}
