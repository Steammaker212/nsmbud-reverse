/* sub_605B8950
 * address: 0x605B8950   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605B8950(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60C09620;
  v2 = (ColliderBase *)(a1 + 6184);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6920));
  LightSource__dtor((_DWORD *)(a1 + 6848));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
