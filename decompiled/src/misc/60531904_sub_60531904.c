/* sub_60531904
 * address: 0x60531904   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60531904(int a1)
{
  *(_DWORD *)a1 = &off_60C00394;
  FIELD_U32(a1, 4) = &off_60C003A4;
  FIELD_U32(a1, 8) = &off_60C003C8;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), (StateBase *)&dword_60CAABCC);
  *(_DWORD *)a1 = &off_60C00384;
  sub_605319A0(a1 + 36);
  memset((void *)(a1 + 3976), 0, 0x21u);
  return a1;
}
