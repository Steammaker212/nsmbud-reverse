/* ColliderBase_dtorFree
 * address: 0x60160200   size: 16   group: collision
 * sym: # ColliderBase_dtorFree as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ColliderBase_dtorFree(ColliderBase *a1)
{
  _DWORD *v1; // r0

  v1 = ColliderBase_dtor(a1);
  operator_delete(v1);
}
