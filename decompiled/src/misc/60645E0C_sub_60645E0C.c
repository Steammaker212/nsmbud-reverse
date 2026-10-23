/* sub_60645E0C
 * address: 0x60645E0C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60645E0C(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C13770;
  ShapedCollider_dtor((ColliderBase *)(a1 + 9744));
  ShapedCollider_dtor((ColliderBase *)(a1 + 9088));
  ShapedCollider_dtor((ColliderBase *)(a1 + 8432));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7776));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7120));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6464));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
