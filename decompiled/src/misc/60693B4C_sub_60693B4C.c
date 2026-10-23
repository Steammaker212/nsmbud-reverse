/* sub_60693B4C
 * address: 0x60693B4C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60693B4C(int a1)
{
  FIELD_U32(a1, 1888) += 0x1000000;
  sub_6069455C(a1 + 644);
  ShapedCollider_execute((ColliderBase *)(a1 + 1896));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
