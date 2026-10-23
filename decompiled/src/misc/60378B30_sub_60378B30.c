/* sub_60378B30
 * address: 0x60378B30   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60378B30(int a1, int a2)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 28) = a2;
  FIELD_U32(a1, 32) = &off_60BF13E8;
  FIELD_U32(a1, 36) = &off_60BF13F8;
  FIELD_U32(a1, 40) = &off_60BF141C;
  FIELD_U32(a1, 44) = a1;
  FIELD_U32(a1, 48) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 52), (StateExecuter *)(a1 + 36), (StateBase *)&dword_60C96570);
  FIELD_U32(a1, 32) = &off_60BF13D8;
  return a1;
}
