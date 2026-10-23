/* sub_6070FDA4
 * address: 0x6070FDA4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070FDA4(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  StageActor__cullCheck((StageActor *)a1, 0);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6104) + 12));
  sub_6070FC1C((ModelWrapper **)a1);
  return 1;
}
