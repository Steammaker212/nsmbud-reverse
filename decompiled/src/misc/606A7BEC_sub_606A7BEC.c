/* sub_606A7BEC
 * address: 0x606A7BEC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606A7BEC(int a1)
{
  *(_DWORD *)a1 = off_60C19CF4;
  ShapedCollider_dtor((ColliderBase *)(a1 + 1104));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 656));
  return StageActor__dtor((Actor *)a1);
}
