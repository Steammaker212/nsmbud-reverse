/* sub_60079528
 * address: 0x60079528   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60079528(StageActor *a1)
{
  _DWORD *v2; // r0

  FIELD_U32(a1, 0x0).vtable = (int)off_60BC6E38;
  sub_60002B6C(a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
