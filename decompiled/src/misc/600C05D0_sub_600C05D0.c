/* sub_600C05D0
 * address: 0x600C05D0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600C05D0(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BCA218;
  v2 = (ColliderBase *)(a1 + 6104);
  ShapedCollider_dtor((ColliderBase *)(a1 + 6760));
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
