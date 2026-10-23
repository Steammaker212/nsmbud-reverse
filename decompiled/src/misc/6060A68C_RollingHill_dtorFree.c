/* RollingHill_dtorFree
 * address: 0x6060A68C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall RollingHill_dtorFree(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = RollingHill_vtable;
  ColliderBase_dtor((ColliderBase *)(a1 + 648));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
