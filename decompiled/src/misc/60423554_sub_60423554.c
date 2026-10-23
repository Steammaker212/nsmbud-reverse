/* sub_60423554
 * address: 0x60423554   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60423554(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFA048;
  sead__MethodTreeNode__detachAll((int)a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
