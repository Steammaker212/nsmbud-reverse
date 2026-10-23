/* sub_600794F8
 * address: 0x600794F8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600794F8(StageActor *a1)
{
  FIELD_U32(a1, 0x0).vtable = (int)off_60BC6E38;
  sub_60002B6C(a1);
  return sead__IDisposer__dtor(a1);
}
