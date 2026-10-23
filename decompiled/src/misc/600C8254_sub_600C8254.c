/* sub_600C8254
 * address: 0x600C8254   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C8254(int a1)
{
  sub_600C86F0();
  FIELD_U32(a1, 6220) = 0;
  FIELD_U32(a1, 6216) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6244), (StateBase *)&dword_60C83F80);
  FIELD_U32(a1, 6128) = 0;
  return 6128;
}
