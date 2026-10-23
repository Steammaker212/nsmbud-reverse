/* sub_603D2390
 * address: 0x603D2390   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D2390(int a1)
{
  FIELD_U32(a1, 6104) = 20 * FIELD_U8(a1, 23);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98DD8);
  return 1;
}
