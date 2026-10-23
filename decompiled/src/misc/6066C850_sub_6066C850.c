/* sub_6066C850
 * address: 0x6066C850   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6066C850(int a1)
{
  *(_DWORD *)a1 = off_60C15494;
  ShapedCollider_dtor((ColliderBase *)(a1 + 2616));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1960));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1304));
  ShapedCollider_dtor((ColliderBase *)(a1 + 648));
  return StageActor__dtor((Actor *)a1);
}
