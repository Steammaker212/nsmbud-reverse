/* sub_60710704
 * address: 0x60710704   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60710704(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 6808) = FIELD_U32(a1, 164);
  sub_6069E56C(a1 + 6104, (_DWORD *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
