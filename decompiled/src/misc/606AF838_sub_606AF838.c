/* sub_606AF838
 * address: 0x606AF838   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606AF838(int a1)
{
  *(_DWORD *)a1 = off_60C1ACA4;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 656));
  return StageActor__dtor((Actor *)a1);
}
