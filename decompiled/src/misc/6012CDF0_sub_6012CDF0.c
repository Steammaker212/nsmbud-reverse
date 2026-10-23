/* sub_6012CDF0
 * address: 0x6012CDF0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012CDF0(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  StageActor__cullCheck((StageActor *)a1, 0);
  ShapedCollider_execute(a1 + 6304);
  sub_6012CC68((ModelWrapper **)a1);
  return 1;
}
