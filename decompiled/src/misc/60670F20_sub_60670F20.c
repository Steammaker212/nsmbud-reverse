/* sub_60670F20
 * address: 0x60670F20   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60670F20(int a1)
{
  *(_DWORD *)a1 = off_60C156D8;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8588));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8284));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7432));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6776));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
