/* sub_6004B408
 * address: 0x6004B408   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6004B408(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BC2D30;
  v2 = (_DWORD *)(a1 + 7008);
  nullsub_407(a1 + 11712);
  ColliderBase_dtor((ColliderBase *)(a1 + 10432));
  ColliderBase_dtor((ColliderBase *)(a1 + 10032));
  ShapedCollider_dtor((ColliderBase *)(a1 + 9376));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 8856));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 8336));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8028));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7724));
  *(_DWORD *)a1 = off_60BCB52C;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7348));
  sub_60026BFC(v2);
  ColliderBase_dtor((ColliderBase *)(a1 + 6336));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
