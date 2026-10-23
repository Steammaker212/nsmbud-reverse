/* sub_6069A734
 * address: 0x6069A734   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069A734(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6069A76C(a1);
  sub_6069A5B0((_DWORD *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
