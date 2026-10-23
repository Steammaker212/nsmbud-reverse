/* sub_602499B4
 * address: 0x602499B4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602499B4(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_60249794((int **)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
