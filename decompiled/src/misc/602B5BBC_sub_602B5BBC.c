/* sub_602B5BBC
 * address: 0x602B5BBC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B5BBC(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_602B5A20(a1);
  return 1;
}
