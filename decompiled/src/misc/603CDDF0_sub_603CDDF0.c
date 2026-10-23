/* sub_603CDDF0
 * address: 0x603CDDF0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CDDF0(int a1)
{
  FIELD_U32(a1, 6100) = FIELD_U8(a1, 23);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98B98);
  return 1;
}
