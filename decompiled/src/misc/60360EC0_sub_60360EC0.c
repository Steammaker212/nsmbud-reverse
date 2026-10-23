/* sub_60360EC0
 * address: 0x60360EC0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60360EC0(int a1)
{
  *(_DWORD *)a1 = off_60BEF63C;
  ShapedCollider_dtor((ColliderBase *)(a1 + 656));
  return StageActor__dtor((Actor *)a1);
}
