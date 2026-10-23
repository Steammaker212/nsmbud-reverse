/* sub_600D22F8
 * address: 0x600D22F8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D22F8(int a1)
{
  ColliderBase *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BCB52C;
  v2 = (ColliderBase *)(a1 + 6336);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7348));
  sub_60026BFC((_DWORD *)(a1 + 7008));
  ColliderBase_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
