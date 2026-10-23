/* sub_6061EFAC
 * address: 0x6061EFAC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6061EFAC(int a1)
{
  *(_DWORD *)a1 = off_60C10F84;
  ShapedCollider_dtor((ColliderBase *)(a1 + 656));
  return StageActor__dtor((Actor *)a1);
}
