/* sub_606116B4
 * address: 0x606116B4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606116B4(int a1)
{
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
  return StageActor__dtor((Actor *)a1);
}
