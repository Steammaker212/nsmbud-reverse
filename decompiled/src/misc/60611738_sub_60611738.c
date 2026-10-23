/* sub_60611738
 * address: 0x60611738   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60611738(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C0FDD8;
  ShapedCollider_dtor((ColliderBase *)(a1 + 5768));
  ShapedCollider_dtor((ColliderBase *)(a1 + 5104));
  ShapedCollider_dtor((ColliderBase *)(a1 + 4440));
  ShapedCollider_dtor((ColliderBase *)(a1 + 3776));
  ShapedCollider_dtor((ColliderBase *)(a1 + 3112));
  ShapedCollider_dtor((ColliderBase *)(a1 + 2448));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1784));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1120));
  ColliderBase_dtor((ColliderBase *)(a1 + 648));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
