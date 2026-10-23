/* sub_6046C164
 * address: 0x6046C164   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046C164(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  P_body_ref(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_60461904(a1);
  sub_604615A4(a1);
  return 1;
}
