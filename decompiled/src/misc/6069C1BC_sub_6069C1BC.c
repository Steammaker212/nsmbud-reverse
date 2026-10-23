/* sub_6069C1BC
 * address: 0x6069C1BC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6069C1BC(int a1)
{
  *(_DWORD *)a1 = off_60C182F0;
  ShapedCollider_dtor((ColliderBase *)(a1 + 688));
  return StageActor__dtor((Actor *)a1);
}
