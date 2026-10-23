/* sub_6028E288
 * address: 0x6028E288   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6028E288(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BF7364;
  v2 = a1 + 6368;
  ShapedCollider_dtor((ColliderBase *)(a1 + 17344));
  CollisionMgr_dtor(a1 + 11968);
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
