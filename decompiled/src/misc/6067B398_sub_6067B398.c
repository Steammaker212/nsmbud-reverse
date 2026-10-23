/* sub_6067B398
 * address: 0x6067B398   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6067B398(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60C1662C;
  v2 = (ColliderBase *)(a1 + 6560);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7504));
  FIELD_U32(a1, 7484) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7484));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7484));
  ShapedCollider_dtor(v2);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6112));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
