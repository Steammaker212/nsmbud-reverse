/* sub_60587B7C
 * address: 0x60587B7C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60587B7C(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_605879E4((_DWORD *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
