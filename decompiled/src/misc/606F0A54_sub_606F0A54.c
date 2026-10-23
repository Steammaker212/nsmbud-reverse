/* sub_606F0A54
 * address: 0x606F0A54   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F0A54(int a1)
{
  StageActor__cullCheck((StageActor *)a1, 0);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6104));
  sub_606F07AC((ModelWrapper **)a1);
  return 1;
}
