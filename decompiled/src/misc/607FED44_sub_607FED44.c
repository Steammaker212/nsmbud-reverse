/* sub_607FED44
 * address: 0x607FED44   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607FED44(_DWORD *a1)
{
  _DWORD *v1; // r0

  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
