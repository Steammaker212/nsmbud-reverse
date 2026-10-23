/* sub_6060BAA4
 * address: 0x6060BAA4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6060BAA4(int a1)
{
  *(_DWORD *)a1 = off_60C0F844;
  ShapedCollider_dtor((ColliderBase *)(a1 + 7816));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7160));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6504));
  ColliderBase_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
