/* sub_602E5C40
 * address: 0x602E5C40   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602E5C40(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BE6D90;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 15040));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 14736));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 14432));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 14128));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13824));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13520));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 13216));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12912));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12608));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12304));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12000));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11696));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11392));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 11088));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10784));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10480));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10176));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9872));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9568));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9264));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8960));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8656));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8352));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8048));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7744));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7440));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7136));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6832));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6528));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
