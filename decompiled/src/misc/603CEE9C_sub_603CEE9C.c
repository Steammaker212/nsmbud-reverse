/* sub_603CEE9C
 * address: 0x603CEE9C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CEE9C(int a1)
{
  FIELD_U8(a1, 535) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98C40);
  return 1;
}
