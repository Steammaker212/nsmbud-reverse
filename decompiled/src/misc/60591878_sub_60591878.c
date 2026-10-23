/* sub_60591878
 * address: 0x60591878   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60591878(int a1)
{
  StageActor__cullCheck((StageActor *)a1, 0);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6059170C(a1);
  return 1;
}
