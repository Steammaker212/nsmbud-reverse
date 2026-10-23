/* sub_60654F3C
 * address: 0x60654F3C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60654F3C(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C14290;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6884));
  *(_DWORD *)a1 = off_60C14194;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
