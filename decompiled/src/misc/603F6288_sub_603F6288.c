/* sub_603F6288
 * address: 0x603F6288   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603F6288(StateMgr *a1)
{
  sub_603FDB68(a1);
  return StateMgr__changeState(a1 + 5, (StateBase *)&dword_60C99D94);
}
