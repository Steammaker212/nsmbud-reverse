/* sub_601404E4
 * address: 0x601404E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601404E4(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BD32B4;
  CollisionMgr_dtor(a1 + 6472);
  *(_DWORD *)a1 = off_60BD2120;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6132));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
