/* sub_605CBDB0
 * address: 0x605CBDB0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605CBDB0(int a1)
{
  ColliderBase *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C0A708;
  v2 = (ColliderBase *)(a1 + 6160);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6820));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
