/* RollingHill_dtor
 * address: 0x6060A65C   size: 44   group: misc
 * sym: # RollingHill_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall RollingHill_dtor(int a1)
{
  *(_DWORD *)a1 = RollingHill_vtable;
  ColliderBase_dtor((ColliderBase *)(a1 + 648));
  return StageActor__dtor((Actor *)a1);
}
