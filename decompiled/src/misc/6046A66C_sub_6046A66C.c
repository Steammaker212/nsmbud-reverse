/* sub_6046A66C
 * address: 0x6046A66C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046A66C(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6300));
  sub_60462018(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_60461904(a1);
  sub_604615A4(a1);
  return 1;
}
