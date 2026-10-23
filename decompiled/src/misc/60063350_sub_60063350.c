/* sub_60063350
 * address: 0x60063350   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60063350(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BCB52C;
  v2 = (ColliderBase *)(a1 + 6336);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7348));
  sub_60026BFC((_DWORD *)(a1 + 7008));
  ColliderBase_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
