/* sub_602933C8
 * address: 0x602933C8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_602933C8(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BDE938;
  v2 = (ActiveCollider *)(a1 + 6860);
  nullsub_407(a1 + 7536);
  *(_DWORD *)a1 = off_60BE09E4;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7164));
  ActiveCollider_dtor(v2);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6360));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
