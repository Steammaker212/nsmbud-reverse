/* sub_6064E6D0
 * address: 0x6064E6D0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064E6D0(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6064E730(a1);
  FIELD_U32(a1, 7292) = 1084227584;
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 164);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
  sub_6064E408(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
