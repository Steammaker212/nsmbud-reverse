/* sub_6012D34C
 * address: 0x6012D34C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6012D34C(int a1)
{
  ColliderBase *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BD18FC;
  v2 = (ColliderBase *)(a1 + 6304);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7280));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6976));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
