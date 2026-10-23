/* sub_6069B5A8
 * address: 0x6069B5A8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6069B5A8(int a1)
{
  *(_DWORD *)a1 = off_60C18264;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 752));
  return StageActor__dtor((Actor *)a1);
}
