/* sub_600AFF2C
 * address: 0x600AFF2C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600AFF2C(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BC8EBC;
  v2 = (ColliderBase *)(a1 + 6112);
  LightSource__dtor((_DWORD *)(a1 + 7488));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7116));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6768));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
